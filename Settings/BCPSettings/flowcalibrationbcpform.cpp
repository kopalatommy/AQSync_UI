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
    calibration405nm left;
    left.setModal(true);
    left.exec();
}

void flowcalibrationBCPform::on_Right_clicked()
{
    tpcorrectionsform right;
    right.setModal(true);
    right.exec();
}

void flowcalibrationBCPform::on_Home_clicked()
{
    BCPSettings back;
    back.setModal(true);
    back.exec();
}
