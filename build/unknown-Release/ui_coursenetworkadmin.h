/********************************************************************************
** Form generated from reading UI file 'coursenetworkadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSENETWORKADMIN_H
#define UI_COURSENETWORKADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CourseNetworkAdmin
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *CourseNetworkAdmin)
    {
        if (CourseNetworkAdmin->objectName().isEmpty())
            CourseNetworkAdmin->setObjectName(QString::fromUtf8("CourseNetworkAdmin"));
        CourseNetworkAdmin->resize(600, 400);
        QFont font;
        font.setPointSize(10);
        CourseNetworkAdmin->setFont(font);
        pushButton = new QPushButton(CourseNetworkAdmin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(519, 370, 80, 30));
        QFont font1;
        font1.setPointSize(9);
        pushButton->setFont(font1);

        retranslateUi(CourseNetworkAdmin);

        QMetaObject::connectSlotsByName(CourseNetworkAdmin);
    } // setupUi

    void retranslateUi(QWidget *CourseNetworkAdmin)
    {
        CourseNetworkAdmin->setWindowTitle(QCoreApplication::translate("CourseNetworkAdmin", "\350\257\276\347\250\213\347\275\221(\347\256\241\347\220\206\345\221\230\347\211\210)", nullptr));
        pushButton->setText(QCoreApplication::translate("CourseNetworkAdmin", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseNetworkAdmin: public Ui_CourseNetworkAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSENETWORKADMIN_H
