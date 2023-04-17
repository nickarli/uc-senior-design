#include "occupant.h"

occupant::occupant(int oId, QString oAptId, QString oFirst, QString oLast, QString oEmployer, QString oEmpPhone, QDate oMoveIn, double oDeposit, double oRent, QString oDueDay, QString oFreq, int oNokId, QString oCell, QDate oPaidThru, QDate oLastPaid, double oBalance, QString oNotes){
    id = oId;
    aptId = oAptId;
    first = oFirst;
    last = oLast;
    employer = oEmployer;
    employerPhone = oEmpPhone;
    movein = oMoveIn;
    deposit = oDeposit;
    rent = oRent;
    dueDay = oDueDay;
    freq = oFreq;
    nokId = oNokId;
    cell = oCell;
    paidThru = oPaidThru;
    lastPaid = oLastPaid;
    balance = oBalance;
    notes = oNotes;
}

occupant::occupant(QString oAptId, QString oFirst, QString oLast, QString oEmployer, QString oEmpPhone, QDate oMoveIn, double oDeposit, double oRent, QString oDueDay, QString oFreq, int oNokId, QString oCell, QDate oPaidThru, QDate oLastPaid, double oBalance, QString oNotes){
    aptId = oAptId;
    first = oFirst;
    last = oLast;
    employer = oEmployer;
    employerPhone = oEmpPhone;
    movein = oMoveIn;
    deposit = oDeposit;
    rent = oRent;
    dueDay = oDueDay;
    freq = oFreq;
    nokId = oNokId;
    cell = oCell;
    paidThru = oPaidThru;
    lastPaid = oLastPaid;
    balance = oBalance;
    notes = oNotes;
}

occupant::occupant(int oId, QString oAptId, QString oFirst, QString oLast, double oRent, double oBalance, QDate oPaidThru, QString oFreq){
    //occupantid, occupantaptid, occupantfirstname, occupantlastname, occupantrent, occupantbalance, occupantpaidthru, occupantpaymentfreq
    id = oId;
    aptId = oAptId;
    first = oFirst;
    last = oLast;
    rent = oRent;
    balance = oBalance;
    paidThru = oPaidThru;
    freq = oFreq;
}


occupant::occupant(){

}
