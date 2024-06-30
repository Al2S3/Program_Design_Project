/********************************************************************************
** Form generated from reading UI file 'prefer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFER_H
#define UI_PREFER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prefer
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTableWidget *timetable;
    QPushButton *chooseButton;

    void setupUi(QWidget *prefer)
    {
        if (prefer->objectName().isEmpty())
            prefer->setObjectName("prefer");
        prefer->resize(400, 300);
        pushButton = new QPushButton(prefer);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 280, 80, 18));
        label = new QLabel(prefer);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 10, 121, 31));
        timetable = new QTableWidget(prefer);
        timetable->setObjectName("timetable");
        timetable->setGeometry(QRect(80, 60, 256, 192));
        chooseButton = new QPushButton(prefer);
        chooseButton->setObjectName("chooseButton");
        chooseButton->setGeometry(QRect(170, 260, 81, 31));

        retranslateUi(prefer);

        QMetaObject::connectSlotsByName(prefer);
    } // setupUi

    void retranslateUi(QWidget *prefer)
    {
        prefer->setWindowTitle(QCoreApplication::translate("prefer", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("prefer", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("prefer", "<html><head/><body><p><span style=\" font-size:12pt;\">\351\200\211\346\213\251\345\220\210\351\200\202\347\232\204\346\227\266\351\227\264</span></p></body></html>", nullptr));
        chooseButton->setText(QCoreApplication::translate("prefer", "\351\200\211\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class prefer: public Ui_prefer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFER_H
