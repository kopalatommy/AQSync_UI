#include "modbusmaster.h"

ModbusMaster::ModbusMaster(int targetID, ModbusDataTable * data, QString targetIP){
    this->targetID = targetID;
    dataTable = data;
    targetIPAddress = targetIP;
}

/*void ModbusMaster::UpdateInfo(char targetID, unsigned short targetPort){
    this->targetID = targetID;
    this->targetPort = targetPort;
}*/
void ModbusMaster::UpdateTargetID(char targetID){
    this->targetID = targetID;
}

void ModbusMaster::ParseData(QByteArray data){
    qDebug() << "Master is parsing data; target ID: " << QString::number(targetID) << " = " << QString::number(data.at(6));
    if(targetID == data.at(6)){
        qDebug() << "Function ID: " << QString::number(data.at(7));
        switch (data.at(7)) {
            case READ_COILS:
            qDebug() << "Master is reading coils";
            return ParseReadCoils(data);
        case READ_DISCRETE_INPUTS:
            qDebug() << "Master is reading discrete inputs";
            return ParseReadInputs(data);
        case READ_MULTIPLE_REG_FUNC:
            qDebug() << "Master is reading multiple registers";
            if(requestedSettings && requestedDataLine){
                qDebug() << "Master has requested both settings and data line: this is broken right now";
                data.remove(0, 9);
                QList<short> rebuilt;
                RebuildRegisters(data, rebuilt);
                if(rebuilt.length() < 45){
                    qDebug() << "Using data line over settings";
                    ParseDataLineRegisters(rebuilt);
                    requestedDataLine = false;
                }else{
                    qDebug() << "Using settings over data line";
                    ParseSettingRegisters(rebuilt);
                    requestedSettings = false;
                }
            }else if(requestedSettings){
                qDebug() << "Master is reading settings: " << data.count();
                requestedSettings = false;
                QList<short> rebuilt;
                RebuildRegisters(data.remove(0,9), rebuilt);
                qDebug() << "Finished rebuilding: " << rebuilt.count();
                ParseSettingRegisters(rebuilt);
                WriteSingleCoil(NEW_SETTINGS_COIL, false);
            }else if(requestedDataLine){
                qDebug() << "Rebuilding data line";
                requestedDataLine = false;
                QList<short> rebuilt;
                RebuildRegisters(data.remove(0,9), rebuilt);
                ParseDataLineRegisters(rebuilt);
                WriteSingleCoil(NEW_LINE_COIL, false);
            }else{
                qDebug() << "Master is trying to parse registers with no instructions";
            }
            return;
        case READ_INPUT_REGISTERS:
            qDebug() << "Master is reading input registers";
            return ParseReadInputs(data);
        case WRITE_SINGLE_COIL:
            qDebug() << "Master is writing single coil";
            return ParseWriteSingleCoil(data);
        case WRITE_MULTIPLE_COILS:
            qDebug() << "Master is writing mutliple coils";
            return ParseWriteMultipleCoils(data);
        case WRITE_MULTIPLE_REG_FUNC:
            qDebug() << "Master is writing mutliple registers";
            return ParseWriteMultipleRegisters(data);
        default:
            qDebug() << "Master received bas function code: " << QString::number(data.at(7));
        }
    }else{
        qDebug() << "Master received bad target ID: " << QString::number(targetID) << " != " << QString::number(data.at(6));
    }
}

