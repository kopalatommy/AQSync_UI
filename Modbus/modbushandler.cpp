#include "modbushandler.h"

ModbusHandler::ModbusHandler(){
    connect(&tcpServer, &QTcpServer::newConnection, this, &ModbusHandler::NewConnection);
}

ModbusHandler * ModbusHandler::instance = nullptr;
ModbusHandler * ModbusHandler::GetInstance(){
    if(instance == nullptr) instance = new ModbusHandler();
    return instance;
}

void ModbusHandler::InitializeTcpServer(unsigned short targetPort){
    tcpServer.close();
    serverPort = targetPort;
    if(!tcpServer.listen(QHostAddress::Any, serverPort)){
        qDebug() << "Failed to start tcp server";
    }else{
        qDebug() << "Initialized tcp server to listen to " << QString::number(targetPort);
    }
}
void ModbusHandler::UpdateTcpServer(unsigned short newPort){
    if(newPort == serverPort && tcpServer.isListening()) return;
    tcpServer.close();
    serverPort = newPort;
    if(!tcpServer.listen(QHostAddress::Any, serverPort)){
        qDebug() << "Failed to start tcp server";
    }else{
        qDebug() << "Initialized tcp server to listen to " << QString::number(serverPort);
    }
}

void ModbusHandler::SetInformation(char targetID, char deviceID){
    this->targetID = targetID;
    this->deviceID = deviceID;
}

void ModbusHandler::ConnectToSlave(QString IPAddress, unsigned short targetPort, int unitID){
    qDebug() << "Modbus handler creating connection to " << IPAddress << " at " << targetPort << " with an id of " << unitID;

    if(masterSocket == nullptr && master == nullptr){
        masterSocket = new QTcpSocket();
        masterSocket->setSocketOption(QAbstractSocket::KeepAliveOption, 1);
        masterSocket->connectToHost(IPAddress, serverPort);

        connect(masterSocket, &QTcpSocket::readyRead, this, &ModbusHandler::ReadAsMaster);
        connect(masterSocket, &QTcpSocket::connected, this, &ModbusHandler::OnMasterConnect);
        connect(masterSocket, &QTcpSocket::disconnected, this, &ModbusHandler::OnMasterDisconnect);

        targetID = static_cast<char>(unitID);
        master = new ModbusMaster(targetID, dataTable, IPAddress);
        connect(master, &ModbusMaster::FinishedRequest, this, &ModbusHandler::WriteAsMaster);
        master->moveToThread(&masterThread);
        masterThread.start();
    }else{
        qDebug() << "Failed to create new master connection";
        qDebug() << "Master is null: " << (master == nullptr);
        qDebug() << "Master socket is null: " << (masterSocket == nullptr);
    }
}
void ModbusHandler::SetMasterValues(QString targetIP, unsigned short targetPort, char _targetID){
    if(IsMaster()){
        if(targetIP != master->GetTargetIP()){
            qDebug() << "Need to disconnect from current slave and open new connection";
            masterSocket->close();
            masterSocket->deleteLater();
            master->deleteLater();

            masterSocket = new QTcpSocket();
            masterSocket->setSocketOption(QAbstractSocket::KeepAliveOption, 1);
            masterSocket->connectToHost(targetIP, serverPort);

            connect(masterSocket, &QTcpSocket::readyRead, this, &ModbusHandler::ReadAsMaster);
            connect(masterSocket, &QTcpSocket::connected, this, &ModbusHandler::OnMasterConnect);
            connect(masterSocket, &QTcpSocket::disconnected, this, &ModbusHandler::OnMasterDisconnect);

            targetID = _targetID;
            master = new ModbusMaster(_targetID, dataTable, targetIP);
            connect(master, &ModbusMaster::FinishedRequest, this, &ModbusHandler::WriteAsMaster);
            master->moveToThread(&masterThread);
            masterThread.start();
        }else if(targetPort != serverPort){
            masterSocket->disconnectFromHost();
            masterSocket->connectToHost(targetIP, serverPort);
            serverPort = targetPort;
        }else{
            targetID = _targetID;
            master->UpdateTargetID(_targetID);
        }
    }
}
bool ModbusHandler::IsMaster(){
    return master != nullptr;
}

void ModbusHandler::OnMasterConnect(){
    qDebug() << "Device has connected to remote as master";
    emit ConnectedAsMaster();

    connect(&pingTimer, &QTimer::timeout, this, &ModbusHandler::PingSlave);
    pingTimer.setInterval(3000);
    pingTimer.start();
}

void ModbusHandler::OnMasterDisconnect(){
    qDebug() << "Master has disconnected from slave";
    pingTimer.disconnect();
    emit MasterDisconnect();

    master->deleteLater();
    master = nullptr;

    masterSocket->close();
    masterSocket->deleteLater();
    masterSocket = nullptr;
}

void ModbusHandler::ReadAsMaster(){
    while (!masterSocket->atEnd()) {
        QByteArray temp = masterSocket->readAll();
        //qDebug() << "Master read: " << temp;
        master->ParseData(temp);
    }
}

void ModbusHandler::WriteAsMaster(QByteArray arr){
    if(masterSocket != nullptr) masterSocket->write(arr);
    else qDebug() << "Trying to write to a null master socket";
}

void ModbusHandler::PingSlave(){
    if(master != nullptr) master->PingSlave();
    else{
        qDebug() << "Cannot ping slave";
        pingTimer.stop();
        pingTimer.disconnect();
    }
}

void ModbusHandler::DisconnectFromSlave(){
    if(masterSocket != nullptr){
        masterSocket->close();
        masterSocket->deleteLater();
        masterSocket = nullptr;

        master->deleteLater();
        master = nullptr;
    }else{
        qDebug() << "The device was not connected as a master";
    }
}

