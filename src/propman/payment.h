#ifndef PAYMENT_H
#define PAYMENT_H
#include <QString>
#include <QDate>


class payment
{
public:
    payment();
    payment(int, QString, double, QDate);
    int getPaymentId() const { return paymentId; }
    int getPaymentOccupantId() const { return paymentOccupantId; }
    QString getPaymentAptId() const { return paymentAptId; }
    double getPaymentAmount() const { return paymentAmount; }
    QDate getPaymentDate() const { return paymentDate; }

private:
    int paymentId;
    int paymentOccupantId;
    QString paymentAptId;
    double paymentAmount;
    QDate paymentDate;

};

#endif // PAYMENT_H
