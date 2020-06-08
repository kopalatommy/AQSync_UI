#include "bccalform.h"
#include "ui_bccalform.h"

BCCalForm::BCCalForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BCCalForm)
{
    ui->setupUi(this);

    ui->slopeMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->zeroMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->massExtMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
}

BCCalForm::~BCCalForm(){
    delete ui;
}

void BCCalForm::on_closeButton_clicked(){
    emit CloseForms();
}

void BCCalForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void BCCalForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}

void BCCalForm::on_slopeMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &BCCalForm::NewSlope);
    number->SetInitialValues(NumberPadForm::Types::floatV, 0.5, 1.5, this);
    ignoreGrab = true;
}
void BCCalForm::NewSlope(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &BCCalForm::NewSlope);
    slope = val;
    UpdateUI();
}

void BCCalForm::on_zeroMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &BCCalForm::NewZero);
    number->SetInitialValues(NumberPadForm::Types::floatV, -60, 60, this);
    ignoreGrab = true;
}
void BCCalForm::NewZero(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &BCCalForm::NewZero);
    zero = val;
    UpdateUI();
}

void BCCalForm::on_saveButton_clicked(){
    AQSyncSettings * settings = AQSyncSettings::GetInstance();
    bool newValue = false;

    if(fabs(static_cast<double>(slope - settings->GetBCSlope())) > 0.001){
        newValue = true;
        settings->SetBCSlope(slope);
        //ModbusHandler::GetInstance()->SetFloatRegisters(BC_SLOPE_REGISTER, slope);
    }

    if(fabs(static_cast<double>(zero - settings->GetBCZero())) > 0.001){
        newValue = true;
        settings->SetBCZero(zero);
        //ModbusHandler::GetInstance()->SetFloatRegisters(BC_ZERO_REGISTER, zero);
    }

    if(fabs(static_cast<double>(massExt - settings->GetMassExt880())) > 0.001){
        newValue = true;
        settings->SetMassExt880(massExt);
        //ModbusHandler::GetInstance()->SetFloatRegisters(MASS_EXT_880_REGISTER, massExt);
    }

    if(newValue){
        QMessageBox * msg = new QMessageBox();
        connect(msg, &QMessageBox::finished, this, &BCCalForm::OnMessageBoxExit);
        msg->setText("Applying new BC cal factors");
        msg->setStandardButtons(QMessageBox::StandardButton::Ok);
        msg->show();
    }
}

void BCCalForm::OnMessageBoxExit(int code){
    qDebug() << "Message box exited with: " << code;
    sender()->deleteLater();
}

void BCCalForm::UpdateUI(){
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

void BCCalForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);

    if(!ignoreGrab){
        AQSyncSettings * settings = AQSyncSettings::GetInstance();
        slope = settings->GetBCSlope();
        zero = settings->GetBCZero();
        massExt = settings->GetMassExt880();
    }
    ignoreGrab = false;

    UpdateUI();
}

void BCCalForm::on_massExtMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &BCCalForm::NewMassExt);
    number->SetInitialValues(NumberPadForm::Types::floatV, 1, 10, this);
    ignoreGrab = true;
}
void BCCalForm::NewMassExt(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &BCCalForm::NewMassExt);
    massExt = val;
    UpdateUI();
}
