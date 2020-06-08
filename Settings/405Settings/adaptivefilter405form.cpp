#include "adaptivefilter405form.h"
#include "ui_adaptivefilter405form.h"

adaptivefilter405form::adaptivefilter405form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adaptivefilter405form)
{
    ui->setupUi(this);
}

adaptivefilter405form::~adaptivefilter405form()
{
    delete ui;
}
