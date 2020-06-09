#include "bcpsettings.h"
#include "ui_bcpsettings.h"

BCPSettings::BCPSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BCPSettings)
{
    ui->setupUi(this);
}

BCPSettings::~BCPSettings()
{
    delete ui;
}
