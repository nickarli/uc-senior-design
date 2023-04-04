#ifndef CURRENTLYDUE_H
#define CURRENTLYDUE_H

#include <QMainWindow>

namespace Ui {
class CurrentlyDue;
}

class CurrentlyDue : public QMainWindow
{
    Q_OBJECT

public:
    explicit CurrentlyDue(QWidget *parent = nullptr);
    ~CurrentlyDue();

private:
    Ui::CurrentlyDue *ui;
};

#endif // CURRENTLYDUE_H
