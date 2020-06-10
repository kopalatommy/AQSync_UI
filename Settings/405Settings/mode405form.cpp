#include "mode405form.h"
#include "ui_mode405form.h"
#include "adaptivefilter405form.h"
#include "nocalibration405form.h"
#include "settings405.h"


Mode405form::Mode405form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mode405form)
{
    ui->setupUi(this);
}

Mode405form::~Mode405form()
{
    delete ui;
}

void Mode405form::on_Left_clicked()
{
    adaptivefilter405form left;
    left.setModal(true);
    left.exec();
}

void Mode405form::on_Right_clicked()
{
    NOCalibration405form NOcali;
    NOcali.setModal(true);
    NOcali.exec();
}

void Mode405form::on_Home_clicked()
{
    settings405 back;
    back.setModal(true);
    back.exec();
}