void ModbusMaster::ReadCoils(int address, int numCoils){
    QByteArray request;
    union{
        short val;
        char bytes[2];
    }byteArray;
    byteArray.val = 0;

    //Load function ID
    byteArray.val = functionID;
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //Load unused space
    request.append('\0');
    request.append('\0');
    //Load length of data
    request.append('\0');
    request.append(6);
    //Load target ID
    request.append(static_cast<char>(targetID));
    //Load function code
    request.append(READ_COILS);
    //Load start address
    byteArray.val = static_cast<short>(address);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //Load number of coils to read
    byteArray.val = static_cast<short>(numCoils);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);

    emit FinishedRequest(request);

    itemsToRead = numCoils;
}
void ModbusMaster::ParseReadCoils(QByteArray data){
    /*char tempC = 0;
    int byteIndex = 0;
    int bitIndex = 0;

    for(int i = 0; i < itemsToRead; i++){
        tempC = data.at(9 + byteIndex);
        qDebug() << "Reading byte " << byteIndex << " at " << bitIndex << " with a value of " << Utilities::CheckForBit(&tempC, bitIndex);
        if(Utilities::CheckForBit(&tempC, bitIndex)){
            //Return after requests to prevent issues with parsing multiple requests at once
            switch (i + startAddress) {
            case NEW_LINE_COIL:
                qDebug() << "Slave has a new data line";
                RequestDataLine();
                return;
            case NEW_SETTINGS_COIL:
                qDebug() << "Slave has new settings";
                RequestSettings();
                return;
            default:
                qDebug() << "Unknown coil is true: " << (i + startAddress);
            }
        }
        bitIndex++;
        if(bitIndex >= 8){
            byteIndex++;
            bitIndex = 0;
        }
    }*/
}

void ModbusMaster::ReadDiscreteInputs(int address, int length){
    QByteArray request;
    union{
        short val;
        char bytes[2];
    }byteArray;

    //Function ID
    byteArray.val = static_cast<short>(functionID);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //Unused space
    request.append('\0');
    request.append('\0');
    //Length
    request.append('\0');
    request.append(6);
    //Target ID
    request.append(static_cast<char>(targetID));
    //Function code
    request.append(READ_DISCRETE_INPUTS);
    //Start address
    byteArray.val = static_cast<short>(address);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //Length
    byteArray.val = static_cast<short>(length);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);

    emit FinishedRequest(request);
}
void ModbusMaster::ReadInputRegisters(int address, int length){
    QByteArray request;
    union{
        short val;
        char bytes[2];
    }byteArray;

    //Function ID
    byteArray.val = static_cast<short>(functionID);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //Unused space
    request.append('\0');
    request.append('\0');
    //Length of package
    request.append('\0');
    request.append(6);
    //Target ID
    request.append(static_cast<char>(targetID));
    //Function code
    request.append(READ_INPUT_REGISTERS);
    //Start address
    byteArray.val = static_cast<short>(address);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //Length
    byteArray.val = static_cast<short>(length);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);

    emit FinishedRequest(request);
}
void ModbusMaster::ParseReadInputs(QByteArray data){
    /*char tempC = 0;
    int byteIndex = 0;
    int bitIndex = 0;

    for(int i = 0; i < itemsToRead; i++){
        tempC = data.at(9 + byteIndex);
        if(Utilities::CheckForBit(&tempC, bitIndex)){
            switch (i + startAddress) {
            default:
                qDebug() << "The device is not setup to receive inputs";
            }
        }
        bitIndex++;
        if(bitIndex >= 8){
            bitIndex = 0;
            byteIndex++;
        }
    }*/
}

