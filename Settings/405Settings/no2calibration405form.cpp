#include "no2calibration405form.h"
#include "ui_no2calibration405form.h"

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
