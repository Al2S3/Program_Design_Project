#ifndef DELCOURSEWIDGET_H
#define DELCOURSEWIDGET_H

#include <QWidget>
#include <course_info.h>

namespace Ui {
class delCourseWidget;
}

class delCourseWidget : public QWidget
{
    Q_OBJECT

public:
    explicit delCourseWidget(QString &username, QWidget *parent = nullptr);
    ~delCourseWidget();

signals:
    void backToWidget();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::delCourseWidget *ui;
    QString username;
};

#endif // DELCOURSEWIDGET_H
