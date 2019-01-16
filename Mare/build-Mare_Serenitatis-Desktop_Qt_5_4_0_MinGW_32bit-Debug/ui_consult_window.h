/********************************************************************************
** Form generated from reading UI file 'consult_window.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULT_WINDOW_H
#define UI_CONSULT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_consult_window
{
public:
    QLabel *title_1;
    QLabel *input_text;

    void setupUi(QDialog *consult_window)
    {
        if (consult_window->objectName().isEmpty())
            consult_window->setObjectName(QStringLiteral("consult_window"));
        consult_window->resize(546, 444);
        consult_window->setStyleSheet(QStringLiteral(""));
        title_1 = new QLabel(consult_window);
        title_1->setObjectName(QStringLiteral("title_1"));
        title_1->setGeometry(QRect(30, 10, 141, 31));
        input_text = new QLabel(consult_window);
        input_text->setObjectName(QStringLiteral("input_text"));
        input_text->setGeometry(QRect(20, 370, 511, 41));

        retranslateUi(consult_window);

        QMetaObject::connectSlotsByName(consult_window);
    } // setupUi

    void retranslateUi(QDialog *consult_window)
    {
        consult_window->setWindowTitle(QApplication::translate("consult_window", "Dialog", 0));
        title_1->setText(QApplication::translate("consult_window", "\344\273\213\347\273\215:", 0));
        input_text->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class consult_window: public Ui_consult_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULT_WINDOW_H
