#include "autozerobcp.h"
#include "ui_autozerobcp.h"
#include "adaptivefilterbcpform.h"
#include "calibration880nm.h"
#include "bcpsettings.h"

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

void AutoZeroBCP::on_Left_clicked()
{
    adaptivefilterBCPform left;
    left.setModal(true);
    left.exec();
}

void AutoZeroBCP::on_Right_clicked()
{
    Calibration880nm right;
    right.setModal(true);
    right.exec();
}

void AutoZeroBCP::on_Home_clicked()
{
    BCPSettings back;
    back.setModal(true);
    back.exec();
}
