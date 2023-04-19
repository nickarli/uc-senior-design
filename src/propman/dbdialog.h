#ifndef DBDIALOG_H
#define DBDIALOG_H

#include <QDialog>

namespace Ui {
class dbdialog;
}

class dbdialog : public QDialog
{
    Q_OBJECT

public:
    explicit dbdialog(QWidget *parent = nullptr);
    ~dbdialog();

private:
    Ui::dbdialog *ui;
};

#endif // DBDIALOG_H
