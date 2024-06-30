/********************************************************************************
** Form generated from reading UI file 'coursebrowserwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEBROWSERWIDGET_H
#define UI_COURSEBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_courseBrowserWidget
{
public:
    QPushButton *delButton;
    QPushButton *returnButton;
    QPushButton *chooseButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *idlabel;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *namelabel;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *teacherlabel;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *typelabel;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *timelabel;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QTextBrowser *introlabel;
    QPushButton *unchooseButton;

    void setupUi(QWidget *courseBrowserWidget)
    {
        if (courseBrowserWidget->objectName().isEmpty())
            courseBrowserWidget->setObjectName("courseBrowserWidget");
        courseBrowserWidget->resize(400, 300);
        delButton = new QPushButton(courseBrowserWidget);
        delButton->setObjectName("delButton");
        delButton->setGeometry(QRect(300, 140, 91, 31));
        returnButton = new QPushButton(courseBrowserWidget);
        returnButton->setObjectName("returnButton");
        returnButton->setGeometry(QRect(310, 270, 80, 18));
        chooseButton = new QPushButton(courseBrowserWidget);
        chooseButton->setObjectName("chooseButton");
        chooseButton->setGeometry(QRect(300, 140, 91, 31));
        horizontalLayoutWidget = new QWidget(courseBrowserWidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 20, 211, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        idlabel = new QLabel(horizontalLayoutWidget);
        idlabel->setObjectName("idlabel");

        horizontalLayout->addWidget(idlabel);

        horizontalLayoutWidget_2 = new QWidget(courseBrowserWidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(39, 50, 211, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        namelabel = new QLabel(horizontalLayoutWidget_2);
        namelabel->setObjectName("namelabel");

        horizontalLayout_2->addWidget(namelabel);

        horizontalLayoutWidget_3 = new QWidget(courseBrowserWidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(40, 80, 211, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        teacherlabel = new QLabel(horizontalLayoutWidget_3);
        teacherlabel->setObjectName("teacherlabel");

        horizontalLayout_3->addWidget(teacherlabel);

        horizontalLayoutWidget_4 = new QWidget(courseBrowserWidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(40, 110, 211, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_4);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        typelabel = new QLabel(horizontalLayoutWidget_4);
        typelabel->setObjectName("typelabel");

        horizontalLayout_4->addWidget(typelabel);

        horizontalLayoutWidget_5 = new QWidget(courseBrowserWidget);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(40, 140, 211, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_5);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        timelabel = new QLabel(horizontalLayoutWidget_5);
        timelabel->setObjectName("timelabel");

        horizontalLayout_5->addWidget(timelabel);

        horizontalLayoutWidget_6 = new QWidget(courseBrowserWidget);
        horizontalLayoutWidget_6->setObjectName("horizontalLayoutWidget_6");
        horizontalLayoutWidget_6->setGeometry(QRect(40, 170, 211, 121));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_6);
        label_5->setObjectName("label_5");

        horizontalLayout_6->addWidget(label_5);

        introlabel = new QTextBrowser(horizontalLayoutWidget_6);
        introlabel->setObjectName("introlabel");

        horizontalLayout_6->addWidget(introlabel);

        unchooseButton = new QPushButton(courseBrowserWidget);
        unchooseButton->setObjectName("unchooseButton");
        unchooseButton->setGeometry(QRect(300, 140, 91, 31));

        retranslateUi(courseBrowserWidget);

        QMetaObject::connectSlotsByName(courseBrowserWidget);
    } // setupUi

    void retranslateUi(QWidget *courseBrowserWidget)
    {
        courseBrowserWidget->setWindowTitle(QCoreApplication::translate("courseBrowserWidget", "Form", nullptr));
        delButton->setText(QCoreApplication::translate("courseBrowserWidget", "\345\210\240\351\231\244\350\257\245\350\257\276\347\250\213", nullptr));
        returnButton->setText(QCoreApplication::translate("courseBrowserWidget", "\350\277\224\345\233\236", nullptr));
        chooseButton->setText(QCoreApplication::translate("courseBrowserWidget", "\351\200\211\346\213\251\350\257\245\350\257\276\347\250\213", nullptr));
        label->setText(QCoreApplication::translate("courseBrowserWidget", "\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        idlabel->setText(QCoreApplication::translate("courseBrowserWidget", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("courseBrowserWidget", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        namelabel->setText(QCoreApplication::translate("courseBrowserWidget", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("courseBrowserWidget", "\350\257\276\347\250\213\346\225\231\345\270\210", nullptr));
        teacherlabel->setText(QCoreApplication::translate("courseBrowserWidget", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("courseBrowserWidget", "\350\257\276\347\250\213\347\261\273\345\210\253", nullptr));
        typelabel->setText(QCoreApplication::translate("courseBrowserWidget", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("courseBrowserWidget", "\350\257\276\347\250\213\346\227\266\351\225\277", nullptr));
        timelabel->setText(QCoreApplication::translate("courseBrowserWidget", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("courseBrowserWidget", "\350\257\276\347\250\213\344\273\213\347\273\215", nullptr));
        unchooseButton->setText(QCoreApplication::translate("courseBrowserWidget", "\351\200\200\351\200\211\350\257\245\350\257\276\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class courseBrowserWidget: public Ui_courseBrowserWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEBROWSERWIDGET_H
