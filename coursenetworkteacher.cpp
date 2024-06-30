#include "coursenetworkteacher.h"
#include "ui_coursenetworkteacher.h"

CourseNetworkTeacher::CourseNetworkTeacher(QString &_username, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CourseNetworkTeacher)
    , AddCourseWidget(new addCourseWidget(_username))
    , courseBrowser(new courseBrowserWidget())
    , delCourse(new delCourseWidget(_username))
{
    ui->setupUi(this);
    username=_username;

    ui->course_info_table->setRowCount(0); // 初始行数为0，动态添加行
    ui->course_info_table->setColumnCount(5); // 每门课程有5个信息字段

    QStringList horizonalHeader;
    horizonalHeader << "课程编号" << "课程名称" << "课程类型" << "课程时长" << "课程介绍";
    ui->course_info_table->setHorizontalHeaderLabels(horizonalHeader);

    ui->course_info_table->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->course_info_table->setSelectionMode(QAbstractItemView::SingleSelection);

    updateCourseInfo();

    connect(AddCourseWidget, &addCourseWidget::backToWidget, this, &CourseNetworkTeacher::updateCourseInfo);
    connect(courseBrowser, &courseBrowserWidget::backToWidget, this, &CourseNetworkTeacher::updateCourseInfo);
    connect(delCourse, &delCourseWidget::backToWidget, this, &CourseNetworkTeacher::updateCourseInfo);

    // 连接itemDoubleClicked信号到槽函数
    connect(ui->course_info_table, &QTableWidget::itemDoubleClicked,
                     [this]() {
                         int currentRow = ui->course_info_table->currentRow();
                         // 创建并显示新界面
                         this->courseBrowser->change(ui->course_info_table->item(currentRow,0)->text(), -1, "teacher");
                         //this->hide();
                         this->courseBrowser->show();
                     });

}

CourseNetworkTeacher::~CourseNetworkTeacher()
{
    delete ui;
}

void CourseNetworkTeacher::updateCourseInfo(){

    ui->course_info_table->clearContents();
    ui->course_info_table->setRowCount(0);

    QFile file("course_info.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&file);
    int row = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList courseInfo = line.split(",");
        if(courseInfo[2]!=username) continue;

        ui->course_info_table->insertRow(row);

        int _col = 0;
        for (int col = 0; col < 5; ++col, ++_col) {
            if(_col == 2){
                --col;
                continue;
            }
            QTableWidgetItem *item = new QTableWidgetItem(courseInfo.at(_col));
            ui->course_info_table->setItem(row, col, item);
        }

        ++row;
    }

    file.close();

    this->show();
    ui->course_info_table->show();
}

void CourseNetworkTeacher::on_pushButton_clicked()
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

void CourseNetworkTeacher::on_addCourseButton_clicked()
{
    this->hide();
    AddCourseWidget->show();
}


void CourseNetworkTeacher::on_delCourseButton_clicked()
{
    this->hide();
    delCourse->show();
}

