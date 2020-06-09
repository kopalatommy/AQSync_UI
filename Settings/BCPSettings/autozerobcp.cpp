#include "autozerobcp.h"
#include "ui_autozerobcp.h"

AutoZeroBCP::AutoZeroBCP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AutoZeroBCP)
{
    ui->setupUi(this);
}

AutoZeroBCP::~AutoZeroBCP()
{
    delete ui;
}
