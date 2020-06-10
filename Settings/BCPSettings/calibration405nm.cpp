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
    Calibration880nm left;
    left.setModal(true);
    left.exec();
}

void calibration405nm::on_Right_clicked()
{
    flowcalibrationBCPform right;
    right.setModal(true);
    right.exec();
}

void calibration405nm::on_Home_clicked()
{
    BCPSettings back;
    back.setModal(true);
    back.exec();
}
