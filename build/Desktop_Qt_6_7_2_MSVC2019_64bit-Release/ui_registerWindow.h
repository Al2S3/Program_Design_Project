/********************************************************************************
** Form generated from reading UI file 'registerWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyRegister
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *confirmPasswordLineEdit;
    QPushButton *registerButton;
    QPushButton *backButton;
    QRadioButton *studentRadioButton;
    QRadioButton *teacherRadioButton;
    QRadioButton *administratorRadioButton;
    QLabel *label_5;

    void setupUi(QWidget *MyRegister)
    {
        if (MyRegister->objectName().isEmpty())
            MyRegister->setObjectName("MyRegister");
        MyRegister->resize(600, 400);
        label = new QLabel(MyRegister);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 10, 221, 41));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(MyRegister);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 80, 141, 31));
        label_3 = new QLabel(MyRegister);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 140, 141, 31));
        label_4 = new QLabel(MyRegister);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 200, 141, 31));
        usernameLineEdit = new QLineEdit(MyRegister);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(280, 80, 201, 31));
        passwordLineEdit = new QLineEdit(MyRegister);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(280, 140, 201, 31));
        confirmPasswordLineEdit = new QLineEdit(MyRegister);
        confirmPasswordLineEdit->setObjectName("confirmPasswordLineEdit");
        confirmPasswordLineEdit->setGeometry(QRect(280, 200, 201, 31));
        registerButton = new QPushButton(MyRegister);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(160, 330, 101, 31));
        QFont font1;
        font1.setPointSize(14);
        registerButton->setFont(font1);
        backButton = new QPushButton(MyRegister);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(350, 330, 101, 31));
        backButton->setFont(font1);
        studentRadioButton = new QRadioButton(MyRegister);
        studentRadioButton->setObjectName("studentRadioButton");
        studentRadioButton->setGeometry(QRect(230, 260, 81, 31));
        QFont font2;
        font2.setPointSize(12);
        studentRadioButton->setFont(font2);
        teacherRadioButton = new QRadioButton(MyRegister);
        teacherRadioButton->setObjectName("teacherRadioButton");
        teacherRadioButton->setGeometry(QRect(350, 260, 81, 31));
        teacherRadioButton->setFont(font2);
        administratorRadioButton = new QRadioButton(MyRegister);
        administratorRadioButton->setObjectName("administratorRadioButton");
        administratorRadioButton->setGeometry(QRect(480, 260, 81, 31));
        administratorRadioButton->setFont(font2);
        label_5 = new QLabel(MyRegister);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 260, 141, 31));

        retranslateUi(MyRegister);

        QMetaObject::connectSlotsByName(MyRegister);
    } // setupUi

    void retranslateUi(QWidget *MyRegister)
    {
        MyRegister->setWindowTitle(QCoreApplication::translate("MyRegister", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("MyRegister", "<html><head/><body><p align=\"center\">\346\226\260\347\224\250\346\210\267\346\263\250\345\206\214</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MyRegister", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\226\260\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MyRegister", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MyRegister", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        registerButton->setText(QCoreApplication::translate("MyRegister", "\346\263\250\345\206\214", nullptr));
        backButton->setText(QCoreApplication::translate("MyRegister", "\350\277\224\345\233\236", nullptr));
        studentRadioButton->setText(QCoreApplication::translate("MyRegister", "\345\255\246\347\224\237", nullptr));
        teacherRadioButton->setText(QCoreApplication::translate("MyRegister", "\346\225\231\345\270\210", nullptr));
        administratorRadioButton->setText(QCoreApplication::translate("MyRegister", "\347\256\241\347\220\206\345\221\230", nullptr));
        label_5->setText(QCoreApplication::translate("MyRegister", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\351\200\211\346\213\251\350\272\253\344\273\275\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyRegister: public Ui_MyRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
