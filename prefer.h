#ifndef PREFER_H
#define PREFER_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>

namespace Ui {
class prefer;
}

class prefer : public QWidget
{
    Q_OBJECT

public:
    explicit prefer(QWidget *parent = nullptr);
    ~prefer();
    void setId(QString id);

private slots:
    void on_pushButton_clicked();

    void on_chooseButton_clicked();

private:
    Ui::prefer *ui;
    QString courseId;
};

#endif // PREFER_H
