#ifndef OCCUPANT_H
#define OCCUPANT_H
#include <QString>
#include <QDateTime>


class occupant
{
public:
    occupant();
    occupant(int, QString, QString, QString, QString, QString, QDate, double, double, QString, QString, int, QString, QDate, QDate, double, QString);
    occupant(QString, QString, QString, QString, QString, QDate, double, double, QString, QString, int, QString, QDate, QDate, double, QString);
    occupant(int, QString, QString, QString, double, double, QDate, QString);
    int getId() const { return id; }
    QString getAptId() const { return aptId; }
    QString getFirstName() const { return first; }
    QString getLastName() const { return last; }
    QString getEmployer() const { return employer; }
    QString getEmployerPhone() const { return employerPhone; }
    QDate getMoveInDate() const { return movein; }
    double getDeposit() const { return deposit; }
    double getRent() const { return rent; }
    QString getDueDay() const { return dueDay; }
    QString getFrequency() const { return freq; }
    int getNokId() const { return nokId; }
    QString getCell() const { return cell; }
    QDate getPaidThruDate() const { return paidThru; }
    QDate getLastPaidDate() const { return lastPaid; }
    double getBalance() const { return balance; }
    QString getNotes() const { return notes; }


private:
    int id;
    QString aptId;
    QString first;
    QString last;
    QString employer;
    QString employerPhone;
    QDate movein;
    double deposit;
    double rent;
    QString dueDay;
    QString freq;
    int nokId;
    QString cell;
    QDate paidThru;
    QDate lastPaid;
    double balance;
    QString notes;
};

#endif // OCCUPANT_H
