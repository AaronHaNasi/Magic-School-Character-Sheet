#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "ui_CoresDialog.h"
//#include "coredialog.h"
#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
//#include "character.h"
//#include "geomancyCores.h"
//#include "item.h"
//#include "skill.h"
//#include "spell.h"
#include <stdlib.h>
//#include "json.hpp"
#include <nlohmann/json.hpp>
#include <iostream>
#include <fstream> 

using json = nlohmann::json;

int CoreRow = 0;
int CoreColumn = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    createActions();
    on_actionNew_Character_triggered(); 
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createActions() {
    connect(ui->actionNew_Character, &QAction::triggered, this, &MainWindow::on_actionNew_Character_triggered);
    connect(ui->actionLoad_Character, &QAction::triggered, this, &MainWindow::on_actionOpen_triggered);
    connect(ui->actionSave_Character, &QAction::triggered, this, &MainWindow::on_actionSave_triggered);
    connect(ui->actionSave_As, &QAction::triggered, this, &MainWindow::on_actionSave_as_triggered);
    //connect(ui->AddCoresButton, SIGNAL (clicked()), this, SLOT( MainWindow::on_press_addCore_triggered()));
    //connect(ui->AddCoresButton->click(), SIGNAL (released()), this, SLOT(&MainWindow::on_press_addCore_triggered));
    //ui->AddCoresButton->clicked().connect(on_press_addCore_triggered());
}

void MainWindow::on_actionNew_Character_triggered()
{
    ui->CoresTableWidget->insertRow(CoreRow);
    CoreRow++;
    ui->CoresTableWidget->insertColumn(0);
    ui->CoresTableWidget->insertColumn(1);
    ui->nameInputField->setText(QString("Name"));
    ui->organizationInputField->setText(QString("Organization"));
    ui->CampaignInputField->setText(QString("Campaign"));
    ui->HarmCurrentField->setValue(0);
    ui->HarmThresholdField->setValue(4);
    ui->StressCurrentField->setValue(0);
    ui->StressThresholdField->setValue(10);
    ui->MentalHarmCurrentField->setValue(0);
    ui->MentalHarmThresholdField->setValue(4);
    ui->SpiritualHarmCurrentField->setValue(0);
    ui->SpiritualHarmThresholdField->setValue(4);
    ui->WillpowerField->setText(QString("10"));
    ui->HeatField->setText(QString("0"));
    ui->FavorField->setText(QString("0"));
    ui->StrField->setValue(1);
    ui->PerField->setValue(1);
    ui->EndField->setValue(1);
    ui->ChaField->setValue(1);
    ui->IntField->setValue(1);
    ui->AgiField->setValue(1);
    ui->LucField->setValue(1);
    ui->StrBaseField->setValue(1);
    ui->PerBaseField->setValue(1);
    ui->EndBaseField->setValue(1);
    ui->ChaBaseField->setValue(1);
    ui->IntBaseField->setValue(1);
    ui->AgiBaseField->setValue(1);
    ui->LucBaseField->setValue(1);
    ui->CoresTableWidget->clearContents();
    ui->SpellsTableWidget->clearContents();
    ui->PerksTableWidget->clearContents();
    ui->ObsessionsTableWidget->clearContents();
    ui->BlessingsTableWidget->clearContents();
   // ui->InventoryTableWidget->clea;
    ui->NotesEdit->clear();
    currentFile.clear();

}

void MainWindow::on_actionOpen_triggered() {
    // TODO
}

void MainWindow::on_actionSave_triggered() {
    // TODO
}

