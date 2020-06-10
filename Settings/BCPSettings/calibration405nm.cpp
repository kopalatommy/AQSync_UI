#include "calibration405nm.h"
#include "ui_calibration405nm.h"

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
