#include "addcoursewidget.h"
#include "ui_addcoursewidget.h"
#include <coursenetworkteacher.h>
#include <course_info.h>

addCourseWidget::addCourseWidget(QString &_username, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addCourseWidget)
    , pre(new prefer())
    , username(_username)
{
    ui->setupUi(this);
    ui->courseTypeEdit->addItem("专业课");
    ui->courseTypeEdit->addItem("通识课");
    ui->courseTypeEdit->addItem("体育课");
}

addCourseWidget::~addCourseWidget()
{
    delete ui;
}

void addCourseWidget::on_addConfirmButton_clicked()
{
    QString id = ui->courseIdEdit->text();
    QString name = ui->courseNameEdit->text();
    QString teacher = username;
    QString type = ui->courseTypeEdit->currentText();
    QString time = ui->courseTimeEdit->text();
    QString intro = ui->courseIntroEdit->toPlainText();

    if (id.isEmpty() || name.isEmpty() || type.isEmpty() || time.isEmpty() || intro.isEmpty()) {
        QMessageBox::warning(this, "Error", "还有信息未填完！");
        return;
    }

    if(Course_info::writeCourseInfo(id,name,teacher,type,time,intro)){
        QMessageBox::information(this, "Success", "成功录入课程！");

        ui->courseIdEdit->clear();
        ui->courseNameEdit->clear();
        ui->courseTypeEdit->setCurrentIndex(0);
        ui->courseTimeEdit->clear();
        ui->courseIntroEdit->clear();

        emit backToWidget();
        this->hide();
    }else{
        QMessageBox::information(this, "Error", "该课程号已存在！");
    }
}


void addCourseWidget::on_returnButton_clicked()
{
    ui->courseIdEdit->clear();
    ui->courseNameEdit->clear();
    ui->courseTypeEdit->setCurrentIndex(0);
    ui->courseTimeEdit->clear();
    ui->courseIntroEdit->clear();

    emit backToWidget();
    this->hide();
}


void addCourseWidget::on_preferButton_clicked()
{
    if(ui->courseIdEdit->text().isEmpty()){
        QMessageBox::information(this, "Error", "请先填写课程号！");
        return;
    }
    pre->setId(ui->courseIdEdit->text());
    pre->show();
}

