#include "dbcontrol.h"

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

void dbcontrol::doTheThing(){
    QSqlQuery query;
    query.exec("INSERT INTO params (paramstype, paramsval) VALUES ('STEVEMODE', '1')");

}


