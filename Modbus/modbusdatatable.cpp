#include "modbusdatatable.h"

ModbusDataTable::ModbusDataTable(int numCoils, int numInputs, int numRegisters) {
    for (int i = 0; i < numCoils; i++) coils.append(false);
    for (int i = 0; i < numInputs; i++) inputs.append(false);
    for (int i = 0; i < numRegisters; i++) registers.append(0);

    LoadSettingRegisters();
}

void ModbusDataTable::LoadSettingRegisters(){
    AQSyncSettings * settings = AQSyncSettings::GetInstance();

    /*SetRegister(AVG_TIME_REGISTER, settings->GetAvgTime());
    SetRegister(MODE_REGISTER, settings->GetMode());
    SetRegister(ADAPTIVE_SHORT_REGISTER, settings->GetAdShort());
    SetRegister(ADAPTIVE_LONG_REGISTER, settings->GetAdLong());
    SetRegister(ADAPTIVE_DIFF_REGISTER, settings->GetAdDiff());
    SetRegister(ADAPTIVE_PER_REGISTER, settings->GetAdPer());
    SetFloat(NO_SLOPE_REGISTER, settings->GetNOSlope());
    SetFloat(NO_ZERO_REGISTER, settings->GetNOZero());
    SetFloat(NO2_SLOPE_REGISTER, settings->GetNO2Slope());
    SetFloat(NO2_ZERO_REGISTER, settings->GetNO2Zero());
    SetFloat(OZONE_FLOW_SLOPE_REGISTER, settings->GetOzoneFlowSlope());
    SetFloat(CELL_FLOW_SLOPE_REGISTER, settings->GetCellFlowSlope());
    SetFloat(MASS_EXT_405_REGISTER, settings->GetMassExt405());
    SetFloat(PM_SLOPE_REGISTER, settings->GetPMSlope());
    SetFloat(PM_ZERO_MARKER, settings->GetPMZero());
    SetFloat(MASS_EXT_880_MARKER, settings->GetMassExt880());
    SetFloat(BC_SLOPE_REGISTER, settings->GetBCSlope());
    SetFloat(BC_ZERO_REGISTER, settings->GetBCZero());
    SetFloat(FLOW_SLOPE_REGISTER, settings->GetFlowSlope());
    SetFloat(FLOW_ZERO_REGISTER, settings->GetFlowZero());*/
}

void ModbusDataTable::SetFloat(int address, float val){
    union{
        float val;
        short bytes[2];
    }byteArray;
    byteArray.val = val;
    SetRegisters(address, 2, byteArray.bytes[0], byteArray.bytes[1]);
}

int ModbusDataTable::GetNumberOfCoils() {
    return coils.length();
}

int ModbusDataTable::GetNumberOfRegisters() {
    return registers.count();
}

int ModbusDataTable::GetNumberOfInputs() {
    return inputs.count();
}

void ModbusDataTable::SetCoil(int address, bool value) {
    qDebug() << "Setting coil: " << address << " to " << value;
    if (address < 0 || address >= coils.length()) {
        qDebug() << "Index out of bounds in set coil";
    }
    else {
        coils[address] = value;
    }
}
void ModbusDataTable::SetCoils(int startAddress, QList<bool> values) {
    if (startAddress < 0 || startAddress + values.count() >= coils.length()) {
        qDebug() << "Index out of bounds in set coils: " << startAddress;
    }
    else {
        for (int i = 0; i < values.count(); i++) coils[i + startAddress] = values[i];
    }
}
void ModbusDataTable::SetCoils(int startAddress, int length, QByteArray bytes) {
    int byteIndex = 0;
    int bitIndex = 0;
    //qDebug() << "Byte 13: " << QString::number(data[13]);
    for (int i = startAddress; i < startAddress + length; i++) {
        char temp = bytes.at(byteIndex);
        coils[i] = CheckForBit(&temp, bitIndex);
        bitIndex++;
        if (bitIndex >= 8) {
            byteIndex++;
            bitIndex = 0;
        }
    }
}

