#ifndef GETINFDIALOG_H
#define GETINFDIALOG_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class getinfDialog;
}

class getinfDialog : public QDialog
{
    Q_OBJECT

public:
    explicit getinfDialog(QWidget *parent = 0);
    ~getinfDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::getinfDialog *ui;
};

#endif // GETINFDIALOG_H
