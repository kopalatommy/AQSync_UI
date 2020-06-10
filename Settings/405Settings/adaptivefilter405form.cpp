#include "adaptivefilter405form.h"
#include "ui_adaptivefilter405form.h"
#include "parameters405form.h"
#include "mode405form.h"
#include "settings405.h"

adaptivefilter405form::adaptivefilter405form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adaptivefilter405form)
{
    ui->setupUi(this);
}

adaptivefilter405form::~adaptivefilter405form()
{
    delete ui;
}

void adaptivefilter405form::on_Left_clicked()
{
    parameters405form param;
    param.setModal(true);
    param.exec();
}

void adaptivefilter405form::on_pushButton_clicked()
{
    //save button
}

void adaptivefilter405form::on_Right_clicked()
{
    Mode405form mode405;
    mode405.setModal(true);
    mode405.exec();
}

void adaptivefilter405form::on_Home_clicked()
{
    settings405 back;
    back.setModal(true);
    back.exec();
}
