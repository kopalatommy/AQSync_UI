#ifndef MODBUSMASTER_H
#define MODBUSMASTER_H

#include <QObject>
#include <QDebug>

#include "utilities.h"
#include "modbusdatatable.h"

class ModbusMaster : public QObject
{
    Q_OBJECT
public:
    ModbusMaster(int targetID, ModbusDataTable * data, QString targetIP);
    //void UpdateInfo(char targetID, unsigned short targetPort);
    void UpdateTargetID(char targetID);

    void RequestDataLine();
    void RequestSettings();

    QString GetTargetIP();

public slots:
    void ReadCoils(int startAddress, int _numberOfCoils);
    void ReadDiscreteInputs(int startAddress, int _numberOfInputs);
    void ReadMultipleRegisters(int startAddress, int _numberOfRegisters);
    void ReadInputRegisters(int startAddress, int _numberOfRegisters);
    void WriteSingleCoil(int startAddress, int status);
    void WriteSingleRegister(int startAddress, short value);
    void WriteMultipleCoils(int startAddress, QList<char> values);
    void WriteMultipleWholeRegisters(int startAddress, QList<short> values);
    void WriteMultipleRegisters(int address, QList<char> values);

    void ParseData(QByteArray receivedData);

    void PingSlave();
    void WriteSettingsRegisters();

signals:
    void FinishedRequest(QByteArray);

    ///
    /// \brief SetErrorBit
    /// Set the error bit at the provided index to either 0 or 1
    /// \param bitIndex
    /// \param status
    ///
    void SetErrorBit(int bitIndex, int status);

    void ReceivedNewSettings();
    void ReceivedNewDataLine();

private:
    int targetID = 0;
    QString targetIPAddress = "";

    ModbusDataTable * dataTable = nullptr;

    short functionID = 0;
    int itemsToRead = 0;
    int startAddress = 0;

    bool requestedDataLine = false;
    bool requestedSettings = false;

    void ParseReadCoils(QByteArray);
    void ParseReadInputs(QByteArray);
    void ParseReadMultipleRegisters(QByteArray);
    void ParseWriteSingleCoil(QByteArray);
    void ParseWriteSingleRegister(QByteArray);
    void ParseWriteMultipleCoils(QByteArray);
    void ParseWriteMultipleRegisters(QByteArray);

    void RebuildRegisters(QByteArray data, QList<short> & lst);

    void ParseDataLineRegisters(QList<short> lst);
    void ParseSettingRegisters(QList<short> lst);

    void BuildSettingsBytes(QList<char> & lst);
};

#endif // MODBUSMASTER_H
