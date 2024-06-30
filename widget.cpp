#include<widget.h>
#include "ui_widget.h"
#include<QWidget>
#include<QString>
#include<registerWindow.h>
#include<logWindow.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , logWindow(new MyLog())
    , registerWindow(new MyRegister())
{
    ui->setupUi(this);

    // 连接信号槽，处理子窗口关闭后的返回
    connect(logWindow, &MyLog::backToMain, this, &Widget::show);
    connect(registerWindow, &MyRegister::backToMain, this, &Widget::show);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_quitButton_clicked()//退出
{
    this->close();
}


void Widget::on_registerButton_clicked()//注册
{
    this->hide();
    registerWindow->show();
}


void Widget::on_logBotton_clicked()//登录
{
    this->hide();
    logWindow->show();
}

