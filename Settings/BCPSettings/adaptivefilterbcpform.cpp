#include "adaptivefilterbcpform.h"
#include "ui_adaptivefilterbcpform.h"

adaptivefilterBCPform::adaptivefilterBCPform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adaptivefilterBCPform)
{
    ui->setupUi(this);
}

adaptivefilterBCPform::~adaptivefilterBCPform()
{
    delete ui;
}
