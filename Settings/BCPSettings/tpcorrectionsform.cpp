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

void tpcorrectionsform::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(FLOWCALIBRATION_BCP_INDEX);
}

void tpcorrectionsform::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(ADAPTIVEFILTER_BCP_INDEX);
}

void tpcorrectionsform::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(SETTINGS_BCP_INDEX);
}
