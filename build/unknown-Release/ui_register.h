/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("register"));
        Register->resize(400, 300);
        label = new QLabel(Register);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 30, 91, 31));
        label_2 = new QLabel(Register);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 80, 81, 21));
        label_3 = new QLabel(Register);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 130, 71, 21));
        lineEdit = new QLineEdit(Register);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 80, 141, 20));
        lineEdit_2 = new QLineEdit(Register);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 130, 141, 20));
        pushButton = new QPushButton(Register);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 250, 80, 18));
        pushButton_2 = new QPushButton(Register);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 250, 80, 18));
        lineEdit_3 = new QLineEdit(Register);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 180, 141, 20));
        label_4 = new QLabel(Register);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 180, 81, 21));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("register", "Form", nullptr));
        label->setText(QCoreApplication::translate("register", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\226\260\347\224\250\346\210\267\346\263\250\345\206\214</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("register", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\226\260\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("register", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("register", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("register", "\345\217\226\346\266\210", nullptr));
        label_4->setText(QCoreApplication::translate("register", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
