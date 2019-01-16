/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *to_getpath;
    QPushButton *recommend;
    QComboBox *comboBox_1;
    QComboBox *comboBox_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1295, 850);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 20, 121, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 30, 111, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(580, 30, 111, 21));
        to_getpath = new QPushButton(centralWidget);
        to_getpath->setObjectName(QStringLiteral("to_getpath"));
        to_getpath->setGeometry(QRect(850, 20, 121, 41));
        recommend = new QPushButton(centralWidget);
        recommend->setObjectName(QStringLiteral("recommend"));
        recommend->setGeometry(QRect(1070, 20, 121, 41));
        comboBox_1 = new QComboBox(centralWidget);
        comboBox_1->setObjectName(QStringLiteral("comboBox_1"));
        comboBox_1->setGeometry(QRect(412, 30, 150, 25));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(670, 30, 150, 25));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\240\241\345\233\255\345\257\274\350\210\252\347\263\273\347\273\237", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\346\231\257\347\202\271\346\237\245\350\257\242", 0));
        label->setText(QApplication::translate("MainWindow", "\350\265\267\347\202\271\351\200\211\346\213\251:", 0));
        label_2->setText(QApplication::translate("MainWindow", "\347\273\210\347\202\271\351\200\211\346\213\251:", 0));
        to_getpath->setText(QApplication::translate("MainWindow", "\350\267\257\345\276\204\346\237\245\350\257\242", 0));
        recommend->setText(QApplication::translate("MainWindow", "\350\267\257\347\272\277\346\216\250\350\215\220", 0));
        comboBox_1->clear();
        comboBox_1->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\255\243\351\227\250", 0)
         << QApplication::translate("MainWindow", "\345\233\276\344\271\246\351\246\206", 0)
         << QApplication::translate("MainWindow", "\347\254\254\345\233\233\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\345\256\236\351\252\214\346\245\274", 0)
         << QApplication::translate("MainWindow", "\351\222\237\346\245\274", 0)
         << QApplication::translate("MainWindow", "\346\261\207\346\265\267", 0)
         << QApplication::translate("MainWindow", "\344\277\241\346\201\257\346\245\274", 0)
         << QApplication::translate("MainWindow", "\350\241\214\346\224\277\345\212\236\345\205\254\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\347\257\256\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\205\254\345\257\22311\345\271\242", 0)
         << QApplication::translate("MainWindow", "\344\276\247\351\227\250", 0)
         << QApplication::translate("MainWindow", "\347\257\256\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\350\266\263\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\205\254\345\257\22314\345\271\242", 0)
         << QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\205\254\345\257\22315\345\271\242", 0)
         << QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\205\254\345\257\22316\345\271\242", 0)
         << QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\205\254\345\257\22317\345\271\242", 0)
         << QApplication::translate("MainWindow", "\346\203\205\344\272\272\345\235\241", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\347\224\260\345\276\204\345\234\272", 0)
         << QApplication::translate("MainWindow", "\344\275\223\350\202\262\351\246\206", 0)
         << QApplication::translate("MainWindow", "\346\270\270\346\263\263\351\246\206", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\255\243\351\227\250", 0)
         << QApplication::translate("MainWindow", "\345\233\276\344\271\246\351\246\206", 0)
         << QApplication::translate("MainWindow", "\347\254\254\345\233\233\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\345\256\236\351\252\214\346\245\274", 0)
         << QApplication::translate("MainWindow", "\351\222\237\346\245\274", 0)
         << QApplication::translate("MainWindow", "\346\261\207\346\265\267", 0)
         << QApplication::translate("MainWindow", "\344\277\241\346\201\257\346\245\274", 0)
         << QApplication::translate("MainWindow", "\350\241\214\346\224\277\345\212\236\345\205\254\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\347\257\256\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\205\254\345\257\22311\345\271\242", 0)
         << QApplication::translate("MainWindow", "\344\276\247\351\227\250", 0)
         << QApplication::translate("MainWindow", "\347\257\256\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\350\266\263\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\205\254\345\257\22314\345\271\242", 0)
         << QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\205\254\345\257\22315\345\271\242", 0)
         << QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\205\254\345\257\22316\345\271\242", 0)
         << QApplication::translate("MainWindow", "\345\255\246\347\224\237\345\205\254\345\257\22317\345\271\242", 0)
         << QApplication::translate("MainWindow", "\346\203\205\344\272\272\345\235\241", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\347\224\260\345\276\204\345\234\272", 0)
         << QApplication::translate("MainWindow", "\344\275\223\350\202\262\351\246\206", 0)
         << QApplication::translate("MainWindow", "\346\270\270\346\263\263\351\246\206", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
