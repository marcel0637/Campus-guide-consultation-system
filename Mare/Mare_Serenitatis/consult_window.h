#ifndef CONSULT_WINDOW_H
#define CONSULT_WINDOW_H

#include <QDialog>

namespace Ui {
class consult_window;
}

class consult_window : public QDialog
{
    Q_OBJECT

public:
    explicit consult_window(QWidget *parent = 0);
    ~consult_window();

private:
    Ui::consult_window *ui;
protected:
    void paintEvent(QPaintEvent *);
};

#endif // CONSULT_WINDOW_H
