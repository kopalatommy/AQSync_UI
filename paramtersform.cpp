#include "paramtersform.h"
#include "ui_paramtersform.h"

ParamtersForm::ParamtersForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParamtersForm)
{
    ui->setupUi(this);

    //connect(AQSyncData::GetInstance(), &AQSyncData::FinshedReadingLine, this, &ParamtersForm::UpdateUI);
}

ParamtersForm::~ParamtersForm(){
    delete ui;
}

void ParamtersForm::UpdateUI(){
    if(viewing == true)
    {
        if(showingBCP == true)
        {
            ui->title->setText("BCP Parameters");

            BCPData * data = BCPData::GetInstance();

            ui->dataLabel_1->setText("Log Number: " + QString::number(data->GetLogNumber()));
            ui->dataLabel_2->setText("MEC(800nm): " + QString::number(data->GetMEC880()));
            ui->dataLabel_3->setText("MEC(405nm): " + QString::number(data->GetMEC405()));
            ui->dataLabel_4->setText("880 Ext: " + QString::number(data->GetMassExt880()));
            ui->dataLabel_5->setText("405 Ext: " + QString::number(data->GetMassExt405()));
            ui->dataLabel_6->setText("Cell Temp: " + QString::number(data->GetCellTemp()));
            ui->dataLabel_7->setText("Cell Press: " + QString::number(data->GetCellPress()));
            ui->dataLabel_8->setText("Cell Flow: " + QString::number(data->GetCellFlow()));
            ui->dataLabel_9->setText("Flow Temp: " + QString::number(data->GetSystemTemp()));
            ui->dataLabel_10->setText("Humidity: " + QString::number(data->GetHumidity()));
            ui->dataLabel_11->setText("Status: " + QString::number(data->GetStatus()));
            ui->dataLabel_12->setText("Date: " + QString::number(data->GetD()));
            ui->dataLabel_13->setText("Time: " + QString::number(data->GetHumidity()));
        }
        else
        {
            ui->title->setText("405 Parameters");

            DataHandler405 * data = DataHandler405::GetInstance();
        }
    }




    /*if(viewing == true){
        /*char arr[15] = {0, };
        AQSyncData * data = AQSyncData::GetInstance();

        ui->logNumber->setText("Log Number: " + QString::number(data->GetLogNumber()));

        sprintf(arr, "%1.1f", static_cast<double>(data->GetBlackCarbon()));
        ui->blackCarbon->setText("Black Carbon: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%1.1f", static_cast<double>(data->GetPM()));
        ui->pm->setText("PM: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%1.1f", static_cast<double>(data->GetMassExt880()));
        ui->massExt880->setText("Mass Ext 880: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%1.1f", static_cast<double>(data->GetMassExt405()));
        ui->massExt405->setText("Mass Ext 405: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%1.1f", static_cast<double>(data->GetNO()));
        ui->no->setText("NO: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%1.1f", static_cast<double>(data->GetNO2()));
        ui->no2->setText("NO2: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%1.1f", static_cast<double>(data->GetNOx()));
        ui->nox->setText("NOx: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%1.1f", static_cast<double>(data->GetCellTemp()));
        ui->cellTemp->setText("Cell Temp: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%1.1f", static_cast<double>(data->GetCellPress()));
        ui->cellPress->setText("Cell Press: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%1.1f", static_cast<double>(data->GetCellFlow()));
        ui->cellFlow->setText("Cell Flow: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%1.1f", static_cast<double>(data->GetOzoneFlow()));
        ui->ozoneFlow->setText("Ozone Flow: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%1.6f", static_cast<double>(data->GetPDV1()));
        ui->pdv1->setText("PDV 1: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%1.6f", static_cast<double>(data->GetPDV2()));
        ui->pdv2->setText("PDV2: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%1.1f", static_cast<double>(data->GetScrubberTemp()));
        ui->scrubberTemp->setText("Scrubber Temp: " + QString(arr));

        memset(arr, 0, 15);
        sprintf(arr, "%X", data->GetErrorByte());
        ui->errorByte->setText("Error Byte: " + QString(arr));

        ui->data->setText("Date: " + QString(data->GetDate()));

        ui->time->setText("Time: " + QString(data->GetTime()));

        ui->mode->setText("Mode: " + QString::number(data->GetMode()));
    }*/
}

void ParamtersForm::on_closeButton_clicked()
{
    close();
}

void ParamtersForm::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    viewing = true;
    UpdateUI();
}

void ParamtersForm::closeEvent(QCloseEvent *event)
{
    QWidget::closeEvent(event);
    viewing = false;
}

void ParamtersForm::on_leftButton_clicked()
{
    showingBCP = !showingBCP;
    UpdateUI();
}

void ParamtersForm::on_rightButton_clicked()
{
    showingBCP = !showingBCP;
    UpdateUI();
}
