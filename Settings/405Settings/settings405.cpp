#include "settings405.h"
#include "ui_settings405.h"

/*#include "adaptivefilter405form.h"
#include "mode405form.h"
#include "nocalibration405form.h"
#include "flowcalibration405form.h"
#include "no2calibration405form.h"
#include "datafilemenu405form.h"
#include "mainwindow.h"
#include "Settings/BCPSettings/bcpsettings.h"
#include "parameters405form.h"*/

settings405::settings405(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settings405)
{
    ui->setupUi(this);

    qDebug() << "Created 405 settings";
}

settings405::~settings405()
{
    delete ui;
}



void settings405::on_Mode_2_clicked()
{
    /*Mode405form mode405;
    mode405.setModal(true);
    mode405.exec();*/
}


void settings405::on_AdaptiveFilter_clicked()
{
    /*adaptivefilter405form filter405;
    filter405.setModal(true);
    filter405.exec();*/
}

void settings405::on_NOCalibration_clicked()
{
    /*NOCalibration405form Nocal;
    Nocal.setModal(true);
    Nocal.exec();*/
}

void settings405::on_FlowCalibration_clicked()
{
    /*flowcalibration405form flow405;
    flow405.setModal(true);
    flow405.exec();*/
}

void settings405::on_NO2Calibration_clicked()
{
    /*no2calibration405form No2cal;
    No2cal.setModal(true);
    No2cal.exec();*/

}

void settings405::on_Parameters_clicked()
{
    /*parameters405form datafile;
    datafile.setModal(true);
    datafile.exec();*/
}

void settings405::on_Home_Button_clicked()
{
    //Ui::MainWindow mainW;
    //mainW.setModal(true);
    //mainW.exec();
    close();
}

void settings405::on_NextLeft_clicked()
{
    //BCPSettings BCPSet;
    //BCPSet.setModal(true);
    //BCPSet.exec();
    //close();
    SettingFormsHandler::MoveLeft();
}

void settings405::on_NextRight_clicked()
{
    SettingFormsHandler::MoveRight();
}
