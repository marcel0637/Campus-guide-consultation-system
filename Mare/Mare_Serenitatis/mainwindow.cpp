#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "consult_window.h"
#include "recommend.h"
#include <QPainter>
#include <QFile>
#include <QInputDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>
#include <QGraphicsItem>
//全局变量的声明
#define inf 0x3f3f3f3f
QString MESSAGE__CHOICE;
QString strList[60];
QVector<int>W;
QPoint Point[60];//存储景点坐标
int dis[60][60];//A->B的距离
int pre[60][60];//A->B的前驱
int st=0,ed=0;
//最短路径记录
void MainWindow::floyd()
{
    for(int k=0;k<60;k++)
        for(int i=0;i<60;i++)
            for(int j=0;j<60;j++)
                if(dis[i][k]!=inf&&dis[k][j]!=inf&&dis[i][k]+dis[k][j]<dis[i][j]){
                    dis[i][j]=dis[i][k]+dis[k][j];
                    pre[i][j]=pre[k][j];
                }
}

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    int now=0;
    //读入景点名称及坐标
    QFile file("../map.txt");
    QTextStream inn(&file);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while(!inn.atEnd())
        {
            strList[now]=inn.readLine();
            Point[now].setX((inn.readLine()).toInt());
            Point[now].setY((inn.readLine()).toInt());
            now++;
        }
    }
    //距离初始化
    for(int i=0;i<60;i++)
        for(int j=0;j<60;j++){
            if(i==j) dis[i][j]=0;
            else dis[i][j]=inf;
            pre[i][j]=i;
        }
    //读入边
    QFile fIle("../coordinate.txt");
    QTextStream in(&fIle);
    if (fIle.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while(!in.atEnd())
        {
            int u=in.readLine().toInt();
            int v=in.readLine().toInt();
            int w=in.readLine().toInt();
            dis[u][v]=w;
            dis[v][u]=w;
        }
    }

    floyd();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//坐标系及地图,上边框的绘制
void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    //设置坐标轴长度
    const int limit_x = 1250;
    const int limit_y = 700;
    const int gap = 100;
    //背景设置
    painter.drawPixmap(60,gap+20,1230,710,QPixmap("../maps_2.png"));
    /*
    QPainter painter(this);
    painter.drawLine(QPoint(0,0),QPoint(100,100));
    //创建画笔
    //参数:画刷,线宽,画笔风格,画笔端点,画笔端点风格,画笔连接风格
    QPen pen(Qt::green, 5, Qt::DotLine,Qt::RoundCap,Qt::RoundJoin );
    //使用画笔
    painter.setPen(pen);
    QRectF rectangle(70.0,40.0,80.0,60.0);
    int startAngle = 30*16;
    int spanAngle = 120*16;
    //绘制圆弧
    painter.drawArc(rectangle,startAngle,spanAngle);
    //重新设置画笔
    pen.setWidth(1);
    pen.setStyle(Qt::SolidLine);
    painter.setPen(pen);
    //绘制一个矩形
    painter.drawRect(160,20,50,40);
    //创建画刷
    QBrush brush(QColor(0,0,255),Qt::Dense4Pattern);
    //使用画刷
    painter.setBrush(brush);
    //绘制椭圆
    painter.drawEllipse(220,20,50,50);
    //重新使用笔刷
    painter.setBrush(brush);
    //定义4个点
    static const QPointF points[4]={
        QPointF(270.0,80.0),
        QPointF(290.0,10.0),
        QPointF(350.0,30.0),
        QPointF(390.0,70.0)
    };
    //使用4个点绘制多边形
    painter.drawPolygon(points,4);
    */
    //设置画笔的规格
    QPen pen(Qt::darkMagenta, 2, Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin );
    //使用画笔
    painter.setPen(pen);
    //创建画刷
    QBrush brush(QColor(0,0,255),Qt::Dense4Pattern);
    //使用画刷
    painter.setBrush(brush);
    //绘制上边框
    painter.drawRect(0,0,limit_x+50,16);
    //改变画笔格式
    pen.setStyle(Qt::DotLine);
    pen.setColor(QColor(238, 207, 161));
    painter.setPen(pen);
    //绘制上边框的虚线
    painter.drawLine(QPoint(25,16),QPoint(25,gap));
    painter.drawLine(QPoint(295,16),QPoint(295,gap));
    painter.drawLine(QPoint(990,16),QPoint(990,gap));
    painter.drawLine(QPoint(1270,16),QPoint(1270,gap));
    //还原画笔格式
    pen.setStyle(Qt::SolidLine);
    pen.setColor(Qt::darkMagenta);
    painter.setPen(pen);
    //绘制X轴
   // for(int i=gap;i<=gap+limit_y;i+=50)
     //   painter.drawLine(QPoint(25,i),QPoint(limit_x+20,i));
    painter.drawLine(QPoint(25,gap),QPoint(limit_x+20,gap));
    //绘制Y轴
    //for(int i=25;i<=20+limit_x;i+=50)
    //    painter.drawLine(QPoint(i,gap),QPoint(i,gap+limit_y));
    painter.drawLine(QPoint(25,gap),QPoint(25,gap+limit_y));
    int i;
    pen.setColor(Qt::darkBlue);
    painter.setPen(pen);
    //绘制X轴上的数字
    for(i=50;i<=limit_x;i+=50)
    {
        painter.drawText(i-5,gap+17,QString::number(i));
    }
    //绘制Y轴上的数字
    for(i=50;i<=limit_y;i+=50)
    {
        painter.drawText(25+6,gap+i,QString::number(i));
    }
    pen.setColor(Qt::red);
    pen.setWidth(5);
    painter.setPen(pen);
    for(int i=1;i<W.size();i++)
    {
        painter.drawLine(Point[W[i-1]],Point[W[i]]);
    }
    //画点
    /*
    pen.setWidth(10);
    pen.setColor(Qt::red);
    painter.setPen(pen);
    for(int i=0;i<21;i++)
    painter.drawPoint(Point[i]);
    pen.setColor(Qt::green);
    painter.setPen(pen);
    for(int i=21;i<59;i++)
        painter.drawPoint(Point[i]);*/

}

