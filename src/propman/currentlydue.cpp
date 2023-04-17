#include "currentlydue.h"
#include "ui_currentlydue.h"





double runningTotal;
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
    runningTotal = 0;
    ui->collectionTotal->setText("$"+QString::number(runningTotal, 'f', 2));
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->colStartDate->setDate(QDate::currentDate());
    ui->colEndDate->setDate(QDate::currentDate().addDays(7));
    updateTable();
    connect(ui->colStartDate,SIGNAL(dateChanged(const QDate)), this,SLOT(updateTable()));
    connect(ui->colEndDate,SIGNAL(dateChanged(const QDate)), this,SLOT(updateTable()));
    connect(ui->colSaveButton, &QPushButton::released, this, &::CurrentlyDue::saveButton);
}

void CurrentlyDue::updateTable(){
    QDate start = ui->colStartDate->date();
    QDate end = ui->colEndDate->date();
    dbcontrol db;
    vector<occupant> list = db.getCurrentlyDue(start, end);

    for(int i=0; i<ui->tableWidget->rowCount(); i++){
        QDate date = QDate::fromString(ui->tableWidget->item(i,6)->text(), "yyyy-MM-dd");
        if(ui->tableWidget->item(i,0) && !(date >= start && date <= end)){
            ui->tableWidget->removeCellWidget(i,0);
            ui->tableWidget->item(i,1)->setText("");
            ui->tableWidget->item(i,2)->setText("");
            ui->tableWidget->item(i,3)->setText("");
            ui->tableWidget->item(i,4)->setText("");
            ui->tableWidget->item(i,5)->setText("");
            ui->tableWidget->item(i,6)->setText("");
            ui->tableWidget->item(i,7)->setText("");
        }
        else{
            continue;
        }
    }

    for(int i=0; i<list.size(); i++){
        QPushButton *btn = new QPushButton();


        ui->tableWidget->setCellWidget(i,0, btn);

        QObject::connect(btn, &QPushButton::clicked, [i, this, list, btn](){
            markAsPaid(list[i]);
            btn->setDisabled(true);
        });

        if(list[i].getBalance() > 0){
            ui->tableWidget->item(i, 1)->setText("Yes");
        }
        else{
            ui->tableWidget->item(i, 1)->setText("No");
        }
        ui->tableWidget->item(i, 2)->setText(list[i].getFirstName()+" "+list[i].getLastName());

        int index = list[i].getAptId().indexOf("-");
        int buildingid = list[i].getAptId().first(index).toInt();
        QString aptid = list[i].getAptId().last(list[i].getAptId().size() - index);
        ui->tableWidget->item(i, 3)->setText(db.getBuildingById(buildingid).getAddress()+" "+aptid);
        ui->tableWidget->item(i, 4)->setText("$"+QString::number(list[i].getRent(), 'f', 2));
        ui->tableWidget->item(i, 5)->setText("$"+QString::number(list[i].getBalance(), 'f', 2));
        ui->tableWidget->item(i, 6)->setText(list[i].getPaidThruDate().toString("yyyy-MM-dd"));
        ui->tableWidget->item(i, 7)->setText(list[i].getFrequency());


    }
}

vector<payment> payments;

void CurrentlyDue::markAsPaid(occupant occupant){
    if(occupant.getBalance()>0){
        // popup asking for amount to pay

    }
    else{
        // just add the rent baby
        //payment(int occupantId, QString aptId, double paymentAmt, QDate date)
        payment payment(occupant.getId(), occupant.getAptId(), occupant.getRent(), occupant.getPaidThruDate());
        payments.push_back(payment);
        runningTotal+=occupant.getRent();
        ui->collectionTotal->setText("$"+QString::number(runningTotal, 'f', 2));
    }

}

void CurrentlyDue::saveButton(){
    dbcontrol db;
    db.processPayments(payments);
}

CurrentlyDue::~CurrentlyDue()
{
    delete ui;
}
