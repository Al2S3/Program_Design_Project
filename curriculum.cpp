#include "curriculum.h"
#include "ui_curriculum.h"

curriculum::curriculum(QString _FilePath, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::curriculum)
    , FilePath(_FilePath)
{
    ui->setupUi(this);

    //设置课程列表
    ui->course_info_table->setRowCount(12); // 初始行数为0，动态添加行
    ui->course_info_table->setColumnCount(5); // 每门课程有5个信息字段

    QStringList horizonalHeader;
    horizonalHeader << "星期一" << "星期二" << "星期三" << "星期四" << "星期五";
    ui->course_info_table->setHorizontalHeaderLabels(horizonalHeader);
}

void curriculum::updateCourseInfo(){
    QFile file(FilePath);

    file.open(QIODevice::ReadWrite | QIODevice::Text);

    QTextStream in(&file);
    int row, col;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList courseInfo = line.split(",");

        QVector<QString> tmp = Course_info::get(courseInfo[0]);

        col = tmp[0].toInt();
        row = tmp[1].toInt();

        QTableWidgetItem *item1 = new QTableWidgetItem(courseInfo[1]);
        QTableWidgetItem *item2 = new QTableWidgetItem(courseInfo[1]);
        ui->course_info_table->setItem(row-1, col-1, item1);
        ui->course_info_table->setItem(row, col-1, item2);
    }

    file.close();

    ui->course_info_table->show();
}

curriculum::~curriculum()
{
    delete ui;
}

void curriculum::on_pushButton_clicked()
{
    this->hide();
}

