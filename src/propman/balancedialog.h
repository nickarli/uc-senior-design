#ifndef BALANCEDIALOG_H
#define BALANCEDIALOG_H

#include <QDialog>

namespace Ui {
class balancedialog;
}

class balancedialog : public QDialog
{
    Q_OBJECT

public:
    explicit balancedialog(QWidget *parent = nullptr);
    ~balancedialog();

private:
    Ui::balancedialog *ui;
};

#endif // BALANCEDIALOG_H
