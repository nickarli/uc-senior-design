#include "dbcontrol.h"
#include <iostream>

using namespace std;





dbcontrol::dbcontrol()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("propman");
    // get creds from user stop hardcoding u idiot
    db.setUserName("root");
    db.setPassword("G*2J:x&B");
    bool ok = db.open();

}

void dbcontrol::setSteveMode(bool ahh){
    QSqlQuery query;
    query.exec("UPDATE params SET paramsval = '"+QString::number(ahh)+"' WHERE paramstype='STEVEMODE'");
//
}

bool dbcontrol::getSteveMode(){
    QSqlQuery query;
    if(query.prepare(QString("SELECT paramsval FROM params WHERE paramstype='STEVEMODE'"))){
        if(query.exec()){
            while(query.next()){
                return query.value(0).toBool();
            }
        }
    }
}

vector<occupant> dbcontrol::getCurrentlyDue(QDate start, QDate end){
    vector<occupant> list;
    QSqlQuery query;
    if(query.prepare(QString("SELECT occupantid, occupantaptid, occupantfirstname, occupantlastname, occupantrentamount, occupantbalanceamt, occupantpaidthru, occupantpaymentfreq FROM occupant WHERE occupantpaidthru BETWEEN '"+start.toString("yyyy-MM-dd")+"' AND '"+end.toString("yyyy-MM-dd")+"'"))){
        if(query.exec()){
            while(query.next()){
                occupant occupant(query.value(0).toInt(), query.value(1).toString(), query.value(2).toString(), query.value(3).toString(), query.value(4).toDouble(), query.value(5).toDouble(), QDate::fromString(query.value(6).toString(),"yyyy-MM-dd"), query.value(7).toString());
                list.push_back(occupant);
            }
        }
    }
    return list;
}

void dbcontrol::processPayments(vector<payment> payments){
    for(int i=0; i<payments.size(); i++){
        QSqlQuery query;
        query.exec("INSERT INTO payment (paymentoccupantid, paymentapartmentid, paymentamount, paymentdate) VALUES ('"+QString::number(payments[i].getPaymentOccupantId())+"', '"+payments[i].getPaymentAptId()+"', '"+QString::number(payments[i].getPaymentAmount())+"', '"+payments[i].getPaymentDate().toString("yyyy-MM-dd")+"')");

    }
}

void dbcontrol::addBuilding(building building){

    QString addr = building.getAddress();
    int index = addr.indexOf(" ");
    QString addrNum = addr.first(index);
    QString street = addr.last(addr.size() - index - 1);

    QSqlQuery query;
    query.exec("INSERT INTO building (buildingstreetnum, buildingstreetname, buildingcity, buildingstate, buildingisactive, buildingunits) VALUES ('"+addrNum+"', '"+street+"', '"+building.getCity()+"', '"+building.getState()+"', '1', '"+QString::number(building.getUnits())+"')");

}

void dbcontrol::addTenant(occupant occupant){
    QSqlQuery query;
    query.exec("INSERT INTO occupant (occupantaptid, occupantfirstname, occupantlastname, occupantemployer, occupantemployerphone, occupantmoveindate, occupantdeposit, occupantrentamount, occupantdueday, occupantpaymentfreq, occupantnokid, occupantcell, occupantpaidthru, occupantlastpaid, occupantbalanceamt, occupantnotes) VALUES ('"+occupant.getAptId()+"', '"+occupant.getFirstName()+"', '"+occupant.getLastName()+"', '"+occupant.getEmployer()+"', '"+occupant.getEmployerPhone()+"', '"+occupant.getMoveInDate().toString("yyyy-MM-dd")+"', '"+QString::number(occupant.getDeposit())+"', '"+QString::number(occupant.getRent())+"', '"+occupant.getDueDay()+"', '"+occupant.getFrequency()+"', '"+QString::number(occupant.getNokId())+"', '"+occupant.getCell()+"', '"+occupant.getPaidThruDate().toString("yyyy-MM-dd")+"', '"+occupant.getLastPaidDate().toString("yyyy-MM-dd")+"', '"+QString::number(occupant.getBalance())+"', '"+occupant.getNotes()+"')");

}

