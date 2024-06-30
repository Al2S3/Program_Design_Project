#ifndef COURSENETWORKTEACHER_H
#define COURSENETWORKTEACHER_H

#include "addcoursewidget.h"
#include "coursebrowserwidget.h"
#include "delcoursewidget.h"
#include <course_info.h>
#include <QWidget>
#include <QMessageBox>


namespace Ui {
class CourseNetworkTeacher;
}

class CourseNetworkTeacher : public QWidget
{
    Q_OBJECT

public:
    explicit CourseNetworkTeacher(QString &username, QWidget *parent = nullptr);
    ~CourseNetworkTeacher();

signals:
    void showMainWindow();

private slots:
    void on_pushButton_clicked();

    void on_addCourseButton_clicked();

    void on_delCourseButton_clicked();

private:
    Ui::CourseNetworkTeacher *ui;
    addCourseWidget *AddCourseWidget;
    courseBrowserWidget *courseBrowser;
    delCourseWidget *delCourse;

    QString username;
    //加载课程信息至table上
    void updateCourseInfo();
};

#endif // COURSENETWORKTEACHER_H
