#include "bcpsettings.h"
#include "ui_bcpsettings.h"
#include "adaptivefilterbcpform.h"
#include "calibration880nm.h"
#include "flowcalibrationbcpform.h"
#include "autozerobcp.h"
#include "calibration405nm.h"
#include "tpcorrectionsform.h"
#include "Settings/405Settings/settings405.h"

BCPSettings::BCPSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BCPSettings)
{
    ui->setupUi(this);
}

BCPSettings::~BCPSettings()
{
    delete ui;
}

void BCPSettings::on_AdaptiveFilter_clicked()
{
    SettingFormsHandler::JumpToIndex(ADAPTIVEFILTER_BCP_INDEX);
}

void BCPSettings::on_cali880_clicked()
{
    SettingFormsHandler::JumpToIndex(CALIBRATION_880NM_INDEX);
    close();
}

void BCPSettings::on_FlowCalibration_clicked()
{
    SettingFormsHandler::JumpToIndex(FLOWCALIBRATION_BCP_INDEX);
    close();
}

void BCPSettings::on_Auto_Zero_clicked()
{
    SettingFormsHandler::JumpToIndex(AUTOZERO_BCP_INDEX);
    close();
}

void BCPSettings::on_cali405_clicked()
{
    SettingFormsHandler::JumpToIndex(CALIBRATION_405NM_INDEX);
    close();
}

void BCPSettings::on_TP_clicked()
{

    SettingFormsHandler::JumpToIndex(TPCORRECTION_BCP_INDEX);
    close();

}

void BCPSettings::on_NextLeft_clicked()
{

    SettingFormsHandler::MoveLeft();
}

void BCPSettings::on_Home_Button_clicked()
{
    SettingFormsHandler::CloseForms();
}

void BCPSettings::on_NextRight_clicked()
{
    SettingFormsHandler::JumpToIndex(0);
}
