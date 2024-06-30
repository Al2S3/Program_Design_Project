/********************************************************************************
** Form generated from reading UI file 'coursenetworkstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSENETWORKSTUDENT_H
#define UI_COURSENETWORKSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CourseNetworkStudent
{
public:
    QPushButton *logoutButton;
    QLabel *label;
    QTableWidget *course_info_table;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *IdEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *nameEdit;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLineEdit *teacherEdit;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QComboBox *typeBox;
    QPushButton *searchButton;
    QPushButton *restoreButton;
    QPushButton *selectedButton;
    QPushButton *unselectedButton;

    void setupUi(QWidget *CourseNetworkStudent)
    {
        if (CourseNetworkStudent->objectName().isEmpty())
            CourseNetworkStudent->setObjectName("CourseNetworkStudent");
        CourseNetworkStudent->resize(604, 400);
        logoutButton = new QPushButton(CourseNetworkStudent);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(520, 370, 80, 30));
        QFont font;
        font.setPointSize(9);
        logoutButton->setFont(font);
        label = new QLabel(CourseNetworkStudent);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 161, 31));
        course_info_table = new QTableWidget(CourseNetworkStudent);
        if (course_info_table->columnCount() < 6)
            course_info_table->setColumnCount(6);
        course_info_table->setObjectName("course_info_table");
        course_info_table->setGeometry(QRect(30, 120, 451, 192));
        course_info_table->setColumnCount(6);
        label_2 = new QLabel(CourseNetworkStudent);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 61, 41));
        verticalLayoutWidget = new QWidget(CourseNetworkStudent);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(80, 60, 91, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        IdEdit = new QLineEdit(verticalLayoutWidget);
        IdEdit->setObjectName("IdEdit");

        verticalLayout->addWidget(IdEdit);

        verticalLayoutWidget_2 = new QWidget(CourseNetworkStudent);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(180, 60, 101, 51));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        nameEdit = new QLineEdit(verticalLayoutWidget_2);
        nameEdit->setObjectName("nameEdit");

        verticalLayout_2->addWidget(nameEdit);

        verticalLayoutWidget_3 = new QWidget(CourseNetworkStudent);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(290, 60, 101, 51));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);

        teacherEdit = new QLineEdit(verticalLayoutWidget_3);
        teacherEdit->setObjectName("teacherEdit");

        verticalLayout_3->addWidget(teacherEdit);

        verticalLayoutWidget_4 = new QWidget(CourseNetworkStudent);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(400, 60, 91, 51));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_4);
        label_5->setObjectName("label_5");

        verticalLayout_4->addWidget(label_5);

        typeBox = new QComboBox(verticalLayoutWidget_4);
        typeBox->setObjectName("typeBox");
        typeBox->setModelColumn(0);

        verticalLayout_4->addWidget(typeBox);

        searchButton = new QPushButton(CourseNetworkStudent);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(510, 50, 91, 31));
        restoreButton = new QPushButton(CourseNetworkStudent);
        restoreButton->setObjectName("restoreButton");
        restoreButton->setGeometry(QRect(510, 90, 91, 31));
        selectedButton = new QPushButton(CourseNetworkStudent);
        selectedButton->setObjectName("selectedButton");
        selectedButton->setGeometry(QRect(490, 230, 101, 51));
        unselectedButton = new QPushButton(CourseNetworkStudent);
        unselectedButton->setObjectName("unselectedButton");
        unselectedButton->setGeometry(QRect(490, 230, 101, 51));

        retranslateUi(CourseNetworkStudent);

        QMetaObject::connectSlotsByName(CourseNetworkStudent);
    } // setupUi

    void retranslateUi(QWidget *CourseNetworkStudent)
    {
        CourseNetworkStudent->setWindowTitle(QCoreApplication::translate("CourseNetworkStudent", "\350\257\276\347\250\213\347\275\221(\345\255\246\347\224\237\347\211\210)", nullptr));
        logoutButton->setText(QCoreApplication::translate("CourseNetworkStudent", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("CourseNetworkStudent", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\276\347\250\213\345\210\227\350\241\250</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("CourseNetworkStudent", "\350\257\276\347\250\213\346\243\200\347\264\242", nullptr));
        label_3->setText(QCoreApplication::translate("CourseNetworkStudent", "\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("CourseNetworkStudent", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        label_6->setText(QCoreApplication::translate("CourseNetworkStudent", "\350\257\276\347\250\213\346\225\231\345\270\210", nullptr));
        label_5->setText(QCoreApplication::translate("CourseNetworkStudent", "\350\257\276\347\250\213\347\261\273\345\210\253", nullptr));
        searchButton->setText(QCoreApplication::translate("CourseNetworkStudent", "\346\243\200\347\264\242", nullptr));
        restoreButton->setText(QCoreApplication::translate("CourseNetworkStudent", "\350\277\230\345\216\237", nullptr));
        selectedButton->setText(QCoreApplication::translate("CourseNetworkStudent", "\346\237\245\347\234\213\345\267\262\351\200\211\350\257\276\345\210\227\350\241\250", nullptr));
        unselectedButton->setText(QCoreApplication::translate("CourseNetworkStudent", "\346\237\245\347\234\213\346\234\252\351\200\211\350\257\276\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseNetworkStudent: public Ui_CourseNetworkStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSENETWORKSTUDENT_H
