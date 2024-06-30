#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QWidget>
#include<QString>

namespace Ui {
class MyRegister;
}

class MyRegister : public QWidget
{
    Q_OBJECT

public:
    explicit MyRegister(QWidget *parent = nullptr);
    ~MyRegister();

signals:
    void backToMain();

private slots:
    void on_registerButton_clicked();

    void on_backButton_clicked();

    void on_studentRadioButton_clicked();

    void on_teacherRadioButton_clicked();

    void on_administratorRadioButton_clicked();

private:
    Ui::MyRegister *ui;
    QString role;
};

#endif // REGISTERWINDOW_H
