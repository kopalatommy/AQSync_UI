#include "mode405form.h"
#include "ui_mode405form.h"

Mode405form::Mode405form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mode405form)
{
    ui->setupUi(this);
}

Mode405form::~Mode405form()
{
    delete ui;
}
