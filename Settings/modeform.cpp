#include "modeform.h"
#include "ui_modeform.h"

ModeForm::ModeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModeForm)
{
    ui->setupUi(this);
}

ModeForm::~ModeForm(){
    delete ui;
}

void ModeForm::on_closeButton_clicked(){
    emit CloseForms();
}

void ModeForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void ModeForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}

void ModeForm::on_saveButton_clicked(){
    int val = ui->comboBox->currentIndex();
    QMessageBox * msg = new QMessageBox();

    if(val > 0 && val < 5){
        msg->setText("Setting avg setting to " + QString::number(val));

        AQSyncSettings::GetInstance()->SetMode(static_cast<unsigned char>(val));
        //ModbusHandler::GetInstance()->SetRegister(MODE_REGISTER, static_cast<short>(val));
    }else{
        msg->setText("Received invalid value");
    }

    connect(msg, &QMessageBox::finished, this, &ModeForm::OnMessageBoxFinished);
    msg->setStandardButtons(QMessageBox::StandardButton::Ok);
    msg->show();
}
void ModeForm::OnMessageBoxFinished(int code){
    qDebug() << "Message box exited with: " << code;
    sender()->deleteLater();
}

void ModeForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);
    ui->comboBox->setCurrentIndex(AQSyncSettings::GetInstance()->GetMode());
}