//Slave functions
void ModbusHandler::SetLocalInformation(unsigned short targetPort, int _deviceID){
    if(tcpServer.isListening()){
        if(targetPort != serverPort){
            serverPort = targetPort;
            tcpServer.listen(QHostAddress::Any, serverPort);
        }
        if(deviceID != _deviceID){
            deviceID = static_cast<char>(_deviceID);
            if(slave != nullptr) slave->UpdateAddress(deviceID);
        }
    }else{
        serverPort = targetPort;
        deviceID = static_cast<char>(_deviceID);
        InitializeTcpServer(serverPort);
    }
}
bool ModbusHandler::IsSlave(){
    return slave != nullptr;
}

void ModbusHandler::OnSlaveConnect(){
    SetCoil(NEW_SETTINGS_COIL, 1);
    qDebug() << "Device has connected to remote as slave";
    emit ConnectedAsSlave();
}

void ModbusHandler::OnSlaveDisconnect(){
    qDebug() << "Device has disconnected from remote master. Remaining connections: " << slaveSockets.count();
    emit SlaveDisconnected();
}
void ModbusHandler::NewConnection(){
    qDebug() << "New connection";

    dataTable->SetCoil(NEW_SETTINGS_COIL, true);
    QTcpSocket * newSocket = tcpServer.nextPendingConnection();

    connect(newSocket, &QTcpSocket::connected, this, &ModbusHandler::OnSlaveConnect);
    connect(newSocket, &QTcpSocket::disconnected, this, &ModbusHandler::OnSlaveDisconnect);
    connect(newSocket, &QTcpSocket::readyRead, this, &ModbusHandler::SlaveRead);

    slaveSockets.append(newSocket);

    if(slave == nullptr){
        slave = new ModbusSlave(deviceID, dataTable);
        slave->moveToThread(&slaveThread);
        slaveThread.start();

        connect(slave, &ModbusSlave::WriteData, this, &ModbusHandler::WriteNewSlaveData);
        connect(slave, &ModbusSlave::TriggerOutputFunction, this, &ModbusHandler::TriggerOutputFunction);
    }
}

void ModbusHandler::SlaveRead(){
    QTcpSocket * socket = static_cast<QTcpSocket *>(sender());
    while (!socket->atEnd()) {
        QByteArray temp = socket->readAll();
        slave->ParseData(temp, socket);
    }
}
void ModbusHandler::WriteNewSlaveData(QByteArray arr, QTcpSocket * socket){
    if(socket) socket->write(arr);
    else qDebug() << "Slave is trying to write to a null socket";
}

ModbusDataTable * ModbusHandler::GetDataTable(){
    return dataTable;
}

void ModbusHandler::SetCoil(int address, bool value){
    qDebug() << "Setting coil " << address << " to " << value;
    dataTable->SetCoil(address, value);
}
void ModbusHandler::SetSettingRegister(int startAddress, int16_t b1, int16_t b2){
    dataTable->SetRegisters(startAddress, b1, b2);
    dataTable->SetCoil(NEW_SETTINGS_COIL, true);
    if(master != nullptr){
        QList<short> temp;
        temp.append(b1);
        temp.append(b2);
        master->WriteMultipleWholeRegisters(startAddress, temp);
    }
}
void ModbusHandler::SetDateTimeRegisters(int address, const char * values){
    dataTable->SetDateTimeRegisters(address, 6, values);
    dataTable->SetCoil(NEW_SETTINGS_COIL, true);
    if(master != nullptr){
        QList<short> temp;
        for (int i = 0; i < 6; i++) {
            temp.append(static_cast<short>(values[i]));
        }
        master->WriteMultipleWholeRegisters(address, temp);
    }
}
void ModbusHandler::SetRegister(int address, short value){
    dataTable->SetRegister(address, value);
    dataTable->SetCoil(NEW_SETTINGS_COIL, true);
    if(master != nullptr){
        master->WriteSingleRegister(address, value);
    }
}
void ModbusHandler::SetMultipleRegisters(int address, short r1, short r2){
    dataTable->SetRegisters(address, r1, r2);
    dataTable->SetCoil(NEW_SETTINGS_COIL, true);
    if(master != nullptr){
        QList<short> temp;
        temp.append(r1);
        temp.append(r2);
        master->WriteMultipleWholeRegisters(address, temp);
    }
}
void ModbusHandler::SetMultipleRegisters(int address, QList<short> values){
    dataTable->SetRegisters(address, values);
    dataTable->SetCoil(NEW_SETTINGS_COIL, true);
    if(master != nullptr){
        master->WriteMultipleWholeRegisters(address, values);
    }
}

void ModbusHandler::SetFloatRegisters(int address, float val){
    union{
        float val;
        short bytes[2];
    }byteArray;
    byteArray.val = val;
    dataTable->SetRegisters(address, byteArray.bytes[0], byteArray.bytes[1]);
    dataTable->SetCoil(NEW_SETTINGS_COIL, true);
    if(master != nullptr){
        QList<short> temp;
        temp.append(byteArray.bytes[0]);
        temp.append(byteArray.bytes[1]);
        master->WriteMultipleWholeRegisters(address, temp);
    }
}

void ModbusHandler::SetLongRegisters(int address, long val){
    union{
        long val;
        short bytes[2];
    }byteArray;
    byteArray.val = val;
    dataTable->SetRegisters(address, byteArray.bytes[0], byteArray.bytes[1]);
    dataTable->SetCoil(NEW_SETTINGS_COIL, true);
    if(master != nullptr){
        QList<short> temp;
        temp.append(byteArray.bytes[0]);
        temp.append(byteArray.bytes[1]);
        master->WriteMultipleWholeRegisters(address, temp);
    }
}
