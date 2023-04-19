#include "dbdialog.h"
#include "ui_dbdialog.h"

dbdialog::dbdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dbdialog)
{
    ui->setupUi(this);
}

dbdialog::~dbdialog()
{
    delete ui;
}