bool ModbusDataTable::ReadCoil(int address) {
    if (address < 0 || address >= coils.length()) {
        qDebug() << "Index out of bounds in set coil";
        return false;
    }
    else {
        return coils[address];
    }
}
QList<bool> ModbusDataTable::ReadCoils(int startAddress, int length) {
    QList<bool> toReturn;
    if (startAddress < 0 || startAddress + length >= coils.count()) {
        qDebug() << "Index out of bounds in set coils";
    }
    else {
        for (int i = 0; i < length; i++) toReturn.append(coils[i + startAddress]);
    }
    return toReturn;
}
QByteArray ModbusDataTable::PackageCoils(int startAddress, int length) {
    QByteArray toReturn;
    if (startAddress < 0 || startAddress + length >= coils.count()) {
        qDebug() << "Index out of range in package coils";
    }
    else {
        char toAdd = 0;
        int bitIndex = 0;
        bool added = false;

        for (int i = 0; i < length; i++) {
            added = false;
            if (coils[i + startAddress]) SetBit(&toAdd, bitIndex);
            //if (i + startAddress == 5) qDebug() << "New setting: " << coils[i + startAddress];
            bitIndex++;
            if (bitIndex >= 8) {
                bitIndex = 0;
                toReturn.append(toAdd);
                toAdd = 0;
                added = true;
            }
        }
        if (!added) toReturn.append(toAdd);
    }
    return toReturn;
}

void ModbusDataTable::SetInput(int address, bool value) {
    if (address < 0 || address >= inputs.length()) {
        qDebug() << "Index out of bounds in set inputs";
    }
    else {
        inputs[address] = value;
    }
}
void ModbusDataTable::SetInputs(int address, QList<bool> values) {
    if (address < 0 || address + values.count() >= inputs.count()) {
        qDebug() << "Index out of bounds in Set inputs";
    }
    else {
        for (int i = 0; i < values.count(); i++) inputs[i + address] = values[i];
    }
}

bool ModbusDataTable::ReadInput(int address) {
    if (address < 0 || address >= inputs.count()) {
        qDebug() << "Index out of bounds in read inputs";
        return false;
    }
    else {
        return inputs[address];
    }
}
QList<bool> ModbusDataTable::ReadInputs(int startAddress, int length) {
    QList<bool> toReturn;
    if (startAddress < 0 || startAddress + length >= inputs.count()) {
        qDebug() << "Index out of bounds in read inputs";
    }
    else {
        for (int i = 0; i < length; i++) toReturn.append(inputs[i + startAddress]);
    }
    return toReturn;
}
QByteArray ModbusDataTable::PackageInputs(int startAddress, int length) {
    QByteArray toReturn;
    if (startAddress < 0 || startAddress + length >= inputs.count()) {
        qDebug() << "Index out of range in package inputs";
    }
    else {
        char toAdd = 0;
        int bitIndex = 0;
        bool added = false;

        for (int i = 0; i < length; i++) {
            added = false;
            if (inputs[i + startAddress]) SetBit(&toAdd, bitIndex);
            bitIndex++;
            if (bitIndex >= 8) {
                bitIndex = 0;
                toReturn.append(toAdd);
                toAdd = 0;
                added = true;
            }
        }
        if (!added) toReturn.append(toAdd);
    }
    return toReturn;
}

