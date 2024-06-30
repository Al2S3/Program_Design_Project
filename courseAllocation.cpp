#include "courseAllocation.h"
#include "C:/src/ortools/include/ortools/sat/cp_model.h"
#include <ortools/linear_solver/linear_solver.h>
#include <iostream>


Course::Course(int id, const std::string& name, int hour, int school, int grade, int category, int num, const std::vector<int>& teacher_list)
    : id(id), name(name), hour(hour), school(school), grade(grade), is_allocated(false), category(category), num(num), teacher_list(teacher_list) {
    allocated_time.resize(hour);
    prefer_day.resize(7, true);
    prefer_period.resize(12, true);
}

using namespace operations_research;

void allocateCourses(std::vector<Course>& courses) {
    sat::CpModelBuilder cp_model;

    // Constants for days and periods
    const int days = 5;
    const int periods_per_day_2_hour = 5; // 瀵逛簬2灏忔椂鐨勮绋嬶紝姣忓ぉ鏈?涓椂闂村潡
    const int periods_per_day_3_hour = 2;
    const int weight_std_conflict = 1;
    const int weight_prefer_day = 5;
    const int weight_prefer_period = 5;

    // Valid blocks for 2-period and 3-period classes
    std::vector<std::pair<int, int>> two_period_blocks = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {10, 11}};
    std::vector<std::tuple<int, int, int>> three_period_blocks = {{7, 8, 9}, {10, 11, 12}};

    // Variables for course allocations
    std::vector<sat::IntVar> allocation_variables;
    for (int i = 0; i < courses.size(); ++i) {
        int num_choices = courses[i].hour == 2 ? 25 : 10;
        const Domain domain(0,num_choices-1);
        allocation_variables.push_back(cp_model.NewIntVar(domain).WithName("alloc_" + std::to_string(i)));
    }

    // Conflict variables
    std::vector<std::vector<sat::BoolVar>> conflict_variables(courses.size());
    for (int i = 0; i < courses.size(); ++i) {
        conflict_variables[i].resize(courses.size());
        for (int j = i + 1; j < courses.size(); ++j) {
            conflict_variables[i][j] = cp_model.NewBoolVar().WithName("conflict_" + std::to_string(i) + "_" + std::to_string(j));
        }
    }

    // Create conflict variables and constraints to minimize conflicts
    for (int i = 0; i < courses.size(); ++i) {
        for (int j = i + 1; j < courses.size(); ++j) {
            if (courses[i].hour == courses[j].hour) {
                // 濡傛灉涓や釜璇剧▼鐨勬椂闀跨浉鍚岋紝閭ｄ箞瀹冧滑鐨勫啿绐佸綋涓斾粎褰撳畠浠殑鍒嗛厤鍙橀噺鐩哥瓑
                //娉ㄦ剰锛氳繖閲屽簲璇ュ疄鐜癱onflict_variables[i][j] = (allocation_variables[i] == allocation_variables[j])鐨勯€昏緫
                cp_model.AddEquality(allocation_variables[i], allocation_variables[j]).OnlyEnforceIf(conflict_variables[i][j]);
                cp_model.AddNotEqual(allocation_variables[i], allocation_variables[j]).OnlyEnforceIf(Not(conflict_variables[i][j]));
            }
        }
    }

    sat::LinearExpr objective;

    // Day preference
    std::vector<std::vector<sat::BoolVar>> prefer_day_variables(courses.size(), std::vector<sat::BoolVar>(7));
    for (int i = 0; i < courses.size(); ++i) {
        prefer_day_variables[i].resize(7);
        for (int j = 0; j < 7; ++j) {
            prefer_day_variables[i][j] = cp_model.NewBoolVar().WithName("prefer_day_" + std::to_string(i) + "_" + std::to_string(j));
            const int day_length = (courses[i].hour == 2 ? 5 : 2);
            if (courses[i].prefer_day[j]) {
                for (int k = 0; k < day_length; ++k) {
                    const int index = day_length * j + k;
                    cp_model.AddEquality(allocation_variables[i], sat::LinearExpr(index)).OnlyEnforceIf(prefer_day_variables[i][j]);
                }
                objective.AddTerm(prefer_day_variables[i][j], weight_prefer_day);
            } else {
                for (int k = 0; k < day_length; ++k) {
                    const int index = day_length * j + k;
                    cp_model.AddNotEqual(allocation_variables[i], index).OnlyEnforceIf(prefer_day_variables[i][j].Not());
                    objective.AddTerm(prefer_day_variables[i][j], weight_prefer_day);
                }
            }
        }
    }

    // Period preference

    std::vector<std::vector<sat::BoolVar>> prefer_period_variables(courses.size(), std::vector<sat::BoolVar>(12));
    for (int i = 0; i < courses.size(); ++i) {
        for (int j = 0; j < 12; ++j) {
            prefer_period_variables[i][j] = cp_model.NewBoolVar().WithName("prefer_period_" + std::to_string(i) + "_" + std::to_string(j));
            if (courses[i].prefer_period[j]) {
                for (int d = 0; d < days; ++d) {
                    const int index = (courses[i].hour == 2 ? (d * 5 + j / 2) : (d * 2 + j / 6));
                    if (courses[i].hour == 2 && (j % 2 == 0)) { // 2-hour classes, valid start periods: 0, 2, 4, 6, 8
                        cp_model.AddEquality(allocation_variables[i], index).OnlyEnforceIf(prefer_period_variables[i][j]);
                    } else if (courses[i].hour == 3 && (j == 6 || j == 9)) { // 3-hour classes, valid start periods: 6, 9
                        cp_model.AddEquality(allocation_variables[i], index).OnlyEnforceIf(prefer_period_variables[i][j]);
                    }
                }
                objective.AddTerm(prefer_period_variables[i][j], weight_prefer_period);
            } else {
                for (int d = 0; d < days; ++d) {
                    const int index = (courses[i].hour == 2 ? (d * 5 + j / 2) : (d * 2 + j / 6));
                    if (courses[i].hour == 2 && (j % 2 == 0)) {
                        cp_model.AddNotEqual(allocation_variables[i], index).OnlyEnforceIf(prefer_period_variables[i][j].Not());
                    } else if (courses[i].hour == 3 && (j == 6 || j == 9)) {
                        cp_model.AddNotEqual(allocation_variables[i], index).OnlyEnforceIf(prefer_period_variables[i][j].Not());
                    }
                }
                objective.AddTerm(prefer_period_variables[i][j], weight_prefer_period);
            }
        }
    }


    for (int i = 0; i < courses.size(); ++i) {
        for (int j = i + 1; j < courses.size(); ++j) {
            objective.AddTerm(conflict_variables[i][j],weight_std_conflict);
        }
    }
    cp_model.Minimize(objective);

    // Solve the problem
    const sat::CpSolverResponse response = sat::Solve(cp_model.Build());

    if (response.status() != sat::CpSolverStatus::OPTIMAL && response.status() != sat::CpSolverStatus::FEASIBLE) {
        std::cerr << "The problem does not have an optimal solution!" << std::endl;
        return;
    }

    // Set allocated times for courses
    for (int i = 0; i < courses.size(); ++i) {
        courses[i].is_allocated = true;
        courses[i].allocated_time.clear();
        int choice = SolutionIntegerValue(response, allocation_variables[i]);
        int day = choice / (courses[i].hour == 2 ? periods_per_day_2_hour : periods_per_day_3_hour);
        int block_index = choice % (courses[i].hour == 2 ? periods_per_day_2_hour : periods_per_day_3_hour);

        if (courses[i].hour == 2) {
            const auto& block = two_period_blocks[block_index];
            courses[i].allocated_time.push_back({day + 1, block.first});
            courses[i].allocated_time.push_back({day + 1, block.second});
        } else {
            const auto& block = three_period_blocks[block_index];
            courses[i].allocated_time.push_back({day + 1, std::get<0>(block)});
            courses[i].allocated_time.push_back({day + 1, std::get<1>(block)});
            courses[i].allocated_time.push_back({day + 1, std::get<2>(block)});
        }
    }
}

