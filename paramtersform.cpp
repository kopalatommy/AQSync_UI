#include "paramtersform.h"
#include "ui_paramtersform.h"

ParamtersForm::ParamtersForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParamtersForm)
{
    ui->setupUi(this);

    //connect(AQSyncData::GetInstance(), &AQSyncData::FinshedReadingLine, this, &ParamtersForm::UpdateUI);
}

ParamtersForm::~ParamtersForm()
{
    delete ui;
}

void ParamtersForm::UpdateUI()
{
    if(viewing == true)
    {
        if(showingIndex == PARAMETERS_BCP_INDEX)
        {
            ui->title->setText("BCP Parameters");

            BCPData * data = BCPData::GetInstance();

            ui->dataLabel_1->setText("Log Number: " + QString::number(data->GetLogNumber()));
            ui->dataLabel_2->setText("MEC(800nm): " + QString::number(static_cast<double>(data->GetMEC880()), 'g', 2));
            ui->dataLabel_3->setText("MEC(405nm): " + QString::number(static_cast<double>(data->GetMEC405()), 'g', 2));
            ui->dataLabel_4->setText("880 Ext: " + QString::number(static_cast<double>(data->GetMassExt880()), 'g', 2));
            ui->dataLabel_5->setText("405 Ext: " + QString::number(static_cast<double>(data->GetMassExt405()), 'g', 2));
            ui->dataLabel_6->setText("Cell Temp: " + QString::number(static_cast<double>(data->GetCellTemp()), 'g', 2));
            ui->dataLabel_7->setText("Cell Press: " + QString::number(static_cast<double>(data->GetCellPress()), 'g', 2));
            ui->dataLabel_8->setText("Cell Flow: " + QString::number(static_cast<double>(data->GetCellFlow()), 'g', 2));
            ui->dataLabel_9->setText("Flow Temp: " + QString::number(static_cast<double>(data->GetSystemTemp()), 'g', 2));
            ui->dataLabel_10->setText("Humidity: " + QString::number(static_cast<double>(data->GetHumidity()), 'g', 2));
            ui->dataLabel_11->setText("Status: " + QString::number(data->GetStatus()));
            ui->dataLabel_12->setText("Date: " + QString(data->GetFormattedDate()));
            ui->dataLabel_13->setText("Time: " + QString(data->GetFormattedTime()));

            //Clear all other data labels
            ui->dataLabel_14->setText("");
            ui->dataLabel_15->setText("");
            ui->dataLabel_16->setText("");
            ui->dataLabel_17->setText("");
            ui->dataLabel_18->setText("");
            ui->dataLabel_19->setText("");
        }
        else if(showingIndex == PARAMETERS_405_INDEX)
        {
            ui->title->setText("405 Parameters");

            DataHandler405 * data = DataHandler405::GetInstance();

            ui->dataLabel_1->setText("Log Number: " + QString::number(data->GetLogNumber()));
            ui->dataLabel_2->setText("NO: " + QString::number(static_cast<double>(data->GetNO()), 'g', 2));
            ui->dataLabel_3->setText("NO2: " + QString::number(static_cast<double>(data->GetNO2()), 'g', 2));
            ui->dataLabel_4->setText("NOx: " + QString::number(static_cast<double>(data->GetNOX()), 'g', 2));
            ui->dataLabel_5->setText("Cell Temp: " + QString::number(static_cast<double>(data->GetCellTemp()), 'g', 2));
            ui->dataLabel_6->setText("Cell Press: " + QString::number(static_cast<double>(data->GetCellPress()), 'g', 2));
            ui->dataLabel_7->setText("Cell Flow: " + QString::number(static_cast<double>(data->GetCellFlow()), 'g', 2));
            ui->dataLabel_8->setText("PDV1: " + QString::number(static_cast<double>(data->GetPDV1()), 'g', 4));
            ui->dataLabel_9->setText("PDV2: " + QString::number(static_cast<double>(data->GetPDV2()), 'g', 4));
            ui->dataLabel_10->setText("Ozone Flow: " + QString::number(static_cast<double>(data->GetOzoneFlow()), 'g', 2));
            ui->dataLabel_11->setText("Scrubber Temp: " + QString::number(static_cast<double>(data->GetScrubberTemp()), 'g', 2));
            ui->dataLabel_11->setText("Status: " + QString::number(data->GetErrorByte()));
            ui->dataLabel_12->setText("Date: " + QString(data->GetDate()));
            ui->dataLabel_13->setText("Time: " + QString(data->GetTime()));

            //Clear all other data labels
            ui->dataLabel_14->setText("");
            ui->dataLabel_15->setText("");
            ui->dataLabel_16->setText("");
            ui->dataLabel_17->setText("");
            ui->dataLabel_18->setText("");
            ui->dataLabel_19->setText("");
        }
        else if(showingIndex == PARAMETERS_108_INDEX)
        {
            ui->dataLabel_1->setText("Log Number: ");
            ui->dataLabel_2->setText("NO: ");
            ui->dataLabel_3->setText("NO2: ");
            ui->dataLabel_4->setText("NOx: ");
            ui->dataLabel_5->setText("Cell Temp: ");

            //Clear all other data labels
            ui->dataLabel_6->setText("");
            ui->dataLabel_7->setText("");
            ui->dataLabel_8->setText("");
            ui->dataLabel_9->setText("");
            ui->dataLabel_4->setText("");
            ui->dataLabel_5->setText("");
            ui->dataLabel_6->setText("");
            ui->dataLabel_7->setText("");
            ui->dataLabel_8->setText("");
            ui->dataLabel_9->setText("");
            ui->dataLabel_10->setText("");
            ui->dataLabel_11->setText("");
            ui->dataLabel_12->setText("");
            ui->dataLabel_13->setText("");
            ui->dataLabel_14->setText("");
            ui->dataLabel_15->setText("");
            ui->dataLabel_16->setText("");
            ui->dataLabel_17->setText("");
            ui->dataLabel_18->setText("");
            ui->dataLabel_19->setText("");
        }
        else
        {
            showingIndex = PARAMETERS_BCP_INDEX;
            UpdateUI();
        }
    }
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
    showingIndex = showingIndex - 1 > 0 ? showingIndex - 1 : PARAMETERS_PAGES - 1;
    UpdateUI();
}

void ParamtersForm::on_rightButton_clicked()
{
    showingIndex = showingIndex + 1 < PARAMETERS_PAGES ? showingIndex + 1 : 1;
    UpdateUI();
}
