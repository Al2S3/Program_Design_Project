#ifndef COURSEBROWSERWIDGET_H
#define COURSEBROWSERWIDGET_H

#include <QWidget>
#include <course_info.h>

namespace Ui {
class courseBrowserWidget;
}

class courseBrowserWidget : public QWidget
{
    Q_OBJECT

public:
    explicit courseBrowserWidget(const QString filePath = "course_info.txt", QWidget *parent = nullptr);
    ~courseBrowserWidget();

    void change(const QString &id, int sign, const QString &_role);

signals:
    void backToWidget();

private slots:
    void on_returnButton_clicked();

    void on_delButton_clicked();

    void on_chooseButton_clicked();

    void on_unchooseButton_clicked();

private:
    Ui::courseBrowserWidget *ui;

    QString courseId;
    QString role;
    //用于记录学生选课文件的路径
    QString FilePath;
};

#endif // COURSEBROWSERWIDGET_H
