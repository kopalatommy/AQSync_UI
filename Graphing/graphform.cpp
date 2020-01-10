#include "graphform.h"
#include "ui_graphform.h"

GraphForm::GraphForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GraphForm)
{
    ui->setupUi(this);
}

GraphForm::~GraphForm()
{
    delete ui;
}

/*void GraphForm::on_home_clicked(){
    close();
}

void GraphForm::on_Gasses_clicked(){

}

void GraphForm::on_Settings_clicked(){

}

void GraphForm::on_zoomIn_clicked(){

}

void GraphForm::on_zoomOut_clicked(){

}

void GraphForm::on_Down_clicked(){

}

void GraphForm::on_Up_clicked(){

}

void GraphForm::on_Right_clicked(){

}

void GraphForm::on_Left_clicked(){

}*/
