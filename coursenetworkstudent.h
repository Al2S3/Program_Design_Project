#ifndef COURSENETWORKSTUDENT_H
#define COURSENETWORKSTUDENT_H

#include "coursebrowserwidget.h"
#include "curriculum.h"
#include <course_info.h>
#include <QWidget>
#include <QMessageBox>

namespace Ui {
class CourseNetworkStudent;
}

class CourseNetworkStudent : public QWidget
{
    Q_OBJECT

public:
    explicit CourseNetworkStudent(QString username, QWidget *parent = nullptr);
    ~CourseNetworkStudent();

signals:
    void showMainWindow();

private slots:
    void on_logoutButton_clicked();

    void on_searchButton_clicked();

    void on_restoreButton_clicked();

    void on_unselectedButton_clicked();

    void on_selectedButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::CourseNetworkStudent *ui;
    courseBrowserWidget *courseBrowser;
    curriculum *curri;

    QString username;
    void updateCourseInfo();

    QString filePath;
    //表示当前查看的课表，0为未选课，1为已选课
    int sign;

};

#endif // COURSENETWORKSTUDENT_H
