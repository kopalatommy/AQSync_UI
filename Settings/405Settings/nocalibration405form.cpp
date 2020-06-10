#include "nocalibration405form.h"
#include "ui_nocalibration405form.h"
#include "mode405form.h"
#include "no2calibration405form.h"
#include "settings405.h"

NOCalibration405form::NOCalibration405form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NOCalibration405form)
{
    ui->setupUi(this);
}

NOCalibration405form::~NOCalibration405form()
{
    delete ui;
}

void NOCalibration405form::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(3);
    close();
}

void NOCalibration405form::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(5);
    close();
}

void NOCalibration405form::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(0);
    close();
}
