#include "calibration880nm.h"
#include "ui_calibration880nm.h"
#include "autozerobcp.h"
#include "calibration405nm.h"
#include "bcpsettings.h"

Calibration880nm::Calibration880nm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calibration880nm)
{
    ui->setupUi(this);

    ui->slopeMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->zeroMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->massExtMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->AnalogMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    ui->Home->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Right->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Left->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Save->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);

    connect(SerialHandler405::GetInstance(), &SerialHandler405::NewAdFilterSettings405, this, &Calibration880nm::GetNewSettings);
    GetNewSettings();
}

Calibration880nm::~Calibration880nm()
{
    delete ui;
}

void Calibration880nm::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(AUTOZERO_BCP_INDEX);
}

void Calibration880nm::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(CALIBRATION_405NM_INDEX);
}

void Calibration880nm::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(SETTINGS_BCP_INDEX);
}



void Calibration880nm::on_slopeMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &Calibration880nm::newSlope);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, 0.5, 1.5, this);
    NumberPadForm::GetInstance()->show();
}

//Handles setting up and connecting the numberpad form
void Calibration880nm::on_zeroMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &Calibration880nm::newZero);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, -50, 50.9, this);
    NumberPadForm::GetInstance()->show();
}

void Calibration880nm::on_MassExtMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &Calibration880nm::NewMassExt);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, 1, 40, this);
    NumberPadForm::GetInstance()->show();
}

void Calibration880nm::on_AnalogMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewLong, this, &Calibration880nm::newAnalog);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::longV, 25, 1000, this);
    NumberPadForm::GetInstance()->show();
}

void Calibration880nm::newAnalog(int val){
    analog = val;
    updateLocalUI();
}

//Handles updating the UI with the current value and disconneting the number pad form
void Calibration880nm::newSlope(float val){
    slope = val;
    updateLocalUI();
}

//Handles updating the UI with the current value and disconneting the number pad form
void Calibration880nm::newZero(float val){
    zero = val;
    updateLocalUI();
}

//Handles updating the UI with the current value and disconneting the number pad form
void Calibration880nm::NewMassExt(float val){
    massExt = val;
    updateLocalUI();
}

//Applies and saves the changed values
void Calibration880nm::on_Save_clicked(){

   //still needs to be done
    bool newSetting = false;

    Globals * g = Globals::getInstance();

    //Check to see if the user changed the setting
    //If the difference is greater than 2 point precision, than it is a new value
    if(fabs(static_cast<double>(g->massExt880 - massExt)) > 0.01){
        g->massExt880 = massExt;
        CommunicationHandler::getInstance()->ReceiveNewSetting(bcMassExtMarker, g->massExt880);
        newSetting = true;
    }
    if(fabs(static_cast<double>(g->bcSlope - slope)) > 0.001){
        g->bcSlope = slope;
        CommunicationHandler::getInstance()->ReceiveNewSetting(bcSlopeMarker, g->bcSlope);
        newSetting = true;
    }
    if(fabs(static_cast<double>(g->bcZero - zero)) > 0.01){
        g->bcZero = zero;
        CommunicationHandler::getInstance()->ReceiveNewSetting(bcZeroMarker, g->bcZero);
        newSetting = true;
    }
    if(analog != g->analog880){
        g->analog880 = analog;
        CommunicationHandler::getInstance()->ReceiveNewSetting(analog880Marker, g->analog880);
        newSetting = true;
    }

    if(newSetting){
        //Update the setting txt file
        Globals::getInstance()->writeSettingsFile();

        QMessageBox msg;
        msg.setText("Settings added to queue");
        msg.setStyleSheet("QMessageBox{ border: 1px solid black; }");
        msg.setStandardButtons(QMessageBox::Ok);
        msg.exec();
    }
}



void Calibration880nm::GetNewSettings()
{
    SettingsHandler * settings = SettingsHandler::GetInstance();

    slope = settings->GetBCSlope_bcp();
    zero = settings->GetBCZero_bcp();
    massExt = settings->GetMassExt880_bcp();
    analog = settings->GetAnalog880_bcp();
    updateLocalUI();
}

//Handles setting up and connecting the numberpad form


void Calibration880nm::updateLocalUI(){

    //need to updateLocalUI and Save_clicked()
 /*   ui->shortLabel->setText("Short Length:\n" + QString::number(shortLength));
    ui->longLabel->setText("Long Length:\n" + QString::number(longLength));
    ui->diffLabel->setText("Difference:\n" + QString::number(difference));
    ui->percentLabel->setText("Percent:\n" + QString::number(percent));

    qDebug() << "Updated UI";    */

}


void Calibration880nm::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);

    if(NumberPadForm::GetInstance()->isHidden())
    {
        GetNewSettings();
        qDebug() << "Getting new settings";
    }
}

void Calibration880nm::closeEvent(QCloseEvent *event)
{
    QWidget::closeEvent(event);
    SettingsHandler * settings = SettingsHandler::GetInstance();

    if(settings->GetAnalog880_bcp() != analog || settings->GetMassExt880_bcp() != massExt ||
       settings->GetBCZero_bcp() != zero || settings->GetBCSlope_bcp() != slope)
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
