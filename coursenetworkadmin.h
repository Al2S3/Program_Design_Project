#ifndef COURSENETWORKADMIN_H
#define COURSENETWORKADMIN_H

#include <QWidget>
#include <course_info.h>
#include <QWidget>
#include <QMessageBox>
#include "courseAllocation.h"

namespace Ui {
class CourseNetworkAdmin;
}

class CourseNetworkAdmin : public QWidget
{
    Q_OBJECT

public:
    explicit CourseNetworkAdmin(QWidget *parent = nullptr);
    ~CourseNetworkAdmin();
    void updateCourseInfo();

signals:
    void showMainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CourseNetworkAdmin *ui;
};

#endif // COURSENETWORKADMIN_H
