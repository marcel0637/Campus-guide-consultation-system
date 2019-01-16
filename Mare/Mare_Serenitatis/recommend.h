#ifndef RECOMMEND_H
#define RECOMMEND_H

#include <QDialog>

namespace Ui {
class Recommend;
}

class Recommend : public QDialog
{
    Q_OBJECT

public:
    explicit Recommend(QWidget *parent = 0);
    ~Recommend();

private:
    Ui::Recommend *ui;
protected:
    void paintEvent(QPaintEvent *);
private slots:
    void on_to_next_clicked();
    void on_to_front_clicked();
};

#endif // RECOMMEND_H
