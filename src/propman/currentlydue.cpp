#include "currentlydue.h"
#include "ui_currentlydue.h"

CurrentlyDue::CurrentlyDue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CurrentlyDue)
{
    ui->setupUi(this);
    setFixedSize(CurrentlyDue::size());
    ui->tableWidget->setColumnWidth(0,40);
    ui->tableWidget->setColumnWidth(1,40);
    ui->tableWidget->setColumnWidth(2,210);
    ui->tableWidget->setColumnWidth(3,150);
    ui->tableWidget->setColumnWidth(4,85);
    ui->tableWidget->setColumnWidth(5,85);
    ui->tableWidget->setColumnWidth(6,95);
    ui->tableWidget->setColumnWidth(7,90);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    for(int i=0; i<ui->tableWidget->rowCount(); i++){
        QPushButton* btn = new QPushButton;
        ui->tableWidget->setCellWidget(i,0,(QWidget*)btn);
    }

}

CurrentlyDue::~CurrentlyDue()
{
    delete ui;
}
