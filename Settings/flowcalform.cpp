#include "flowcalform.h"
#include "ui_flowcalform.h"

FlowCalForm::FlowCalForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FlowCalForm)
{
    ui->setupUi(this);

    ui->slopeMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->zeroMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->cellFlowMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->ozoneFlowMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
}

FlowCalForm::~FlowCalForm(){
    delete ui;
}

void FlowCalForm::on_closeButton_clicked(){
    emit CloseForms();
}

void FlowCalForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void FlowCalForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}

void FlowCalForm::on_slopeMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &FlowCalForm::NewSlope);
    number->SetInitialValues(NumberPadForm::Types::floatV, 0.5, 1.5, this);
    ignoreGrab = true;
}
void FlowCalForm::NewSlope(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &FlowCalForm::NewSlope);
    slope = val;
    UpdateUI();
}

void FlowCalForm::on_zeroMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &FlowCalForm::NewZero);
    number->SetInitialValues(NumberPadForm::Types::floatV, -60, 60, this);
    ignoreGrab = true;
}
void FlowCalForm::NewZero(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &FlowCalForm::NewZero);
    zero = val;
    UpdateUI();
}

void FlowCalForm::on_saveButton_clicked(){
    bool newValue = false;
    AQSyncSettings * settings = AQSyncSettings::GetInstance();

    if(fabs(static_cast<double>(settings->GetFlowSlope() - slope)) > 0.001){
        newValue = true;
        settings->SetFlowSlope(slope);
        ModbusHandler::GetInstance()->SetFloatRegisters(FLOW_SLOPE_REGISTER, slope);
    }

    if(fabs(static_cast<double>(settings->GetFlowZero() - zero)) > 0.001){
        newValue = true;
        settings->SetFlowZero(zero);
        ModbusHandler::GetInstance()->SetFloatRegisters(FLOW_ZERO_REGISTER, zero);
    }

    if(fabs(static_cast<double>(settings->GetCellFlowSlope() - cell)) > 0.001){
        newValue = true;
        settings->SetCellFlowSlope(cell);
        ModbusHandler::GetInstance()->SetFloatRegisters(CELL_FLOW_SLOPE_REGISTER, cell);
    }

    if(fabs(static_cast<double>(settings->GetOzoneFlowSlope() - ozone)) > 0.001){
        newValue = true;
        settings->SetOzoneFlowSlope(ozone);
        ModbusHandler::GetInstance()->SetFloatRegisters(OZONE_FLOW_SLOPE_REGISTER, ozone);
    }

    if(newValue){
        QMessageBox * msg = new QMessageBox();
        connect(msg, &QMessageBox::finished, this, &FlowCalForm::OnMessageBoxFinished);
        msg->setText("Applying new flow cal factors");
        msg->setStandardButtons(QMessageBox::StandardButton::Ok);
        msg->show();
    }
}

void FlowCalForm::OnMessageBoxFinished(int code){
    qDebug() << "Message box exited with: " << code;
    sender()->deleteLater();
}

void FlowCalForm::UpdateUI(){
    char arr[15] = {0, };

    sprintf(arr, "%1.2f", static_cast<double>(slope));
    ui->slope->setText(QString("Slope: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.1f", static_cast<double>(zero));
    ui->zero->setText(QString("Zero: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.1f", static_cast<double>(ozone));
    ui->ozoneFlow->setText(QString("Ozone Flow Slope: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.1f", static_cast<double>(cell));
    ui->cellFlow->setText(QString("Cell Flow Slope: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));
}

void FlowCalForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);

    if(!ignoreGrab){
        AQSyncSettings * settings = AQSyncSettings::GetInstance();
        slope = settings->GetFlowSlope();
        zero = settings->GetFlowZero();
        cell = settings->GetCellFlowSlope();
        ozone = settings->GetOzoneFlowSlope();
    }
    ignoreGrab = false;

    UpdateUI();
}

void FlowCalForm::on_cellFlowMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &FlowCalForm::NewCellFlow);
    number->SetInitialValues(NumberPadForm::Types::floatV, 0.5, 1.5, this);
    ignoreGrab = true;
}
void FlowCalForm::NewCellFlow(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &FlowCalForm::NewCellFlow);
    cell = val;
    UpdateUI();
}

void FlowCalForm::on_ozoneFlowMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewFloat, this, &FlowCalForm::NewOzoneFlow);
    number->SetInitialValues(NumberPadForm::Types::floatV, 0.5, 1.5, this);
    ignoreGrab = true;
}
void FlowCalForm::NewOzoneFlow(float val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &FlowCalForm::NewOzoneFlow);
    ozone = val;
    UpdateUI();
}
