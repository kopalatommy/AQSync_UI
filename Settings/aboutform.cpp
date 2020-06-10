#include "aboutform.h"
#include "ui_aboutform.h"

AboutForm::AboutForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AboutForm)
{
    ui->setupUi(this);

    //ui->buildLabel->setText("Build number: " + QString::number(AQSyncSettings::GetInstance()->GetBuildNumber()));
}

AboutForm::~AboutForm(){
    delete ui;
}

void AboutForm::on_closeButton_clicked(){
    emit CloseForms();
}

void AboutForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void AboutForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}
