/********************************************************************************
** Form generated from reading UI file 'main-character-sheetACMhpb.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAIN_2D_CHARACTER_2D_SHEETACMHPB_H
#define MAIN_2D_CHARACTER_2D_SHEETACMHPB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Character;
    QAction *actionSave_Character;
    QAction *actionLoad_Character;
    QAction *actionExit;
    QWidget *centralwidget;
    QLineEdit *nameInputField;
    QLineEdit *organizationInputField;
    QLineEdit *CampaignInputField;
    QLabel *label;
    QSpinBox *HarmCurrentField;
    QSpinBox *HarmThresholdField;
    QLabel *label_2;
    QSpinBox *StressCurrentField;
    QSpinBox *StressThresholdField;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *MentalHarmCurrentField;
    QSpinBox *MentalHarmThresholdField;
    QSpinBox *SpiritualHarmCurrentField;
    QSpinBox *SpiritualHarmThresholdField;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QLabel *label_8;
    QPushButton *AddCoresButton;
    QTableWidget *CoresTableWidget;
    QScrollBar *CoresTableScrollBar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(975, 450);
        actionNew_Character = new QAction(MainWindow);
        actionNew_Character->setObjectName(QString::fromUtf8("actionNew_Character"));
        actionSave_Character = new QAction(MainWindow);
        actionSave_Character->setObjectName(QString::fromUtf8("actionSave_Character"));
        actionLoad_Character = new QAction(MainWindow);
        actionLoad_Character->setObjectName(QString::fromUtf8("actionLoad_Character"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        nameInputField = new QLineEdit(centralwidget);
        nameInputField->setObjectName(QString::fromUtf8("nameInputField"));
        nameInputField->setGeometry(QRect(0, 0, 113, 32));
        organizationInputField = new QLineEdit(centralwidget);
        organizationInputField->setObjectName(QString::fromUtf8("organizationInputField"));
        organizationInputField->setGeometry(QRect(0, 30, 113, 32));
        CampaignInputField = new QLineEdit(centralwidget);
        CampaignInputField->setObjectName(QString::fromUtf8("CampaignInputField"));
        CampaignInputField->setGeometry(QRect(0, 60, 113, 32));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 0, 41, 21));
        HarmCurrentField = new QSpinBox(centralwidget);
        HarmCurrentField->setObjectName(QString::fromUtf8("HarmCurrentField"));
        HarmCurrentField->setGeometry(QRect(190, 20, 52, 32));
        HarmThresholdField = new QSpinBox(centralwidget);
        HarmThresholdField->setObjectName(QString::fromUtf8("HarmThresholdField"));
        HarmThresholdField->setGeometry(QRect(190, 50, 52, 32));
        HarmThresholdField->setValue(4);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 0, 58, 18));
        StressCurrentField = new QSpinBox(centralwidget);
        StressCurrentField->setObjectName(QString::fromUtf8("StressCurrentField"));
        StressCurrentField->setGeometry(QRect(280, 20, 52, 32));
        StressThresholdField = new QSpinBox(centralwidget);
        StressThresholdField->setObjectName(QString::fromUtf8("StressThresholdField"));
        StressThresholdField->setGeometry(QRect(280, 50, 52, 32));
        StressThresholdField->setValue(10);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 0, 91, 18));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(470, 0, 101, 18));
        MentalHarmCurrentField = new QSpinBox(centralwidget);
        MentalHarmCurrentField->setObjectName(QString::fromUtf8("MentalHarmCurrentField"));
        MentalHarmCurrentField->setGeometry(QRect(360, 20, 52, 32));
        MentalHarmThresholdField = new QSpinBox(centralwidget);
        MentalHarmThresholdField->setObjectName(QString::fromUtf8("MentalHarmThresholdField"));
        MentalHarmThresholdField->setGeometry(QRect(360, 50, 52, 32));
        SpiritualHarmCurrentField = new QSpinBox(centralwidget);
        SpiritualHarmCurrentField->setObjectName(QString::fromUtf8("SpiritualHarmCurrentField"));
        SpiritualHarmCurrentField->setGeometry(QRect(470, 20, 52, 32));
        SpiritualHarmThresholdField = new QSpinBox(centralwidget);
        SpiritualHarmThresholdField->setObjectName(QString::fromUtf8("SpiritualHarmThresholdField"));
        SpiritualHarmThresholdField->setGeometry(QRect(470, 50, 52, 32));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 90, 71, 18));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 110, 61, 32));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(280, 90, 58, 18));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 110, 41, 32));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(360, 90, 58, 18));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(360, 110, 41, 32));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(590, 0, 58, 18));
        AddCoresButton = new QPushButton(centralwidget);
        AddCoresButton->setObjectName(QString::fromUtf8("AddCoresButton"));
        AddCoresButton->setGeometry(QRect(590, 20, 71, 34));
        CoresTableWidget = new QTableWidget(centralwidget);
        CoresTableWidget->setObjectName(QString::fromUtf8("CoresTableWidget"));
        CoresTableWidget->setGeometry(QRect(670, 0, 256, 192));
        CoresTableScrollBar = new QScrollBar(centralwidget);
        CoresTableScrollBar->setObjectName(QString::fromUtf8("CoresTableScrollBar"));
        CoresTableScrollBar->setGeometry(QRect(910, -1, 20, 191));
        CoresTableScrollBar->setOrientation(Qt::Vertical);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 975, 30));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_Character);
        menuFile->addAction(actionSave_Character);
        menuFile->addAction(actionLoad_Character);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_Character->setText(QApplication::translate("MainWindow", "&New Character", nullptr));
        actionSave_Character->setText(QApplication::translate("MainWindow", "&Save Character", nullptr));
        actionLoad_Character->setText(QApplication::translate("MainWindow", "&Load Character", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "&Exit", nullptr));
        nameInputField->setText(QApplication::translate("MainWindow", "Name", nullptr));
        organizationInputField->setText(QApplication::translate("MainWindow", "Organization", nullptr));
        CampaignInputField->setText(QApplication::translate("MainWindow", "Campaign", nullptr));
        label->setText(QApplication::translate("MainWindow", "Harm", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Stress", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Mental Harm", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Spiritual Harm", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Willpower", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "10", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Heat", nullptr));
        lineEdit_2->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Favor", nullptr));
        lineEdit_3->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Cores", nullptr));
        AddCoresButton->setText(QApplication::translate("MainWindow", "Add Cores", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "Fi&le", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAIN_2D_CHARACTER_2D_SHEETACMHPB_H
