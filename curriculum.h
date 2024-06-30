#ifndef CURRICULUM_H
#define CURRICULUM_H

#include <QWidget>
#include <QFile>
#include "course_info.h"

namespace Ui {
class curriculum;
}

class curriculum : public QWidget
{
    Q_OBJECT

public:
    explicit curriculum(QString FilePath, QWidget *parent = nullptr);
    ~curriculum();
    void updateCourseInfo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::curriculum *ui;
    QString FilePath;
};

#endif // CURRICULUM_H
