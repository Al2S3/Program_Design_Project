#ifndef COURSE_INFO_H
#define COURSE_INFO_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QVector>

class Course_info
{
public:
    //写入课程
    static bool writeCourseInfo(const QString &courseId, const QString &courseName, const QString &courseTeacher, const QString &courseType, const QString &courseTime, const QString &courseIntro);
    //删除课程
    static bool deleteCourseInfo(const QString &courseId);
    //查找课程
    static QStringList findCourseInfo(const QString &courseId);
    static QStringList _findCourseInfo(const QString &courseId, const QString &FilePath);
    //确认课程是否在课程文件中
    static bool checkCourseInfo(const QString &courseId, const QString &FilePath);
    //选入课程
    static bool chooseCourseInfo(const QString &courseId, QString FilePath);
    //取消选择课程
    static bool unchooseCourseInfo(const QString &courseId, QString FilePath);
    //时间有无冲突
    static bool conflict(const QString &courseId, QString FilePath);
    //查时间
    static QVector<QString> get(const QString &courseId);
    //查看prefer情况
    static QVector<bool> get_time(QString courseId);
    static QVector<bool> get_day(QString courseId);

private:
    //储存课程信息的文件路径
    static const QString filePath;
};


#endif // COURSE_INFO_H
