#ifndef ADDCOURSEWIDGET_H
#define ADDCOURSEWIDGET_H

#include <QWidget>
#include <QString>
#include "prefer.h"

namespace Ui {
class addCourseWidget;
}

class addCourseWidget : public QWidget
{
    Q_OBJECT

public:
    explicit addCourseWidget(QString &username, QWidget *parent = nullptr);
    ~addCourseWidget();

signals:
    void backToWidget();

private slots:
    void on_addConfirmButton_clicked();

    void on_returnButton_clicked();

    void on_preferButton_clicked();

private:
    Ui::addCourseWidget *ui;
    prefer *pre;
    QString username;
};

#endif // ADDCOURSEWIDGET_H
