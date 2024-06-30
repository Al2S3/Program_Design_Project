/********************************************************************************
** Form generated from reading UI file 'logWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWINDOW_H
#define UI_LOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyLog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *confirmButton;
    QPushButton *backButton;

    void setupUi(QWidget *MyLog)
    {
        if (MyLog->objectName().isEmpty())
            MyLog->setObjectName("MyLog");
        MyLog->resize(600, 400);
        label = new QLabel(MyLog);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 20, 221, 61));
        label_2 = new QLabel(MyLog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 130, 131, 51));
        label_3 = new QLabel(MyLog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(89, 210, 131, 51));
        usernameLineEdit = new QLineEdit(MyLog);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(270, 140, 221, 31));
        passwordLineEdit = new QLineEdit(MyLog);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(270, 220, 221, 31));
        confirmButton = new QPushButton(MyLog);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(160, 310, 91, 31));
        QFont font;
        font.setPointSize(12);
        confirmButton->setFont(font);
        backButton = new QPushButton(MyLog);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(360, 310, 91, 31));
        backButton->setFont(font);

        retranslateUi(MyLog);

        QMetaObject::connectSlotsByName(MyLog);
    } // setupUi

    void retranslateUi(QWidget *MyLog)
    {
        MyLog->setWindowTitle(QCoreApplication::translate("MyLog", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("MyLog", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\347\224\250\346\210\267\347\231\273\345\275\225</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MyLog", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MyLog", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        confirmButton->setText(QCoreApplication::translate("MyLog", "\347\241\256\350\256\244", nullptr));
        backButton->setText(QCoreApplication::translate("MyLog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyLog: public Ui_MyLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWINDOW_H
