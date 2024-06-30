#ifndef LOGWINDOW_H
#define LOGWINDOW_H

#include <QWidget>

namespace Ui {
class MyLog;
}

class MyLog : public QWidget
{
    Q_OBJECT

public:
    explicit MyLog(QWidget *parent = nullptr);
    ~MyLog();

signals:
    void backToMain();

private slots:
    void on_confirmButton_clicked();
    void on_backButton_clicked();

private:
    Ui::MyLog *ui;
    QString role;
};

#endif // LOGWINDOW_H
