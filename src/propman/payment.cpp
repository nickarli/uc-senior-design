#include "payment.h"

payment::payment()
{

}

payment::payment(int occupantId, QString aptId, double paymentAmt, QDate date){
    paymentOccupantId = occupantId;
    paymentAptId = aptId;
    paymentAmount = paymentAmt;
    paymentDate = date;
}


/*    int paymentId;
    int paymentOccupantId;
    QString paymentAptId;
    double paymentAmount;
    QDate paymentDate;*/
