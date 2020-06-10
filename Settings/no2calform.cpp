#include "no2calform.h"
#include "ui_no2calform.h"

NO2CalForm::NO2CalForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NO2CalForm)
{
    ui->setupUi(this);

    ui->slopeMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->zeroMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
}

NO2CalForm::~NO2CalForm(){
    delete ui;
}

void NO2CalForm::on_closeButton_clicked(){
    emit CloseForms();
}

void NO2CalForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void NO2CalForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}

void NO2CalForm::on_slopeMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &NO2CalForm::NewSlope);
    number->SetInitialValues(NumberPadForm::Types::floatV, 0.5, 1.5, this);
    ignoreGrab = true;
}
void NO2CalForm::NewSlope(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &NO2CalForm::NewSlope);
    slope = val;
    UpdateUI();
}

void NO2CalForm::on_zeroMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &NO2CalForm::NewZero);
    number->SetInitialValues(NumberPadForm::Types::floatV, -60, 60, this);
    ignoreGrab = true;
}
void NO2CalForm::NewZero(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &NO2CalForm::NewZero);
    zero = val;
    UpdateUI();
}

void NO2CalForm::on_saveButton_clicked(){
    bool newValue = false;
    /*AQSyncSettings * settings = AQSyncSettings::GetInstance();

    if(fabs(static_cast<double>(settings->GetNO2Slope() - slope)) > 0.001){
        newValue = true;
        settings->SetNO2Slope(slope);
        //ModbusHandler::GetInstance()->SetFloatRegisters(NO2_SLOPE_REGISTER, slope);
    }

    if(fabs(static_cast<double>(settings->GetNO2Zero() - zero)) > 0.001){
        newValue = true;
        settings->SetNO2Zero(zero);
        //ModbusHandler::GetInstance()->SetFloatRegisters(NO2_ZERO_REGISTER, zero);
    }

    if(newValue){
        QMessageBox * msg = new QMessageBox();
        connect(msg, &QMessageBox::finished, this, &NO2CalForm::OnMessageBoxExited);
        msg->setText("Applying new NO2 cal factors");
        msg->setStandardButtons(QMessageBox::StandardButton::Ok);
        msg->show();
    }*/
}
void NO2CalForm::OnMessageBoxExited(int code){
    qDebug() << "Message box exited with: " << code;
    sender()->deleteLater();
}

void NO2CalForm::UpdateUI(){
    char arr[15] = {0, };

    sprintf(arr, "%1.2f", static_cast<double>(slope));
    ui->slope->setText(QString("Slope: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.1f", static_cast<double>(zero));
    ui->zero->setText(QString("Zero: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));
}

void NO2CalForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);

    /*if(!ignoreGrab){
        AQSyncSettings * settings = AQSyncSettings::GetInstance();
        slope = settings->GetNO2Slope();
        zero = settings->GetNO2Zero();
    }
    ignoreGrab = false;

    UpdateUI();*/
}
