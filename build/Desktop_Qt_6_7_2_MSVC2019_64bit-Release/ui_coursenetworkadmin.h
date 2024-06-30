/********************************************************************************
** Form generated from reading UI file 'coursenetworkadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSENETWORKADMIN_H
#define UI_COURSENETWORKADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CourseNetworkAdmin
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QTableWidget *course_info_table;

    void setupUi(QWidget *CourseNetworkAdmin)
    {
        if (CourseNetworkAdmin->objectName().isEmpty())
            CourseNetworkAdmin->setObjectName("CourseNetworkAdmin");
        CourseNetworkAdmin->resize(600, 400);
        QFont font;
        font.setPointSize(10);
        CourseNetworkAdmin->setFont(font);
        pushButton = new QPushButton(CourseNetworkAdmin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(519, 370, 80, 30));
        QFont font1;
        font1.setPointSize(9);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(CourseNetworkAdmin);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 30, 121, 51));
        label = new QLabel(CourseNetworkAdmin);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 100, 71, 41));
        course_info_table = new QTableWidget(CourseNetworkAdmin);
        course_info_table->setObjectName("course_info_table");
        course_info_table->setGeometry(QRect(150, 110, 331, 201));

        retranslateUi(CourseNetworkAdmin);

        QMetaObject::connectSlotsByName(CourseNetworkAdmin);
    } // setupUi

    void retranslateUi(QWidget *CourseNetworkAdmin)
    {
        CourseNetworkAdmin->setWindowTitle(QCoreApplication::translate("CourseNetworkAdmin", "\350\257\276\347\250\213\347\275\221(\347\256\241\347\220\206\345\221\230\347\211\210)", nullptr));
        pushButton->setText(QCoreApplication::translate("CourseNetworkAdmin", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CourseNetworkAdmin", "\350\277\233\350\241\214\346\216\222\350\257\276", nullptr));
        label->setText(QCoreApplication::translate("CourseNetworkAdmin", "\346\216\222\350\257\276\347\273\223\346\236\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseNetworkAdmin: public Ui_CourseNetworkAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSENETWORKADMIN_H
