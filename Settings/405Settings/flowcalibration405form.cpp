#include "flowcalibration405form.h"
#include "ui_flowcalibration405form.h"

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