void Course::allocate(){
    QFile file("course_info.txt");
    file.open(QIODevice::ReadWrite | QIODevice::Text);

    QTextStream in(&file);
    QStringList lines;
    std::vector<Course> mem;
    while (!in.atEnd()) {
        QString line = in.readLine();
        lines = line.split(",");
        Course tmp(lines[0].toInt(),lines[1].toStdString(),lines[4].toInt(),0,1,lines[3].toInt(),1,std::vector<int>(1,0));
        mem.push_back(tmp);
        QVector<bool> day = Course_info::get_day(lines[0]);
        QVector<bool> time = Course_info::get_time(lines[0]);
        for(int i=0;i<5;++i) (tmp.prefer_day)[i] = day[i];
        for(int i=0;i<12;++i) (tmp.prefer_period)[i] = time[i];
    }

    file.close();

    allocateCourses(mem);

    QFile File("alloc.txt");
    File.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate);

    QTextStream out(&File);
    while(!mem.empty()){
        Course tmp = mem.back();
        mem.pop_back();
        QString id = QString::number(tmp.id);
        QString name = QString::fromStdString(tmp.name);
        QString day1 = QString::number(tmp.allocated_time[0][0]), time1 = QString::number(tmp.allocated_time[0][1])
            , day2 = QString::number(tmp.allocated_time[1][0]), time2 = QString::number(tmp.allocated_time[1][1]);
        out<<id<<","<<name<<","<<day1<<","<<time1<<","<<day2<<","<<time2<<"\n";
    }
    File.close();
}
