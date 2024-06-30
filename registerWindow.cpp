#include "registerWindow.h"
#include "ui_registerWindow.h"
#include<QMessageBox>
#include<userauth.h>

MyRegister::MyRegister(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyRegister)
{
    ui->setupUi(this);
}

MyRegister::~MyRegister()
{
    delete ui;
}

void MyRegister::on_registerButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();
    QString confirmPassword = ui->confirmPasswordLineEdit->text();

    if (username.isEmpty() || password.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields must be filled");
        return;
    }

    if (UserAuth::registerUser(username, password, confirmPassword,role)) {
        QMessageBox::information(this, "Success", "User registered successfully");
        ui->usernameLineEdit->clear();
        ui->passwordLineEdit->clear();
        ui->confirmPasswordLineEdit->clear();
        // 清除所有单选按钮的选中状态
        ui->studentRadioButton->setChecked(false);
        ui->teacherRadioButton->setChecked(false);
        ui->administratorRadioButton->setChecked(false);
        emit backToMain();
        this->hide();
    }
}

void MyRegister::on_backButton_clicked()
{
    ui->usernameLineEdit->clear();
    ui->passwordLineEdit->clear();
    ui->confirmPasswordLineEdit->clear();
    // 清除所有单选按钮的选中状态
    ui->studentRadioButton->setChecked(false);
    ui->teacherRadioButton->setChecked(false);
    ui->administratorRadioButton->setChecked(false);
    emit backToMain();
    this->hide();
}

void MyRegister::on_studentRadioButton_clicked()
{
     role = "student";
}


void MyRegister::on_teacherRadioButton_clicked()
{
    role = "teacher";
}


void MyRegister::on_administratorRadioButton_clicked()
{
    role = "administrator";
}