void ModbusMaster::RequestSettings(){
    qDebug() << "Requesting settings as master";
    requestedSettings = true;
    ReadMultipleRegisters(0, 34);
    WriteSingleCoil(NEW_SETTINGS_COIL, false);
    qDebug() << "Master is setting remote new settings coil to false";
}
void ModbusMaster::ParseSettingRegisters(QList<short> lst){
    union{
        float val;
        short bytes[2];
    }byteArray;
    byteArray.val = 0;

    /*AQSyncSettings * settings = AQSyncSettings::GetInstance();

    settings->SetAvgTime(static_cast<unsigned char>(lst[0]));
    settings->SetMode(static_cast<unsigned char>(lst[1]));
    settings->SetAdShort(static_cast<unsigned char>(lst[2]));
    settings->SetAdLong(static_cast<unsigned char>(lst[3]));
    settings->SetAdDiff(static_cast<unsigned char>(lst[4]));
    settings->SetAdPer(static_cast<unsigned char>(lst[5]));

    byteArray.bytes[0] = lst[6];
    byteArray.bytes[1] = lst[7];
    settings->SetNOSlope(byteArray.val);

    byteArray.bytes[0] = lst[8];
    byteArray.bytes[1] = lst[9];
    settings->SetNOZero(byteArray.val);

    byteArray.bytes[0] = lst[10];
    byteArray.bytes[1] = lst[11];
    settings->SetNO2Slope(byteArray.val);

    byteArray.bytes[0] = lst[12];
    byteArray.bytes[1] = lst[13];
    settings->SetNO2Zero(byteArray.val);

    byteArray.bytes[0] = lst[14];
    byteArray.bytes[1] = lst[15];
    settings->SetOzoneFlowSlope(byteArray.val);

    byteArray.bytes[0] = lst[16];
    byteArray.bytes[1] = lst[17];
    settings->SetCellFlowSlope(byteArray.val);

    byteArray.bytes[0] = lst[18];
    byteArray.bytes[1] = lst[19];
    settings->SetMassExt405(byteArray.val);

    byteArray.bytes[0] = lst[20];
    byteArray.bytes[1] = lst[21];
    settings->SetPMSlope(byteArray.val);

    byteArray.bytes[0] = lst[22];
    byteArray.bytes[1] = lst[23];
    settings->SetPMZero(byteArray.val);

    byteArray.bytes[0] = lst[24];
    byteArray.bytes[1] = lst[25];
    settings->SetMassExt880(byteArray.val);

    byteArray.bytes[0] = lst[26];
    byteArray.bytes[1] = lst[27];
    settings->SetBCSlope(byteArray.val);

    byteArray.bytes[0] = lst[28];
    byteArray.bytes[1] = lst[29];
    settings->SetBCZero(byteArray.val);

    byteArray.bytes[0] = lst[30];
    byteArray.bytes[1] = lst[31];
    settings->SetFlowSlope(byteArray.val);

    byteArray.bytes[0] = lst[32];
    byteArray.bytes[1] = lst[33];
    settings->SetFlowZero(byteArray.val);

    emit ReceivedNewSettings();*/
}

void ModbusMaster::RequestDataLine(){
    qDebug() << "Master is requesting data line";
    requestedDataLine = false;
    ReadMultipleRegisters(34, 40);
    WriteSingleCoil(NEW_LINE_COIL, false);
    qDebug() << "Setting remote new line coil to false";
}
void ModbusMaster::ParseDataLineRegisters(QList<short> lst){
    union{
        float val;
        long l;
        short bytes[2];
    }byteArray;
    byteArray.val = 0;

    qDebug() << "Lst count: " << lst.count();

    /*AQSyncData * data = AQSyncData::GetInstance();

    byteArray.bytes[0] = lst[0];
    byteArray.bytes[1] = lst[1];
    data->SetLogNumber(byteArray.l);

    byteArray.bytes[0] = lst[2];
    byteArray.bytes[1] = lst[3];
    data->SetBlackCarbon(byteArray.val);

    byteArray.bytes[0] = lst[4];
    byteArray.bytes[1] = lst[5];
    data->SetPM(byteArray.val);

    byteArray.bytes[0] = lst[6];
    byteArray.bytes[1] = lst[7];
    data->SetMassExt880(byteArray.val);

    byteArray.bytes[0] = lst[8];
    byteArray.bytes[1] = lst[9];
    data->SetMassExt405(byteArray.val);

    byteArray.bytes[0] = lst[10];
    byteArray.bytes[1] = lst[11];
    data->SetNO(byteArray.val);

    byteArray.bytes[0] = lst[12];
    byteArray.bytes[1] = lst[13];
    data->SetNOx(byteArray.val);

    byteArray.bytes[0] = lst[14];
    byteArray.bytes[1] = lst[15];
    data->SetNO2(byteArray.val);

    byteArray.bytes[0] = lst[16];
    byteArray.bytes[1] = lst[17];
    data->SetCellTemp(byteArray.val);

    byteArray.bytes[0] = lst[18];
    byteArray.bytes[1] = lst[19];
    data->SetCellPress(byteArray.val);

    byteArray.bytes[0] = lst[20];
    byteArray.bytes[1] = lst[21];
    data->SetCellFlow(byteArray.val);

    byteArray.bytes[0] = lst[22];
    byteArray.bytes[1] = lst[23];
    data->SetOzoneFlow(byteArray.val);

    byteArray.bytes[0] = lst[24];
    byteArray.bytes[1] = lst[25];
    data->SetPDV1(byteArray.val);

    byteArray.bytes[0] = lst[26];
    byteArray.bytes[1] = lst[27];
    data->SetPDV2(byteArray.val);

    byteArray.bytes[0] = lst[28];
    byteArray.bytes[1] = lst[29];
    data->SetScrubberTemp(byteArray.val);

    data->SetErrorByte(lst[30]);

    char dat[7];
    dat[0] = static_cast<char>(lst[31]);
    dat[1] = static_cast<char>(lst[32]);
    dat[2] = static_cast<char>(lst[33]);
    dat[3] = static_cast<char>(lst[34]);
    dat[4] = static_cast<char>(lst[35]);
    dat[5] = static_cast<char>(lst[36]);
    dat[6] = 0;
    qDebug() << "Rebuilt date: " << QString(dat);

    dat[0] = static_cast<char>(lst[37]);
    dat[1] = static_cast<char>(lst[38]);
    dat[2] = static_cast<char>(lst[39]);
    dat[3] = static_cast<char>(lst[40]);
    dat[4] = static_cast<char>(lst[41]);
    dat[5] = static_cast<char>(lst[42]);
    dat[6] = 0;
    qDebug() << "Rebuilt time: " << QString(dat);

    data->SetMode(lst[43]);

    emit ReceivedNewDataLine();*/
}

