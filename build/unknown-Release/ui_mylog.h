/********************************************************************************
** Form generated from reading UI file 'mylog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYLOG_H
#define UI_MYLOG_H

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
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QPushButton *confirmButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *MyLog)
    {
        if (MyLog->objectName().isEmpty())
            MyLog->setObjectName(QString::fromUtf8("MyLog"));
        MyLog->resize(600, 400);
        label = new QLabel(MyLog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 20, 221, 61));
        label_2 = new QLabel(MyLog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 130, 121, 51));
        label_3 = new QLabel(MyLog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(89, 210, 121, 51));
        usernameEdit = new QLineEdit(MyLog);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setGeometry(QRect(270, 140, 221, 31));
        passwordEdit = new QLineEdit(MyLog);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setGeometry(QRect(270, 220, 221, 31));
        confirmButton = new QPushButton(MyLog);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(160, 310, 91, 31));
        QFont font;
        font.setPointSize(12);
        confirmButton->setFont(font);
        cancelButton = new QPushButton(MyLog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(360, 310, 91, 31));
        cancelButton->setFont(font);

        retranslateUi(MyLog);

        QMetaObject::connectSlotsByName(MyLog);
    } // setupUi

    void retranslateUi(QWidget *MyLog)
    {
        MyLog->setWindowTitle(QCoreApplication::translate("MyLog", "Form", nullptr));
        label->setText(QCoreApplication::translate("MyLog", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\347\224\250\346\210\267\347\231\273\345\275\225</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MyLog", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MyLog", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        confirmButton->setText(QCoreApplication::translate("MyLog", "\347\241\256\350\256\244", nullptr));
        cancelButton->setText(QCoreApplication::translate("MyLog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyLog: public Ui_MyLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYLOG_H
