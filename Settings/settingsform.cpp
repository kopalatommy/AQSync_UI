#include "settingsform.h"
#include "ui_settingsform.h"

SettingsForm::SettingsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SettingsForm)
{
    ui->setupUi(this);
}

SettingsForm::~SettingsForm()
{
    delete ui;
}

void SettingsForm::on_avgButton_clicked(){
    emit JumpToIndex(AVG_INDEX);
}

void SettingsForm::on_modeButton_clicked(){
    emit JumpToIndex(MODE_INDEX);
}

void SettingsForm::on_adaptiveFilterButton_clicked(){
    emit JumpToIndex(ADAPTIVE_FILTER_INDEX);
}

void SettingsForm::on_bcCalButton_clicked(){
    emit JumpToIndex(BC_CAL_FACTORS_INDEX);
}

void SettingsForm::on_pmCalFactors_clicked(){
    emit JumpToIndex(PM_CAL_FACTORS_INDEX);
}

void SettingsForm::on_noCalButton_clicked(){
    emit JumpToIndex(NO_CAL_FACTORS_INDEX);
}

void SettingsForm::on_flowCalButton_clicked(){
    emit JumpToIndex(FLOW_CAL_FACTORS_INDEX);
}

void SettingsForm::on_no2CalButton_clicked(){
    emit JumpToIndex(NO2_CAL_FACTORS_INDEX);
}

void SettingsForm::on_modbusButton_clicked(){
    emit JumpToIndex(MODBUS_FORM_INDEX);
}

void SettingsForm::on_staticIPButton_clicked(){
    emit JumpToIndex(STATIC_IP_FORM_INDEX);
}

void SettingsForm::on_systemSettingsButton_clicked(){
    emit JumpToIndex(SYSTEM_SETTINGS_INDEX);
}

void SettingsForm::on_aboutButton_clicked(){
    emit JumpToIndex(ABOUT_INDEX);
}

void SettingsForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void SettingsForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}

void SettingsForm::on_closeButton_clicked(){
    emit CloseForms();
}

void SettingsForm::on_dataFilesButton_clicked(){
    emit JumpToIndex(DATA_FILES_FORM_INDEX);
}
