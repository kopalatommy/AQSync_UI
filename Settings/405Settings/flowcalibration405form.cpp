#include "flowcalibration405form.h"
#include "ui_flowcalibration405form.h"
#include "no2calibration405form.h"
#include "parameters405form.h"
#include "settings405.h"

flowcalibration405form::flowcalibration405form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::flowcalibration405form)
{
    ui->setupUi(this);
}

flowcalibration405form::~flowcalibration405form()
{
    delete ui;
}

void flowcalibration405form::on_Left_clicked()
{
    no2calibration405form left;
    left.setModal(true);
    left.exec();
}

void flowcalibration405form::on_Right_clicked()
{
    parameters405form right;
    right.setModal(true);
    right.exec();
}

void flowcalibration405form::on_Home_clicked()
{
    settings405 back;
    back.setModal(true);
    back.exec();
}
