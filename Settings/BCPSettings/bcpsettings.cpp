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
    SettingFormsHandler::JumpToIndex(8);
    close();
}

void BCPSettings::on_cali880_clicked()
{
    SettingFormsHandler::JumpToIndex(11);
    close();
}

void BCPSettings::on_FlowCalibration_clicked()
{
    SettingFormsHandler::JumpToIndex(12);
    close();
}

void BCPSettings::on_Auto_Zero_clicked()
{
    SettingFormsHandler::JumpToIndex(9);
    close();
}

void BCPSettings::on_cali405_clicked()
{
    SettingFormsHandler::JumpToIndex(10);
    close();
}

void BCPSettings::on_TP_clicked()
{

    SettingFormsHandler::JumpToIndex(13);
    close();

}

void BCPSettings::on_NextLeft_clicked()
{

    SettingFormsHandler::JumpToIndex(0);
    close();
}

void BCPSettings::on_Home_Button_clicked()
{
    close();
}

void BCPSettings::on_NextRight_clicked()
{
//  SettingFormsHandler::MoveRight();
}
