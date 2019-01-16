/********************************************************************************
** Form generated from reading UI file 'warning_window.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING_WINDOW_H
#define UI_WARNING_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_warning_window
{
public:

    void setupUi(QDialog *warning_window)
    {
        if (warning_window->objectName().isEmpty())
            warning_window->setObjectName(QStringLiteral("warning_window"));
        warning_window->resize(400, 300);

        retranslateUi(warning_window);

        QMetaObject::connectSlotsByName(warning_window);
    } // setupUi

    void retranslateUi(QDialog *warning_window)
    {
        warning_window->setWindowTitle(QApplication::translate("warning_window", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class warning_window: public Ui_warning_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING_WINDOW_H
