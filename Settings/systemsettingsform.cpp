#include "systemsettingsform.h"
#include "ui_systemsettingsform.h"

SystemSettingsForm::SystemSettingsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SystemSettingsForm)
{
    ui->setupUi(this);
}

SystemSettingsForm::~SystemSettingsForm(){
    delete ui;
}

void SystemSettingsForm::on_closeButton_clicked(){
    emit CloseForms();
}

void SystemSettingsForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void SystemSettingsForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}

void SystemSettingsForm::on_applyButton_clicked(){
    qDebug() << "Create new file every day: " << ui->createEveryDay->isChecked();
}

void SystemSettingsForm::on_cleanLogs_clicked(){
    QMessageBox msg;
    msg.setText("Warning: Get all save files before using this.\nAny Files older than 2 weeks or smaller than 100 lines will be removed. Procceed?");
    msg.setStandardButtons(QMessageBox::StandardButton::Yes | QMessageBox::StandardButton::No);
    int choice = msg.exec();

    if(choice == QMessageBox::StandardButton::Yes){
        QProcess * process = new QProcess();
        connect(process, SIGNAL(finished(int)), this, SLOT(OnCleanExit(int)));
    }
}

void SystemSettingsForm::OnCleanExit(int code){
    QProcess * process = reinterpret_cast<QProcess *>(sender());
    if(code == 0){
        QMessageBox * msg = new QMessageBox();
        connect(msg, &QMessageBox::finished, this, &SystemSettingsForm::OnMessageBoxFinished);
        msg->setText("Finshed cleaning up logs");
        msg->setStandardButtons(QMessageBox::StandardButton::Ok);
        msg->show();
    }
    process->deleteLater();
}

void SystemSettingsForm::GetUsedSpace(){
    QProcess * process = new QProcess();
    connect(process, SIGNAL(finished(int)), this, SLOT(OnGetUsedSpaceExit(int)));
}
void SystemSettingsForm::OnGetUsedSpaceExit(int code){
    QProcess * process = reinterpret_cast<QProcess *>(sender());
    if(code == 0){
        ui->dataSpaceLabel->setText("Used space: " + QString(process->readAll()));
    }
    process->deleteLater();
}

void SystemSettingsForm::GetRemoteVer(){
    QProcess * process = new QProcess();
    connect(process, SIGNAL(finished(int)), this, SLOT(OnGetRemoteVerExit(int)));
    process->start("/home/2b/GetRemoteVer");
}
void SystemSettingsForm::OnGetRemoteVerExit(int code){
    QProcess * process = reinterpret_cast<QProcess *>(sender());

    if(code == 0){
        QString allInput = process->readAll();
        QStringList lines = allInput.split('\n');
        if(lines.count() > 0){
            for(int i = 0; i < lines.count(); i++){
                if(lines[i].contains("Ver:")){
                    QString newVersion = lines[i].split(':')[1];
                    ui->updateLabel->setText("New Version: " + lines[i].split(':')[1]);
                    if(newVersion != AQSyncSettings::GetInstance()->GetBuildNumber()){
                        QMessageBox msg;
                        msg.setStandardButtons(QMessageBox::StandardButton::Yes | QMessageBox::StandardButton::No);
                        msg.setText("Update UI to version " + newVersion + "?");
                        int choice = msg.exec();
                        QProcess * update = nullptr;
                        switch (choice) {
                        case QMessageBox::StandardButton::Yes:
                            update = new QProcess();
                            qDebug() << "Starting process";
                            update->start("/home/2b/UpdateUIGit");
                            connect(update, SIGNAL(finished(int)), this, SLOT(OnUpdateExit(int)));
                            break;
                        case QMessageBox::StandardButton::No:
                            break;
                        default:
                            break;
                        }
                    }else{
                        QMessageBox msg;
                        msg.setText("Up to date. Force update?");
                        msg.setStandardButtons(QMessageBox::StandardButton::Yes | QMessageBox::StandardButton::No);
                        int choice = msg.exec();
                        QProcess * update = nullptr;
                        switch (choice) {
                        case QMessageBox::StandardButton::Yes:
                            update = new QProcess();
                            qDebug() << "Starting process";
                            update->start("/home/2b/ForceUpdateUIGit");
                            connect(update, SIGNAL(finished(int)), this, SLOT(OnUpdateExit(int)));
                            break;
                        case QMessageBox::StandardButton::No:
                            break;
                        default:
                            break;
                        }
                    }
                }
            }
        }
    }
    process->deleteLater();
}

void SystemSettingsForm::OnUpdateExit(int code){
    QProcess * process = reinterpret_cast<QProcess *>(sender());

    if(code == 0){
        qDebug() << "Should have updated";
    }

    process->deleteLater();
}

void SystemSettingsForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);
    GetUsedSpace();
}

void SystemSettingsForm::OnMessageBoxFinished(int code){
    qDebug() << "Message box exited with: " << code;
    sender()->deleteLater();
}

void SystemSettingsForm::ReadSettingsFile(){
    QFile file("/home/2b/SystemSettings.txt");
    if(file.open(QIODevice::ReadWrite)){
        while (!file.atEnd()) {
            QString line = file.readLine();
            switch (line.at(0).toLatin1()) {
            case CREATE_EVERY_DAY_MARKER:
                line.remove(0, 1);
                if(line.toInt() == 1) createFileEveryDay = true;
                break;
            default:
                qDebug() << "System settings read in bad marker: " << line.at(1).toLatin1();
            }
        }
    }else{
        file.setFileName(QDir::homePath().append("/SystemSettings.txt"));
        if(file.open(QIODevice::ReadWrite)){
            while (!file.atEnd()) {
                QString line = file.readLine();
                switch (line.at(0).toLatin1()) {
                case CREATE_EVERY_DAY_MARKER:
                    line.remove(0, 1);
                    if(line.toInt() == 1) createFileEveryDay = true;
                    break;
                default:
                    qDebug() << "System settings read in bad marker: " << line.at(1).toLatin1();
                }
            }
        }else{
            qDebug() << "Failed to read system settings file";
        }
    }

    AQSyncData::GetInstance()->SetCreateNewFileEveryDay(createFileEveryDay);
}

void SystemSettingsForm::WriteSettingsFile(){

}
