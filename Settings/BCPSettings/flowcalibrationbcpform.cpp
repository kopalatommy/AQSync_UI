#include "flowcalibrationbcpform.h"
#include "ui_flowcalibrationbcpform.h"

FlowCalibrationBCPForm::FlowCalibrationBCPForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FlowCalibrationBCPForm)
{
    ui->setupUi(this);
}

FlowCalibrationBCPForm::~FlowCalibrationBCPForm()
{
    delete ui;
}

void FlowCalibrationBCPForm::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(10);
    close();
}

void FlowCalibrationBCPForm::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(13);
    close();
}

void FlowCalibrationBCPForm::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(1);
    close();
}

