#include "mainwindow.h"
#include "./ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(size());

    dbcontrol db;
    if(db.getSteveMode()){
        steveMode();
        ui->actionSteve_Mode->setChecked(true);
    }
    setDefaults();
    connect(ui->exitButton, &QPushButton::released, this, &::MainWindow::exitButton);
    connect(ui->QpBalanceSheetButton, &QPushButton::released, this, &::MainWindow::quickPrintBalanceSheet);
    connect(ui->QpColListButton, &QPushButton::released, this, &::MainWindow::quickPrintCollectionList);
    connect(ui->tenantInfoButton, &QPushButton::released, this, &::MainWindow::tenantInfoButton);
    connect(ui->mainMenuButton1, &QPushButton::released, this, &::MainWindow::mainMenuButton);
    connect(ui->mainMenuButton2, &QPushButton::released, this, &::MainWindow::mainMenuButton);
    connect(ui->mainMenuButton3, &QPushButton::released, this, &::MainWindow::mainMenuButton);
    connect(ui->mainMenuButton4, &QPushButton::released, this, &::MainWindow::mainMenuButton);
    connect(ui->resourcesButton, &QPushButton::released, this, &::MainWindow::resourcesButton);
    connect(ui->reportsButton, &QPushButton::released, this, &::MainWindow::reportsButton);
    connect(ui->currentlyDueButton, &QPushButton::released, this, &::MainWindow::currentlyDueButton);
    connect(ui->buildingsButton, &QPushButton::released, this, &::MainWindow::buildingsButton);
    connect(ui->addBuildingButton, &QPushButton::released, this, &::MainWindow::addBuildingButton);
    connect(ui->editBuildingsButton, &QPushButton::released, this, &::MainWindow::editBuildingButton);
    connect(ui->buildingsBackButton, &QPushButton::released, this, &::MainWindow::buildingsBackButton);
    connect(ui->buildingsBackButton_3, &QPushButton::released, this, &::MainWindow::buildingsBackButton);
    connect(ui->addBuildingsSaveButton, &QPushButton::released, this, &::MainWindow::saveNewBuilding);
    connect(ui->editBuildingsSaveButton, &QPushButton::released, this, &::MainWindow::saveEditedBuilding);
    connect(ui->actionSteve_Mode , &QAction::triggered, this, &::MainWindow::steveMode);
    connect(ui->newTenantButton, &QPushButton::released, this, &::MainWindow::newTenantButton);
    connect(ui->tenantInfoBackButton1, &QPushButton::released, this, &::MainWindow::tenantInfoBackButton);
    connect(ui->newTenantBuildingCombo,SIGNAL(currentTextChanged(const QString)), this,SLOT(refreshNewTenantAptList(const QString)));
    connect(ui->editBuildingCombo,SIGNAL(currentTextChanged(const QString)), this,SLOT(editBuildingSelected(const QString)));
    connect(ui->tenantInfoAddSubmit, &QPushButton::released, this, &::MainWindow::saveNewTenant);
    connect(ui->tenantInfoBackButton1, &QPushButton::released, this, &::MainWindow::resetAllFields);
    connect(ui->actionDatabase, &QAction::triggered, this, &::MainWindow::openDbSettings);







    //tenantInfoAddSubmit
}


void MainWindow::openDbSettings(){
    dbdialog *d = new dbdialog(this);
    d->show();
}

void MainWindow::refreshNewTenantAptList(const QString thing){
    //ui->pushButton->setText(thing);

}

void MainWindow::setDefaults(){
    resetAllFields();
    ui->mainWidgets->setCurrentWidget(ui->mainmenu);
    ui->buildingsWidget->setCurrentWidget(ui->mainBuildingsWidget);
    ui->tenantInfoWidget->setCurrentWidget(ui->tenantInfoMainWidget);
}

QDate MainWindow::paidThruCalc(QDate lastPaid, QString freq){
    if(freq=="Weekly"){
        return lastPaid.addDays(7);
    }
    else if(freq=="Biweekly"){
        return lastPaid.addDays(14);
    }
    else if(freq=="Monthly"){
        return lastPaid.addMonths(1);
    }
    return QDate::currentDate();
}

