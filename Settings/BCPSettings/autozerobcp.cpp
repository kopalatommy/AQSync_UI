#include "autozerobcp.h"
#include "ui_autozerobcp.h"
#include "adaptivefilterbcpform.h"
#include "calibration880nm.h"
#include "bcpsettings.h"

AutoZeroBCP::AutoZeroBCP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AutoZeroBCP)
{
    ui->setupUi(this);
}

AutoZeroBCP::~AutoZeroBCP()
{
    delete ui;
}

void AutoZeroBCP::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(8);
    close();
}

void AutoZeroBCP::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(11);
    close();
}

void AutoZeroBCP::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(1);
    close();
}
