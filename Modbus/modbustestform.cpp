#include "modbustestform.h"
#include "ui_modbustestform.h"

ModbusTestForm::ModbusTestForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModbusTestForm)
{
    ui->setupUi(this);

    QTimer * updateTimer = new QTimer();
    connect(updateTimer, &QTimer::timeout, this, &ModbusTestForm::UpdateUI);
    updateTimer->start(500);
}

ModbusTestForm::~ModbusTestForm(){
    delete ui;
}

void ModbusTestForm::UpdateUI(){
    if(!displaying) return;

    ModbusDataTable * dataTable = ModbusHandler::GetInstance()->GetDataTable();

    /*ui->label->setText("Avg Time: " + QString::number(settings->GetAvgTime()) + " : " + QString::number(dataTable->GetShort(AVG_TIME_REGISTER)));
    ui->label_2->setText("Mode: " + QString::number(settings->GetMode()) + " : " + QString::number(dataTable->GetShort(MODE_REGISTER)));
    ui->label_3->setText("Ad short: " + QString::number(settings->GetAdShort()) + " : " + QString::number(dataTable->GetShort(ADAPTIVE_SHORT_REGISTER)));
    ui->label_4->setText("Ad long: " + QString::number(settings->GetAdLong()) + " : " + QString::number(dataTable->GetShort(ADAPTIVE_LONG_REGISTER)));
    ui->label_5->setText("Ad per: " + QString::number(settings->GetAdPer()) + " : " + QString::number(dataTable->GetShort(ADAPTIVE_PER_REGISTER)));
    ui->label_39->setText("Ad diff: " + QString::number(settings->GetAdDiff()) + " : " + QString::number(dataTable->GetShort(ADAPTIVE_DIFF_REGISTER)));
    ui->label_6->setText("NO slope: " + QString::number(static_cast<double>(settings->GetNOSlope())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(NO_SLOPE_REGISTER))));
    ui->label_7->setText("NO zero: " + QString::number(static_cast<double>(settings->GetNOZero())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(NO_ZERO_REGISTER))));
    ui->label_8->setText("NO2 slope: " + QString::number(static_cast<double>(settings->GetNO2Slope())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(NO2_SLOPE_REGISTER))));
    ui->label_9->setText("NO2 zero: " + QString::number(static_cast<double>(settings->GetNO2Zero())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(NO2_ZERO_REGISTER))));
    ui->label_10->setText("Ozone flow slope: " + QString::number(static_cast<double>(settings->GetOzoneFlowSlope())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(OZONE_FLOW_SLOPE_REGISTER))));
    ui->label_11->setText("Cell flow slope: " + QString::number(static_cast<double>(settings->GetCellFlowSlope())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(CELL_FLOW_SLOPE_REGISTER))));
    ui->label_12->setText("Mass ext 405: " + QString::number(static_cast<double>(settings->GetMassExt405())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(MASS_EXT_405_REGISTER))));
    ui->label_13->setText("PM slope: " + QString::number(static_cast<double>(settings->GetPMSlope())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(PM_SLOPE_REGISTER))));
    ui->label_14->setText("PM zero: " + QString::number(static_cast<double>(settings->GetPMZero())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(PM_ZERO_REGISTER))));
    ui->label_15->setText("Mass ext 880: " + QString::number(static_cast<double>(settings->GetMassExt880())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(MASS_EXT_880_REGISTER))));
    ui->label_16->setText("BC slope: " + QString::number(static_cast<double>(settings->GetBCSlope())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(BC_SLOPE_REGISTER))));
    ui->label_17->setText("BC zero: " + QString::number(static_cast<double>(settings->GetBCZero())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(BC_ZERO_REGISTER))));
    ui->label_18->setText("Flow slope: " + QString::number(static_cast<double>(settings->GetFlowSlope())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(FLOW_SLOPE_REGISTER))));
    ui->label_19->setText("Flow zero: " + QString::number(static_cast<double>(settings->GetFlowZero())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(FLOW_ZERO_REGISTER))));

    //Data line values
    ui->label_20->setText("Log number: " + QString::number(data->GetLogNumber()) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(LOG_NUMBER_REGISTER))));
    ui->label_21->setText("BC: " + QString::number(static_cast<double>(data->GetBlackCarbon())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(BC_REGISTER))));
    ui->label_22->setText("PM: " + QString::number(static_cast<double>(data->GetPM())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(PM_REGISTER))));
    ui->label_23->setText("Mass ext 880: " + QString::number(static_cast<double>(data->GetMassExt880())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(DATA_MASS_EXT_880))));
    ui->label_24->setText("Mass ext 405: " + QString::number(static_cast<double>(data->GetMassExt405())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(DATA_MASS_EXT_405))));
    ui->label_25->setText("NO: " + QString::number(static_cast<double>(data->GetNO())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(NO_REGISTER))));
    ui->label_26->setText("NOx: " + QString::number(static_cast<double>(data->GetNOx())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(NOX_REGISTER))));
    ui->label_27->setText("NO2: " + QString::number(static_cast<double>(data->GetNO2())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(NO2_REGISTER))));
    ui->label_28->setText("Cell temp: " + QString::number(static_cast<double>(data->GetCellTemp())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(CELL_TEMP_REGISTER))));
    ui->label_29->setText("Cell press: " + QString::number(static_cast<double>(data->GetCellPress())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(CELL_PRESS_REGISTER))));
    ui->label_30->setText("Cell Flow: " + QString::number(static_cast<double>(data->GetCellFlow())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(CELL_FLOW_REGISTER))));
    ui->label_31->setText("Ozone flow: " + QString::number(static_cast<double>(data->GetOzoneFlow())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(CELL_FLOW_REGISTER))));
    ui->label_32->setText("PDV1: " + QString::number(static_cast<double>(data->GetPDV1())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(PDV1_REGISTER))));
    ui->label_33->setText("PDV2: " + QString::number(static_cast<double>(data->GetPDV2())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(PDV2_REGISTER))));
    ui->label_34->setText("Scrubber temp: " + QString::number(static_cast<double>(data->GetScrubberTemp())) + " : " + QString::number(static_cast<double>(dataTable->GetFloat(SCRUBBER_TEMP_REGISTER))));
    ui->label_35->setText("Error byte: " + QString::number(data->GetErrorByte()) + " : " + QString::number(dataTable->GetShort(ERROR_BYTE_REGISTER)));
    ui->label_36->setText("Date: " + QString(data->GetDate()) + " : " + "Not programmed yet");
    ui->label_37->setText("Time: " + QString(data->GetTime()) + " : " + "Not programmed yet");
    ui->label_38->setText("Mode: " + QString::number(data->GetMode()) + " : " + QString::number(dataTable->GetShort(DATA_MODE_REGISTER)));

    ui->label_40->setText("New Settings Coil: " + QString(dataTable->ReadCoil(NEW_SETTINGS_COIL) ? "True" : "False"));
    ui->label_41->setText("New Line Coil: " + QString(dataTable->ReadCoil(NEW_LINE_COIL) ? "True" : "False"));*/
}

void ModbusTestForm::on_refreshButton_clicked(){
    UpdateUI();
}

void ModbusTestForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);
    UpdateUI();
    displaying = true;
}

void ModbusTestForm::closeEvent(QCloseEvent *event){
    QWidget::closeEvent(event);
    displaying = false;
}

void ModbusTestForm::on_closeButton_clicked(){
    close();
}
