#include "balancedialog.h"
#include "ui_balancedialog.h"

balancedialog::balancedialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::balancedialog)
{
    ui->setupUi(this);
}

balancedialog::~balancedialog()
{
    delete ui;
}
