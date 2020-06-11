#include "adaptivefilterbcpform.h"
#include "ui_adaptivefilterbcpform.h"

AdaptiveFilterBCPForm::AdaptiveFilterBCPForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdaptiveFilterBCPForm)
{
    ui->setupUi(this);

    QWidget::setWindowFlags(Qt::CustomizeWindowHint);

    ui->longMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->shortMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->differenceMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->percentMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    ui->home->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Next->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Previous->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Save->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);

    connect(SerialHandler405::GetInstance(), &SerialHandler405::NewAdFilterSettings405, this, &AdaptiveFilterBCPForm::GetNewSettings);
    GetNewSettings();
}

AdaptiveFilterBCPForm::~AdaptiveFilterBCPForm()
{
    delete ui;
}

void AdaptiveFilterBCPForm::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(13);
    close();
}

void AdaptiveFilterBCPForm::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(9);
    close();
}

void AdaptiveFilterBCPForm::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(1);
    close();
}



void AdaptiveFilterBCPForm::on_shortMask_clicked()
{
    qDebug() << "Presed Button";
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilterBCPForm::NewShort);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::UChar, 1, 5, this);
    NumberPadForm::GetInstance()->show();
}
void AdaptiveFilterBCPForm::NewShort(unsigned char val)
{
    shortLength = val;
    UpdateLocalUI();
}

void AdaptiveFilterBCPForm::on_longMask_clicked()
{
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilterBCPForm::NewLong);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::UChar, 6, 45, this);
    NumberPadForm::GetInstance()->show();
}
void AdaptiveFilterBCPForm::NewLong(unsigned char val)
{
    qDebug() << "New long length: " << QString::number(val);
    longLength = val;
    UpdateLocalUI();
}

void AdaptiveFilterBCPForm::on_differenceMask_clicked()
{
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilterBCPForm::NewDifference);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::UChar, 0, 50, this);
    NumberPadForm::GetInstance()->show();
}
void AdaptiveFilterBCPForm::NewDifference(unsigned char val)
{
    difference = val;
    UpdateLocalUI();
}

void AdaptiveFilterBCPForm::on_percentMask_clicked()
{
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilterBCPForm::NewPercent);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::UChar, 0, 10, this);
    NumberPadForm::GetInstance()->show();
}
void AdaptiveFilterBCPForm::NewPercent(unsigned char val)
{
    percent = val;
    UpdateLocalUI();
}

void AdaptiveFilterBCPForm::on_Save_clicked()
{
    bool valueChanged = false;

    SettingsHandler * s = SettingsHandler::GetInstance();

    if(s->GetAdShort_bcp() != shortLength)
    {
        valueChanged = true;
        s->SetAdShort_bcp(shortLength);
    }

    if(s->GetAdLong_bcp() != longLength)
    {
        valueChanged = true;
        s->SetAdLong_bcp(longLength);
    }

    if(s->GetAdDiff_bcp() != difference)
    {
        valueChanged = true;
        s->SetAdDiff_bcp(difference);
    }

    if(s->GetAdPer_bcp() != percent)
    {
        valueChanged = true;
        s->SetAdPer_bcp(percent);
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

void AdaptiveFilterBCPForm::GetNewSettings()
{
    SettingsHandler * settings = SettingsHandler::GetInstance();

    shortLength = settings->GetAdShort_bcp();
    longLength = settings->GetAdLong_bcp();
    difference = settings->GetAdDiff_bcp();
    percent = settings->GetAdPer_bcp();
    UpdateLocalUI();
}

void AdaptiveFilterBCPForm::UpdateLocalUI()
{
    ui->shortLabel->setText("Short Length:\n" + QString::number(shortLength));
    ui->longLabel->setText("Long Length:\n" + QString::number(longLength));
    ui->diffLabel->setText("Difference:\n" + QString::number(difference));
    ui->percentLabel->setText("Percent:\n" + QString::number(percent));

    qDebug() << "Updated UI";
}

void AdaptiveFilterBCPForm::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);

    if(NumberPadForm::GetInstance()->isHidden())
    {
        GetNewSettings();
        qDebug() << "Getting new settings";
    }
}

void AdaptiveFilterBCPForm::closeEvent(QCloseEvent *event)
{
    QWidget::closeEvent(event);
    SettingsHandler * settings = SettingsHandler::GetInstance();

    if(settings->GetAdShort_bcp() != shortLength || settings->GetAdLong_bcp() != longLength ||
       settings->GetAdDiff_bcp() != difference || settings->GetAdPer_bcp() != percent)
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

