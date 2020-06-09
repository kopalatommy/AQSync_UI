#include "flowcalibrationbcpform.h"
#include "ui_flowcalibrationbcpform.h"

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