void MainWindow::saveNewTenant(){
    dbcontrol db;
    int nokId;
    QString aptId, first, last, cell, employer, empPhone, dueDay, freq, notes, nokName, nokRelation, nokPhone, building, aptNum;
    QDate moveIn, paidThru, lastPaid;
    double deposit, rent, balance;

    nokName = ui->newNokName->text();
    nokRelation = ui->newNokRelation->text();
    nokPhone = ui->newNokPhone->text();
    db.addNextOfKin(nokName, nokRelation, nokPhone);
    building = ui->newTenantBuildingCombo->currentText();
    aptNum = ui->newApartmentNum->text();
    int index = building.indexOf(": ");


    first = ui->newFirstName->text();
    last = ui->newLastName->text();
    cell = ui->newPhone->text();
    employer = ui->newEmployer->text();
    empPhone = ui->newEmployerPhone->text();
    dueDay = ui->newDueDayCombo->currentText();
    freq = ui->newFreqCombo->currentText();
    notes = ui->newNotes->toPlainText();
    aptId = building.first(index)+"-"+aptNum;
    deposit = ui->newDeposit->text().toDouble();
    rent = ui->newRent->text().toDouble();
    balance = 0.00;
    moveIn = ui->moveInDate->date();
    lastPaid = moveIn;
    paidThru = paidThruCalc(lastPaid, freq);
    nokId = db.getNextOfKinId(nokName, nokRelation, nokPhone);
    occupant occupant(aptId, first, last, employer, empPhone, moveIn, deposit, rent, dueDay, freq, nokId, cell, paidThru, lastPaid, balance, notes);
    db.addTenant(occupant);

    // saved
    ui->tenantInfoAddSubmit->setText("Saved!");
    ui->newFirstName->setDisabled(true);
    ui->newLastName->setDisabled(true);
    ui->newPhone->setDisabled(true);
    ui->newNokName->setDisabled(true);
    ui->newNokRelation->setDisabled(true);
    ui->newNokPhone->setDisabled(true);
    ui->newTenantBuildingCombo->setDisabled(true);
    ui->newApartmentNum->setDisabled(true);
    ui->newEmployer->setDisabled(true);
    ui->newEmployerPhone->setDisabled(true);
    ui->newDeposit->setDisabled(true);
    ui->newRent->setDisabled(true);
    ui->moveInDate->setDisabled(true);
    ui->newFreqCombo->setDisabled(true);
    ui->newNotes->setDisabled(true);









}

void MainWindow::editBuildingSelected(const QString idAddr){
    if(ui->editBuildingCombo->currentText() != ""){
        ui->editBuildingsSaveButton->setText("Save");
        ui->editBuildingAddr->setDisabled(false);
        ui->editBuildingCity->setDisabled(false);
        ui->editBuildingState->setDisabled(false);
        ui->editBuildingNumUnits->setDisabled(false);
        ui->editBuildingWater->setDisabled(false);
        ui->editBuildingGas->setDisabled(false);
        dbcontrol db;

        int index = idAddr.indexOf(":");
        int id = idAddr.first(index).toInt();

        building building = db.getBuildingById(id);
        ui->editBuildingAddr->setText(building.getAddress());
        ui->editBuildingCity->setText(building.getCity());
        ui->editBuildingState->setCurrentText(building.getState());
        ui->editBuildingNumUnits->setValue(building.getUnits());
    }
    else{
        disableEditBuildingFields();
    }

}

// TODO: turn em into printing functions
void MainWindow::quickPrintBalanceSheet(){
    ui->QpBalanceSheetButton->setText("gotcha");
}
void MainWindow::quickPrintCollectionList(){
    ui->QpColListButton->setText("gotcha");
}

bool steveModeVar = false;
void MainWindow::steveMode(){
    dbcontrol db;
    if(!steveModeVar){
        ui->exitButton->setStyleSheet("QPushButton{font-size: 12px; font-family: MS Sans Serif; text-align: left;}");
        ui->exitButton->setText("Leave and go drink a\nBeer.");
        db.setSteveMode(true);
        steveModeVar = true;
    }
    else{
        ui->exitButton->setStyleSheet("QPushButton{font-size: 20px; font-family: Segoe UI; text-align: center;}");
        ui->exitButton->setText("Exit");
        db.setSteveMode(false);
        steveModeVar = false;
    }
}

void MainWindow::exitButton(){
    ::QCoreApplication::quit();
}

void MainWindow::newTenantButton(){
//tenantInfo
    ui->newTenantBuildingCombo->clear();
    ui->tenantInfoWidget->setCurrentWidget(ui->newTenantWidget);
    dbcontrol db;
    vector<building> list = db.getBuildings();
    ui->newTenantBuildingCombo->addItem("");
    for(int i=0; i<list.size(); i++){
        QString entry = QString::number(list[i].getId())+": "+list[i].getAddress();
        ui->newTenantBuildingCombo->addItem(entry);
    }

}

void MainWindow::tenantInfoBackButton(){
    ui->tenantInfoWidget->setCurrentWidget(ui->tenantInfoMainWidget);
}

void MainWindow::disableEditBuildingFields(){
    ui->editBuildingAddr->setDisabled(true);
    ui->editBuildingCity->setDisabled(true);
    ui->editBuildingState->setDisabled(true);
    ui->editBuildingNumUnits->setDisabled(true);
    ui->editBuildingWater->setDisabled(true);
    ui->editBuildingGas->setDisabled(true);
}

void MainWindow::editBuildingButton(){
    disableEditBuildingFields();
    ui->buildingsWidget->setCurrentWidget(ui->editBuildingsWidget);
    ui->editBuildingCombo->addItem("");

    dbcontrol db;
    vector<building> list = db.getBuildings();
    for(int i=0; i<list.size(); i++){
        ui->editBuildingCombo->addItem(QString::number(list[i].getId())+": "+list[i].getAddress());
    }
}

