#include "adaptivefilterbcpform.h"
#include "ui_adaptivefilterbcpform.h"
#include "tpcorrectionsform.h"
#include "autozerobcp.h"
#include "bcpsettings.h"

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

void adaptivefilterBCPform::on_Left_clicked()
{
    tpcorrectionsform left;
    left.setModal(true);
    left.exec();
}

void adaptivefilterBCPform::on_Right_clicked()
{
    AutoZeroBCP right;
    right.setModal(true);
    right.exec();
}

void adaptivefilterBCPform::on_Home_clicked()
{
    BCPSettings back;
    back.setModal(true);
    back.exec();
}
