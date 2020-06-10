#include "pmcalform.h"
#include "ui_pmcalform.h"

PMCalForm::PMCalForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PMCalForm)
{
    ui->setupUi(this);

    ui->slopeMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->zeroMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->massExtMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
}

PMCalForm::~PMCalForm(){
    delete ui;
}

void PMCalForm::on_closeButton_clicked(){
    emit CloseForms();
}

void PMCalForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void PMCalForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}

void PMCalForm::on_slopeMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &PMCalForm::NewSlope);
    number->SetInitialValues(NumberPadForm::Types::floatV, 0.5, 1.5, this);
    ignoreGrab = true;
}
void PMCalForm::NewSlope(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &PMCalForm::NewSlope);
    slope = val;
    UpdateUI();
}

void PMCalForm::on_zeroMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &PMCalForm::NewZero);
    number->SetInitialValues(NumberPadForm::Types::floatV, -60, 60, this);
    ignoreGrab = true;
}
void PMCalForm::NewZero(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &PMCalForm::NewZero);
    zero = val;
    UpdateUI();
}

void PMCalForm::on_saveButton_clicked(){
    /*bool newValue = false;
    AQSyncSettings * settings = AQSyncSettings::GetInstance();

    if(fabs(static_cast<double>(slope - settings->GetPMSlope())) > 0.001){
        newValue = true;
        settings->SetPMSlope(slope);
        //ModbusHandler::GetInstance()->SetFloatRegisters(PM_SLOPE_REGISTER, slope);
    }

    if(fabs(static_cast<double>(zero - settings->GetPMZero())) > 0.001){
        newValue = true;
        settings->SetPMZero(zero);
        //ModbusHandler::GetInstance()->SetFloatRegisters(PM_ZERO_REGISTER, zero);
    }

    if(fabs(static_cast<double>(massExt - settings->GetMassExt405())) > 0.001){
        newValue = true;
        settings->SetMassExt405(massExt);
        //ModbusHandler::GetInstance()->SetFloatRegisters(MASS_EXT_405_REGISTER, massExt);
    }

    if(newValue){
        QMessageBox * msg = new QMessageBox();
        msg->setText("Applying new pm cal factors");
        msg->setStandardButtons(QMessageBox::StandardButton::Ok);
        connect(msg, &QMessageBox::finished, this, &PMCalForm::OnMessageBoxFinished);
        msg->show();
    }*/
}

void PMCalForm::OnMessageBoxFinished(int code){
    qDebug() << "Message box exited with: " << code;
    sender()->deleteLater();
}

void PMCalForm::UpdateUI(){
    char arr[15] = {0, };

    sprintf(arr, "%1.2f", static_cast<double>(slope));
    ui->slope->setText(QString("Slope: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.1f", static_cast<double>(zero));
    ui->zero->setText(QString("Zero: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.2f", static_cast<double>(massExt));
    ui->massExt->setText(QString("Mass Ext: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));
}

void PMCalForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);

    /*if(!ignoreGrab){
        AQSyncSettings * settings = AQSyncSettings::GetInstance();
        slope = settings->GetPMSlope();
        zero = settings->GetPMZero();
        massExt = settings->GetMassExt405();
    }
    ignoreGrab = false;

    UpdateUI();*/
}

void PMCalForm::on_massExtMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &PMCalForm::NewMassExt);
    number->SetInitialValues(NumberPadForm::Types::floatV, 1, 10, this);
    ignoreGrab = true;
}
void PMCalForm::NewMassExt(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &PMCalForm::NewMassExt);
    massExt = val;
    UpdateUI();
}