void MainWindow::saveEditedBuilding(){
    QString addr, city, state;
    int units, water, gas;
    addr = ui->editBuildingAddr->text();
    city = ui->editBuildingCity->text();
    state = ui->editBuildingState->currentText();
    units = ui->editBuildingNumUnits->text().toInt();
    water = ui->editBuildingWater->text().toInt();
    gas = ui->editBuildingGas->text().toInt();
    building building(addr, city, state, units, water, gas);
    dbcontrol db;
    QString selected = ui->editBuildingCombo->currentText();
    int index = selected.indexOf(":");
    int id = selected.first(index).toInt();
    db.editBuildingById(id, building);

    // saved
    ui->editBuildingsSaveButton->setText("Saved!");
    disableEditBuildingFields();


}

void MainWindow::saveNewBuilding(){
    QString addr, city, state;
    int units, water, gas;
    addr = ui->addBuildingAddr->text();
    city = ui->addBuildingCity->text();
    state = ui->addBuildingState->currentText();
    units = ui->addBuildingNumUnits->text().toInt();
    water = ui->addBuildingWater->text().toInt();
    gas = ui->addBuildingGas->text().toInt();
    building building(addr, city, state, units, water, gas);
    dbcontrol db;
    db.addBuilding(building);

    // saved
    ui->addBuildingsSaveButton->setText("Saved!");
    ui->addBuildingAddr->setDisabled(true);
    ui->addBuildingCity->setDisabled(true);
    ui->addBuildingState->setDisabled(true);
    ui->addBuildingNumUnits->setDisabled(true);
    ui->addBuildingWater->setDisabled(true);
    ui->addBuildingGas->setDisabled(true);

//

}

void MainWindow::buildingsBackButton(){
    ui->buildingsWidget->setCurrentWidget(ui->mainBuildingsWidget);
    resetAllFields();

}

void MainWindow::resetAllFields(){
    // add building
    ui->addBuildingsSaveButton->setText("Save");
    ui->addBuildingAddr->setDisabled(false);
    ui->addBuildingCity->setDisabled(false);
    ui->addBuildingState->setDisabled(false);
    ui->addBuildingNumUnits->setDisabled(false);
    ui->addBuildingWater->setDisabled(false);
    ui->addBuildingGas->setDisabled(false);
    ui->addBuildingAddr->setText("");
    ui->addBuildingCity->setText("");
    ui->addBuildingNumUnits->setValue(0);
    ui->addBuildingWater->setText("");
    ui->addBuildingGas->setText("");

    // edit building
    ui->editBuildingsSaveButton->setText("Save");
    disableEditBuildingFields();
    ui->editBuildingAddr->setText("");
    ui->editBuildingCity->setText("");
    ui->editBuildingNumUnits->setValue(0);
    ui->editBuildingWater->setText("");
    ui->editBuildingGas->setText("");

    //add tenant
    ui->tenantInfoAddSubmit->setText("Save");
    ui->newFirstName->setDisabled(false);
    ui->newLastName->setDisabled(false);
    ui->newPhone->setDisabled(false);
    ui->newNokName->setDisabled(false);
    ui->newNokRelation->setDisabled(false);
    ui->newNokPhone->setDisabled(false);
    ui->newTenantBuildingCombo->setDisabled(false);
    ui->newApartmentNum->setDisabled(false);
    ui->newEmployer->setDisabled(false);
    ui->newEmployerPhone->setDisabled(false);
    ui->newDeposit->setDisabled(false);
    ui->newRent->setDisabled(false);
    ui->moveInDate->setDisabled(false);
    ui->newFreqCombo->setDisabled(false);
    ui->newNotes->setDisabled(false);
    ui->newFirstName->setText("");
    ui->newLastName->setText("");
    ui->newPhone->setText("");
    ui->newNokName->setText("");
    ui->newNokRelation->setText("");
    ui->newNokPhone->setText("");
    ui->newTenantBuildingCombo->setCurrentText("");
    ui->newApartmentNum->setText("");
    ui->newEmployer->setText("");
    ui->newEmployerPhone->setText("");
    ui->newDeposit->setText("");
    ui->newRent->setText("");
    ui->moveInDate->setDate(QDate::currentDate());
    ui->newFreqCombo->setCurrentText("Weekly");
    ui->newNotes->setPlainText("");


}

void MainWindow::addBuildingButton(){
    ui->buildingsWidget->setCurrentWidget(ui->addBuildingWidget);
}

void MainWindow::tenantInfoButton(){
    ui->mainWidgets->setCurrentWidget(ui->tenantInfo);
}

void MainWindow::mainMenuButton(){
    ui->mainWidgets->setCurrentWidget(ui->mainmenu);
    setDefaults();
}

void MainWindow::resourcesButton(){
    ui->mainWidgets->setCurrentWidget(ui->resources);
}
void MainWindow::reportsButton(){
    ui->mainWidgets->setCurrentWidget(ui->reports);
}


void MainWindow::currentlyDueButton(){
    CurrentlyDue *c = new CurrentlyDue(this);
    c->show();
}

void MainWindow::buildingsButton(){
    ui->mainWidgets->setCurrentWidget(ui->buildings);
}


MainWindow::~MainWindow()
{
    delete ui;
}

