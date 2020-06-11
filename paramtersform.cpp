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
        }
        else
        {
            ui->title->setText("405 Parameters");
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

}

void ParamtersForm::on_rightButton_clicked()
{

}
