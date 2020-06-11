#include "flowcalibration405form.h"
#include "ui_flowcalibration405form.h"

FlowCalibration405Form::FlowCalibration405Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FlowCalibration405Form)
{
    ui->setupUi(this);

    QWidget::setWindowFlags(Qt::CustomizeWindowHint);

    ui->CellSlopeMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->OzoneSlopeMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    ui->Home->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Next->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Previous->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Save->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);

    connect(SerialHandler405::GetInstance(), &SerialHandler405::NewAdFilterSettings405, this, &FlowCalibration405Form::GetNewSettings);
    GetNewSettings();
}

FlowCalibration405Form::~FlowCalibration405Form()
{
    delete ui;
}

void FlowCalibration405Form::on_Previous_clicked()
{
    SettingFormsHandler::JumpToIndex(5);
    close();
}

void FlowCalibration405Form::on_Next_clicked()
{
    SettingFormsHandler::JumpToIndex(7);
    close();
}

void FlowCalibration405Form::on_home_clicked()
{
    SettingFormsHandler::JumpToIndex(0);
    close();
}

void FlowCalibration405Form::on_CellSlopeMask_clicked()
{
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &FlowCalibration405Form::NewCellFlowSlope);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, .5, 1.5, this);
    NumberPadForm::GetInstance()->show();
}
void FlowCalibration405Form::NewCellFlowSlope(float s)
{
    cellFlowSlope = s;
    UpdateLocalUI();
}

void FlowCalibration405Form::on_OzoneSlopeMask_clicked()
{
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &FlowCalibration405Form::NewOzoneFlowSlope);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, .5, 1.5, this);
    NumberPadForm::GetInstance()->show();
}
void FlowCalibration405Form::NewOzoneFlowSlope(float s)
{
    ozoneFlowSlope = s;
    UpdateLocalUI();
}

void FlowCalibration405Form::on_Save_clicked()
{
    bool valueChanged = false;

    SettingsHandler * s = SettingsHandler::GetInstance();

    dontGrab = true;

    //Check to see if the user changed the setting
    //If the difference is greater than 2 point precision, than it is a new value
    if(fabs(static_cast<double>(cellFlowSlope - s->GetCellFlowSlope_405())) > 0.001)
    {
        valueChanged = true;
        s->SetCellFlowSlope_405(cellFlowSlope);
    }

    //Check to see if the user changed the setting
    //If the difference is greater than 2 point precision, than it is a new value
    if(fabs(static_cast<double>(s->GetOzoneFlowSlope_405() - ozoneFlowSlope)) > 0.001)
    {
        valueChanged = true;
        s->SetOzoneFlowSlope_405(ozoneFlowSlope);
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

void FlowCalibration405Form::GetNewSettings()
{
    SettingsHandler * settings = SettingsHandler::GetInstance();

    cellFlowSlope = settings->GetCellFlowSlope_405();
    ozoneFlowSlope = settings->GetOzoneFlowSlope_405();
}

void FlowCalibration405Form::UpdateLocalUI()
{
    ui->cellFlowLabel->setText("Cell flow slope:\n" + QString::number(static_cast<double>(cellFlowSlope)));
    ui->ozoneFlowLabel->setText("Ozone flow slope:\n" + QString::number(static_cast<double>(ozoneFlowSlope)));
}

void FlowCalibration405Form::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);

    GetNewSettings();
    UpdateLocalUI();
}

void FlowCalibration405Form::closeEvent(QCloseEvent *event)
{
    QWidget::closeEvent(event);

    SettingsHandler * s = SettingsHandler::GetInstance();

    if(fabs(static_cast<double>(cellFlowSlope - s->GetCellFlowSlope_405())) > 0.001 || fabs(static_cast<double>(s->GetOzoneFlowSlope_405() - ozoneFlowSlope)) > 0.001)
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
