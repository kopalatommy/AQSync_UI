#include "dataselection405form.h"
#include "ui_dataselection405form.h"

dataselection405form::dataselection405form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dataselection405form)
{
    ui->setupUi(this);
}

dataselection405form::~dataselection405form()
{
    delete ui;
}
