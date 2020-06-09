#include "parameters405form.h"
#include "ui_parameters405form.h"

parameters405form::parameters405form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::parameters405form)
{
    ui->setupUi(this);
}

parameters405form::~parameters405form()
{
    delete ui;
}
