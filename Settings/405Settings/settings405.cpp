#include "settings405.h"
#include "ui_settings405.h"

settings405::settings405(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settings405)
{
    ui->setupUi(this);
}

settings405::~settings405()
{
    delete ui;
}
