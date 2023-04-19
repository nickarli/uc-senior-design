/********************************************************************************
** Form generated from reading UI file 'dbdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBDIALOG_H
#define UI_DBDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dbdialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *dbdialog)
    {
        if (dbdialog->objectName().isEmpty())
            dbdialog->setObjectName("dbdialog");
        dbdialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(dbdialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(110, 250, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_2 = new QLabel(dbdialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 20, 401, 61));
        lineEdit = new QLineEdit(dbdialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(220, 90, 113, 31));
        label = new QLabel(dbdialog);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 90, 111, 31));
        label_3 = new QLabel(dbdialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 150, 111, 31));
        lineEdit_2 = new QLineEdit(dbdialog);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(220, 150, 113, 31));
        pushButton = new QPushButton(dbdialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 200, 91, 24));

        retranslateUi(dbdialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, dbdialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, dbdialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(dbdialog);
    } // setupUi

    void retranslateUi(QDialog *dbdialog)
    {
        dbdialog->setWindowTitle(QCoreApplication::translate("dbdialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("dbdialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Database</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("dbdialog", "Database Username", nullptr));
        label_3->setText(QCoreApplication::translate("dbdialog", "Database Password", nullptr));
        pushButton->setText(QCoreApplication::translate("dbdialog", "Test Connection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dbdialog: public Ui_dbdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBDIALOG_H
