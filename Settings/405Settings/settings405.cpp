#include "settings405.h"
#include "ui_settings405.h"


settings405::settings405(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settings405)
{
    ui->setupUi(this);

    qDebug() << "Created 405 settings";
}

settings405::~settings405()
{
    delete ui;
}



void settings405::on_Mode_2_clicked()
{
    SettingFormsHandler::JumpToIndex(3);
    close();
}


void settings405::on_AdaptiveFilter_clicked()
{
    SettingFormsHandler::JumpToIndex(2);
    close();
}

void settings405::on_NOCalibration_clicked()
{
    SettingFormsHandler::JumpToIndex(4);
    close();
}

void settings405::on_FlowCalibration_clicked()
{
    SettingFormsHandler::JumpToIndex(6);
    close();
}

void settings405::on_NO2Calibration_clicked()
{
    SettingFormsHandler::JumpToIndex(5);
    close();
}

void settings405::on_Parameters_clicked()
{
    SettingFormsHandler::JumpToIndex(7);
    close();
}

void settings405::on_Home_Button_clicked()
{
    close();
}

void settings405::on_NextLeft_clicked()
{
    SettingFormsHandler::JumpToIndex(1);
    close();
}

void settings405::on_NextRight_clicked()
{
    //SettingFormsHandler::MoveRight();
}
