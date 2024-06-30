/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *registerButton;
    QPushButton *logBotton;
    QPushButton *quitButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(600, 400);
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 50, 351, 61));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(220, 130, 141, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        registerButton = new QPushButton(layoutWidget);
        registerButton->setObjectName("registerButton");

        verticalLayout->addWidget(registerButton);

        logBotton = new QPushButton(layoutWidget);
        logBotton->setObjectName("logBotton");

        verticalLayout->addWidget(logBotton);

        quitButton = new QPushButton(layoutWidget);
        quitButton->setObjectName("quitButton");

        verticalLayout->addWidget(quitButton);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\350\257\276\347\250\213\345\271\263\345\217\260", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">\346\254\242\350\277\216\346\235\245\345\210\260\350\257\276\347\250\213\345\271\263\345\217\260</span></p></body></html>", nullptr));
        registerButton->setText(QCoreApplication::translate("Widget", "\346\263\250\345\206\214", nullptr));
        logBotton->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        quitButton->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
