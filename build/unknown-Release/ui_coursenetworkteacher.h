/********************************************************************************
** Form generated from reading UI file 'coursenetworkteacher.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSENETWORKTEACHER_H
#define UI_COURSENETWORKTEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CourseNetworkTeacher
{
public:
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addCourseButton;
    QPushButton *delCourseButton;
    QLabel *label;
    QTableWidget *course_info_table;

    void setupUi(QWidget *CourseNetworkTeacher)
    {
        if (CourseNetworkTeacher->objectName().isEmpty())
            CourseNetworkTeacher->setObjectName("CourseNetworkTeacher");
        CourseNetworkTeacher->resize(600, 400);
        QFont font;
        font.setPointSize(12);
        CourseNetworkTeacher->setFont(font);
        pushButton = new QPushButton(CourseNetworkTeacher);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(520, 370, 80, 30));
        QFont font1;
        font1.setPointSize(9);
        pushButton->setFont(font1);
        horizontalLayoutWidget = new QWidget(CourseNetworkTeacher);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(420, 160, 166, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addCourseButton = new QPushButton(horizontalLayoutWidget);
        addCourseButton->setObjectName("addCourseButton");

        horizontalLayout->addWidget(addCourseButton);

        delCourseButton = new QPushButton(horizontalLayoutWidget);
        delCourseButton->setObjectName("delCourseButton");

        horizontalLayout->addWidget(delCourseButton);

        label = new QLabel(CourseNetworkTeacher);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 131, 31));
        course_info_table = new QTableWidget(CourseNetworkTeacher);
        if (course_info_table->columnCount() < 5)
            course_info_table->setColumnCount(5);
        if (course_info_table->rowCount() < 20)
            course_info_table->setRowCount(20);
        course_info_table->setObjectName("course_info_table");
        course_info_table->setGeometry(QRect(10, 50, 391, 301));
        course_info_table->setRowCount(20);
        course_info_table->setColumnCount(5);
        course_info_table->horizontalHeader()->setCascadingSectionResizes(false);
        course_info_table->horizontalHeader()->setHighlightSections(true);
        course_info_table->verticalHeader()->setVisible(false);

        retranslateUi(CourseNetworkTeacher);

        QMetaObject::connectSlotsByName(CourseNetworkTeacher);
    } // setupUi

    void retranslateUi(QWidget *CourseNetworkTeacher)
    {
        CourseNetworkTeacher->setWindowTitle(QCoreApplication::translate("CourseNetworkTeacher", "\350\257\276\347\250\213\347\275\221(\346\225\231\345\270\210\347\211\210)", nullptr));
        pushButton->setText(QCoreApplication::translate("CourseNetworkTeacher", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        addCourseButton->setText(QCoreApplication::translate("CourseNetworkTeacher", "\346\267\273\345\212\240\350\257\276\347\250\213", nullptr));
        delCourseButton->setText(QCoreApplication::translate("CourseNetworkTeacher", "\345\210\240\351\231\244\350\257\276\347\250\213", nullptr));
        label->setText(QCoreApplication::translate("CourseNetworkTeacher", "\345\267\262\346\267\273\345\212\240\350\257\276\347\250\213\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseNetworkTeacher: public Ui_CourseNetworkTeacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSENETWORKTEACHER_H