void dbcontrol::addNextOfKin(QString name, QString relation, QString phone){
    int index = name.indexOf(" ");
    QString first = name.first(index);
    QString last = name.last(name.size() - index - 1);
    QSqlQuery query;
    query.exec("INSERT INTO nextofkin (nextofkinfirstname, nextofkinlastname, nextofkinphone, nextofkinrelationship) VALUES ('"+first+"', '"+last+"', '"+phone+"', '"+relation+"')");
}

int dbcontrol::getNextOfKinId(QString name, QString relation, QString phone){
    int index = name.indexOf(" ");
    QString first = name.first(index);
    QString last = name.last(name.size() - index - 1);
    QSqlQuery query;
    if(query.prepare(QString("SELECT nextofkinid FROM nextofkin WHERE nextofkinfirstname='"+first+"', nextofkinlastname='"+last+"', nextofkinphone='"+phone+"', nextofkinrelationship='"+relation+"'"))){
        if(query.exec()){
            while(query.next()){
                return query.value(0).toInt();
            }
        }
    }
}



vector<building> dbcontrol::getBuildings(){
    vector<building> list;
    QSqlQuery query;
    if(query.prepare(QString("SELECT buildingid, buildingstreetnum, buildingstreetname, buildingcity, buildingstate, buildingisactive, buildingunits FROM building"))){
        if(query.exec()){
            while(query.next()){
                building building(query.value(0).toInt(), query.value(1).toString()+" "+query.value(2).toString(), query.value(3).toString(), query.value(4).toString(), query.value(6).toInt(),0,0);
                list.push_back(building);
            }
        }
    }
    return list;
}

building dbcontrol::getBuildingByAddress(QString addr){

    int index = addr.indexOf(" ");
    QString addrNum = addr.first(index);
    QString street = addr.last(addr.size() - index - 1);
    QSqlQuery query;
    if(query.prepare(QString("SELECT buildingid, buildingstreetnum, buildingstreetname, buildingcity, buildingstate, buildingisactive, buildingunits FROM building WHERE buildingstreetnum='"+addrNum+"' AND buildingstreetname='"+street+"'"))){
        if(query.exec()){
            while(query.next()){
                building building(query.value(0).toInt(), query.value(1).toString()+" "+query.value(2).toString(), query.value(3).toString(), query.value(4).toString(), query.value(6).toInt(),0,0);
                return building;
            }
        }
    }
}

building dbcontrol::getBuildingById(int id){
    QSqlQuery query;
    if(query.prepare(QString("SELECT buildingid, buildingstreetnum, buildingstreetname, buildingcity, buildingstate, buildingisactive, buildingunits FROM building WHERE buildingid='"+QString::number(id)+"'"))){
        if(query.exec()){
            while(query.next()){
                building building(query.value(0).toInt(), query.value(1).toString()+" "+query.value(2).toString(), query.value(3).toString(), query.value(4).toString(), query.value(6).toInt(),0,0);
                return building;
            }
        }
    }
}

void dbcontrol::editBuildingById(int id, building building){
    QSqlQuery query;
    QString streetnum, streetname, city, state;
    int units, water, gas;
    int index = building.getAddress().indexOf(" ");
    streetnum = building.getAddress().first(index);
    streetname = building.getAddress().last(building.getAddress().size() - index - 1);
    query.exec("UPDATE building SET buildingstreetnum = '"+streetnum+"', buildingstreetname = '"+streetname+"', buildingcity = '"+building.getCity()+"', buildingstate = '"+building.getState()+"', buildingunits = '"+QString::number(building.getUnits())+"' WHERE buildingid = '"+QString::number(id)+"'");
}

void dbcontrol::updateBuilding(building building){


}



/*
 * building::building(int bId, string bAddr, string bCity, string bState, int bUnits, int bWater, int bGas)
{
    id = bId;
    address = bAddr;
    city = bCity;
    state = bState;
    units = bUnits;
    water = bWater;
    gas = bGas;
}*/
