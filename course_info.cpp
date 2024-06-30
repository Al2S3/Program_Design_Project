#include "course_info.h"

const QString Course_info::filePath = "course_info.txt";

// 写入课程信息
bool Course_info::writeCourseInfo(const QString &courseId, const QString &courseName, const QString &courseTeacher, const QString &courseType, const QString &courseTime, const QString &courseIntro)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open course_info file");
        return false;
    }

    QTextStream in(&file);
    QString line;

    // 检查用户名是否已存在
    while (!in.atEnd()) {
        line = in.readLine();
        QStringList parts = line.split(",");
        if (parts.size() == 6 && parts[0] == courseId) {
            QMessageBox::warning(nullptr, "Error", "Course_ID already exists");
            file.close();
            return false;
        }
    }

    file.seek(file.size()); // 移动到文件末尾
    QTextStream out(&file);
    out << courseId << "," << courseName << "," << courseTeacher << "," << courseType << "," << courseTime << "," << courseIntro << "\n";

    file.close();
    return true;
}

// 删除课程信息
bool Course_info::deleteCourseInfo(const QString &courseId)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open course_info file");
        return false;
    }

    QTextStream in(&file);
    QStringList lines;
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.split(",")[0] == courseId) {
            continue;
        }
        lines << line;
    }

    file.close();

    QFile File(filePath);
    if (!File.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open temp_course_info file");
        return false;
    }

    QTextStream out(&File);
    for (const QString &line : lines) {
        out << line << "\n";
    }

    File.close();

    return true;
}

//查找课程信息
QStringList Course_info::findCourseInfo(const QString &courseId){

    QFile file(filePath);
    file.open(QIODevice::ReadWrite | QIODevice::Text);

    QTextStream in(&file);
    QStringList lines;
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.split(",")[0] == courseId) {
            lines = line.split(",");
        }
    }
    return lines;
}
//查找课程信息2
QStringList Course_info::_findCourseInfo(const QString &courseId, const QString &FilePath){

    QFile file(FilePath);
    file.open(QIODevice::ReadWrite | QIODevice::Text);

    QTextStream in(&file);
    QStringList lines;
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.split(",")[0] == courseId) {
            lines = line.split(",");
        }
    }
    return lines;
}

bool Course_info::checkCourseInfo(const QString &courseId, const QString &FilePath){
    QFile file(FilePath);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open student_course file");
        return true;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.split(",")[0] == courseId) {
            return true;
        }
    }

    file.close();

    return false;
}

bool Course_info::chooseCourseInfo(const QString &courseId, QString FilePath){
    QFile file(FilePath);
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open student_course file");
        return false;
    }

    QStringList line = findCourseInfo(courseId);

    QTextStream out(&file);
    out << line[0] << "," << line[1] << "," << line[2] << "," << line[3] << "," << line[4] << "," << line[5] << "\n";

    file.close();
    return true;
}

bool Course_info::unchooseCourseInfo(const QString &courseId, QString FilePath){
    QFile file(FilePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open student_course file");
        return false;
    }

    QTextStream in(&file);
    QStringList lines;
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.split(",")[0] == courseId) {
            continue;
        }
        lines << line;
    }

    file.close();

    QFile File(FilePath);
    if (!File.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Unable to open student_course file");
        return false;
    }

    QTextStream out(&File);
    for (const QString &line : lines) {
        out << line << "\n";
    }

    File.close();

    return true;
}

QVector<QString> Course_info::get(const QString &courseId){
    QFile file("alloc.txt");
    file.open(QIODevice::ReadWrite | QIODevice::Text);

    QTextStream in(&file);
    QStringList lines;
    QVector<QString> ans;
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.split(",")[0] == courseId) {
            ans.push_back(line.split(",")[2]);
            ans.push_back(line.split(",")[3]);
            return ans;
        }
    }
}

bool Course_info::conflict(const QString &courseId, QString FilePath){

    QVector<QString> mem = get(courseId);

    QFile File(FilePath);
    QTextStream in(&File);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QString id = line.split(",")[0];
        if(id != courseId && get(id) == mem){
            return true;
        }
    }

    File.close();

    return false;
}

QVector<bool> Course_info::get_day(QString courseId){
    QFile file("prefer.txt");
    file.open(QIODevice::ReadWrite | QIODevice::Text);

    QVector<bool> ans(5,false);
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.split(",")[0] == courseId) {
            QString tmp = line.split(",")[1];
            for(int i=0;i<5;++i){
                if(tmp[i] == '1') ans[i] = true;
                else ans[i] = false;
            }
            return ans;
        }
    }
    return ans;
}

QVector<bool> Course_info::get_time(QString courseId){
    QFile file("prefer.txt");
    file.open(QIODevice::ReadWrite | QIODevice::Text);

    QVector<bool> ans(12,false);
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.split(",")[0] == courseId) {
            QString tmp = line.split(",")[2];
            for(int i=0;i<12;++i){
                if(tmp[i] == '1') ans[i] = true;
                else ans[i] = false;
            }
            return ans;
        }
    }
    return ans;
}
