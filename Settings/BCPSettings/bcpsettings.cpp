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
    adaptivefilterBCPform filter;
    filter.setModal(true);
    filter.exec();
}

void BCPSettings::on_cali880_clicked()
{
    Calibration880nm calib880;
    calib880.setModal(true);
    calib880.exec();
}

void BCPSettings::on_FlowCalibration_clicked()
{
    flowcalibrationBCPform flowcali;
    flowcali.setModal(true);
    flowcali.exec();
}

void BCPSettings::on_Auto_Zero_clicked()
{
    AutoZeroBCP zero;
    zero.setModal(true);
    zero.exec();
}

void BCPSettings::on_cali405_clicked()
{
    calibration405nm cali405;
    cali405.setModal(true);
    cali405.exec();
}

void BCPSettings::on_TP_clicked()
{
    //tpcorrectionsform TP;
    //TP.setModal(true);
    //TP.exec();
    SettingFormsHandler::MoveLeft();
}

void BCPSettings::on_NextLeft_clicked()
{
    //settings405 set405;
    //set405.setModal(true);
    //set405.exec();
    SettingFormsHandler::MoveRight();
}

void BCPSettings::on_Home_Button_clicked()
{
    //Home Button
}
