#ifndef COURSEALLOCATION_H
#define COURSEALLOCATION_H

#include <vector>
#include <string>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "course_info.h"

class Course {
public:
    int id;
    std::string name;
    int hour;
    int school;
    int grade;
    bool is_allocated;
    std::vector<std::vector<int>> allocated_time;
    std::vector<bool> prefer_day;
    std::vector<bool> prefer_period;
    int category;
    int num;
    std::vector<int> teacher_list;

    Course(int id, const std::string& name, int hour, int school, int grade, int category, int num, const std::vector<int>& teacher_list);
    static void allocate();
};

void allocateCourses(std::vector<Course> &courses);

#endif // COURSEALLOCATION_H
