#include "datafilesform.h"
#include "ui_datafilesform.h"

DataFilesForm::DataFilesForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataFilesForm)
{
    ui->setupUi(this);

    SetUpMenuForm();
}

DataFilesForm::~DataFilesForm(){
    delete ui;
}

void DataFilesForm::SetUpMenuForm(){
    connect(&menu, &DataFileMenuForm::Browse, this, &DataFilesForm::Browse);
    connect(&menu, &DataFileMenuForm::SelectAll, this, &DataFilesForm::SelectAll);
    connect(&menu, &DataFileMenuForm::SelectCurrent, this, &DataFilesForm::SelectCurrent);
}

void DataFilesForm::SetUpBrowseForm(){
    connect(&browser, &FileBrowserForm::SelectedFile, this, &DataFilesForm::SelectedFile);
}

void DataFilesForm::on_closeButton_clicked(){
    emit CloseForms();
}

void DataFilesForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void DataFilesForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}

void DataFilesForm::on_refreshButton_clicked(){
    UpdateUI();
}

void DataFilesForm::on_deleteButton_clicked(){
    if(selectedFile == "Selected all"){
        QMessageBox msg;
        msg.setStyleSheet("QMessageBox{ border: 1px solid black; }");
        msg.setText("Delete all files?");
        msg.setStandardButtons(QMessageBox::StandardButton::Yes | QMessageBox::StandardButton::No);
        msg.setDefaultButton(QMessageBox::StandardButton::No);
        msg.show();

        int choice = msg.exec();

        switch (choice) {
        case QMessageBox::StandardButton::Yes: return;
        case QMessageBox::StandardButton::No: break;
        default: return;
        }


        QDir logs("/home/2b/2BTouchLogs");
        QStringList temp = logs.entryList(QDir::Files);
        for(int i = 0; i < temp.count(); i++) DeleteFile(logs.absolutePath() + "/" + temp[i], false);
    }else if(selectedFile != "Not Set"){
        DeleteFile(QString(FILE_FOLDER).append(selectedFile), true);
    }
    selectedFile = "Not Set";
    UpdateUI();
}
void DataFilesForm::DeleteFile(QString pathToFile, bool askUser){
    qDebug() << "Deleting file: " << pathToFile;

    QFile file(pathToFile);
    if(file.exists()){
        if(askUser){
            QMessageBox msg;
            msg.setStyleSheet("QMessageBox{ border: 1px solid black; }");
            msg.setText("Are you sure you want to delete " + (pathToFile.split('/')[pathToFile.split('/').count() - 1]));
            msg.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            msg.setDefaultButton(QMessageBox::Yes);
            msg.show();
            int choice = msg.exec();

            if(choice == QMessageBox::StandardButton::No) return;
        }
        file.remove();
        selectedFile = "Not Set";
        UpdateUI();
    }else{
        QMessageBox msg;
        msg.setStyleSheet("QmessageBox{ border: 1px solid black }");
        msg.setText("Failed to find file: " + (selectedFile));
        msg.setStandardButtons(QMessageBox::Ok);
        msg.show();
    }
}

void DataFilesForm::on_selectButton_clicked(){
    menu.show();
}

void DataFilesForm::on_saveButton_clicked(){
    if(selectedFile == "Selected all") emit SaveAll(FILE_FOLDER, QDir(FILE_FOLDER).entryList(QDir::Files), DEST_FOLDER);
    else emit StartSave(QString(FILE_FOLDER).append("/").append(selectedFile), QString(DEST_FOLDER).append(selectedFile));
}

void DataFilesForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);
    UpdateUI();
}

void DataFilesForm::UpdateUI(){
    if(IsUSBConnected()) ui->usbStatus->setText("<font color='green'>USB Connected</font>");
    else ui->usbStatus->setText("<font color='red'>No USB connected</font>");

    //QStringList tempFiles = QDir("/home/2b/2BTouchLogs/").entryList(QDir::Files, QDir::SortFlag::Time);
    QStringList tempFiles = QDir(FILE_FOLDER).entryList(QDir::Files, QDir::SortFlag::Time);

    if(tempFiles.count() > 0){
        currentFile = tempFiles[0];
    }else currentFile = "Not Set";

    ui->currentFileLabel->setText( QString("Current file: ").append(currentFile));

    if(selectedFile == "Not Set"){
        selectedFile = currentFile;
    }
    ui->selectedFileLabel->setText(QString("Selected file: ").append(selectedFile));
}

bool DataFilesForm::IsUSBConnected(){
    QString prog = "/bin/bash";
    QStringList arguments = {"-c", "mount | grep media"};
    QProcess process;

    process.start(prog, arguments);
    process.waitForFinished();

    QString mountStatus = process.readAll();
    if(mountStatus.contains("usb") || mountStatus.contains("/dev/sd")){
        QStringList stringList = mountStatus.split(" ");
        for(int i = 0; i < stringList.size(); i++){
            //If the usb stick is on a linux pc
            if(stringList[i].contains("usb0")){
                return true;
            }
            //If the usb stick is in the armadillo board
            else if(stringList[i].contains("/media")){
                return true;
            }
        }
    }
    return false;
}

void DataFilesForm::SelectCurrent(){
    selectedFile = currentFile;
    UpdateUI();
}

void DataFilesForm::SelectAll(){
    selectedFile = "Selected all";
    UpdateUI();
}

void DataFilesForm::Browse(){
    browser.show();
}

void DataFilesForm::SelectedFile(QString fileName){
    selectedFile = fileName;
    UpdateUI();
}
