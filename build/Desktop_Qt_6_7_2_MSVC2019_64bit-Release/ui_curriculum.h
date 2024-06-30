/********************************************************************************
** Form generated from reading UI file 'curriculum.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRICULUM_H
#define UI_CURRICULUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_curriculum
{
public:
    QTableWidget *course_info_table;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *curriculum)
    {
        if (curriculum->objectName().isEmpty())
            curriculum->setObjectName("curriculum");
        curriculum->resize(400, 300);
        course_info_table = new QTableWidget(curriculum);
        course_info_table->setObjectName("course_info_table");
        course_info_table->setGeometry(QRect(20, 50, 351, 211));
        label = new QLabel(curriculum);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 20, 51, 21));
        pushButton = new QPushButton(curriculum);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 280, 80, 18));

        retranslateUi(curriculum);

        QMetaObject::connectSlotsByName(curriculum);
    } // setupUi

    void retranslateUi(QWidget *curriculum)
    {
        curriculum->setWindowTitle(QCoreApplication::translate("curriculum", "Form", nullptr));
        label->setText(QCoreApplication::translate("curriculum", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\257\276\350\241\250</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("curriculum", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class curriculum: public Ui_curriculum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRICULUM_H
