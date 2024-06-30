#include "coursebrowserwidget.h"
#include "ui_coursebrowserwidget.h"

courseBrowserWidget::courseBrowserWidget(const QString _filePath, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::courseBrowserWidget)
    , FilePath(_filePath)
{
    ui->setupUi(this);
}

courseBrowserWidget::~courseBrowserWidget()
{
    delete ui;
}

void courseBrowserWidget::change(const QString &id, int sign, const QString &_role){

    courseId = id;
    role = _role;
    QStringList course;
    if(sign == 0)   course = Course_info::_findCourseInfo(courseId, "course_info.txt");
    else course = Course_info::_findCourseInfo(courseId, FilePath);

    ui->idlabel->setText(course[0]);
    ui->namelabel->setText(course[1]);
    ui->teacherlabel->setText(course[2]);
    ui->typelabel->setText(course[3]);
    ui->timelabel->setText(course[4]);
    ui->introlabel->setText(course[5]);

    ui->Namelabel->hide();
    ui->Timelabel->hide();

    if(role == "student"){
        if(sign == 1){
            ui->chooseButton->hide();
            ui->unchooseButton->show();
            ui->delButton->hide();
        }
        else if(sign == 0){
            ui->chooseButton->show();
            ui->unchooseButton->hide();
            ui->delButton->hide();
        }

        ui->Namelabel->show();
        ui->Timelabel->show();
        QVector<QString> tmp = Course_info::get(courseId);
        ui->Timelabel->setText("星期"+tmp[0]+"第"+tmp[1]+"节课到第"+QString::number(1+tmp[1].toInt())+"节课");

    }else if(role == "teacher"){
        ui->chooseButton->hide();
        ui->unchooseButton->hide();
        ui->delButton->show();
    }
}

void courseBrowserWidget::on_returnButton_clicked()
{
    emit backToWidget();
    this->hide();
}


void courseBrowserWidget::on_unchooseButton_clicked()
{
    Course_info::unchooseCourseInfo(courseId, FilePath);
    QMessageBox::information(this, "Success", "成功退选该课程！");
    emit backToWidget();
    this->hide();
}


void courseBrowserWidget::on_chooseButton_clicked()
{
    if(Course_info::conflict(courseId,FilePath)){
        QMessageBox::information(this, "Failed", "该课程与已选课程时间冲突！");
        emit backToWidget();
        this->hide();
        return ;
    }
    Course_info::chooseCourseInfo(courseId, FilePath);
    QMessageBox::information(this, "Success", "成功选择该课程！");
    emit backToWidget();
    this->hide();
}

void courseBrowserWidget::on_delButton_clicked()
{
    Course_info::unchooseCourseInfo(courseId, "course_info.txt");
    QMessageBox::information(this, "Success", "成功删除该课程！");
    emit backToWidget();
    this->hide();
}
