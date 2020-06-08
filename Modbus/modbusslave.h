#ifndef MODBUSSLAVE_H
#define MODBUSSLAVE_H

#include <QObject>
#include <QDebug>
#include <QtNetwork>

#include "modbusdatatable.h"
#include "aqsyncdata.h"
#include "aqsyncsettings.h"

class ModbusSlave : public QObject
{
    Q_OBJECT
public:
    ModbusSlave(char deviceID, ModbusDataTable * data);
    void UpdateAddress(char deviceID);

public slots:
    void ParseData(QByteArray data, QTcpSocket * socket);

signals:
    void ReceivedNewSettings();

    void TriggerOutputFunction(int val);

    void WriteData(QByteArray data, QTcpSocket * socket);

private:
    ModbusDataTable * dataTable = nullptr;
    char deviceID = 0;

    QByteArray ReadMultipleRegisters(QByteArray data);
    QByteArray WriteMultipleRegisters(QByteArray data);
    QByteArray ReadCoils(QByteArray data);
    QByteArray ReadDiscreteInputs(QByteArray data);
    QByteArray ReadInputRegisters(QByteArray data);
    QByteArray WriteSingleCoil(QByteArray data);
    QByteArray WriteSingleRegister(QByteArray data);
    QByteArray WriteMultipleCoils(QByteArray data);
    QByteArray TriggerOutput(QByteArray data);

    void RebuildRegisters(QByteArray arr, QList<int16_t> & lst);

    void ParseWriteSettings(QList<short> lst);
};

#endif // MODBUSSLAVE_H
