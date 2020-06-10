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
    SettingFormsHandler::JumpToIndex(7);
    close();
}

void adaptivefilter405form::on_pushButton_clicked()
{
    //save button
}

void adaptivefilter405form::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(3);
    close();
}

void adaptivefilter405form::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(0);
    close();
}
