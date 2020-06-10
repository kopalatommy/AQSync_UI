#include "no2calibration405form.h"
#include "ui_no2calibration405form.h"
#include "nocalibration405form.h"
#include "flowcalibration405form.h"
#include "settings405.h"

no2calibration405form::no2calibration405form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::no2calibration405form)
{
    ui->setupUi(this);
}

no2calibration405form::~no2calibration405form()
{
    delete ui;
}

void no2calibration405form::on_Left_clicked()
{
    NOCalibration405form NOcali;
    NOcali.setModal(true);
    NOcali.exec();
}

void no2calibration405form::on_Right_clicked()
{
    flowcalibration405form right;
    right.setModal(true);
    right.exec();
}

void no2calibration405form::on_Home_clicked()
{
    settings405 back;
    back.setModal(true);
    back.exec();
}
