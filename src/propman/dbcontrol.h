#ifndef DBCONTROL_H
#define DBCONTROL_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QDateTime>
#include <QDate>
#include <vector>
#include "building.h"
#include "occupant.h"
#include "payment.h"



using namespace std;

class dbcontrol
{
public:
    dbcontrol();
    void setSteveMode(bool);
    bool getSteveMode();
    void addBuilding(building building);
    void addTenant(occupant);
    vector<building> getBuildings();
    building getBuildingByAddress(QString);
    building getBuildingById(int);
    void updateBuilding(building);
    void editBuildingById(int, building);
    void addNextOfKin(QString, QString, QString);
    int getNextOfKinId(QString, QString, QString);
    vector<occupant> getCurrentlyDue(QDate, QDate);
    void processPayments(vector<payment>);
};

#endif // DBCONTROL_H
