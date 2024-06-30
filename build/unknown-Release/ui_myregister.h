/********************************************************************************
** Form generated from reading UI file 'myregister.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYREGISTER_H
#define UI_MYREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyRegister
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *userNameEdit;
    QLineEdit *passwordEdit;
    QLineEdit *confirmPasswordEdit;
    QPushButton *confirmButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *MyRegister)
    {
        if (MyRegister->objectName().isEmpty())
            MyRegister->setObjectName(QString::fromUtf8("MyRegister"));
        MyRegister->resize(600, 400);
        label = new QLabel(MyRegister);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 20, 221, 41));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(MyRegister);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 100, 111, 31));
        label_3 = new QLabel(MyRegister);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 160, 111, 31));
        label_4 = new QLabel(MyRegister);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 220, 121, 31));
        userNameEdit = new QLineEdit(MyRegister);
        userNameEdit->setObjectName(QString::fromUtf8("userNameEdit"));
        userNameEdit->setGeometry(QRect(280, 100, 201, 31));
        passwordEdit = new QLineEdit(MyRegister);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setGeometry(QRect(280, 160, 201, 31));
        confirmPasswordEdit = new QLineEdit(MyRegister);
        confirmPasswordEdit->setObjectName(QString::fromUtf8("confirmPasswordEdit"));
        confirmPasswordEdit->setGeometry(QRect(280, 220, 201, 31));
        confirmButton = new QPushButton(MyRegister);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(170, 320, 101, 31));
        QFont font1;
        font1.setPointSize(14);
        confirmButton->setFont(font1);
        cancelButton = new QPushButton(MyRegister);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(330, 320, 101, 31));
        cancelButton->setFont(font1);

        retranslateUi(MyRegister);

        QMetaObject::connectSlotsByName(MyRegister);
    } // setupUi

    void retranslateUi(QWidget *MyRegister)
    {
        MyRegister->setWindowTitle(QCoreApplication::translate("MyRegister", "Form", nullptr));
        label->setText(QCoreApplication::translate("MyRegister", "<html><head/><body><p align=\"center\">\346\226\260\347\224\250\346\210\267\346\263\250\345\206\214</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MyRegister", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\226\260\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MyRegister", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MyRegister", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        confirmButton->setText(QCoreApplication::translate("MyRegister", "\347\241\256\350\256\244", nullptr));
        cancelButton->setText(QCoreApplication::translate("MyRegister", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyRegister: public Ui_MyRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYREGISTER_H
