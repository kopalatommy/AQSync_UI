#include "adaptivefilter405form.h"
#include "ui_adaptivefilter405form.h"
#include "parameters405form.h"
#include "mode405form.h"
#include "settings405.h"


bool adaptivefilter405form::isEnabled = false;

adaptivefilter405form::adaptivefilter405form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adaptivefilter405form)
{
    ui->setupUi(this);

    QWidget::setWindowFlags(Qt::CustomizeWindowHint);

    ui->longMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->shortMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->differenceMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->percentMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    ui->Home->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Right->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->Left->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->save->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    setAutoFillBackground(true);
    setPalette(pal);

    connect(SettingsHandler::GetInstance(), &SettingsHandler::NewAdaptiveFilterSetting, this, &adaptivefilter405form::GetNewSettings);
    GetNewSettings();

}

adaptivefilter405form::~adaptivefilter405form()
{
    delete ui;
}

void adaptivefilter405form::on_Left_clicked()
{
    SettingFormsHandler::JumpToIndex(7);
    close();
}

void adaptivefilter405form::on_save_clicked()
{
    bool valueChanged = false;

    SettingsHandler * s = SettingsHandler::GetInstance();

    dontGrab = true;

    if(s->GetAdShort_405() != shortLength){
        valueChanged = true;
        s->SetAdShort_405(shortLength);
    }

    if(s->GetAdLong_405() != longLength){
        valueChanged = true;
        s->SetAdLong_405(longLength);
    }

    if(s->GetAdDiff_405() != difference){
        valueChanged = true;
        s->SetAdDiff_405(difference);
    }

    if(s->GetAdPercent_405() != percent){
        valueChanged = true;
        s->SetAdPercent_405(percent);
    }

    if(valueChanged){
        QMessageBox msg;
        msg.setText("Settings added to queue");
        msg.setStyleSheet("QMessageBox{ border: 1px solid black; }");
        msg.setStandardButtons(QMessageBox::Ok);
        msg.exec();

        CommunicationHandler::GetInstance()->SetNewSettingCoil();
        SettingsHandler::GetInstance()->Write405Settings();

        }

    dontGrab = false;
}

void adaptivefilter405form::on_Right_clicked()
{
    SettingFormsHandler::JumpToIndex(3);
    close();
}

void adaptivefilter405form::on_Home_clicked()
{
    SettingFormsHandler::JumpToIndex(0);
    close();
}
