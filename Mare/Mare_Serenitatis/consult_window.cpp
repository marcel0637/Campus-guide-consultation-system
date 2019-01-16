#include "consult_window.h"
#include "ui_consult_window.h"
#include "mainwindow.h"
#include <QPainter>
consult_window::consult_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::consult_window)
{
    ui->setupUi(this);
}

consult_window::~consult_window()
{
    delete ui;
}
void consult_window::paintEvent(QPaintEvent *)
{
    QString text;
    QPainter painter(this);
    QPixmap p;
    if(MESSAGE__CHOICE=="正门")
    {
        text="气势恢宏的正门体现了学校的大气品质";
        p.load("../src_1.png");
    }
    else if(MESSAGE__CHOICE=="图书馆")
    {
        text="整体宏伟大气,古风蔚然的图书馆是莘莘学子获取知识的圣地";
        p.load("../src_2.jpg");
    }
    else if(MESSAGE__CHOICE=="第四教学楼")
    {
        text="第四教学楼是老师传播知识的圣地";
        p.load("../src_3.jpg");
    }
    else if(MESSAGE__CHOICE=="第二实验楼")
    {
        text="第二实验楼是学生感受动手乐趣的地方";
        p.load("../src_4.jpg");
    }
    else if(MESSAGE__CHOICE=="钟楼")
    {
        text="学校最接近天际的地方";
        p.load("../src_5.jpg");
    }
    else if(MESSAGE__CHOICE=="汇海")
    {
        text="欣赏美景的好地方";
        p.load("../src_6.jpg");
    }
    else if(MESSAGE__CHOICE=="信息楼")
    {
        text="信息交流的地方";
        p.load("../src_8.jpg");
    }
    else if(MESSAGE__CHOICE=="行政办公楼")
    {
        text="老师们的办公场所";
        p.load("../src_9.jpg");
    }
    else if(MESSAGE__CHOICE=="第一篮球场")
    {
        text="学生锻炼身体的地方";
        p.load("../src_10.jpg");
    }
    else if(MESSAGE__CHOICE=="侧门")
    {
        text="学生出去的门";
        p.load("../src_18.jpg");
    }
    else if(MESSAGE__CHOICE=="篮球场")
    {
        text="学生锻炼身体的地方";
        p.load("../src_12.jpg");
    }
    else if(MESSAGE__CHOICE=="足球场")
    {
        text="学生锻炼身体的地方";
        p.load("../src_13.jpg");
    }
    else if(MESSAGE__CHOICE=="情人坡")
    {
        text="学生放松身心的地方";
        p.load("../src_17.jpg");
    }
    else if(MESSAGE__CHOICE=="第二田径场")
    {
        text="学校集会的地方";
        p.load("../src_15.jpg");
    }
    else if(MESSAGE__CHOICE=="体育馆")
    {
        text="学生锻炼身体的地方";
        p.load("../src_7.jpg");
    }
    else
    {
        text="学生游泳的地方";
        p.load("../src_16.jpg");
    }
    ui->input_text->setText(text);
    painter.drawPixmap(30,45,400,300,p);
}
