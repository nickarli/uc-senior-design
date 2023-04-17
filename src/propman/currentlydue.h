#ifndef CURRENTLYDUE_H
#define CURRENTLYDUE_H

#include <QMainWindow>
#include "dbcontrol.h"
#include <vector>
#include "occupant.h"
#include "payment.h"

namespace Ui {
class CurrentlyDue;
}

class CurrentlyDue : public QMainWindow
{
    Q_OBJECT

public:
    explicit CurrentlyDue(QWidget *parent = nullptr);
    ~CurrentlyDue();
private slots:
    void updateTable();
    void markAsPaid(occupant);
    void saveButton();
private:
    Ui::CurrentlyDue *ui;
};

#endif // CURRENTLYDUE_H
