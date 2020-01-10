#include "modbusform.h"
#include "ui_modbusform.h"

ModbusForm::ModbusForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModbusForm)
{
    ui->setupUi(this);

    ui->ThisIDMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->ThisPortMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->ThisIPMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->RemoteIDMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->RemoteIPMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");
    ui->RemotePortMask->setStyleSheet("QPushButton { background-color: rgba(10, 0, 0, 0); }");

    ReadSettingsFile();
    ModbusHandler::GetInstance()->SetLocalInformation(devicePort, deviceID);
}

ModbusForm::~ModbusForm()
{
    delete ui;
}

void ModbusForm::on_testButton_clicked(){
    testForm.show();
}

void ModbusForm::WriteSettingsFile(){
    QDir homeDir("/home/2b/");
    QFile file("/home/2b/ModbusSettings.txt");
    if(!homeDir.exists("/home/2b/")) file.setFileName("ModbusSettings.txt");

    file.open(QIODevice::ReadWrite);
    file.write(QString(DEVICE_ID_MARKER).append(QString::number(deviceID)).append('\n').toStdString().c_str());
    file.write(QString(DEVICE_PORT_MARKER).append(QString::number(devicePort)).append('\n').toStdString().c_str());
    file.write(QString(TARGET_IP_MARKER).append(targetIPAddress).append('\n').toStdString().c_str());
    file.write(QString(TARGET_PORT_MARKER).append(QString::number(targetPort)).append('\n').toStdString().c_str());
    file.write(QString(TARGET_ID_MARKER).append(QString::number(targetID)).append('\n').toStdString().c_str());
    file.close();
}

void ModbusForm::ReadSettingsFile(){
    QDir homeDir("/home/2b/");
    QFile file("/home/2b/ModbusSettings.txt");
    if(!homeDir.exists("/home/2b/")) file.setFileName("ModbusSettings.txt");

    if(file.open(QIODevice::ReadOnly)){
        while (!file.atEnd()) {
            QString line = file.readLine();
            switch (line.at(0).toLatin1()) {
            case DEVICE_PORT_MARKER:
                devicePort = static_cast<unsigned short>(line.remove(0, 1).toInt());
                break;
            case DEVICE_ID_MARKER:
                deviceID = static_cast<char>(line.remove(0, 1).toInt());
                break;
            case TARGET_IP_MARKER:
                targetIPAddress = line.remove(0, 1);
                if(targetIPAddress.at(targetIPAddress.length() - 1) == '\n') targetIPAddress.remove(targetIPAddress.count() - 1, 1);
                break;
            case TARGET_PORT_MARKER:
                targetPort = static_cast<unsigned short>(line.remove(0, 1).toInt());
                break;
            case TARGET_ID_MARKER:
                targetID = static_cast<char>(line.remove(0, 1).toInt());
                break;
            default:
                break;
            }
        }
    }else{
        //Write defualt values
        WriteSettingsFile();
    }
    UpdateUI();
}

void ModbusForm::UpdateUI(){
    ModbusHandler * modbus = ModbusHandler::GetInstance();

    if(modbus->IsSlave() && modbus->IsMaster()){
        ui->Statuslabel->setText("Connected as both slave and master");
        ui->connectionButton->setText("Disconnect");
    }else if(modbus->IsSlave()){;
        ui->Statuslabel->setText("Connected as slave");
        ui->connectionButton->setText("Connect");
    }else if(modbus->IsMaster()){
        ui->Statuslabel->setText("Connected as master");
        ui->connectionButton->setText("Disconnect");
    }else{
        ui->Statuslabel->setText("Not connected");
        ui->connectionButton->setText("Connect");
    }

    ui->MIPAddress->setText("IP Address:\n" + deviceIPAddress);
    ui->ThisPort->setText("Port: " + QString::number(devicePort));
    ui->ThisID->setText("Device ID: " + QString::number(deviceID));

    ui->RemoteIPAddress->setText("IP Address:\n" + targetIPAddress);
    ui->RemotePort->setText("Port: " + QString::number(targetPort));
    ui->RemoteID->setText("Device ID: " + QString::number(targetID));
}

