/********************************************************************************
** Form generated from reading UI file 'getinfdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETINFDIALOG_H
#define UI_GETINFDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_getinfDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *getinfDialog)
    {
        if (getinfDialog->objectName().isEmpty())
            getinfDialog->setObjectName(QStringLiteral("getinfDialog"));
        getinfDialog->resize(483, 154);
        getinfDialog->setStyleSheet(QStringLiteral(""));
        label = new QLabel(getinfDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 221, 21));
        pushButton = new QPushButton(getinfDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 40, 112, 34));
        pushButton_2 = new QPushButton(getinfDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 90, 112, 34));

        retranslateUi(getinfDialog);

        QMetaObject::connectSlotsByName(getinfDialog);
    } // setupUi

    void retranslateUi(QDialog *getinfDialog)
    {
        getinfDialog->setWindowTitle(QApplication::translate("getinfDialog", "\346\231\257\347\202\271\346\237\245\350\257\242", 0));
        label->setText(QApplication::translate("getinfDialog", "\350\257\267\350\276\223\345\205\245\344\275\240\346\203\263\350\246\201\346\237\245\350\257\242\347\232\204\346\231\257\347\202\271:", 0));
        pushButton->setText(QApplication::translate("getinfDialog", "\347\241\256\350\256\244", 0));
        pushButton_2->setText(QApplication::translate("getinfDialog", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class getinfDialog: public Ui_getinfDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETINFDIALOG_H
