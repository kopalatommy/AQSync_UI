#include "nocalform.h"
#include "ui_nocalform.h"

NOCalForm::NOCalForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NOCalForm)
{
    ui->setupUi(this);

    ui->slopeMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->zeroMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
}

NOCalForm::~NOCalForm(){
    delete ui;
}

void NOCalForm::on_closeButton_clicked(){
    emit CloseForms();
}

void NOCalForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void NOCalForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}

void NOCalForm::on_slopeMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &NOCalForm::NewSLope);
    number->SetInitialValues(NumberPadForm::Types::floatV, 0.5, 1.5, this);
    ignoreGrab = true;
}
void NOCalForm::NewSLope(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &NOCalForm::NewSLope);
    slope = val;
    UpdateUI();
}

void NOCalForm::on_zeroMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &NOCalForm::NewZero);
    number->SetInitialValues(NumberPadForm::Types::floatV, -60, 60, this);
    ignoreGrab = true;
}
void NOCalForm::NewZero(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &NOCalForm::NewZero);
    zero = val;
    UpdateUI();
}

void NOCalForm::on_saveButton_clicked(){
    bool newValue = false;
    AQSyncSettings * settings = AQSyncSettings::GetInstance();

    if(fabs(static_cast<double>(slope - settings->GetNOSlope())) > 0.001){
        newValue = true;
        settings->SetNOSlope(slope);
        //ModbusHandler::GetInstance()->SetFloatRegisters(NO_SLOPE_REGISTER, slope);
    }

    if(fabs(static_cast<double>(zero - settings->GetNOZero())) > 0.001){
        newValue = true;
        settings->SetNOZero(zero);
        //ModbusHandler::GetInstance()->SetFloatRegisters(NO_ZERO_REGISTER, zero);
    }

    if(newValue){
        QMessageBox * msg = new QMessageBox();
        connect(msg, &QMessageBox::finished, this, &NOCalForm::OnMessageBoxFinished);
        msg->setText("Applying new NO cal factors");
        msg->setStandardButtons(QMessageBox::StandardButton::Ok);
        msg->show();
    }
}
void NOCalForm::OnMessageBoxFinished(int code){
    qDebug() << "Message box exited with: " << code;
    sender()->deleteLater();
}

void NOCalForm::UpdateUI(){
    char arr[15] = {0, };

    sprintf(arr, "%1.2f", static_cast<double>(slope));
    ui->slope->setText(QString("Slope: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.1f", static_cast<double>(zero));
    ui->zero->setText(QString("Zero: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));
}

void NOCalForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);

    if(!ignoreGrab){
        AQSyncSettings * settings = AQSyncSettings::GetInstance();
        slope = settings->GetNOSlope();
        zero = settings->GetNOZero();
    }
    ignoreGrab = false;

    UpdateUI();
}