void ModbusForm::showEvent(QShowEvent *event){
    QWidget::showEvent(event);
    GetDeviceIP();
    UpdateUI();
}

void ModbusForm::GetDeviceIP(){
    QProcess * process = new QProcess();
    connect(process, SIGNAL(finished(int)), this, SLOT(OnGetIPExit(int)));
    process->start("/home/2b/GetIPAddress");
}
void ModbusForm::OnGetIPExit(int exitCode){
    QProcess * process = reinterpret_cast<QProcess *>(sender());
    if(exitCode == 0){
        deviceIPAddress = process->readAll();
    }
    process->deleteLater();
    UpdateUI();
}

void ModbusForm::on_ThisIPMask_clicked(){
    GetDeviceIP();
}

void ModbusForm::on_ThisPortMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewInt, this, &ModbusForm::NewDevicePort);
    number->SetInitialValues(NumberPadForm::Types::integer, 0, 100000, this);
}
void ModbusForm::NewDevicePort(int val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewInt, this, &ModbusForm::NewDevicePort);
    devicePort = static_cast<unsigned short>(val);
    UpdateUI();
}

void ModbusForm::on_ThisIDMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewInt, this, &ModbusForm::NewDeviceID);
    number->SetInitialValues(NumberPadForm::Types::integer, 0, 255, this);
}
void ModbusForm::NewDeviceID(int val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewInt, this, &ModbusForm::NewDeviceID);
    deviceID = static_cast<char>(val);
    UpdateUI();
}

void ModbusForm::on_RemoteIPMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewIPAddress, this, &ModbusForm::NewTargetIP);
    number->SetInitialValues(NumberPadForm::Types::IPAddress, 0, 0, this);
}
void ModbusForm::NewTargetIP(QString val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewIPAddress, this, &ModbusForm::NewTargetIP);
    targetIPAddress = val;
    UpdateUI();
}

void ModbusForm::on_RemotePortMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewInt, this, &ModbusForm::NewTargetPort);
    number->SetInitialValues(NumberPadForm::Types::integer, 0, 100000, this);
}
void ModbusForm::NewTargetPort(int val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewInt, this, &ModbusForm::NewTargetPort);
    targetPort = static_cast<unsigned short>(val);
    UpdateUI();
}

void ModbusForm::on_RemoteIDMask_clicked(){
    NumberPadForm * number = NumberPadForm::GetInstance();
    connect(number, &NumberPadForm::NewInt, this, &ModbusForm::NewTargetID);
    number->SetInitialValues(NumberPadForm::Types::integer, 0, 255, this);
}
void ModbusForm::NewTargetID(int val){
    disconnect(NumberPadForm::GetInstance(), &NumberPadForm::NewInt, this, &ModbusForm::NewTargetID);
    targetID = static_cast<char>(val);
    UpdateUI();
}

void ModbusForm::on_UpdateInfoButton_clicked(){
    ModbusHandler::GetInstance()->SetLocalInformation(devicePort, deviceID);
}

void ModbusForm::on_connectionButton_clicked(){
    ModbusHandler * modbus = ModbusHandler::GetInstance();
    if(modbus->IsMaster()){
        modbus->DisconnectFromSlave();
    }else{
        modbus->ConnectToSlave(targetIPAddress, targetPort, targetID);
    }
    WriteSettingsFile();
    UpdateUI();
}

void ModbusForm::on_closeButton_clicked(){
    emit CloseForms();
}

void ModbusForm::on_moveRightButton_clicked(){
    emit MoveRight();
}

void ModbusForm::on_moveLeftButton_clicked(){
    emit MoveLeft();
}
