#include "calibration405nm.h"
#include "ui_calibration405nm.h"
#include "calibration880nm.h"
#include "flowcalibrationbcpform.h"
#include "bcpsettings.h"

calibration405nm::calibration405nm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calibration405nm)
{
    ui->setupUi(this);

    ui->slopeMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->zeroMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->MassExtMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->AnalogMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    ui->Home->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Right->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Left->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Save->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);

    connect(BCPSerialHandler::GetInstance(), &BCPSerialHandler::NewAdFilterSettingsBCP, this, &calibration405nm::GetNewSettings);
    GetNewSettings();
}

calibration405nm::~calibration405nm()
{
    delete ui;
}

void calibration405nm::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(CALIBRATION_880NM_INDEX);
}

void calibration405nm::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(FLOWCALIBRATION_BCP_INDEX);
}

void calibration405nm::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(SETTINGS_BCP_INDEX);
}

void calibration405nm::on_slopeMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &calibration405nm::newSlope);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, 0.5, 1.5, this);
    NumberPadForm::GetInstance()->show();
}

//Handles setting up and connecting the numberpad form
void calibration405nm::on_zeroMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &calibration405nm::newZero);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, -50, 50.9, this);
    NumberPadForm::GetInstance()->show();
}

void calibration405nm::on_MassExtMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &calibration405nm::NewMassExt);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, 1, 40, this);
    NumberPadForm::GetInstance()->show();
}

void calibration405nm::on_AnalogMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewLong, this, &calibration405nm::newAnalog);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::longV, 25, 1000, this);
    NumberPadForm::GetInstance()->show();
}

void calibration405nm::newAnalog(int val){
    analog = val;
    updateLocalUI();
}

//Handles updating the UI with the current value and disconneting the number pad form
void calibration405nm::newSlope(float val){
    slope = val;
    updateLocalUI();
}

//Handles updating the UI with the current value and disconneting the number pad form
void calibration405nm::newZero(float val){
    zero = val;
    updateLocalUI();
}

//Handles updating the UI with the current value and disconneting the number pad form
void calibration405nm::NewMassExt(float val){
    massExt = val;
    updateLocalUI();
}

//Applies and saves the changed values
void calibration405nm::on_Save_clicked(){

   //still needs to be done
    bool newSetting = false;

    SettingsHandler * g = SettingsHandler::GetInstance();

    //Check to see if the user changed the setting
    //If the difference is greater than 2 point precision, than it is a new value
    if(fabs(static_cast<double>(g->GetMassExt405_bcp() - massExt)) > 0.01)
    {
        g->SetMassExt405_bcp(massExt);
        newSetting = true;
    }
    if(fabs(static_cast<double>((g->GetPMSlope_bcp() - slope))) > 0.001)
    {
        g->SetPMSlope_bcp(slope);
        newSetting = true;
    }
    if(fabs(static_cast<double>(g->GetPMZero_bcp() - zero)) > 0.01)
    {
        g->SetPMZero_bcp(zero);
        newSetting = true;
    }
    if(analog != g->GetAnalog405_bcp())
    {
        g->SetAnalog405_bcp(analog);
        newSetting = true;
    }

    if(newSetting)
    {
        QMessageBox msg;
        msg.setText("Settings added to queue");
        msg.setStyleSheet("QMessageBox{ border: 1px solid black; }");
        msg.setStandardButtons(QMessageBox::Ok);
        msg.exec();
    }
}



void calibration405nm::GetNewSettings()
{
    SettingsHandler * settings = SettingsHandler::GetInstance();

    slope = settings->GetPMSlope_bcp();
    zero = settings->GetPMZero_bcp();
    massExt = settings->GetMassExt405_bcp();
    analog = settings->GetAnalog405_bcp();
    updateLocalUI();
}



void calibration405nm::updateLocalUI(){
    ui->slopeLabel->setText("Slope: " + QString::number(static_cast<double>(slope)));
    ui->zeroLabel->setText("Zero: " + QString::number(static_cast<double>(zero)));
    ui->massExtLabel->setText("Mass Ext: " + QString::number(static_cast<double>(massExt)));
    ui->analogLabel->setText("Analog: " + QString::number(analog));

    qDebug() << "Updated UI";

}


void calibration405nm::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);

    if(NumberPadForm::GetInstance()->isHidden())
    {
        GetNewSettings();
        qDebug() << "Getting new settings";
    }
}

void calibration405nm::closeEvent(QCloseEvent *event)
{
    QWidget::closeEvent(event);
    SettingsHandler * settings = SettingsHandler::GetInstance();

    if(settings->GetAnalog405_bcp() != analog
    || fabs(static_cast<double>(settings->GetMassExt405_bcp() - massExt)) > 0.001
    || fabs(static_cast<double>(settings->GetPMZero_bcp() - zero)) > 0.001
    || fabs(static_cast<double>(settings->GetPMSlope_bcp() - slope)) > 0.001)
    {
        QMessageBox msg;
        msg.setText("Save unsaved setting?");
        msg.setStandardButtons(QMessageBox::StandardButton::Yes | QMessageBox::StandardButton::No);

        switch (msg.exec())
        {
        case QMessageBox::StandardButton::Yes:
            on_Save_clicked();
            break;

        default:
            break;
        }
    }
}
