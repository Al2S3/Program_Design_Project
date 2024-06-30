#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<logWindow.h>
#include<registerWindow.h>
#include<coursenetworkstudent.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_quitButton_clicked();

    void on_registerButton_clicked();

    void on_logBotton_clicked();

private:
    Ui::Widget *ui;
    MyLog *logWindow;
    MyRegister *registerWindow;
    CourseNetworkStudent *courseNetworkStudent;
};
#endif // WIDGET_H
