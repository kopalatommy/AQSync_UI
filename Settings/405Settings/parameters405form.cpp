#include "parameters405form.h"
#include "ui_parameters405form.h"
#include "settings405.h"
#include "flowcalibration405form.h"
#include "adaptivefilter405form.h"

parameters405form::parameters405form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::parameters405form)
{
    ui->setupUi(this);
}

parameters405form::~parameters405form()
{
    delete ui;
}

void parameters405form::on_right_clicked()
{
    SettingFormsHandler::JumpToIndex(0);
    close();
}

void parameters405form::on_pushButton_clicked()
{
    SettingFormsHandler::JumpToIndex(6);
    close();
}

void parameters405form::on_pushButton_2_clicked()
{
    SettingFormsHandler::JumpToIndex(2);
    close();
}
