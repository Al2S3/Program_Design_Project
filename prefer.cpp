#include "prefer.h"
#include "ui_prefer.h"

prefer::prefer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::prefer)
{
    ui->setupUi(this);

    //设置课程列表
    ui->timetable->setRowCount(12);
    ui->timetable->setColumnCount(5);

    QStringList horizonalHeader;
    horizonalHeader << "星期一" << "星期二" << "星期三" << "星期四" << "星期五";
    ui->timetable->setHorizontalHeaderLabels(horizonalHeader);

    ui->timetable->setSelectionMode(QAbstractItemView::ExtendedSelection);
}

prefer::~prefer()
{
    delete ui;
}

void prefer::on_pushButton_clicked()
{
    this->hide();
}

void prefer::setId(QString id){
    courseId = id;
}

void prefer::on_chooseButton_clicked()
{
    QList<QTableWidgetItem*> selectedItems = ui->timetable->selectedItems();

    QFile file("prefer.txt");

    file.open( QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append);

    QTextStream out(&file);
    int day=0, time=0;
    foreach (QTableWidgetItem *item, selectedItems) {
        int _day = item->column();
        int _time = item->row();
        if( ((day>>_day)&1) == 0 ) day+=1<<_day;
        if( ((time>>_time)&1) == 0 ) time+=1<<_time;
    }
    out << courseId << "," << QString::number(day) << "," << QString::number(time) <<"\n";
    QMessageBox::information(this, "Success", "选择成功！");
    ui->timetable->clearContents();
    this->hide();
}

