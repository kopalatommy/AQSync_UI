#include "adaptivefilterform.h"
#include "ui_adaptivefilterform.h"

AdaptiveFilterForm::AdaptiveFilterForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdaptiveFilterForm)
{
    ui->setupUi(this);

    ui->longMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->shortMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->differenceMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->percentMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
}

AdaptiveFilterForm::~AdaptiveFilterForm(){
    delete ui;
}

void AdaptiveFilterForm::on_closeButton_clicked(){
    emit CloseForms();
}

void AdaptiveFilterForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void AdaptiveFilterForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}

void AdaptiveFilterForm::on_shortMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilterForm::NewShort);
    number->SetInitialValues(NumberPadForm::Types::UChar, 1, 5, this);
    ignoreGrab = true;
}
void AdaptiveFilterForm::NewShort(unsigned char val){
    qDebug() << "New short: "<< QString::number(val);
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilterForm::NewShort);
    shortLength = val;
    UpdateUI();
}

void AdaptiveFilterForm::on_longMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilterForm::NewLong);
    number->SetInitialValues(NumberPadForm::Types::UChar, 6, 45, this);
    ignoreGrab = true;
}
void AdaptiveFilterForm::NewLong(unsigned char val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilterForm::NewLong);
    longLength = val;
    UpdateUI();
}

void AdaptiveFilterForm::on_percentMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilterForm::NewPercent);
    number->SetInitialValues(NumberPadForm::Types::UChar, 0, 10, this);
    ignoreGrab = true;
}
void AdaptiveFilterForm::NewPercent(unsigned char val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilterForm::NewPercent);
    percent = val;
    UpdateUI();
}

void AdaptiveFilterForm::on_differenceMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilterForm::NewDiff);
    number->SetInitialValues(NumberPadForm::Types::UChar, 0, 50, this);
    ignoreGrab = true;
}
void AdaptiveFilterForm::NewDiff(unsigned char val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilterForm::NewDiff);
    difference = val;
    UpdateUI();
}

void AdaptiveFilterForm::on_saveButton_clicked(){
    bool valueChanged = false;

    /*AQSyncSettings * settings = AQSyncSettings::GetInstance();

    if(settings->GetAdShort() != shortLength){
        valueChanged = true;
        settings->SetAdShort(shortLength);
        //ModbusHandler::GetInstance()->SetRegister(ADAPTIVE_SHORT_REGISTER, shortLength);
    }

    if(settings->GetAdLong() != longLength){
        valueChanged = true;
        settings->SetAdLong(longLength);
        //ModbusHandler::GetInstance()->SetRegister(ADAPTIVE_LONG_REGISTER, longLength);
    }

    if(settings->GetAdDiff() != difference){
        valueChanged = true;
        settings->SetAdDiff(difference);
        //ModbusHandler::GetInstance()->SetRegister(ADAPTIVE_DIFF_REGISTER, difference);
    }

    if(settings->GetAdPer() != percent){
        valueChanged = true;
        settings->SetAdPer(percent);
        //ModbusHandler::GetInstance()->SetRegister(ADAPTIVE_PER_REGISTER, percent);
    }

    if(valueChanged){
        QMessageBox * msg = new QMessageBox();
        msg->setText("Added new adaptive filter settings to queue");
        msg->setStandardButtons(QMessageBox::StandardButton::Ok);
        connect(msg, &QMessageBox::finished, this, &AdaptiveFilterForm::OnMessageBoxExit);
        //Use show over exec to prevent blocking
        msg->show();
    }*/
}

void AdaptiveFilterForm::OnMessageBoxExit(int code){
    qDebug() << "Message box exited with: " << code;
    sender()->deleteLater();
}

void AdaptiveFilterForm::UpdateUI(){
    char arr[15] = {0, };

    sprintf(arr, "%i", static_cast<int>(shortLength));
    ui->shortLabel->setText(QString("Short avg: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));
    memset(arr, 0, 15);
    sprintf(arr, "%i", longLength);
    ui->longLabel->setText(QString("Long avg: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));
    memset(arr, 0, 15);
    sprintf(arr, "%i", difference);
    ui->difference->setText(QString("Min diff: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));
    memset(arr, 0, 15);
    sprintf(arr, "%i", percent);
    ui->percent->setText(QString("% diff: ").append("<font color='blue'><u>").append(arr).append("<u/></font>"));
}

void AdaptiveFilterForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);

    /*AQSyncSettings * settings = AQSyncSettings::GetInstance();

    if(!ignoreGrab){
        shortLength = settings->GetAdShort();
        longLength = settings->GetAdLong();
        difference = settings->GetAdDiff();
        percent = settings->GetAdPer();
    }
    ignoreGrab = false;

    UpdateUI();*/
}
