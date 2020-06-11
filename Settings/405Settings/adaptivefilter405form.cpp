#include "adaptivefilter405form.h"
#include "ui_adaptivefilter405form.h"

bool AdaptiveFilter405Form::isEnabled = false;

AdaptiveFilter405Form::AdaptiveFilter405Form(QWidget *parent) :
    QWidget (parent),
    ui(new Ui::AdaptiveFilter405Form)
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

    connect(SerialHandler405::GetInstance(), &SerialHandler405::NewAdFilterSettings405, this, &AdaptiveFilter405Form::GetNewSettings);
    GetNewSettings();
}

AdaptiveFilter405Form::~AdaptiveFilter405Form()
{
    delete ui;
}

void AdaptiveFilter405Form::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(3);
    close();
}

void AdaptiveFilter405Form::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(7);
    close();
}

void AdaptiveFilter405Form::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(0);
    close();
}

void AdaptiveFilter405Form::on_shortMask_clicked()
{
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilter405Form::NewShort);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::UChar, 0, 5, this);
    NumberPadForm::GetInstance()->show();
}
void AdaptiveFilter405Form::NewShort(unsigned char val)
{
    shortLength = val;
    UpdateLocalUI();
}

void AdaptiveFilter405Form::on_longMask_clicked()
{
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilter405Form::NewLong);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::UChar, 6, 50, this);
    NumberPadForm::GetInstance()->show();
}
void AdaptiveFilter405Form::NewLong(unsigned char val)
{
    qDebug() << "New long length: " << QString::number(val);
    longLength = val;
    UpdateLocalUI();
}

void AdaptiveFilter405Form::on_differenceMask_clicked()
{
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilter405Form::NewDifference);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::UChar, 0, 50, this);
    NumberPadForm::GetInstance()->show();
}
void AdaptiveFilter405Form::NewDifference(unsigned char val)
{
    difference = val;
    UpdateLocalUI();
}

void AdaptiveFilter405Form::on_percentMask_clicked()
{
    connect(NumberPadForm::GetInstance(), &NumberPadForm::NewUnsignedChar, this, &AdaptiveFilter405Form::NewPercent);
    NumberPadForm::GetInstance()->SetInitialValues(NumberPadForm::Types::UChar, 0, 10, this);
    NumberPadForm::GetInstance()->show();
}
void AdaptiveFilter405Form::NewPercent(unsigned char val)
{
    percent = val;
    UpdateLocalUI();
}

void AdaptiveFilter405Form::on_save_clicked()
{
    bool valueChanged = false;

    SettingsHandler * s = SettingsHandler::GetInstance();

    if(s->GetAdShort_405() != shortLength)
    {
        valueChanged = true;
        s->SetAdShort_405(shortLength);
    }

    if(s->GetAdLong_405() != longLength)
    {
        valueChanged = true;
        s->SetAdLong_405(longLength);
    }

    if(s->GetAdDiff_405() != difference)
    {
        valueChanged = true;
        s->SetAdDiff_405(difference);
    }

    if(s->GetAdPercent_405() != percent)
    {
        valueChanged = true;
        s->SetAdPercent_405(percent);
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

void AdaptiveFilter405Form::GetNewSettings()
{
    SettingsHandler * settings = SettingsHandler::GetInstance();

    shortLength = settings->GetAdShort_405();
    longLength = settings->GetAdLong_405();
    difference = settings->GetAdDiff_405();
    percent = settings->GetAdPercent_405();
    UpdateLocalUI();
}

void AdaptiveFilter405Form::UpdateLocalUI()
{
    ui->shortLabel->setText("Short Length:\n" + QString::number(shortLength));
    ui->longLabel->setText("Long Length:\n" + QString::number(longLength));
    ui->diffLabel->setText("Difference:\n" + QString::number(difference));
    ui->percentLabel->setText("Percent:\n" + QString::number(percent));

    qDebug() << "Updated UI";
}

void AdaptiveFilter405Form::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);

    if(NumberPadForm::GetInstance()->isHidden())
    {
        GetNewSettings();
        qDebug() << "Getting new settings";
    }
}

void AdaptiveFilter405Form::closeEvent(QCloseEvent *event)
{
    QWidget::closeEvent(event);
    SettingsHandler * settings = SettingsHandler::GetInstance();

    if(settings->GetAdShort_405() != shortLength || settings->GetAdLong_405() != longLength ||
       settings->GetAdDiff_405() != difference || settings->GetAdPercent_405() != percent)
    {
        QMessageBox msg;
        msg.setText("Save unsaved setting?");
        msg.setStandardButtons(QMessageBox::StandardButton::Yes | QMessageBox::StandardButton::No);

        switch (msg.exec())
        {
        case QMessageBox::StandardButton::Yes:
            on_save_clicked();
            break;

        default:
            break;
        }
    }
}
