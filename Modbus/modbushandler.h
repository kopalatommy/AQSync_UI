#ifndef MODBUSHANDLER_H
#define MODBUSHANDLER_H

#include <QObject>
#include <QDebug>
#include <QtNetwork>
#include <QTimer>
#include <QThread>

#include "modbusmaster.h"
#include "modbusslave.h"

class ModbusHandler : public QObject
{
    Q_OBJECT

//Is Master Functions
public:
    void ConnectToSlave(QString IPAddress, unsigned short targetPort, int unitID);
    void SetMasterValues(QString targetIP, unsigned short targetPort, char targetID);
    bool IsMaster();

public slots:
    void OnMasterConnect();
    void OnMasterDisconnect();
    void ReadAsMaster();
    void WriteAsMaster(QByteArray);
    void PingSlave();
    void DisconnectFromSlave();

signals:
    void ConnectedAsMaster();
    void MasterDisconnect();

private:
    QTcpSocket * masterSocket = nullptr;
    ModbusMaster * master = nullptr;
    QThread masterThread;
    QTimer pingTimer;

//Is slave functions
public:
    void SetLocalInformation(unsigned short targetPort, int deviceID);
    bool IsSlave();

public slots:
    void OnSlaveConnect();
    void OnSlaveDisconnect();
    void NewConnection();
    void SlaveRead();
    void WriteNewSlaveData(QByteArray, QTcpSocket *);

signals:
    void ConnectedAsSlave();
    void SlaveDisconnected();

private:
    QList<QTcpSocket *> slaveSockets;
    ModbusSlave * slave = nullptr;
    QThread slaveThread;

//Data table stuff
public slots:
    void SetCoil(int address, bool value);
    void SetSettingRegister(int startAddress, int16_t b1, int16_t b2);
    void SetDateTimeRegisters(int address, const char * values);
    void SetRegister(int address, short value);
    void SetMultipleRegisters(int address, short r1, short r2);
    void SetMultipleRegisters(int address, QList<short> values);
    void SetFloatRegisters(int address, float val);
    void SetLongRegisters(int address, long val);

//General
public:
    static ModbusHandler * GetInstance();

    void InitializeTcpServer(unsigned short targetPort);
    void UpdateTcpServer(unsigned short newPort);

    void SetInformation(char targetID, char deviceID);

    ModbusDataTable * GetDataTable();

signals:
    void NewDataLine();
    void NewSettings();

    void TriggerOutputFunction(int val);

private:
    static ModbusHandler * instance;
    ModbusHandler();

    QTcpServer tcpServer;
    unsigned short serverPort = 50200;
    char targetID = 0;
    char deviceID = 0;

    ModbusDataTable * dataTable = new ModbusDataTable(10, 10, 100);
};

#endif // MODBUSHANDLER_H
