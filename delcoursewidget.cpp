#include "delcoursewidget.h"
#include "ui_delcoursewidget.h"

delCourseWidget::delCourseWidget(QString &_username, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::delCourseWidget)
    , username(_username)
{
    ui->setupUi(this);
}

delCourseWidget::~delCourseWidget()
{
    delete ui;
}

void delCourseWidget::on_pushButton_2_clicked()
{
    emit backToWidget();
    ui->lineEdit->clear();
    this->hide();
}


void delCourseWidget::on_pushButton_clicked()
{
    QString id = ui->lineEdit->text();

    QStringList info = Course_info::findCourseInfo(id);
    if(info.empty()){
        QMessageBox::information(this, "Error", "该课程号不存在！");
        return ;
    }else if(info[2] != username){
        QMessageBox::information(this, "Error", "该课程不是由您开设的！");
        return ;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "删除", "确定删除该课程？",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QMessageBox::information(this, "删除", "删除成功！");
        Course_info::deleteCourseInfo(id);
        ui->lineEdit->clear();
        emit backToWidget();
        this->hide();
    }
}
