#include "getinfdialog.h"
#include "ui_getinfdialog.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "consult_window.h"
getinfDialog::getinfDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::getinfDialog)
{
    ui->setupUi(this);
}

getinfDialog::~getinfDialog()
{
    delete ui;
}
//确认按钮的设置
void getinfDialog::on_pushButton_clicked()
{
    getinfDialog::accept();/*
    MESSAGE__CHOICE=ui->set_scince->text();
    if(MESSAGE__CHOICE==""){
        QMessageBox::about(this,"Warning","请输入正确的内容");
    }
    else {
        consult_window *nextwindow=new consult_window ;
        nextwindow->show();
    }*/
}
//取消按钮的设置
void getinfDialog::on_pushButton_2_clicked()
{
    getinfDialog::reject();
}