void MainWindow::on_actionSave_as_triggered() {
    QString fileName = QFileDialog::getSaveFileName(this, "Save as");
    fileName += ".JSON";
    QFile file(fileName);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    json j;
    // basic character info
    QString QCharacterName = ui->nameInputField->displayText();
    std::string characterName;
    characterName = QCharacterName.toUtf8().constData();
    j["characterName"] = characterName;

    QString QOrganization = ui->organizationInputField->displayText();
    std::string organization;
    organization = QOrganization.toUtf8().constData();
    j["organization"] = organization;

    QString QCampaign = ui->CampaignInputField->displayText();
    std::string campaign;
    campaign = QCampaign.toUtf8().constData();
    j["campaign"] = campaign;

    // Harm and stress (health)
    j["harm"]["physical"]["current"] = ui->HarmCurrentField->value();
    j["harm"]["physical"]["threshold"] = ui->HarmThresholdField->value();

    j["harm"]["mental"]["current"] = ui->MentalHarmCurrentField->value();
    j["harm"]["mental"]["threshold"] = ui->MentalHarmThresholdField->value();

    j["harm"]["spiritual"]["current"] = ui->SpiritualHarmCurrentField->value();
    j["harm"]["spiritual"]["threshold"] = ui->SpiritualHarmThresholdField->value();

    j["harm"]["stress"]["current"] = ui->StressCurrentField->value();
    j["harm"]["stress"]["current"] = ui->StressCurrentField->value();

    //start spell stats here
    QString QWillpower = ui->WillpowerField->displayText();
    j["spellstat"]["willpower"] = QWillpower.toUtf8().constData();

    QString QHeat = ui->HeatField->displayText();
    j["spellstat"]["heat"] = QHeat.toUtf8().constData();

    QString QFavor = ui->FavorField->displayText();
    j["spellstat"]["favor"] = QFavor.toUtf8().constData();

    j["stats"]["base"]["strength"] = ui->StrBaseField->value();
    j["stats"]["base"]["perception"] = ui->PerBaseField->value();
    j["stats"]["base"]["endurance"] = ui->EndBaseField->value();
    j["stats"]["base"]["charisma"] = ui->ChaBaseField->value();
    j["stats"]["base"]["intelligence"] = ui->IntBaseField->value();
    j["stats"]["base"]["agility"] = ui->AgiBaseField->value();
    j["statss"]["base"]["luck"] = ui->LucBaseField->value();

    // TODO Figure out how to output cores to JSON file

    // TODO finish save character and save character as


    std::string fileNameOperator = fileName.toUtf8().constData();
    std::ofstream outputFile(fileNameOperator);
    outputFile << j << std::endl; 
    outputFile.close();

}


void MainWindow::on_actionExit_triggered() {
    // TODO
}

void MainWindow::on_actionAbout_triggered() {
    // TODO
}

void MainWindow::onactionAbout_qt_triggered() {

}
/*
void MainWindow::on_press_addCore_triggered() {

   core = new CoreDialog(this);
   core->show();
   // core = new QDialog(0,0);

    //Ui_CoresDialog coreDialog;
    //coreDialog.setupUi(core);
    //core->show();
}

CoreDialog::CoreDialog(QWidget *parent) :
    QDialog(parent),
    coreui(new coreUi::CoreDialog)
{
    coreui->setupUi(this);
}
*/

void MainWindow::on_AddCoresButton_clicked()
{
    //CoreDialog coredialog = new CoreDialog();
    //core = new CoreDialog();
    //core->show();
    //CoreDialog::getCoreType()
    //core->getCoreType();
    ui->CoresTableWidget->insertRow(CoreRow);
    CoreRow++;
}

void MainWindow::on_AddSpellButton_clicked()
{
    // TODO
}


/*void MainWindow::on_addCoresButtonTest_clicked()
{
    int i = 0;
    ui->CoresTableWidget->insertRow(i);
    i++;
}
*/

void MainWindow::on_rollButton_clicked()
{
    std::srand(time(0));
    int roll = (rand() % 6 + 1) + (rand() % 6 + 1);
    if(ui->UseStr->)
    QString resultString = "Result: " + QString::number(roll);
    ui->ResultLabel->setText(resultString);
}
