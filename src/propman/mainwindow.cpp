#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "currentlydue.h"
#include "dbcontrol.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{



    ui->setupUi(this);
    setFixedSize(size());
    mainMenuButton();
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
    connect(ui->testButton, &QPushButton::released, this, &::MainWindow::testFunc);
}


void MainWindow::testFunc(){
    dbcontrol db;
    db.doTheThing();

    ui->testButton->setText("Leave and go drink a\nBeer.");
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
    if(!steveModeVar){
        ui->exitButton->setStyleSheet("QPushButton{font-size: 12px; font-family: MS Sans Serif; text-align: left;}");
        ui->exitButton->setText("Leave and go drink a\nBeer.");
        steveModeVar = true;
    }
    else{
        ui->exitButton->setStyleSheet("QPushButton{font-size: 20px; font-family: Segoe UI; text-align: center;}");
        ui->exitButton->setText("Exit");
        steveModeVar = false;
    }
}

void MainWindow::exitButton(){
    ::QCoreApplication::quit();
}

void MainWindow::editBuildingButton(){
    ui->buildingsWidget->setCurrentWidget(ui->editBuildingsWidget);
}

void MainWindow::saveEditedBuilding(){

}

void MainWindow::saveNewBuilding(){

}

void MainWindow::buildingsBackButton(){
    ui->buildingsWidget->setCurrentWidget(ui->mainBuildingsWidget);
}

void MainWindow::addBuildingButton(){
    ui->buildingsWidget->setCurrentWidget(ui->addBuildingWidget);
}

void MainWindow::tenantInfoButton(){
    ui->mainWidgets->setCurrentWidget(ui->tenantInfo);
}

void MainWindow::mainMenuButton(){
    ui->mainWidgets->setCurrentWidget(ui->mainmenu);
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

