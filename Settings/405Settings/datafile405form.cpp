#include "datafile405form.h"
#include "ui_datafile405form.h"

datafile405form::datafile405form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::datafile405form)
{
    ui->setupUi(this);
}

datafile405form::~datafile405form()
{
    delete ui;
}
