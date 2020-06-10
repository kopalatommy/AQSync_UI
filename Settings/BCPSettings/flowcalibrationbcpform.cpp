#include "flowcalibrationbcpform.h"
#include "ui_flowcalibrationbcpform.h"
#include "calibration405nm.h"
#include "tpcorrectionsform.h"
#include "bcpsettings.h"

flowcalibrationBCPform::flowcalibrationBCPform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::flowcalibrationBCPform)
{
    ui->setupUi(this);
}

flowcalibrationBCPform::~flowcalibrationBCPform()
{
    delete ui;
}

void flowcalibrationBCPform::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(10);
    close();
}

void flowcalibrationBCPform::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(13);
    close();
}

void flowcalibrationBCPform::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(1);
    close();
}