void ModbusMaster::ReadMultipleRegisters(int startAddress, int length){
    qDebug() << "Master is requesting multiple registers starting at " << startAddress << " for " << length;
    QByteArray request;
    union{
        short val;
        char bytes[2];
    }byteArray;

    //Function ID
    byteArray.val = functionID;
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //Unused space
    request.append('\0');
    request.append('\0');
    //Length
    request.append('\0');
    request.append(6);
    //Target ID
    request.append(static_cast<char>(targetID));
    //Function code
    request.append(static_cast<int>(READ_MULTIPLE_REG_FUNC));
    //Address
    byteArray.val = static_cast<short>(startAddress);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //Length
    byteArray.val = static_cast<short>(length);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);

    itemsToRead = length;
    this->startAddress = startAddress;

    emit FinishedRequest(request);
}

void ModbusMaster::WriteSingleCoil(int startAddress, int status){
    qDebug() << "Writing single coil: " << startAddress << " " << status;
    QByteArray request;
    union{
        short val;
        char bytes[2];
    }byteArray;
    byteArray.val = 0;

    //Function ID
    byteArray.val = functionID;
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //Unused space
    request.append('\0');
    request.append('\0');
    //Length of package
    request.append('\0');
    request.append(6);
    //Target ID
    request.append(static_cast<char>(targetID));
    //Function code
    request.append(WRITE_SINGLE_COIL);
    //Start address
    byteArray.val = static_cast<short>(startAddress);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //New coil values
    request.append(static_cast<char>(status));
    request.append('\0');

    emit FinishedRequest(request);
}
void ModbusMaster::ParseWriteSingleCoil(QByteArray data){
    qDebug() << "Master wrote single coil: " << data;
}

void ModbusMaster::WriteMultipleCoils(int address, QList<char> values){
    /*QByteArray request;
    union{
        short val;
        char bytes[2];
    }byteArray;

    int bytes = ((values.count() & 8) == 0) ?  (values.count() / 8) : ((values.count() / 8) + 1);

    //Function ID
    byteArray.val = functionID;
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //Unused space
    request.append('\0');
    request.append('\0');
    //Length of package
    request.append('\0');
    request.append(static_cast<char>(4 + bytes));
    //Target ID
    request.append(static_cast<char>(targetID));
    //Function code
    request.append(WRITE_MULTIPLE_COILS);
    //Start address
    byteArray.val = static_cast<short>(address);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);


    //Add the values
    bool added = false;
    char val = 0;
    int valIndex = 0;
    for(int i = 0; i < values.count(); i++){
        added = false;
        if(values[i] == 1) Utilities::SetBit(&val, valIndex);
        valIndex++;
        if(valIndex >= 8){
            request.append(val);
            val = 0;
            valIndex = 0;
            added = true;
        }
    }
    if(!added)request.append(val);

    emit FinishedRequest(request);*/
}
void ModbusMaster::ParseWriteMultipleCoils(QByteArray data){
    qDebug() << "Master wrote multiple coils: " << data;
}

