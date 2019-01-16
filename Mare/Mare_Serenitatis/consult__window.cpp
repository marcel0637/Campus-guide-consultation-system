#include "consult__window.h"
#include "ui_consult__window.h"

Consult__window::Consult__window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Consult__window)
{
    ui->setupUi(this);
}

Consult__window::~Consult__window()
{
    delete ui;
}
