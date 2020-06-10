#include "calibration880nm.h"
#include "ui_calibration880nm.h"
#include "autozerobcp.h"
#include "calibration405nm.h"
#include "bcpsettings.h"

Calibration880nm::Calibration880nm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calibration880nm)
{
    ui->setupUi(this);
}

Calibration880nm::~Calibration880nm()
{
    delete ui;
}

void Calibration880nm::on_Left_clicked()
{
    AutoZeroBCP left;
    left.setModal(true);
    left.exec();
}

void Calibration880nm::on_Right_clicked()
{
    calibration405nm right;
    right.setModal(true);
    right.exec();
}

void Calibration880nm::on_Home_clicked()
{
    BCPSettings back;
    back.setModal(true);
    back.exec();
}
