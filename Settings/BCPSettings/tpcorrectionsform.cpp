#include "tpcorrectionsform.h"
#include "ui_tpcorrectionsform.h"

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
