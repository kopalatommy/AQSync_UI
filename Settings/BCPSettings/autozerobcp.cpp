#include "autozerobcp.h"
#include "ui_autozerobcp.h"
#include "adaptivefilterbcpform.h"
#include "calibration880nm.h"
#include "bcpsettings.h"

AutoZeroBCP::AutoZeroBCP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AutoZeroBCP)
{
    ui->setupUi(this);

    QWidget::setWindowFlags(Qt::CustomizeWindowHint);

    ui->zeroPeriodMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->zeroingFrequenctMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->BCZeroMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->PMZeroMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    ui->Home->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Left->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Right->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Save->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");


    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);

    connect(SerialHandler405::GetInstance(), &SerialHandler405::NewAdFilterSettings405, this, &AutoZeroBCP::GetNewSettings);
    GetNewSettings();
}

AutoZeroBCP::~AutoZeroBCP()
{
    delete ui;
}

void AutoZeroBCP::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(8);
    close();
}

void AutoZeroBCP::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(11);
    close();
}

void AutoZeroBCP::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(1);
    close();
}








void AutoZeroBCP::on_zeroingFrequenctMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewInt, this, &AutoZeroBCP::newFrequency);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::integer, 0, 1440, this);
    NumberPadForm::GetInstance()->show();
}

//This creates and sets up the keypad form with the local varaible
//and limits. Connects the valueChanged signal in the keypadform
//to the local slot that handles a new value
void AutoZeroBCP::on_zeroPeriodMask_clicked(){
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewUnsignedChar, this, &AutoZeroBCP::newPeriod);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::UChar, 0, 60, this);
    NumberPadForm::GetInstance()->show();
}

//This handles changing the label to the current local value
void AutoZeroBCP::newFrequency(int val){
    freq = val;
    UpdateUI();
}

//This handles changing the label to the current local value
void AutoZeroBCP::newPeriod(unsigned char val){
    per = val;
    UpdateUI();
}

//This applies the settings that the user has changed and
//writes the settings to the settings file.  When the user
//changes a value, the changes are stored in local variables
//so that they are only applied when the user wants them
void AutoZeroBCP::on_Save_clicked(){
    bool newSetting = false;

    SettingsHandler * s = SettingsHandler::GetInstance();

    //Check if the user entered a new setting
    if(s->GetZeroPeriod_bcp() != per){
        //qDebug() << "New zero period";
        s->SetZeroPeriod_bcp(per);
        newSetting = true;
    }
    if(s->GetZeroFrequency_bcp() != freq){
        //qDebug() << "New frequency";
        s->SetZeroFrequency_bcp(freq);
        newSetting = true;
    }

   /* if(ui->status->isChecked() != Utilities::CheckForBit(g->bitMask, 1)){
        //qDebug() << "New useAutoZero";
        if(ui->status->checkState() == Qt::CheckState::Checked) Utilities::SetBit(g->bitMask, 1);
        else Utilities::ClearBit(g->bitMask, 1);
        CommunicationHandler::getInstance()->ReceiveNewSetting(BitMaskMarker, g->bitMask);
        newSetting = true;
    }  */



    if(newSetting){
        QMessageBox msg;
        msg.setText("Settings added to queue");
        msg.setStyleSheet("QMessageBox{ border: 1px solid black; }");
        msg.setStandardButtons(QMessageBox::Ok);
        msg.exec();
    }
}

//This checks to see if the used has unsaved settings when thay are leaving.  If there are unsaved settings,
//than it creates a message box asking the user if they want to save or discard settings or cancel leaving.
//It returns a one if the widget can close or a zero if the user clicked cancel
/* int AutoZeroBCP::onExit(){
    Globals * g = Globals::getInstance();
    if(freq != g->zeroingFreq || per != g->zeroPeriod || (Utilities::CheckForBit(g->bitMask, 1) != (ui->status->checkState() == Qt::CheckState::Checked)) || (Utilities::CheckForBit(g->bitMask, 2) != ui->useCalculatedZeroes->isChecked())){
        QMessageBox msg;
        msg.setStyleSheet("QMessageBox{ border: 1px solid black; }");
        msg.setText("Unsaved changes");
        msg.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        msg.setDefaultButton(QMessageBox::Save);
        int ret = msg.exec();

        switch (ret) {
        case QMessageBox::Save:
            on_save_clicked();
            return 1;
        case QMessageBox::Discard:
            per = g->zeroPeriod;
            freq = g->zeroingFreq;
            ui->status->setChecked(Utilities::CheckForBit(g->bitMask, 1));
            //ui->useCalculatedZeroes->setChecked(Utilities::CheckForBit(g->bitMask, 2));
            return 1;
        case QMessageBox::Cancel:
            return 0;
        }
    }
    return 1;
}  */

//Update the info shown on the form
void AutoZeroBCP::GetNewSettings(){
    SettingsHandler * s = SettingsHandler::GetInstance();
    freq = s->GetZeroFrequency_bcp();
    per = s->GetZeroPeriod_bcp();
    UpdateUI();
}

void AutoZeroBCP::UpdateUI(){
    ui->FreqLabel->setText("Frequency:\n" + QString::number(freq));
    ui->PeriodLabel->setText("Period:\n" + QString::number(per));


    qDebug() << "Updated UI";
}

void AutoZeroBCP::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);

    if(NumberPadForm::GetInstance()->isHidden())
    {
        GetNewSettings();
        qDebug() << "Getting new settings";
    }
}

void AutoZeroBCP::closeEvent(QCloseEvent *event)
{
    QWidget::closeEvent(event);
    SettingsHandler * settings = SettingsHandler::GetInstance();

    if(settings->GetZeroFrequency_bcp() != freq || settings->GetZeroPeriod_bcp() != per)
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
