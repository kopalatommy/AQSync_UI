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
    SettingFormsHandler::JumpToIndex(MODE_405_INDEX);
    close();
}

void settings405::on_AdaptiveFilter_clicked()
{
    SettingFormsHandler::JumpToIndex(ADAPTIVEFILTER_405_Index);
    close();
}

void settings405::on_NOCalibration_clicked()
{
    SettingFormsHandler::JumpToIndex(NOCALIBRATION_405_INDEX);
    close();
}

void settings405::on_FlowCalibration_clicked()
{
    SettingFormsHandler::JumpToIndex(FLOWCALIBRATION_405_INDEX);
    close();
}

void settings405::on_NO2Calibration_clicked()
{
    SettingFormsHandler::JumpToIndex(NO2CALIBRATION_405_INDEX);
    close();
}

//Review, parameters will be in a different position
void settings405::on_Parameters_clicked()
{
    SettingFormsHandler::JumpToIndex(PARAMETERS_405_INDEX);
    close();
}

void settings405::on_Home_Button_clicked()
{
    close();
}

void settings405::on_NextLeft_clicked()
{
    SettingFormsHandler::MoveLeft();
    close();
}

void settings405::on_NextRight_clicked()
{
    SettingFormsHandler::MoveRight();
}
