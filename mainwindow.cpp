#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    SettingFormsHandler::GenerateForms();

    ModbusHandler::GetInstance();

    BCPSerialHandler::GetInstance();
    SerialHandler405::GetInstance();

    connect(&updateTimer, &QTimer::timeout, this, &MainWindow::UpdateUI);
    updateTimer.start(250);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_settingsButton_clicked(){
    SettingFormsHandler::ShowInitial();
}

void MainWindow::on_parametersButton_clicked(){
    parameters.show();
}

void MainWindow::on_graphButton_clicked(){

}

void MainWindow::on_modbusTestButton_clicked(){
    modbusTestForm.show();
}

void MainWindow::UpdateUI(){
    /*AQSyncData * data = AQSyncData::GetInstance();
    char arr[15] = {0, };

    sprintf(arr, "%1.1f", static_cast<double>(data->GetBlackCarbon()));
    ui->bcLabel->setText("BC: <font color='blue'>" + QString(arr).append("</font> ppb"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.1f", static_cast<double>(data->GetPM()));
    ui->pmLabel->setText("PM: <font color='blue'>" + QString(arr).append("</font> ppb"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.1f", static_cast<double>(data->GetMassExt880()));
    ui->massExt880Label->setText("Mass Ext 880: <font color='blue'>" + QString(arr).append("</font> ppb"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.1f", static_cast<double>(data->GetMassExt405()));
    ui->massExtLabel->setText("Mass Ext 405: <font color='blue'>" + QString(arr).append("</font> ppb"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.1f", static_cast<double>(data->GetNO()));
    ui->noLabel->setText("NO: <font color='blue'>" + QString(arr).append("</font> ppb"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.1f", static_cast<double>(data->GetNO2()));
    ui->no2Label->setText("NO2: <font color='blue'>" + QString(arr).append("</font> ppb"));

    memset(arr, 0, 15);
    sprintf(arr, "%1.1f", static_cast<double>(data->GetNOx()));
    ui->noxLabel->setText("NOx: <font color='blue'>" + QString(arr).append("</font> ppb"));

    ui->dateTimeLabel->setText(QDateTime::currentDateTime().date().toString("dd/MM/yy ").append(QDateTime::currentDateTime().time().toString("hh:mm:ss")));

    if(startingUp){
        char arr[6] = { 0, 0, 0, 0, 0, 0};
        //qDebug() << "UI index: " << uiIndex;
        if(uiIndex >= 4) {
            uiIndex = 0;
            arr[0] = ' ';
            arr[1] = 0;
        }else if(uiIndex == 0){
            arr[0] = ' ';
            arr[1] = 0;
        }else if(uiIndex == 1){
            arr[0] = '.';
            arr[1] = 0;
        }else if(uiIndex == 2){
            arr[0] = '.';
            arr[1] = ' ';
            arr[2] = '.';
            arr[3] = 0;
        }
        else{
            arr[0] = '.';
            arr[1] = ' ';
            arr[2] = '.';
            arr[3] = ' ';
            arr[4] = '.';
            arr[5] = 0;
        }
        uiIndex++;
        ui->loggingLabel->setText(QString("Warming up\n").append(arr));
    }else{
        ui->loggingLabel->setText("Logging");
    }*/
}

void MainWindow::FinishedWarmingUp(){
    startingUp = false;
}
