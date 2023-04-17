#ifndef BUILDING_H
#define BUILDING_H
#include <QString>

using namespace std;

class building
{
public:
    building(int, QString, QString, QString, int, int, int);
    building(QString, QString, QString, int, int, int);
    void recordWater(int);
    void recordGas(int);
    int getId() const { return id; }
    QString getAddress() const { return address; }
    QString getCity() const { return city; }
    QString getState() const { return state; }
    int getUnits() const { return units; }
    int getWater() const { return water; }
    int getGas() const { return gas; }
private:
    int id;
    QString address;
    QString city;
    QString state;
    int units;
    int water;
    int gas;
};

#endif // BUILDING_H
