#include "flowcalibrationbcpform.h"
#include "ui_flowcalibrationbcpform.h"

FlowCalibrationBCPForm::FlowCalibrationBCPForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FlowCalibrationBCPForm)
{
    ui->setupUi(this);

    QWidget::setWindowFlags(Qt::CustomizeWindowHint);

    ui->CellSlopeMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->OzoneSlopeMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    ui->Home->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Left->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Right->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Save->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);

    connect(BCPSerialHandler::GetInstance(), &BCPSerialHandler::NewAdFilterSettingsBCP, this, &FlowCalibrationBCPForm::GetNewSettings);
    GetNewSettings();
}

FlowCalibrationBCPForm::~FlowCalibrationBCPForm()
{
    delete ui;
}

void FlowCalibrationBCPForm::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(CALIBRATION_405NM_INDEX);
}

void FlowCalibrationBCPForm::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(TPCORRECTION_BCP_INDEX);
}

void FlowCalibrationBCPForm::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(SETTINGS_BCP_INDEX);
}

void FlowCalibrationBCPForm::on_CellSlopeMask_clicked()
{
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &FlowCalibrationBCPForm::NewCellFlowSlope);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, .5, 1.5, this);
    NumberPadForm::GetInstance()->show();
    dontGrab = true;
}
void FlowCalibrationBCPForm::NewCellFlowSlope(float s)
{
    qDebug() << "New Flow Slope: " << s;
    cellFlowSlope = s;
    UpdateLocalUI();
}

void FlowCalibrationBCPForm::on_OzoneSlopeMask_clicked()
{
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &FlowCalibrationBCPForm::NewOzoneFlowSlope);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, .5, 1.5, this);
    NumberPadForm::GetInstance()->show();
    dontGrab = true;
}
void FlowCalibrationBCPForm::NewOzoneFlowSlope(float s)
{
    ozoneFlowSlope = s;
    UpdateLocalUI();
}

void FlowCalibrationBCPForm::on_Save_clicked()
{
    bool valueChanged = false;

    SettingsHandler * s = SettingsHandler::GetInstance();

    dontGrab = true;

    //Check to see if the user changed the setting
    //If the difference is greater than 2 point precision, than it is a new value
    if((cellFlowSlope - s->GetFlowSlope_bcp()) > 0.001)
    {
        valueChanged = true;
        s->SetFlowSlope_bcp(cellFlowSlope);
    }

    //Check to see if the user changed the setting
    //If the difference is greater than 2 point precision, than it is a new value
    if((s->GetFlowZero_bcp() - ozoneFlowSlope) > 0.001)
    {
        valueChanged = true;
        s->SetFlowZero_bcp(ozoneFlowSlope);
    }

    if(valueChanged)
    {
        QMessageBox msg;
        msg.setText("Settings added to queue");
        msg.setStyleSheet("QMessageBox{ border: 1px solid black; }");
        msg.setStandardButtons(QMessageBox::Ok);
        msg.exec();
    }
}

void FlowCalibrationBCPForm::GetNewSettings()
{
    SettingsHandler * settings = SettingsHandler::GetInstance();

    cellFlowSlope = settings->GetFlowSlope_bcp();
    ozoneFlowSlope = settings->GetFlowZero_bcp();
}

void FlowCalibrationBCPForm::UpdateLocalUI()
{
    ui->cellFlowLabel->setText("Cell flow slope:\n" + QString::number(static_cast<double>(cellFlowSlope)));
    ui->ozoneFlowLabel->setText("Ozone flow slope:\n" + QString::number(static_cast<double>(ozoneFlowSlope)));
}

void FlowCalibrationBCPForm::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);

    if(dontGrab == true)
    {
        dontGrab = false;
        return;
    }

    GetNewSettings();
    UpdateLocalUI();
}

void FlowCalibrationBCPForm::closeEvent(QCloseEvent *event)
{
    QWidget::closeEvent(event);

    SettingsHandler * s = SettingsHandler::GetInstance();

    if(fabs(static_cast<double>(cellFlowSlope - s->GetFlowSlope_bcp())) > 0.001 || fabs(static_cast<double>(s->GetFlowZero_bcp() - ozoneFlowSlope)) > 0.001)
    {
        QMessageBox msg;
        msg.setText("Save unsaved settings?");
        msg.setStandardButtons(QMessageBox::StandardButton::Yes | QMessageBox::StandardButton::No);
        switch (msg.exec())
        {
        case QMessageBox::StandardButton::Yes:
            on_Save_clicked();
            break;

        default:
            break;
        }
    }
}

