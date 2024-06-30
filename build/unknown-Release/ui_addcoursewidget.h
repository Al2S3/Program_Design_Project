/********************************************************************************
** Form generated from reading UI file 'addcoursewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOURSEWIDGET_H
#define UI_ADDCOURSEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addCourseWidget
{
public:
    QPushButton *addConfirmButton;
    QPushButton *returnButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *courseIdEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *courseNameEdit;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *courseTimeEdit;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QTextEdit *courseIntroEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *courseTypeEdit;

    void setupUi(QWidget *addCourseWidget)
    {
        if (addCourseWidget->objectName().isEmpty())
            addCourseWidget->setObjectName("addCourseWidget");
        addCourseWidget->resize(400, 300);
        addConfirmButton = new QPushButton(addCourseWidget);
        addConfirmButton->setObjectName("addConfirmButton");
        addConfirmButton->setGeometry(QRect(20, 250, 199, 41));
        returnButton = new QPushButton(addCourseWidget);
        returnButton->setObjectName("returnButton");
        returnButton->setGeometry(QRect(220, 250, 161, 41));
        horizontalLayoutWidget = new QWidget(addCourseWidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(80, 10, 231, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        courseIdEdit = new QLineEdit(horizontalLayoutWidget);
        courseIdEdit->setObjectName("courseIdEdit");

        horizontalLayout->addWidget(courseIdEdit);

        horizontalLayoutWidget_2 = new QWidget(addCourseWidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(80, 40, 231, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        courseNameEdit = new QLineEdit(horizontalLayoutWidget_2);
        courseNameEdit->setObjectName("courseNameEdit");

        horizontalLayout_2->addWidget(courseNameEdit);

        horizontalLayoutWidget_4 = new QWidget(addCourseWidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(80, 100, 231, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        courseTimeEdit = new QLineEdit(horizontalLayoutWidget_4);
        courseTimeEdit->setObjectName("courseTimeEdit");

        horizontalLayout_4->addWidget(courseTimeEdit);

        horizontalLayoutWidget_5 = new QWidget(addCourseWidget);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(80, 130, 231, 121));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_5);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        courseIntroEdit = new QTextEdit(horizontalLayoutWidget_5);
        courseIntroEdit->setObjectName("courseIntroEdit");

        horizontalLayout_5->addWidget(courseIntroEdit);

        horizontalLayoutWidget_3 = new QWidget(addCourseWidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(80, 70, 181, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        courseTypeEdit = new QComboBox(horizontalLayoutWidget_3);
        courseTypeEdit->setObjectName("courseTypeEdit");

        horizontalLayout_3->addWidget(courseTypeEdit);


        retranslateUi(addCourseWidget);

        QMetaObject::connectSlotsByName(addCourseWidget);
    } // setupUi

    void retranslateUi(QWidget *addCourseWidget)
    {
        addCourseWidget->setWindowTitle(QCoreApplication::translate("addCourseWidget", "Form", nullptr));
        addConfirmButton->setText(QCoreApplication::translate("addCourseWidget", "\347\241\256\350\256\244\346\267\273\345\212\240", nullptr));
        returnButton->setText(QCoreApplication::translate("addCourseWidget", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("addCourseWidget", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\276\347\250\213\347\274\226\345\217\267</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("addCourseWidget", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\276\347\250\213\345\220\215\347\247\260</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("addCourseWidget", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\276\347\250\213\346\227\266\351\225\277</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("addCourseWidget", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\276\347\250\213\344\273\213\347\273\215</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("addCourseWidget", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\276\347\250\213\347\261\273\345\210\253</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addCourseWidget: public Ui_addCourseWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOURSEWIDGET_H
