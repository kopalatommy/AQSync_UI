#include "no2calibration405form.h"
#include "ui_no2calibration405form.h"

NO2Calibration405Form::NO2Calibration405Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NO2Calibration405Form)
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

    connect(SerialHandler405::GetInstance(), &SerialHandler405::NewAdFilterSettings405, this, &NO2Calibration405Form::GetNewSettings);
    GetNewSettings();
}

NO2Calibration405Form::~NO2Calibration405Form()
{
    delete ui;
}

void NO2Calibration405Form::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(NOCALIBRATION_405_INDEX);
    close();
}

void NO2Calibration405Form::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(FLOWCALIBRATION_405_INDEX);
    close();
}

void NO2Calibration405Form::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(SETTINGS_405_INDEX);
    close();
}





void NO2Calibration405Form::on_slopeMask_clicked(){
    //qDebug() << "NO2 slope mask clicked";

    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &NO2Calibration405Form::NewSlope);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, .5, 1.5, this);
    NumberPadForm::GetInstance()->show();
}
void NO2Calibration405Form::NewSlope(float val){
    slope = val;
    UpdateLocalUI();
}

void NO2Calibration405Form::on_zeroMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewFloat, this, &NO2Calibration405Form::NewZero);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::floatV, 0, 5, this);
    NumberPadForm::GetInstance()->show();
}
void NO2Calibration405Form::NewZero(float val){
    zero = val;
    UpdateLocalUI();
}

void NO2Calibration405Form::on_AnalogMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewInt, this, &NO2Calibration405Form::NewAnalog);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::integer, 25, 1000, this);
    NumberPadForm::GetInstance()->show();
}
void NO2Calibration405Form::NewAnalog(int val){
    analog = val;
    UpdateLocalUI();
}

void NO2Calibration405Form::on_Save_clicked(){
    bool valueChanged = false;

    SettingsHandler * s = SettingsHandler::GetInstance();

    dontGrab = true;

    //Check to see if the user changed the setting
    //If the difference is greater than 2 point precision, than it is a new value
    if(fabs(static_cast<double>(s->GetNO2Slope_405() - slope)) > 0.001)
    {
        valueChanged = true;
        s->SetNO2Slope_405(slope);
    }

    //Check to see if the user changed the setting
    //If the difference is greater than 2 point precision, than it is a new value
    if(fabs(static_cast<double>(s->GetNO2Zero_405() - zero)) > 0.01)
    {
        valueChanged = true;
        s->SetNO2Zero_405(zero);
    }

    if(analog != s->GetAnalogNO2_405())
    {
        valueChanged = true;
        s->SetAnalogNO2_405(analog);
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

void NO2Calibration405Form::GetNewSettings()
{
    if(!dontGrab)
    {
        SettingsHandler * s = SettingsHandler::GetInstance();
        analog = s->GetAnalogNO2_405();
        slope = s->GetNO2Slope_405();
        zero = s->GetNO2Zero_405();
        UpdateLocalUI();
    }
}

void NO2Calibration405Form::UpdateLocalUI()
{
    ui->SlopeLabel->setText("Slope Mask:\n" + QString::number(static_cast<double>(slope)));
    ui->ZeroLabel->setText("Zero Mask:\n" + QString::number(static_cast<double>(zero)));
    ui->AnalogLabel->setText("Analog Mask:\n" + QString::number(static_cast<double>(analog)));
}

void NO2Calibration405Form::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    if(!dontGrab) GetNewSettings();
    dontGrab = false;
}

void NO2Calibration405Form::closeEvent(QCloseEvent *event)
{
    QWidget::closeEvent(event);
    SettingsHandler * settings = SettingsHandler::GetInstance();

    if(settings->GetAnalogNO2_405() != analog || settings->GetNO2Slope_405() != slope ||
       settings->GetNO2Zero_405() != zero)
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
