#include "avgsettingform.h"
#include "ui_avgsettingform.h"

AvgSettingForm::AvgSettingForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AvgSettingForm)
{
    ui->setupUi(this);
}

AvgSettingForm::~AvgSettingForm(){
    delete ui;
}

void AvgSettingForm::on_closeButton_clicked(){
        emit CloseForms();
}

void AvgSettingForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void AvgSettingForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}

void AvgSettingForm::on_saveButton_clicked(){
    int val = ui->comboBox->currentIndex();
    QMessageBox * msg = new QMessageBox();

    if(val > 0 && val < 5){
        msg->setText("Setting avg setting to " + QString::number(val));

        AQSyncSettings::GetInstance()->SetAvgTime(static_cast<unsigned char>(val));
        //ModbusHandler::GetInstance()->SetRegister(AVG_TIME_REGISTER, static_cast<short>(val));
    }else{
        msg->setText("Received invalid value");
    }
    connect(msg, &QMessageBox::finished, this, &AvgSettingForm::OnMessageBoxFinish);
    msg->setStandardButtons(QMessageBox::StandardButton::Ok);
    msg->show();
}
void AvgSettingForm::OnMessageBoxFinish(int code){
    qDebug() << "Message box exited with: " << code;
    sender()->deleteLater();
}

void AvgSettingForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);

    ui->comboBox->setCurrentIndex(AQSyncSettings::GetInstance()->GetAvgTime());
}
