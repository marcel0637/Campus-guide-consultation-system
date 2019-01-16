/********************************************************************************
** Form generated from reading UI file 'recommend.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOMMEND_H
#define UI_RECOMMEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Recommend
{
public:
    QLabel *input_Text;
    QPushButton *to_next;
    QPushButton *to_front;
    QLabel *_showpos;

    void setupUi(QDialog *Recommend)
    {
        if (Recommend->objectName().isEmpty())
            Recommend->setObjectName(QStringLiteral("Recommend"));
        Recommend->resize(670, 542);
        input_Text = new QLabel(Recommend);
        input_Text->setObjectName(QStringLiteral("input_Text"));
        input_Text->setGeometry(QRect(70, 20, 401, 51));
        to_next = new QPushButton(Recommend);
        to_next->setObjectName(QStringLiteral("to_next"));
        to_next->setGeometry(QRect(500, 480, 112, 34));
        to_front = new QPushButton(Recommend);
        to_front->setObjectName(QStringLiteral("to_front"));
        to_front->setGeometry(QRect(350, 480, 112, 34));
        _showpos = new QLabel(Recommend);
        _showpos->setObjectName(QStringLiteral("_showpos"));
        _showpos->setGeometry(QRect(90, 490, 231, 21));

        retranslateUi(Recommend);

        QMetaObject::connectSlotsByName(Recommend);
    } // setupUi

    void retranslateUi(QDialog *Recommend)
    {
        Recommend->setWindowTitle(QApplication::translate("Recommend", "Dialog", 0));
        input_Text->setText(QApplication::translate("Recommend", "TextLabel", 0));
        to_next->setText(QApplication::translate("Recommend", "\344\270\213\344\270\200\351\241\265", 0));
        to_front->setText(QApplication::translate("Recommend", "\344\270\212\344\270\200\351\241\265", 0));
        _showpos->setText(QApplication::translate("Recommend", "\345\275\223\345\211\215\344\275\215\344\272\216\347\254\2541\351\241\265...1/10", 0));
    } // retranslateUi

};

namespace Ui {
    class Recommend: public Ui_Recommend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOMMEND_H
