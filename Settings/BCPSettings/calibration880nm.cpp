#include "calibration880nm.h"
#include "ui_calibration880nm.h"

Calibration880nm::Calibration880nm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calibration880nm)
{
    ui->setupUi(this);
}

Calibration880nm::~Calibration880nm()
{
    delete ui;
}
