#include "adaptivefilterbcpform.h"
#include "ui_adaptivefilterbcpform.h"

AdaptiveFilterBCPForm::AdaptiveFilterBCPForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdaptiveFilterBCPForm)
{
    ui->setupUi(this);
}

AdaptiveFilterBCPForm::~AdaptiveFilterBCPForm()
{
    delete ui;
}

void AdaptiveFilterBCPForm::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(13);
    close();
}

void AdaptiveFilterBCPForm::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(9);
    close();
}

void AdaptiveFilterBCPForm::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(1);
    close();
}
