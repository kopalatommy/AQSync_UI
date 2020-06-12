#include "nocalibration405form.h"
#include "ui_nocalibration405form.h"
#include "mode405form.h"
#include "no2calibration405form.h"
#include "settings405.h"

NOCalibration405form::NOCalibration405form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NOCalibration405form)
{
    ui->setupUi(this);

    QWidget::setWindowFlags(Qt::CustomizeWindowHint);

    ui->slopeMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->zeroMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->AnalogMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    ui->Home->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Right->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Left->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Save->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);

    connect(SerialHandler405::GetInstance(), &SerialHandler405::NewAdFilterSettings405, this, &NOCalibration405form::GetNewSettings);
    GetNewSettings();
}

NOCalibration405form::~NOCalibration405form()
{
    delete ui;
}

void NOCalibration405form::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(MODE_405_INDEX);
    close();
}

void NOCalibration405form::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(NO2CALIBRATION_405_INDEX);
    close();
}

void NOCalibration405form::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(SETTINGS_405_INDEX);
    close();
}

void NOCalibration405form::on_slopeMask_clicked(){
    //qDebug() << "NO2 slope mask clicked";

    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &NOCalibration405form::NewSlope);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, .5, 1.5, this);
    NumberPadForm::GetInstance()->show();
    dontGrab = true;
}
void NOCalibration405form::NewSlope(float val){
    slope = val;
    UpdateLocalUI();
}

void NOCalibration405form::on_zeroMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &NOCalibration405form::NewZero);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, 0, 5, this);
    NumberPadForm::GetInstance()->show();
    dontGrab = true;
}
void NOCalibration405form::NewZero(float val){
    zero = val;
    UpdateLocalUI();
}

void NOCalibration405form::on_AnalogMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewInt, this, &NOCalibration405form::NewAnalog);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::integer, 25, 1000, this);
    NumberPadForm::GetInstance()->show();
    dontGrab = true;
}
void NOCalibration405form::NewAnalog(int val){
    analog = val;
    UpdateLocalUI();
}

void NOCalibration405form::on_Save_clicked(){
    bool valueChanged = false;

    SettingsHandler * s = SettingsHandler::GetInstance();

    dontGrab = true;

    //Check to see if the user changed the setting
    //If the difference is greater than 2 point precision, than it is a new value
    if(fabs(static_cast<double>(s->GetNOSlope_405() - slope)) > 0.001){
        valueChanged = true;
        s->SetNOSlope_405(slope);
    }

    //Check to see if the user changed the setting
    //If the difference is greater than 2 point precision, than it is a new value
    if(fabs(static_cast<double>(s->GetNOZero_405() - zero)) > 0.01){
        valueChanged = true;
        s->SetNOZero_405(zero);
    }

    if(analog != s->GetAnalogNO_405()){
        valueChanged = true;
        s->SetAnalogNO_405(analog);
    }

    if(valueChanged){
        QMessageBox msg;
        msg.setText("Settings added to queue");
        msg.setStyleSheet("QMessageBox{ border: 1px solid black; }");
        msg.setStandardButtons(QMessageBox::Ok);
        msg.exec();
    }
}


void NOCalibration405form::showEvent(QShowEvent *event){
    QWidget::showEvent(event);
    if(!dontGrab) GetNewSettings();
    dontGrab = false;
}

void NOCalibration405form::GetNewSettings(){
    if(!dontGrab){
        SettingsHandler * s = SettingsHandler::GetInstance();
        analog = s->GetAnalogNO_405();
        slope = s->GetNOSlope_405();
        zero = s->GetNOZero_405();
        UpdateLocalUI();
    }
    else {
        dontGrab = false;
        return;
    }
}

void NOCalibration405form::UpdateLocalUI(){
    ui->SlopeLabel->setText("Slope Mask: " + QString::number(static_cast<double>(slope)));
    ui->ZeroLabel->setText("Zero Mask: " + QString::number(static_cast<double>(zero)));
    ui->AnalogLabel->setText("Analog Mask: " + QString::number(static_cast<double>(analog)));
}

void NOCalibration405form::closeEvent(QCloseEvent *event)
{
    QWidget::closeEvent(event);
    SettingsHandler * settings = SettingsHandler::GetInstance();

    if(settings->GetAnalogNO_405() != analog || settings->GetNOSlope_405() != slope ||
       settings->GetNOZero_405() != zero)
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
