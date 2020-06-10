#include "adaptivefilterbcpform.h"
#include "ui_adaptivefilterbcpform.h"
#include "tpcorrectionsform.h"
#include "autozerobcp.h"
#include "bcpsettings.h"

adaptivefilterBCPform::adaptivefilterBCPform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adaptivefilterBCPform)
{
    ui->setupUi(this);
}

adaptivefilterBCPform::~adaptivefilterBCPform()
{
    delete ui;
}

void adaptivefilterBCPform::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(13);
    close();
}

void adaptivefilterBCPform::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(9);
    close();
}

void adaptivefilterBCPform::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(1);
    close();
}
