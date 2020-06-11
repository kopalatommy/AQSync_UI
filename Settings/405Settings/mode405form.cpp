#include "mode405form.h"
#include "ui_mode405form.h"

Mode405Form::Mode405Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mode405Form)
{
    ui->setupUi(this);
}

Mode405Form::~Mode405Form()
{
    delete ui;
}

void Mode405Form::on_Left_clicked()
{
    SettingFormsHandler::MoveLeft();
}

void Mode405Form::on_Right_clicked()
{
    SettingFormsHandler::MoveRight();
}

void Mode405Form::on_Home_clicked()
{
    SettingFormsHandler::CloseForms();
}

void Mode405Form::on_Save_clicked()
{
    if(ui->setMode->currentIndex() != SettingsHandler::GetInstance()->GetMode_405())
    {
        SettingsHandler::GetInstance()->SetMode_405(static_cast<unsigned char>(ui->setMode->currentIndex()));
        SerialHandler405::GetInstance()->SendSetting(MODE_MARKER_405, static_cast<unsigned char>(ui->setMode->currentIndex()));
    }
}

void Mode405Form::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    ui->setMode->setCurrentIndex(SettingsHandler::GetInstance()->GetMode_405());
}

void Mode405Form::closeEvent(QCloseEvent *event)
{
    QWidget::closeEvent(event);
    if(ui->setMode->currentIndex() != SettingsHandler::GetInstance()->GetMode_405())
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
