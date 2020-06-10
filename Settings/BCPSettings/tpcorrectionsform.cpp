#include "tpcorrectionsform.h"
#include "ui_tpcorrectionsform.h"
#include "flowcalibrationbcpform.h"
#include "adaptivefilterbcpform.h"
#include "bcpsettings.h"

tpcorrectionsform::tpcorrectionsform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tpcorrectionsform)
{
    ui->setupUi(this);
}

tpcorrectionsform::~tpcorrectionsform()
{
    delete ui;
}

void tpcorrectionsform::on_pushButton_clicked()
{
    SettingFormsHandler::JumpToIndex(12);
    close();
}

void tpcorrectionsform::on_pushButton_2_clicked()
{
    SettingFormsHandler::JumpToIndex(8);
    close();
}

void tpcorrectionsform::on_pushButton_3_clicked()
{
    SettingFormsHandler::JumpToIndex(1);
    close();
}
