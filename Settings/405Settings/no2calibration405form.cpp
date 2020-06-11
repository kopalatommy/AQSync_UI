#include "no2calibration405form.h"
#include "ui_no2calibration405form.h"

NO2Calibration405Form::NO2Calibration405Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NO2Calibration405Form)
{
    ui->setupUi(this);
}

NO2Calibration405Form::~NO2Calibration405Form()
{
    delete ui;
}

void NO2Calibration405Form::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(4);
    close();
}

void NO2Calibration405Form::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(6);
    close();
}

void NO2Calibration405Form::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(0);
    close();
}
