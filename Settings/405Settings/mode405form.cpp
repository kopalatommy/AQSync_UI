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
    SettingFormsHandler::JumpToIndex(2);
    close();
}

void Mode405form::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(4);
    close();
}

void Mode405form::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(0);
    close();
}