void ModbusDataTable::SetRegister(int address, short value) {
    if (address < 0 || address >= registers.length()) {
        qDebug() << "Index out of bounds in set registers";
    }
    else {
        registers[address] = value;
    }
}
void ModbusDataTable::SetRegisters(int address, QList<short> values) {
    if (address < 0 || address + values.count() >= registers.count()) {
        qDebug() << "Index out of range in set registers";
    }
    else {
        for (int i = 0; i < values.count(); i++) registers[i + address] = values[i];
    }
}
void ModbusDataTable::SetRegisters(int address, int length, QByteArray values) {
    union {
        short value;
        char bytes[2];
    }byteArray;
    //Makes sure all bits are clear before starting
    //Generally unnecessary, but prevents rare issue
    byteArray.value = 0;

    if (address < 0 || address + length >= registers.count()) {
        qDebug() << "Index out of range in set registers";
    }
    else {
        for (int i = 0; i < length; i++) {
            byteArray.bytes[0] = values.at(i * 2);
            byteArray.bytes[1] = values.at((i * 2) + 1);
            registers[i] = byteArray.value;
        }
    }
}
void ModbusDataTable::SetRegisters(int address, short r1, short r2) {
    if (address < 0 || address + 1 >= registers.count()) {
        qDebug() << "Index out of bounds in set registers";
    }
    else {
        registers[address] = r1;
        registers[address + 1] = r2;
    }
}
void ModbusDataTable::SetRegisters(int address, int length, ...) {
    va_list lst;
    va_start(lst, length);
    for (int i = 0; i < length; i++) {
        short temp = static_cast<short>(va_arg(lst, int));
        //qDebug() << "Setting register " << (address + i) << " to " << temp;
        registers[address + i] = temp;
    }
}

void ModbusDataTable::SetDateTimeRegisters(int address, int length, QByteArray values) {
    if (address < 0 || address + length >= registers.count()) {
        qDebug() << "Index out of bounds in set registers";
        return;
    }

    for (int i = 0; i < length; i++) {
        registers[i + address] = static_cast<int16_t>(values[i]);
    }
}
void ModbusDataTable::SetDateTimeRegisters(int address, QByteArray values) {
    if (address < 0 || address + values.count() >= registers.count()) {
        qDebug() << "Index out of bounds in set registers";
        return;
    }

    for (int i = 0; i < values.count(); i++) {
        registers[i + address] = static_cast<int16_t>(values[i]);
    }
}

short ModbusDataTable::ReadRegister(int address) {
    if (address < 0 || address >= registers.count()) {
        qDebug() << "Index out of bounds in read registers";
        return 0;
    }
    else {
        return registers[address];
    }
}
QList<short> ModbusDataTable::ReadRegisters(int startAddress, int length) {
    QList<short> toReturn;
    if (startAddress < 0 || startAddress + length >= registers.count()) {
        qDebug() << "Index out of bounds in read registers";
    }
    else {
        for (int i = 0; i < length; i++) toReturn.append(registers[i + startAddress]);
    }
    return toReturn;
}
QByteArray ModbusDataTable::PackageRegisters(int startAddress, int length) {
    QByteArray toReturn;
    union {
        short val;
        char bytes[2];
    }byteArray;

    if (startAddress < 0 || startAddress + length >= registers.length()) {
        qDebug() << "Bad index for packageRegisters";
    }
    else {
        for (int i = startAddress; i < startAddress + length; i++) {
            //qDebug() << "PR: Register " << i << " = " << registers[i];
            byteArray.val = registers[i];
            toReturn.append(byteArray.bytes[0]);
            toReturn.append(byteArray.bytes[1]);
        }
    }
    return toReturn;
}

bool ModbusDataTable::CheckForBit(void *val, int bitIndex) {
    return *(reinterpret_cast<unsigned int *>(val)) & (1 << bitIndex);
}

void ModbusDataTable::SetBit(void *val, int bitIndex) {
    *(reinterpret_cast<int *>(val)) |= (1 << bitIndex);
}

float ModbusDataTable::GetFloat(int startAddress) {
    union {
        float val;
        short bytes[2];
    }byteArray;
    byteArray.val = 0;

    byteArray.bytes[0] = registers[startAddress];
    byteArray.bytes[1] = registers[startAddress + 1];

    return byteArray.val;
}
short ModbusDataTable::GetShort(int address) {
    if (address > registers.count()) {
        qDebug() << "Trying to read bad register: " << address << " > " << registers.count();
        return -33;
    }
    return registers[address];
}
