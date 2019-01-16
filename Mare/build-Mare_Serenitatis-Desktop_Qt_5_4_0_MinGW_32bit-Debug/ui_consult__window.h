/********************************************************************************
** Form generated from reading UI file 'consult__window.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULT__WINDOW_H
#define UI_CONSULT__WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Consult__window
{
public:

    void setupUi(QWidget *Consult__window)
    {
        if (Consult__window->objectName().isEmpty())
            Consult__window->setObjectName(QStringLiteral("Consult__window"));
        Consult__window->resize(400, 300);

        retranslateUi(Consult__window);

        QMetaObject::connectSlotsByName(Consult__window);
    } // setupUi

    void retranslateUi(QWidget *Consult__window)
    {
        Consult__window->setWindowTitle(QApplication::translate("Consult__window", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Consult__window: public Ui_Consult__window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULT__WINDOW_H
