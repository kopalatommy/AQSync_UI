#ifndef MODBUSDATATABLE_H
#define MODBUSDATATABLE_H

#include <QObject>
#include <QDebug>

#include "aqsyncsettings.h"
#include "aqsyncdata.h"

#define READ_COILS 0x01
#define READ_DISCRETE_INPUTS 0x02
#define READ_MULTIPLE_REG_FUNC 0x03
#define READ_INPUT_REGISTERS 0x04
#define WRITE_SINGLE_COIL 0x05
#define WRITE_SINGLE_REGISTER 0x06
#define WRITE_MULTIPLE_COILS 0x0F
#define WRITE_MULTIPLE_REG_FUNC 0x10
#define TRIGGER_OUTPUT_FUNC 0x11

#define NEW_LINE_COIL 0
#define NEW_SETTINGS_COIL 1

#define OUTPUT_NO 0
#define OUTPUT_OZONE 1
#define OUTPUT_N2O 2

class ModbusDataTable : public QObject
{
    Q_OBJECT
public:
    ModbusDataTable(int numCoils, int numInputs, int numRegisters);

    int GetNumberOfCoils();
    int GetNumberOfInputs();
    int GetNumberOfRegisters();

    void SetCoil(int address, bool value);
    void SetCoils(int startAddress, QList<bool> values);
    void SetCoils(int startAddress, int length, QByteArray bytes);

    bool ReadCoil(int address);
    QList<bool> ReadCoils(int startAddress, int length);
    QByteArray PackageCoils(int startAddress, int length);

    void SetInput(int address, bool value);
    void SetInputs(int address, QList<bool> values);

    bool ReadInput(int address);
    QList<bool> ReadInputs(int startAddress, int length);
    QByteArray PackageInputs(int startAddress, int length);

    void SetRegister(int address, short value);
    void SetRegisters(int address, QList<short> values);
    void SetRegisters(int address, int length, QByteArray values);
    void SetRegisters(int address, short val1, short val2);
    void SetRegisters(int address, int length, ...);

    void SetDateTimeRegisters(int address, int length, QByteArray values);
    void SetDateTimeRegisters(int address, QByteArray values);

    short ReadRegister(int address);
    QList<short> ReadRegisters(int startAddress, int length);
    QByteArray PackageRegisters(int startAddress, int length);

    float GetFloat(int startAddress);
    void SetFloat(int address, float val);
    short GetShort(int address);

private:
    QList<bool> coils;
    QList<bool> inputs;
    QList<short> registers;

    bool CheckForBit(void * val, int bitIndex);
    void SetBit(void * val, int bitIndex);

    void LoadSettingRegisters();
};

#endif // MODBUSDATATABLE_H