//点击景点查询触发函数
void MainWindow::on_pushButton_clicked()
{
    bool ok;
    //读入景点列表
    QStringList slist;
    for(int i=0;i<9;i++)
        slist<<strList[i];
    for(int i=10;i<13;i++)
        slist<<strList[i];
    for(int i=17;i<21;i++)
        slist<<strList[i];
    W.clear(); update();
    MESSAGE__CHOICE=QInputDialog::getItem(this,"景点查询","请选择您想查询的景点:",slist,0,false,&ok,Qt::Dialog);
    if(ok)
    {
        if(MESSAGE__CHOICE==""){
             QMessageBox::about(this,"Warning","请输入正确的内容");
        }
        else {
            consult_window *nextwindow=new consult_window ;
            nextwindow->show();
        }
    }
}

//路径查询函数
void MainWindow::on_to_getpath_clicked()
{
    st=ui->comboBox_1->currentIndex();
    ed=ui->comboBox_2->currentIndex();
    int now=ed;
    W.clear();
    W.push_back(ed);
    while(pre[st][now]!=st)
    {
        now=pre[st][now];
        W.push_back(now);
    }
    W.push_back(st);
    update();
}

//获取推荐路径
void MainWindow::getrecommend()
{
    W.clear();
    W.push_back(0);  W.push_back(24);
    W.push_back(25); W.push_back(28);
    W.push_back(27); W.push_back(31);
    W.push_back(32); W.push_back(33);
    W.push_back(46); W.push_back(47);
    W.push_back(51); W.push_back(45);
    W.push_back(44); W.push_back(43);
    W.push_back(42); W.push_back(37);
    W.push_back(41); W.push_back(57);
    W.push_back(40); W.push_back(39);
    W.push_back(38); W.push_back(36);
    W.push_back(10);
    update();
}

//路线推荐函数
void MainWindow::on_recommend_clicked()
{
    getrecommend();
    Recommend *nextwindow= new Recommend ;
    nextwindow -> show();
}
