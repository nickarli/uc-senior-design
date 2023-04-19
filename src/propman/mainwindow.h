#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QStackedWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QComboBox>
#include <iostream>
#include <string>
#include <vector>
#include "building.h"
#include "currentlydue.h"
#include "occupant.h"
#include "dbcontrol.h"
#include <QElapsedTimer>
#include "dbdialog.h"
using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void exitButton();
    void quickPrintBalanceSheet();
    void quickPrintCollectionList();
    void tenantInfoButton();
    void mainMenuButton();
    void resourcesButton();
    void reportsButton();
    void currentlyDueButton();
    void buildingsButton();
    void addBuildingButton();
    void buildingsBackButton();
    void saveNewBuilding();
    void saveEditedBuilding();
    void editBuildingButton();
    void steveMode();
    void newTenantButton();
    void tenantInfoBackButton();
    void refreshNewTenantAptList(const QString);
    void resetAllFields();
    void editBuildingSelected(const QString);
    void setDefaults();
    void disableEditBuildingFields();
    void saveNewTenant();
    QDate paidThruCalc(QDate, QString);
    void openDbSettings();
    void addWaterEntry();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
