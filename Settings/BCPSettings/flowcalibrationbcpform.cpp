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
    SettingFormsHandler::JumpToIndex(CALIBRATION_405NM_INDEX);
}

void FlowCalibrationBCPForm::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(TPCORRECTION_BCP_INDEX);
}

void FlowCalibrationBCPForm::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(SETTINGS_BCP_INDEX);
}

