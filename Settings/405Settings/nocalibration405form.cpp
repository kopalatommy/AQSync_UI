#include "nocalibration405form.h"
#include "ui_nocalibration405form.h"

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
