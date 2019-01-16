#ifndef CONSULT__WINDOW_H
#define CONSULT__WINDOW_H

#include <QWidget>

namespace Ui {
class Consult__window;
}

class Consult__window : public QWidget
{
    Q_OBJECT

public:
    explicit Consult__window(QWidget *parent = 0);
    ~Consult__window();

private:
    Ui::Consult__window *ui;
};

#endif // CONSULT__WINDOW_H
