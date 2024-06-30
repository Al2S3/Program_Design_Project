#include "logWindow.h"
#include "ui_logWindow.h"
#include<QMessageBox>
#include<userauth.h>
#include<coursenetworkstudent.h>
#include<coursenetworkteacher.h>
#include<coursenetworkadmin.h>
#include<widget.h>

MyLog::MyLog(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyLog)
{
    ui->setupUi(this);
}

MyLog::~MyLog()
{
    delete ui;
}

void MyLog::on_confirmButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Username or password cannot be empty");
        return;
    }
    QString role;
    if (UserAuth::loginUser(username, password, role)) {
        QMessageBox::information(this, "Success", "Login successful");
        // 清空用户名和密码输入框
        ui->usernameLineEdit->clear();
        ui->passwordLineEdit->clear();
        // 根据角色创建相应的窗口
        if (role == "student") {
            CourseNetworkStudent *courseNetwork = new CourseNetworkStudent(username);
            courseNetwork->show();
            connect(courseNetwork, &CourseNetworkStudent::showMainWindow, this, &MyLog::backToMain);
        } else if (role == "teacher") {
            // 创建教师窗口（假设您有一个 CourseNetworkTeacher 类）
            CourseNetworkTeacher *courseNetwork = new CourseNetworkTeacher(username);
            courseNetwork->show();
            connect(courseNetwork, &CourseNetworkTeacher::showMainWindow, this, &MyLog::backToMain);
        } else if (role == "administrator") {
            // 创建管理员窗口（假设您有一个 CourseNetworkAdmin 类）
            CourseNetworkAdmin *courseNetwork = new CourseNetworkAdmin();
            courseNetwork->show();
            connect(courseNetwork, &CourseNetworkAdmin::showMainWindow, this, &MyLog::backToMain);
        }

        this->hide();
    }
    else {
        QMessageBox::warning(this, "Error", "Invalid username or password");
    }
}


void MyLog::on_backButton_clicked()
{
    emit backToMain();
    this->hide();
}

