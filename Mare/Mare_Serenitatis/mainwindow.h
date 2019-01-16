#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
extern QString MESSAGE__CHOICE;
extern QString strList[60];//存储景点名称
extern QPoint Point[60];//存储景点坐标
extern QVector<int>W;
extern int st,ed;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
protected:
    void paintEvent(QPaintEvent *);
protected:
    void floyd();
protected:
    void getrecommend();
private slots:
    void on_pushButton_clicked();
    void on_to_getpath_clicked();
    void on_recommend_clicked();
};

#endif // MAINWINDOW_H
