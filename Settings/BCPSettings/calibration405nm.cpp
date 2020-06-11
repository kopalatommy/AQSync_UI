#include "calibration405nm.h"
#include "ui_calibration405nm.h"
#include "calibration880nm.h"
#include "flowcalibrationbcpform.h"
#include "bcpsettings.h"

calibration405nm::calibration405nm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calibration405nm)
{
    ui->setupUi(this);
}

calibration405nm::~calibration405nm()
{
    delete ui;
}

void calibration405nm::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(CALIBRATION_880NM_INDEX);
    close();
}

void calibration405nm::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(FLOWCALIBRATION_BCP_INDEX);
    close();
}

void calibration405nm::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(SETTINGS_BCP_INDEX);
    close();
}
