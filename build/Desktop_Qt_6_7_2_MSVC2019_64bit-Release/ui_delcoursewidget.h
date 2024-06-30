/********************************************************************************
** Form generated from reading UI file 'delcoursewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELCOURSEWIDGET_H
#define UI_DELCOURSEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delCourseWidget
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *delCourseWidget)
    {
        if (delCourseWidget->objectName().isEmpty())
            delCourseWidget->setObjectName("delCourseWidget");
        delCourseWidget->resize(400, 300);
        label = new QLabel(delCourseWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 80, 161, 61));
        lineEdit = new QLineEdit(delCourseWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(230, 100, 151, 31));
        pushButton = new QPushButton(delCourseWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 220, 80, 18));
        pushButton_2 = new QPushButton(delCourseWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(280, 220, 80, 18));

        retranslateUi(delCourseWidget);

        QMetaObject::connectSlotsByName(delCourseWidget);
    } // setupUi

    void retranslateUi(QWidget *delCourseWidget)
    {
        delCourseWidget->setWindowTitle(QCoreApplication::translate("delCourseWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("delCourseWidget", "<html><head/><body><p><span style=\" font-size:16pt;\">\350\257\276\347\250\213\347\274\226\345\217\267</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("delCourseWidget", "\345\210\240\351\231\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("delCourseWidget", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delCourseWidget: public Ui_delCourseWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELCOURSEWIDGET_H
