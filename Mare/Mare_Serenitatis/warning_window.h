#ifndef WARNING_WINDOW_H
#define WARNING_WINDOW_H

#include <QDialog>

namespace Ui {
class warning_window;
}

class warning_window : public QDialog
{
    Q_OBJECT

public:
    explicit warning_window(QWidget *parent = 0);
    ~warning_window();

private:
    Ui::warning_window *ui;
};

#endif // WARNING_WINDOW_H
