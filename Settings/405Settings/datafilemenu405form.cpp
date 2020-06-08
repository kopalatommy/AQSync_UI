#include "datafilemenu405form.h"
#include "ui_datafilemenu405form.h"

datafilemenu405form::datafilemenu405form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::datafilemenu405form)
{
    ui->setupUi(this);
}

datafilemenu405form::~datafilemenu405form()
{
    delete ui;
}
