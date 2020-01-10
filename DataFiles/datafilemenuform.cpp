#include "datafilemenuform.h"
#include "ui_datafilemenuform.h"

DataFileMenuForm::DataFileMenuForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataFileMenuForm)
{
    ui->setupUi(this);

    /*ui->Browse->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Cancel->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->SelectAll->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->SelectCurrent->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");*/

    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);
}

DataFileMenuForm::~DataFileMenuForm(){
    delete ui;
}

void DataFileMenuForm::on_SelectCurrent_clicked(){
    emit SelectCurrent();
    close();
}

void DataFileMenuForm::on_SelectAll_clicked(){
    emit SelectAll();
    close();
}

void DataFileMenuForm::on_Browse_clicked(){
    emit Browse();
    close();
}

void DataFileMenuForm::on_Cancel_clicked(){
    close();
}
