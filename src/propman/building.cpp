#include "building.h"

building::building(int bId, QString bAddr, QString bCity, QString bState, int bUnits, int bWater, int bGas)
{
    id = bId;
    address = bAddr;
    city = bCity;
    state = bState;
    units = bUnits;
    water = bWater;
    gas = bGas;
}

building::building(QString bAddr, QString bCity, QString bState, int bUnits, int bWater, int bGas)
{
    address = bAddr;
    city = bCity;
    state = bState;
    units = bUnits;
    water = bWater;
    gas = bGas;
}



void recordWater(int){

}

void recordGas(int){

}




/*
public:
    building();
    void recordWater(int);
    void recordGas(int);

private:
    int id;
    string address;
    string city;
    string state;
    int units;
    int water;
    int gas;
*/
