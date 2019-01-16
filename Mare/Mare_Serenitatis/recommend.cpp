#include "recommend.h"
#include "ui_recommend.h"
#include <QPainter>
int _nowchoice;

Recommend::Recommend(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Recommend)
{
    _nowchoice=1;
    ui->setupUi(this);
}

Recommend::~Recommend()
{
    delete ui;
}
void Recommend::paintEvent(QPaintEvent *)
{
    QString text;
    QPainter painter(this);
    QPixmap p;
    QString showit=QString("%1%2%3%4%5").arg("当前位于第").arg(_nowchoice).arg("页...").arg(_nowchoice).arg("/10");
    if(_nowchoice==1){
        text="首先我们从正门开始";
        p.load("../src_1.png");
    }
    else if(_nowchoice==2){
        text="右转后,我们来到第二实验楼";
        p.load("../src_4.jpg");
    }
    else if(_nowchoice==3){
        text="左走一小段距离,我们来到图书馆";
        p.load("../src_2.jpg");
    }
    else if(_nowchoice==4){
        text="左走后转弯,我们来到汇海";
        p.load("../src_6.jpg");
    }
    else if(_nowchoice==5){
        text="从汇海尽头出来后,右走我们来到体育馆";
        p.load("../src_7.jpg");
    }
    else if(_nowchoice==6){
        text="接下来我们来到第二田径场";
        p.load("../src_15.jpg");
    }
    else if(_nowchoice==7){
        text="田径场直走我们来到情人坡";
        p.load("../src_17.jpg");
    }
    else if(_nowchoice==8){
        text="从情人坡过来我们看到足球场";
        p.load("../src_13.jpg");
    }
    else if(_nowchoice==9){
        text="接下来我们到达篮球场";
        p.load("../src_12.jpg");
    }
    else if(_nowchoice==10){
        text="然后我们从侧门离开";
        p.load("../src_18.jpg");
    }
    ui->input_Text->setText(text);
    painter.drawPixmap(70,80,500,400,p);
    ui->_showpos->setText(showit);
}

void Recommend::on_to_next_clicked()
{
    if(_nowchoice!=10){
        _nowchoice++;
        update();
    }
}

void Recommend::on_to_front_clicked()
{
    if(_nowchoice!=1){
        _nowchoice--;
        update();
    }
}
