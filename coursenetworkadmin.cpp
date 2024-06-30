#include "coursenetworkadmin.h"
#include "ui_coursenetworkadmin.h"
#include<QMessageBox>

CourseNetworkAdmin::CourseNetworkAdmin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CourseNetworkAdmin)
{
    ui->setupUi(this);
    //设置课程列表
    ui->course_info_table->setRowCount(0); // 初始行数为0，动态添加行
    ui->course_info_table->setColumnCount(3); // 每门课程有5个信息字段

    QStringList horizonalHeader;
    horizonalHeader << "课程编号" << "课程名称" << "分配的课程时间";
    ui->course_info_table->setHorizontalHeaderLabels(horizonalHeader);

    ui->course_info_table->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->course_info_table->setSelectionMode(QAbstractItemView::SingleSelection);

    updateCourseInfo();
}

CourseNetworkAdmin::~CourseNetworkAdmin()
{
    delete ui;
}

void CourseNetworkAdmin::updateCourseInfo(){

    ui->course_info_table->clearContents();
    ui->course_info_table->setRowCount(0);

    QFile file("alloc.txt");

    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&file);
    int row = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList courseInfo = line.split(",");

        ui->course_info_table->insertRow(row);

        for (int col = 0; col < 2; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(courseInfo.at(col));
            ui->course_info_table->setItem(row, col, item);
        }
        ui->course_info_table->setItem(row, 2, new QTableWidgetItem("星期"+courseInfo[2]+"第"+courseInfo[3]+"节课至第"+courseInfo[5]+"节课"));

        ++row;
    }

    file.close();

    //this->show();
    ui->course_info_table->show();
}


void CourseNetworkAdmin::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QMessageBox::information(this, "Logout", "You have been logged out.");
        this->close();
        emit showMainWindow();
    }
}


void CourseNetworkAdmin::on_pushButton_2_clicked()
{
    Course::allocate();
    updateCourseInfo();
    QMessageBox::information(this, "Success", "排课成功！");
}

