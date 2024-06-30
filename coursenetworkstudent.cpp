#include "coursenetworkstudent.h"
#include "ui_coursenetworkstudent.h"

CourseNetworkStudent::CourseNetworkStudent(QString _username, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CourseNetworkStudent)
    , courseBrowser(new courseBrowserWidget(_username + ".txt"))
    , curri(new curriculum(_username+".txt"))
    , username(_username)
    , filePath(username + ".txt")
    , sign(0)
{
    ui->setupUi(this);
    //设置类别选择Box
    ui->typeBox->addItem("全部");
    ui->typeBox->addItem("专业课");
    ui->typeBox->addItem("通识课");
    ui->typeBox->addItem("体育课");
    //设置课程列表
    ui->course_info_table->setRowCount(0); // 初始行数为0，动态添加行
    ui->course_info_table->setColumnCount(6); // 每门课程有5个信息字段

    QStringList horizonalHeader;
    horizonalHeader << "课程编号" << "课程名称" << "课程教师" << "课程类型" << "课程时长" << "课程介绍";
    ui->course_info_table->setHorizontalHeaderLabels(horizonalHeader);

    ui->course_info_table->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->course_info_table->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->unselectedButton->hide();

    updateCourseInfo();

    connect(courseBrowser, &courseBrowserWidget::backToWidget, this, &CourseNetworkStudent::updateCourseInfo);
    connect(ui->course_info_table, &QTableWidget::itemDoubleClicked,
            [this]() {
                int currentRow = ui->course_info_table->currentRow();
                // 创建并显示新界面
                this->courseBrowser->change(ui->course_info_table->item(currentRow,0)->text(), sign, "student");
                //this->hide();
                this->courseBrowser->show();
            });
}

CourseNetworkStudent::~CourseNetworkStudent()
{
    delete ui;
}

void CourseNetworkStudent::updateCourseInfo(){

    QString id = ui->IdEdit->text();
    QString name = ui->nameEdit->text();
    QString teacher = ui->teacherEdit->text();
    QString type = ui->typeBox->currentText();
    if(type == "全部") type = "";

    ui->course_info_table->clearContents();
    ui->course_info_table->setRowCount(0);

    QString fileName;
    if(sign == 0) fileName = "course_info.txt";
    else fileName = filePath;

    QFile file(fileName);

    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&file);
    int row = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList courseInfo = line.split(",");

        if(sign == 0) if(Course_info::checkCourseInfo(courseInfo[0], filePath)) continue;
        if(!id.isEmpty() && id != courseInfo[0]) continue;
        if(!name.isEmpty() && name != courseInfo[1]) continue;
        if(!teacher.isEmpty() && teacher !=courseInfo[2]) continue;
        if(!type.isEmpty() && type !=courseInfo[3]) continue;

        ui->course_info_table->insertRow(row);

        for (int col = 0; col < 6; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(courseInfo.at(col));
            ui->course_info_table->setItem(row, col, item);
        }

        ++row;
    }

    file.close();

    this->show();
    ui->course_info_table->show();
}


void CourseNetworkStudent::on_logoutButton_clicked()
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


void CourseNetworkStudent::on_searchButton_clicked()
{

    QMessageBox::information(this, "Success", "检索成功！");
    updateCourseInfo();

}


void CourseNetworkStudent::on_restoreButton_clicked()
{
    ui->IdEdit->clear();
    ui->nameEdit->clear();
    ui->teacherEdit->clear();
    ui->typeBox->setCurrentIndex(0);

    QMessageBox::information(this, "Success", "还原成功！");
    updateCourseInfo();
}

void CourseNetworkStudent::on_unselectedButton_clicked()
{
    ui->IdEdit->clear();
    ui->nameEdit->clear();
    ui->teacherEdit->clear();
    ui->typeBox->setCurrentIndex(0);

    ui->label->setText("课程列表");
    ui->unselectedButton->hide();
    ui->selectedButton->show();
    QMessageBox::information(this, "Success", "可选课程列表！");
    sign = 0;
    updateCourseInfo();
}


void CourseNetworkStudent::on_selectedButton_clicked()
{
    ui->IdEdit->clear();
    ui->nameEdit->clear();
    ui->teacherEdit->clear();
    ui->typeBox->setCurrentIndex(0);

    ui->label->setText("已选课程列表");
    ui->selectedButton->hide();
    ui->unselectedButton->show();
    QMessageBox::information(this, "Success", "已选课程列表！");
    sign = 1;
    updateCourseInfo();
}


void CourseNetworkStudent::on_pushButton_clicked()
{
    this->curri->updateCourseInfo();
    this->curri->show();
}