void ModbusMaster::WriteSingleRegister(int address, short val){
    QByteArray request;
    union{
        short val;
        char bytes[2];
    }byteArray;

    //Function ID
    byteArray.val = functionID;
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //Unused space
    request.append('\0');
    request.append('\0');
    //Length of package
    request.append('\0');
    request.append(6);
    //Target ID
    request.append(static_cast<char>(targetID));
    //Function code
    request.append(WRITE_SINGLE_REGISTER);
    //Start address
    byteArray.val = static_cast<short>(address);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //New register value
    byteArray.val = val;
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);

    emit FinishedRequest(request);
}
void ModbusMaster::ParseWriteSingleRegister(QByteArray data){
    qDebug() << "Master wrote multiple registers: " << data;
}

void ModbusMaster::WriteMultipleRegisters(int address, QList<char> values){
    QByteArray request;
    union{
        short val;
        char bytes[2];
    }byteArray;

    //Function ID
    byteArray.val = functionID;
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //Unused space
    request.append('\0');
    request.append('\0');
    //Length of package
    request.append('\0');
    request.append(static_cast<char>(4 + values.count()));
    //Target ID
    request.append(static_cast<char>(targetID));
    //Function code
    request.append(WRITE_MULTIPLE_REG_FUNC);
    //Start address
    byteArray.val = static_cast<short>(address);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //New register value
    for (int i = 0; i < values.count(); i++) request.append(values.at(i));

    emit FinishedRequest(request);
}
void ModbusMaster::WriteMultipleWholeRegisters(int address, QList<short> values){
    QByteArray request;
    union{
        short val;
        char bytes[2];
    }byteArray;
    byteArray.val = 0;

    //Function ID
    byteArray.val = functionID;
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //Unused space
    request.append('\0');
    request.append('\0');
    //Length of package
    request.append('\0');
    request.append(static_cast<char>(4 + (values.count() * 2)));
    //Target ID
    request.append(static_cast<char>(targetID));
    //Function code
    request.append(WRITE_MULTIPLE_REG_FUNC);
    //Start address
    byteArray.val = static_cast<short>(address);
    request.append(byteArray.bytes[0]);
    request.append(byteArray.bytes[1]);
    //New register value
    for (int i = 0; i < values.count(); i++){
        byteArray.val = values[i];
        request.append(byteArray.bytes[0]);
        request.append(byteArray.bytes[1]);
    }

    emit FinishedRequest(request);
}
void ModbusMaster::ParseWriteMultipleRegisters(QByteArray data){
    qDebug() << "Master wrote mutliple registers: " << data;
}

void ModbusMaster::RebuildRegisters(QByteArray data, QList<short> &lst){
    union{
        short val;
        char bytes[2];
    }byteArray;
    byteArray.val = 0;

    if(data.count() > 1){
        byteArray.bytes[0] = data.at(0);
        byteArray.bytes[1] = data.at(1);

        lst.append(byteArray.val);
        data.remove(0, 2);
        return RebuildRegisters(data, lst);
    }
}

void ModbusMaster::PingSlave(){
    qDebug() << "Pinging slave";
    ReadCoils(0, 2);
}

void ModbusMaster::WriteSettingsRegisters(){
    QList<char> registerValues;
    BuildSettingsBytes(registerValues);
    //qDebug() << "Num values: " << registerValues.count();
    WriteMultipleRegisters(0, registerValues);
}

void ModbusMaster::BuildSettingsBytes(QList<char> & lst){
    union{
        int16_t val;
        char bytes[2];
    }byteArray;
    byteArray.val = 0;

    for(int i = 0; i < 48; i++){
        byteArray.val = dataTable->ReadRegister(i);
        //qDebug() << "MM: BSB: Register " << QString::number(i) << " = " << dataTable->readRegister(i);
        //qDebug() << "Bytes: " << byteArray.bytes[0] << ", " << byteArray.bytes[1];
        lst.append(byteArray.bytes[0]);
        lst.append(byteArray.bytes[1]);
    }
}

QString ModbusMaster::GetTargetIP(){
    return targetIPAddress;
}
