#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QStackedWidget>
#include <QSqlDatabase>
#include <QSqlQuery>


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
    void testFunc();                // test function
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
