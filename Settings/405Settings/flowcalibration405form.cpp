#include "flowcalibration405form.h"
#include "ui_flowcalibration405form.h"
#include "no2calibration405form.h"
#include "parameters405form.h"
#include "settings405.h"


bool flowcalibration405form::isEnabled = false;

flowcalibration405form::flowcalibration405form(QWidget *parent) :
    QWidget (parent),
    ui(new Ui::flowcalibration405form)
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

    connect(SerialHandler405::GetInstance(), &SerialHandler405::NewAdFilterSettings405, this, &flowcalibration405form::GetNewSettings);
    GetNewSettings();
}

flowcalibration405form::~flowcalibration405form()
{
    delete ui;
}

void flowcalibration405form::on_Previous_clicked()
{
    SettingFormsHandler::JumpToIndex(5);
    close();
}

void flowcalibration405form::on_Next_clicked()
{
    SettingFormsHandler::JumpToIndex(7);
    close();
}

void flowcalibration405form::on_home_clicked()
{
    SettingFormsHandler::JumpToIndex(0);
    close();
}

void flowcalibration405form::on_CellSlopeMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &flowcalibration405form::NewCellFlowSlope);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, .5, 1.5, this);
    NumberPadForm::GetInstance()->show();
}
void flowcalibration405form::NewCellFlowSlope(float s)
{
    cellFlowSlope = s;
    UpdateLocalUI();
}

void flowcalibration405form::on_OzoneSlopeMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &flowcalibration405form::NewOzoneFlowSlope);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, .5, 1.5, this);
    NumberPadForm::GetInstance()->show();
}
void flowcalibration405form::NewOzoneFlowSlope(float s){
    ozoneFlowSlope = s;
    UpdateLocalUI();
}


void flowcalibration405form::on_Save_clicked(){
    bool valueChanged = false;

    SettingsHandler * s = SettingsHandler::GetInstance();

    dontGrab = true;

    //Check to see if the user changed the setting
    //If the difference is greater than 2 point precision, than it is a new value
    if(fabs(static_cast<double>(cellFlowSlope - s->GetCellFlowSlope_405())) > 0.001){
        valueChanged = true;
        s->SetCellFlowSlope_405(cellFlowSlope);
    }

    //Check to see if the user changed the setting
    //If the difference is greater than 2 point precision, than it is a new value
    if(fabs(static_cast<double>(s->GetOzoneFlowSlope_405() - ozoneFlowSlope)) > 0.001){
        valueChanged = true;
        s->SetOzoneFlowSlope_405(ozoneFlowSlope);
    }

    if(valueChanged){
        QMessageBox msg;
        msg.setText("Settings added to queue");
        msg.setStyleSheet("QMessageBox{ border: 1px solid black; }");
        msg.setStandardButtons(QMessageBox::Ok);
        msg.exec();
    }

}


void flowcalibration405form::UpdateLocalUI(){
    ui->cellFlowLabel->setText("Cell Flow Slope:\n" + QString::number(cellFlowSlope));
    ui->ozoneFlowLabel->setText("Ozone Flow Slope:\n" + QString::number(ozoneFlowSlope));

    qDebug() << "Updated UI";
}

void flowcalibration405form::GetNewSettings(){
    SettingsHandler * settings = SettingsHandler::GetInstance();

    cellFlowSlope = settings->GetCellFlowSlope_405();
    ozoneFlowSlope = settings->GetOzoneFlowSlope_405();
    UpdateLocalUI();
}

void flowcalibration405form::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);

    if(NumberPadForm::GetInstance()->isHidden())
    {
        GetNewSettings();
        qDebug() << "Getting new settings";
    }
}

void flowcalibration405form::closeEvent(QCloseEvent *event)
{
    QWidget::closeEvent(event);
    SettingsHandler * settings = SettingsHandler::GetInstance();

    if(settings->GetOzoneFlowSlope_405() != ozoneFlowSlope || settings->GetCellFlowSlope_405() != cellFlowSlope)
    {
        QMessageBox msg;
        msg.setText("Save unsaved setting?");
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
