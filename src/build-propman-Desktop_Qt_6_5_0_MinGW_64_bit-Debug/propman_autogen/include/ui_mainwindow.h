/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDatabase;
    QAction *actionPrint;
    QAction *actionAbout;
    QWidget *centralwidget;
    QStackedWidget *mainWidgets;
    QWidget *mainmenu;
    QLabel *label_2;
    QGraphicsView *insightsview;
    QPushButton *tenantInfoButton;
    QPushButton *currentlyDueButton;
    QPushButton *buildingsButton;
    QPushButton *resourcesButton;
    QPushButton *reportsButton;
    QPushButton *exitButton;
    QPushButton *QpBalanceSheetButton;
    QPushButton *QpColListButton;
    QLabel *label;
    QLabel *label_5;
    QWidget *buildings;
    QStackedWidget *buildingsWidget;
    QWidget *mainBuildingsWidget;
    QGraphicsView *graphicsView_5;
    QPushButton *addBuildingButton;
    QPushButton *editBuildingsButton;
    QLabel *label_11;
    QWidget *addBuildingWidget;
    QPushButton *buildingsBackButton;
    QLabel *label_12;
    QLineEdit *lineEdit;
    QLabel *label_13;
    QLineEdit *lineEdit_3;
    QLabel *label_15;
    QLineEdit *lineEdit_4;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_14;
    QSpinBox *spinBox;
    QLineEdit *lineEdit_2;
    QLabel *label_19;
    QLineEdit *lineEdit_5;
    QLabel *label_20;
    QTextEdit *textEdit;
    QLabel *label_21;
    QPushButton *addBuildingsSaveButton;
    QWidget *editBuildingsWidget;
    QLabel *label_22;
    QPushButton *buildingsBackButton_3;
    QLabel *label_23;
    QLineEdit *lineEdit_6;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *lineEdit_7;
    QLabel *label_26;
    QLineEdit *lineEdit_8;
    QTextEdit *textEdit_2;
    QSpinBox *spinBox_2;
    QLabel *label_27;
    QLineEdit *lineEdit_9;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLineEdit *lineEdit_10;
    QLabel *label_31;
    QComboBox *comboBox;
    QLabel *label_32;
    QPushButton *editBuildingsSaveButton;
    QLabel *label_10;
    QPushButton *mainMenuButton1;
    QWidget *reports;
    QLabel *label_3;
    QPushButton *mainMenuButton2;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QGraphicsView *graphicsView_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_18;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QPushButton *pushButton_16;
    QPushButton *pushButton_12;
    QPushButton *pushButton_17;
    QPushButton *pushButton_15;
    QLabel *label_4;
    QPushButton *pushButton_11;
    QWidget *page_4;
    QWidget *tenantInfo;
    QLabel *label_6;
    QPushButton *mainMenuButton3;
    QStackedWidget *stackedWidget_2;
    QWidget *page_5;
    QPushButton *pushButton_21;
    QPushButton *pushButton_23;
    QLabel *label_7;
    QGraphicsView *graphicsView_3;
    QPushButton *pushButton_20;
    QPushButton *pushButton_22;
    QWidget *page_6;
    QWidget *resources;
    QLabel *label_8;
    QPushButton *mainMenuButton4;
    QStackedWidget *stackedWidget_3;
    QWidget *page_7;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QLabel *label_9;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QPushButton *pushButton_26;
    QGraphicsView *graphicsView_4;
    QPushButton *pushButton_29;
    QWidget *page_8;
    QMenuBar *menubar;
    QMenu *menumainwindow;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(807, 581);
        actionDatabase = new QAction(MainWindow);
        actionDatabase->setObjectName("actionDatabase");
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName("actionPrint");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mainWidgets = new QStackedWidget(centralwidget);
        mainWidgets->setObjectName("mainWidgets");
        mainWidgets->setGeometry(QRect(0, 0, 801, 541));
        mainmenu = new QWidget();
        mainmenu->setObjectName("mainmenu");
        label_2 = new QLabel(mainmenu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 0, 171, 91));
        insightsview = new QGraphicsView(mainmenu);
        insightsview->setObjectName("insightsview");
        insightsview->setGeometry(QRect(40, 90, 391, 431));
        tenantInfoButton = new QPushButton(mainmenu);
        tenantInfoButton->setObjectName("tenantInfoButton");
        tenantInfoButton->setGeometry(QRect(460, 90, 141, 81));
        QFont font;
        font.setPointSize(15);
        tenantInfoButton->setFont(font);
        currentlyDueButton = new QPushButton(mainmenu);
        currentlyDueButton->setObjectName("currentlyDueButton");
        currentlyDueButton->setGeometry(QRect(620, 90, 141, 81));
        currentlyDueButton->setFont(font);
        buildingsButton = new QPushButton(mainmenu);
        buildingsButton->setObjectName("buildingsButton");
        buildingsButton->setGeometry(QRect(460, 200, 141, 81));
        buildingsButton->setFont(font);
        resourcesButton = new QPushButton(mainmenu);
        resourcesButton->setObjectName("resourcesButton");
        resourcesButton->setGeometry(QRect(620, 200, 141, 81));
        resourcesButton->setFont(font);
        reportsButton = new QPushButton(mainmenu);
        reportsButton->setObjectName("reportsButton");
        reportsButton->setGeometry(QRect(460, 310, 141, 81));
        reportsButton->setFont(font);
        exitButton = new QPushButton(mainmenu);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(620, 310, 141, 81));
        exitButton->setFont(font);
        QpBalanceSheetButton = new QPushButton(mainmenu);
        QpBalanceSheetButton->setObjectName("QpBalanceSheetButton");
        QpBalanceSheetButton->setGeometry(QRect(460, 470, 141, 51));
        QFont font1;
        font1.setPointSize(11);
        QpBalanceSheetButton->setFont(font1);
        QpColListButton = new QPushButton(mainmenu);
        QpColListButton->setObjectName("QpColListButton");
        QpColListButton->setGeometry(QRect(620, 470, 141, 51));
        QpColListButton->setFont(font1);
        label = new QLabel(mainmenu);
        label->setObjectName("label");
        label->setGeometry(QRect(540, 430, 141, 31));
        label_5 = new QLabel(mainmenu);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 270, 49, 16));
        mainWidgets->addWidget(mainmenu);
        buildings = new QWidget();
        buildings->setObjectName("buildings");
        buildingsWidget = new QStackedWidget(buildings);
        buildingsWidget->setObjectName("buildingsWidget");
        buildingsWidget->setGeometry(QRect(0, 10, 801, 551));
        mainBuildingsWidget = new QWidget();
        mainBuildingsWidget->setObjectName("mainBuildingsWidget");
        graphicsView_5 = new QGraphicsView(mainBuildingsWidget);
        graphicsView_5->setObjectName("graphicsView_5");
        graphicsView_5->setGeometry(QRect(40, 80, 391, 431));
        addBuildingButton = new QPushButton(mainBuildingsWidget);
        addBuildingButton->setObjectName("addBuildingButton");
        addBuildingButton->setGeometry(QRect(460, 240, 141, 81));
        addBuildingButton->setFont(font);
        editBuildingsButton = new QPushButton(mainBuildingsWidget);
        editBuildingsButton->setObjectName("editBuildingsButton");
        editBuildingsButton->setGeometry(QRect(620, 240, 141, 81));
        editBuildingsButton->setFont(font);
        label_11 = new QLabel(mainBuildingsWidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(160, 270, 81, 16));
        buildingsWidget->addWidget(mainBuildingsWidget);
        addBuildingWidget = new QWidget();
        addBuildingWidget->setObjectName("addBuildingWidget");
        buildingsBackButton = new QPushButton(addBuildingWidget);
        buildingsBackButton->setObjectName("buildingsBackButton");
        buildingsBackButton->setGeometry(QRect(640, 10, 51, 51));
        label_12 = new QLabel(addBuildingWidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(40, 65, 101, 21));
        lineEdit = new QLineEdit(addBuildingWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 210, 131, 41));
        label_13 = new QLabel(addBuildingWidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(40, 220, 91, 16));
        lineEdit_3 = new QLineEdit(addBuildingWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(140, 280, 131, 41));
        label_15 = new QLabel(addBuildingWidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(40, 290, 91, 16));
        lineEdit_4 = new QLineEdit(addBuildingWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(140, 350, 131, 41));
        label_16 = new QLabel(addBuildingWidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(40, 360, 91, 16));
        label_17 = new QLabel(addBuildingWidget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(80, 150, 111, 31));
        label_18 = new QLabel(addBuildingWidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(410, 150, 111, 31));
        label_14 = new QLabel(addBuildingWidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(360, 210, 101, 16));
        spinBox = new QSpinBox(addBuildingWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(500, 200, 51, 41));
        lineEdit_2 = new QLineEdit(addBuildingWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(500, 270, 131, 41));
        label_19 = new QLabel(addBuildingWidget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(360, 280, 121, 21));
        lineEdit_5 = new QLineEdit(addBuildingWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(500, 340, 131, 41));
        label_20 = new QLabel(addBuildingWidget);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(360, 350, 121, 21));
        textEdit = new QTextEdit(addBuildingWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(500, 410, 261, 101));
        label_21 = new QLabel(addBuildingWidget);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(360, 420, 121, 21));
        addBuildingsSaveButton = new QPushButton(addBuildingWidget);
        addBuildingsSaveButton->setObjectName("addBuildingsSaveButton");
        addBuildingsSaveButton->setGeometry(QRect(570, 10, 51, 51));
        buildingsWidget->addWidget(addBuildingWidget);
        editBuildingsWidget = new QWidget();
        editBuildingsWidget->setObjectName("editBuildingsWidget");
        label_22 = new QLabel(editBuildingsWidget);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(40, 60, 101, 31));
        buildingsBackButton_3 = new QPushButton(editBuildingsWidget);
        buildingsBackButton_3->setObjectName("buildingsBackButton_3");
        buildingsBackButton_3->setGeometry(QRect(640, 10, 51, 51));
        label_23 = new QLabel(editBuildingsWidget);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(360, 350, 121, 21));
        lineEdit_6 = new QLineEdit(editBuildingsWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(140, 350, 131, 41));
        label_24 = new QLabel(editBuildingsWidget);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(360, 280, 121, 21));
        label_25 = new QLabel(editBuildingsWidget);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(80, 150, 111, 31));
        lineEdit_7 = new QLineEdit(editBuildingsWidget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(140, 280, 131, 41));
        label_26 = new QLabel(editBuildingsWidget);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(360, 210, 101, 16));
        lineEdit_8 = new QLineEdit(editBuildingsWidget);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(140, 210, 131, 41));
        textEdit_2 = new QTextEdit(editBuildingsWidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(500, 410, 261, 101));
        spinBox_2 = new QSpinBox(editBuildingsWidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(500, 200, 51, 41));
        label_27 = new QLabel(editBuildingsWidget);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(40, 360, 91, 16));
        lineEdit_9 = new QLineEdit(editBuildingsWidget);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(500, 270, 131, 41));
        label_28 = new QLabel(editBuildingsWidget);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(40, 220, 91, 16));
        label_29 = new QLabel(editBuildingsWidget);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(410, 150, 111, 31));
        label_30 = new QLabel(editBuildingsWidget);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(40, 290, 91, 16));
        lineEdit_10 = new QLineEdit(editBuildingsWidget);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(500, 340, 131, 41));
        label_31 = new QLabel(editBuildingsWidget);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(360, 420, 121, 21));
        comboBox = new QComboBox(editBuildingsWidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(380, 80, 141, 31));
        label_32 = new QLabel(editBuildingsWidget);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(250, 80, 101, 31));
        editBuildingsSaveButton = new QPushButton(editBuildingsWidget);
        editBuildingsSaveButton->setObjectName("editBuildingsSaveButton");
        editBuildingsSaveButton->setGeometry(QRect(570, 10, 51, 51));
        buildingsWidget->addWidget(editBuildingsWidget);
        label_10 = new QLabel(buildings);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(40, 0, 171, 91));
        mainMenuButton1 = new QPushButton(buildings);
        mainMenuButton1->setObjectName("mainMenuButton1");
        mainMenuButton1->setGeometry(QRect(710, 20, 51, 51));
        mainWidgets->addWidget(buildings);
        reports = new QWidget();
        reports->setObjectName("reports");
        label_3 = new QLabel(reports);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 0, 171, 91));
        mainMenuButton2 = new QPushButton(reports);
        mainMenuButton2->setObjectName("mainMenuButton2");
        mainMenuButton2->setGeometry(QRect(710, 20, 51, 51));
        stackedWidget = new QStackedWidget(reports);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 10, 801, 551));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        graphicsView_2 = new QGraphicsView(page_3);
        graphicsView_2->setObjectName("graphicsView_2");
        graphicsView_2->setGeometry(QRect(40, 80, 391, 431));
        pushButton_9 = new QPushButton(page_3);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(460, 80, 141, 71));
        pushButton_9->setFont(font);
        pushButton_10 = new QPushButton(page_3);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(460, 170, 141, 71));
        pushButton_10->setFont(font);
        pushButton_18 = new QPushButton(page_3);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setGeometry(QRect(620, 80, 141, 71));
        pushButton_18->setFont(font);
        pushButton_14 = new QPushButton(page_3);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(620, 170, 141, 71));
        pushButton_14->setFont(font);
        pushButton_13 = new QPushButton(page_3);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(460, 440, 141, 71));
        pushButton_13->setFont(font);
        pushButton_16 = new QPushButton(page_3);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(620, 440, 141, 71));
        pushButton_16->setFont(font);
        pushButton_12 = new QPushButton(page_3);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(460, 350, 141, 71));
        pushButton_12->setFont(font);
        pushButton_17 = new QPushButton(page_3);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(620, 350, 141, 71));
        pushButton_17->setFont(font);
        pushButton_15 = new QPushButton(page_3);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(620, 260, 141, 71));
        pushButton_15->setFont(font);
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 260, 181, 16));
        pushButton_11 = new QPushButton(page_3);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(460, 260, 141, 71));
        pushButton_11->setFont(font);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        stackedWidget->addWidget(page_4);
        mainWidgets->addWidget(reports);
        stackedWidget->raise();
        label_3->raise();
        mainMenuButton2->raise();
        tenantInfo = new QWidget();
        tenantInfo->setObjectName("tenantInfo");
        label_6 = new QLabel(tenantInfo);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 0, 171, 91));
        mainMenuButton3 = new QPushButton(tenantInfo);
        mainMenuButton3->setObjectName("mainMenuButton3");
        mainMenuButton3->setGeometry(QRect(710, 20, 51, 51));
        stackedWidget_2 = new QStackedWidget(tenantInfo);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(0, 10, 801, 551));
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        pushButton_21 = new QPushButton(page_5);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setGeometry(QRect(460, 190, 301, 81));
        pushButton_21->setFont(font);
        pushButton_23 = new QPushButton(page_5);
        pushButton_23->setObjectName("pushButton_23");
        pushButton_23->setGeometry(QRect(460, 430, 301, 81));
        pushButton_23->setFont(font);
        label_7 = new QLabel(page_5);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(200, 260, 71, 16));
        graphicsView_3 = new QGraphicsView(page_5);
        graphicsView_3->setObjectName("graphicsView_3");
        graphicsView_3->setGeometry(QRect(40, 80, 391, 431));
        pushButton_20 = new QPushButton(page_5);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setGeometry(QRect(460, 80, 301, 81));
        pushButton_20->setFont(font);
        pushButton_22 = new QPushButton(page_5);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setGeometry(QRect(460, 300, 301, 81));
        pushButton_22->setFont(font);
        stackedWidget_2->addWidget(page_5);
        graphicsView_3->raise();
        pushButton_21->raise();
        pushButton_23->raise();
        label_7->raise();
        pushButton_20->raise();
        pushButton_22->raise();
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        stackedWidget_2->addWidget(page_6);
        mainWidgets->addWidget(tenantInfo);
        stackedWidget_2->raise();
        label_6->raise();
        mainMenuButton3->raise();
        resources = new QWidget();
        resources->setObjectName("resources");
        label_8 = new QLabel(resources);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 0, 171, 91));
        mainMenuButton4 = new QPushButton(resources);
        mainMenuButton4->setObjectName("mainMenuButton4");
        mainMenuButton4->setGeometry(QRect(710, 20, 51, 51));
        stackedWidget_3 = new QStackedWidget(resources);
        stackedWidget_3->setObjectName("stackedWidget_3");
        stackedWidget_3->setGeometry(QRect(0, 10, 801, 551));
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        pushButton_30 = new QPushButton(page_7);
        pushButton_30->setObjectName("pushButton_30");
        pushButton_30->setGeometry(QRect(620, 300, 141, 81));
        pushButton_30->setFont(font);
        pushButton_31 = new QPushButton(page_7);
        pushButton_31->setObjectName("pushButton_31");
        pushButton_31->setGeometry(QRect(460, 300, 141, 81));
        pushButton_31->setFont(font);
        label_9 = new QLabel(page_7);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(140, 260, 191, 16));
        pushButton_27 = new QPushButton(page_7);
        pushButton_27->setObjectName("pushButton_27");
        pushButton_27->setGeometry(QRect(460, 190, 141, 81));
        pushButton_27->setFont(font);
        pushButton_28 = new QPushButton(page_7);
        pushButton_28->setObjectName("pushButton_28");
        pushButton_28->setGeometry(QRect(620, 80, 141, 81));
        pushButton_28->setFont(font);
        pushButton_26 = new QPushButton(page_7);
        pushButton_26->setObjectName("pushButton_26");
        pushButton_26->setGeometry(QRect(460, 80, 141, 81));
        pushButton_26->setFont(font);
        graphicsView_4 = new QGraphicsView(page_7);
        graphicsView_4->setObjectName("graphicsView_4");
        graphicsView_4->setGeometry(QRect(40, 80, 391, 431));
        pushButton_29 = new QPushButton(page_7);
        pushButton_29->setObjectName("pushButton_29");
        pushButton_29->setGeometry(QRect(620, 190, 141, 81));
        pushButton_29->setFont(font);
        stackedWidget_3->addWidget(page_7);
        graphicsView_4->raise();
        pushButton_30->raise();
        pushButton_31->raise();
        pushButton_27->raise();
        pushButton_28->raise();
        pushButton_26->raise();
        pushButton_29->raise();
        label_9->raise();
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        stackedWidget_3->addWidget(page_8);
        mainWidgets->addWidget(resources);
        stackedWidget_3->raise();
        label_8->raise();
        mainMenuButton4->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 807, 21));
        menumainwindow = new QMenu(menubar);
        menumainwindow->setObjectName("menumainwindow");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menumainwindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menumainwindow->addSeparator();
        menumainwindow->addAction(actionDatabase);
        menumainwindow->addAction(actionPrint);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        mainWidgets->setCurrentIndex(2);
        buildingsWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);
        stackedWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionDatabase->setText(QCoreApplication::translate("MainWindow", "Database", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Printer", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Main Menu</span></p></body></html>", nullptr));
        tenantInfoButton->setText(QCoreApplication::translate("MainWindow", "Tenant Info", nullptr));
        currentlyDueButton->setText(QCoreApplication::translate("MainWindow", "Currently Due", nullptr));
        buildingsButton->setText(QCoreApplication::translate("MainWindow", "Buildings", nullptr));
        resourcesButton->setText(QCoreApplication::translate("MainWindow", "Resources", nullptr));
        reportsButton->setText(QCoreApplication::translate("MainWindow", "Reports", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        QpBalanceSheetButton->setText(QCoreApplication::translate("MainWindow", "Balance Sheet", nullptr));
        QpColListButton->setText(QCoreApplication::translate("MainWindow", "Collection List \n"
"and Receipts", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Quick Print</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Insights", nullptr));
        addBuildingButton->setText(QCoreApplication::translate("MainWindow", "Add Building", nullptr));
        editBuildingsButton->setText(QCoreApplication::translate("MainWindow", "Edit Buildings", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Buildings table", nullptr));
        buildingsBackButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Add Building</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Street Address</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">City</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">State</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Location</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Details</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Number of Units</span></p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Water Meter Reading</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Gas Meter Reading</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Notes</span></p></body></html>", nullptr));
        addBuildingsSaveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Edit Buildings</span></p></body></html>", nullptr));
        buildingsBackButton_3->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Gas Meter Reading</span></p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Water Meter Reading</span></p></body></html>", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Location</span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Number of Units</span></p></body></html>", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">State</span></p></body></html>", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Street Address</span></p></body></html>", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Details</span></p></body></html>", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">City</span></p></body></html>", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Notes</span></p></body></html>", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Select Building</span></p></body></html>", nullptr));
        editBuildingsSaveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Buildings</span></p></body></html>", nullptr));
        mainMenuButton1->setText(QCoreApplication::translate("MainWindow", "Main\n"
"Menu", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Reports</span></p></body></html>", nullptr));
        mainMenuButton2->setText(QCoreApplication::translate("MainWindow", "Main\n"
"Menu", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Balance Sheet", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Receipts", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "Collection List", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Vacancies", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Water by\n"
"Building", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "Gas by\n"
"Building", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Rent by\n"
"Building", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "Rent by\n"
"Tenant", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "All Balances", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Select a Report to View and Print", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Current\n"
"Tenants", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Tenant Info</span></p></body></html>", nullptr));
        mainMenuButton3->setText(QCoreApplication::translate("MainWindow", "Main\n"
"Menu", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "Past Tenants", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "New Tenant", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Tenant Stats", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "Current Tenants", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "Everyone, Ever", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Resources</span></p></body></html>", nullptr));
        mainMenuButton4->setText(QCoreApplication::translate("MainWindow", "Main\n"
"Menu", nullptr));
        pushButton_30->setText(QCoreApplication::translate("MainWindow", "Water Timeline", nullptr));
        pushButton_31->setText(QCoreApplication::translate("MainWindow", "Gas Timeline", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Resources Overview Current Week", nullptr));
        pushButton_27->setText(QCoreApplication::translate("MainWindow", "View Gas\n"
"Entries", nullptr));
        pushButton_28->setText(QCoreApplication::translate("MainWindow", "Add Water\n"
"Entry", nullptr));
        pushButton_26->setText(QCoreApplication::translate("MainWindow", "Add Gas Entry", nullptr));
        pushButton_29->setText(QCoreApplication::translate("MainWindow", "View Water\n"
"Entries", nullptr));
        menumainwindow->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
