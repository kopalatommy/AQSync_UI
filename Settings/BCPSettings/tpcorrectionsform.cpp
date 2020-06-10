#include "tpcorrectionsform.h"
#include "ui_tpcorrectionsform.h"
#include "flowcalibrationbcpform.h"
#include "adaptivefilterbcpform.h"
#include "bcpsettings.h"

tpcorrectionsform::tpcorrectionsform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tpcorrectionsform)
{
    ui->setupUi(this);
}

tpcorrectionsform::~tpcorrectionsform()
{
    delete ui;
}

void tpcorrectionsform::on_pushButton_clicked()
{
    flowcalibrationBCPform left;
    left.setModal(true);
    left.exec();
}

void tpcorrectionsform::on_pushButton_2_clicked()
{
    adaptivefilterBCPform right;
    right.setModal(true);
    right.exec();
}

void tpcorrectionsform::on_pushButton_3_clicked()
{
    BCPSettings back;
    back.setModal(true);
    back.exec();
}
