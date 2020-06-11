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

    ui->slopeMask-setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
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
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &Calibration880nm::NewSlope);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, 0.5, 1.5, this);
    NumberPadForm::GetInstance()->show();
}

//Handles setting up and connecting the numberpad form
void Calibration880nm::on_zeroMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &Calibration880nm::NewZero);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, -50, 50.9, this);
    NumberPadForm::GetInstance()->show();
}



//Handles updating the UI with the current value and disconneting the number pad form
void Calibration880nm::newSlope(float val){
    slope = val;
    updateLocalUI();
}

//Handles updating the UI with the current value and disconneting the number pad form
void BCCalForm::newBCZero(float val){
    zero = val;
    updateLocalUI();
}

//Handles updating the UI with the current value and disconneting the number pad form
void Calibration880nm::NewMassExt(float val){
    massExt = val;
    updateLocalUI();
}

//Applies and saves the changed values
void BCCalForm::on_save_clicked(){
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

//Needs to be updated
int BCCalForm::onExit(){
    Globals * g = Globals::getInstance();

    //qDebug() << "Mass ext: " << (fabs(static_cast<double>(*massExt - m)) >= 0.01);
    if((fabs(static_cast<double>(g->massExt880 - massExt)) >= 0.01) || (fabs(static_cast<double>(g->bcSlope - slope)) >= 0.1) || (fabs(static_cast<double>(g->bcZero - zero)) >= 0.1) || g->analog880 != analog){
        QMessageBox msg;
        msg.setStyleSheet("QMessageBox{ border: 1px solid black; }");
        msg.setText("Unsaved changes");
        msg.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        msg.setDefaultButton(QMessageBox::Save);
        int ret = msg.exec();

        switch (ret) {
        case QMessageBox::Save:
            on_save_clicked();
            return 1;
        case QMessageBox::Discard:
            massExt = g->massExt880;
            slope = g->bcSlope;
            zero = g->bcZero;
            analog = g->analog880;
            return 1;
        case QMessageBox::Cancel:
            return 0;
        }
    }
    return 1;
}

//Updates the UI when the user is changing views. Triggered
//by the globals signal changingViews
void BCCalForm::UpdateUI(){
    Globals * g = Globals::getInstance();

    slope = g->bcSlope;
    zero = g->bcZero;
    massExt = g->massExt880;
    analog = g->analog880;

    updateLocalUI();
}

//Handles setting up and connecting the numberpad form
void BCCalForm::on_massExtMask_clicked(){
    NumberpadForm * number = NumberpadForm::getInstance();
    connect(number, SIGNAL(valueChanged(float)), this, SLOT(newMassExt(float)));
    number->setInitialValues(NumberpadForm::Types::floatV, 1, 40, this);
}

void BCCalForm::on_AnalogMask_clicked(){
    NumberpadForm * number = NumberpadForm::getInstance();
    connect(number, SIGNAL(valueChanged(long)), this, SLOT(newAnalog(long)));
    number->setInitialValues(NumberpadForm::Types::longV, 25, 1000, this);
}

void BCCalForm::newAnalog(long val){
    analog = val;
    disconnect(NumberpadForm::getInstance(), SIGNAL(valueChanged(long)), this, SLOT(newAnalog(long)));
    //disconnect(NumberpadForm::getInstance(), &NumberpadForm::valueChanged, this, &BCCalForm::newMassExt);
    updateLocalUI();
}

void BCCalForm::updateLocalUI(){
    char arr[15];

    sprintf(arr, "%1.2f", static_cast<double>(slope));
    ui->slope->setText( QString("Slope: ").append("<font color='blue'>").append(arr).append("</font>"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.1f", static_cast<double>(zero));
    ui->zero->setText( QString("Zero: ").append("<font color='blue'>").append(arr).append("</font>"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.2f", static_cast<double>(massExt));
    ui->MassExtCoff->setText( QString("Mass Ext: ").append("<font color='blue'>").append(arr).append("</font>"));

    memset(arr, 0, 15);
    sprintf(arr, "%i", analog);
    ui->Analog->setText( QString("VScale: ").append("<font color='blue'>").append(arr).append("</font>"));

}
