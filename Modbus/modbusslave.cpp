#include "modbusslave.h"

ModbusSlave::ModbusSlave(char _deviceID, ModbusDataTable * data){
    deviceID = _deviceID;
    dataTable = data;
}

void ModbusSlave::UpdateAddress(char _deviceID){
    deviceID = _deviceID;
}

void ModbusSlave::ParseData(QByteArray data, QTcpSocket * socket){
    qDebug() << "Slave has received request: " << QString::number(data.at(7));
    if(deviceID == data.at(6)){
        switch (data.at(7)) {
        case READ_COILS:
            qDebug() << "Slave is reading coils";
            emit WriteData(ReadCoils(data), socket);
            return;
        case READ_DISCRETE_INPUTS:
            qDebug() << "Slave is reading discrete inputs";
            emit WriteData(ReadDiscreteInputs(data), socket);
            return;
        case READ_MULTIPLE_REG_FUNC:
            qDebug() << "Slave is reading multiple registers";
            emit WriteData(ReadMultipleRegisters(data), socket);
            return;
        case READ_INPUT_REGISTERS:
            qDebug() << "Slave is reading input registers";
            emit WriteData(ReadInputRegisters(data), socket);
            return;
        case WRITE_SINGLE_COIL:
            qDebug() << "Slave is writing single coil";
            emit WriteData(WriteSingleCoil(data), socket);
            return;
        case WRITE_SINGLE_REGISTER:
            qDebug() << "Slave is writing single register";
            emit WriteData(WriteSingleRegister(data), socket);
            return;
        case WRITE_MULTIPLE_COILS:
            qDebug() << "Slave is writing multiple coils";
            emit WriteData(WriteMultipleCoils(data), socket);
            return;
        case WRITE_MULTIPLE_REG_FUNC:
            qDebug() << "Slave is writing multiple registers";
            emit WriteData(WriteMultipleRegisters(data), socket);
            return;
        default:
            qDebug() << "Slave has received bad function code: " << QString::number(data.at(7));
        }
    }else{
        qDebug() << "Device has received request with wrong id: " << QString::number(deviceID) << " != " << QString::number(data.at(6));
    }
}

QByteArray ModbusSlave::ReadCoils(QByteArray data){
    QByteArray toReturn;
    union{
        short val;
        char bytes[2];
    }byteArray;

    //Transaction ID
    toReturn.append(data.at(0));
    toReturn.append(data.at(1));
    //Protocol (unused so should always = 0)
    toReturn.append('\0');
    toReturn.append('\0');
    //Size of package
    toReturn.append('\0');
    toReturn.append(3);
    //Unit ID
    toReturn.append(deviceID);
    //Function Code
    toReturn.append(READ_COILS);

    //Data
    int startAddress = 0;
    int bitCount = 0;
    int bytes = 0;

    byteArray.bytes[0] = data.at(8);
    byteArray.bytes[1] = data.at(9);
    startAddress = byteArray.val;

    byteArray.bytes[0] = data[10];
    byteArray.bytes[1] = data[11];
    bitCount = byteArray.val;
    bytes = bitCount / 8;
    if(bitCount % 8) bytes++;

    toReturn.append(static_cast<char>(bytes));
    qDebug() << "Slave is reading coils: " << QString::number(startAddress) << ", " << QString::number(bitCount);
    toReturn.append(dataTable->PackageCoils(startAddress, bitCount));

    return toReturn;
}

QByteArray ModbusSlave::ReadDiscreteInputs(QByteArray data){
    QByteArray toReturn;
    union{
        short val;
        char bytes[2];
    }byteArray;

    //Transaction ID
    toReturn.append(data.at(0));
    toReturn.append(data.at(1));
    //Protocol (unused so should always = 0)
    toReturn.append('\0');
    toReturn.append('\0');
    //Size of package
    toReturn.append('\0');
    toReturn.append(3);
    //Unit ID
    toReturn.append(deviceID);
    //Function Code
    toReturn.append(READ_DISCRETE_INPUTS);

    //Data
    int startAddress = 0;
    int bitCount = 0;
    int bytes = 0;

    byteArray.bytes[0] = data.at(8);
    byteArray.bytes[1] = data.at(9);
    startAddress = byteArray.val;

    byteArray.bytes[0] = data[10];
    byteArray.bytes[1] = data[11];
    bitCount = byteArray.val;
    bytes = bitCount / 8;
    if(bitCount % 8) bytes++;

    toReturn.append(static_cast<char>(bytes));
    qDebug() << "Slave is reading inputs: " << QString::number(startAddress) << ", " << QString::number(bitCount);
    toReturn.append(dataTable->PackageCoils(startAddress, bitCount));

    return toReturn;
}

QByteArray ModbusSlave::ReadMultipleRegisters(QByteArray data){
    QByteArray toReturn;
    union{
        short val;
        char bytes[2];
    }byteArray;

    toReturn.append(data.at(0));
    toReturn.append(data.at(1));
    //Protocol
    toReturn.append('\0');
    toReturn.append('\0');
    //Size: 4, 5
    toReturn.append('\0');
    toReturn.append('\3');
    //Add unit ID
    toReturn.append(data.at(6));
    //Function code
    toReturn.append(data.at(7));

    int startAddress = 0;
    int toRead = 0;

    byteArray.bytes[1] = data.at(8);
    byteArray.bytes[0] = data.at(9);
    startAddress = byteArray.val;

    qDebug() << "Slave is reading " << toRead << " registers";
    byteArray.bytes[1] = data[10];
    byteArray.bytes[0] = data[11];
    toRead = byteArray.val;

    toReturn.append(static_cast<char>(toRead * 2));
    toReturn.append(dataTable->PackageRegisters(startAddress, toRead));

    return toReturn;
}

QByteArray ModbusSlave::ReadInputRegisters(QByteArray data){
    union{
        short val;
        char bytes[2];
    }byteArray;

    QByteArray toReturn;
    toReturn.append(data.at(0));
    toReturn.append(data.at(1));
    //Protocol
    toReturn.append('\0');
    toReturn.append('\0');
    //Size: 4, 5
    toReturn.append('\0');
    toReturn.append('\3');
    //Add unit ID
    toReturn.append(data.at(6));
    //Function code
    toReturn.append(data.at(7));

    int startAddress = 0;
    int toRead = 0;

    byteArray.bytes[1] = data.at(8);
    byteArray.bytes[0] = data.at(9);
    startAddress = byteArray.val;

    byteArray.bytes[1] = data[10];
    byteArray.bytes[0] = data[11];
    toRead = byteArray.val;

    toReturn.append(static_cast<char>(toRead * 2));
    toReturn.append(dataTable->PackageRegisters(startAddress, toRead));

    return toReturn;
}

//Review, might have to change floats to trigger on register + 1
QByteArray ModbusSlave::WriteSingleRegister(QByteArray data){
    union{
        short val;
        char bytes[2];
    }byteArray;

    int startAddress = 0;

    byteArray.bytes[0] = data[8];
    byteArray.bytes[1] = data[9];
    startAddress = byteArray.val;

    byteArray.bytes[0] = data[10];
    byteArray.bytes[1] = data[11];

    dataTable->SetRegister(startAddress, byteArray.val);

    AQSyncSettings * settings = AQSyncSettings::GetInstance();
    //AQSyncData * d = AQSyncData::GetInstance();

    switch (startAddress) {
    case AVG_TIME_MARKER: settings->SetAvgTime(static_cast<unsigned char>(dataTable->GetShort(AVG_TIME_REGISTER))); break;
    case MODE_REGISTER: settings->SetMode(static_cast<unsigned char>(dataTable->GetShort(MODE_REGISTER))); break;
    case ADAPTIVE_SHORT_REGISTER: settings->SetAdShort(static_cast<unsigned char>(dataTable->GetShort(ADAPTIVE_SHORT_REGISTER))); break;
    case ADAPTIVE_LONG_REGISTER: settings->SetAdLong(static_cast<unsigned char>(dataTable->GetShort(ADAPTIVE_LONG_REGISTER))); break;
    case ADAPTIVE_DIFF_REGISTER: settings->SetAdDiff(static_cast<unsigned char>(dataTable->GetShort(ADAPTIVE_DIFF_REGISTER))); break;
    case ADAPTIVE_PER_REGISTER: settings->SetAdPer(static_cast<unsigned char>(dataTable->GetShort(ADAPTIVE_PER_REGISTER))); break;
    case NO_SLOPE_REGISTER + 1: settings->SetNOSlope(dataTable->GetFloat(NO_SLOPE_REGISTER)); break;
    case NO_ZERO_REGISTER + 1: settings->SetNOZero(dataTable->GetFloat(NO_ZERO_REGISTER)); break;
    case NO2_SLOPE_REGISTER + 1: settings->SetNO2Slope(dataTable->GetFloat(NO2_SLOPE_REGISTER)); break;
    case NO2_ZERO_REGISTER + 1: settings->SetNO2Zero(dataTable->GetFloat(NO2_ZERO_REGISTER)); break;
    case OZONE_FLOW_SLOPE_REGISTER + 1: settings->SetOzoneFlowSlope(dataTable->GetFloat(OZONE_FLOW_SLOPE_REGISTER)); break;
    case CELL_FLOW_SLOPE_REGISTER + 1: settings->SetCellFlowSlope(dataTable->GetFloat(CELL_FLOW_SLOPE_REGISTER)); break;
    case MASS_EXT_405_REGISTER + 1: settings->SetMassExt405(dataTable->GetFloat(MASS_EXT_405_REGISTER)); break;
    case PM_SLOPE_REGISTER + 1: settings->SetPMSlope(dataTable->GetFloat(PM_SLOPE_REGISTER)); break;
    case PM_ZERO_REGISTER + 1: settings->SetPMZero(dataTable->GetFloat(PM_ZERO_REGISTER)); break;
    case MASS_EXT_880_REGISTER + 1: settings->SetMassExt880(dataTable->GetFloat(MASS_EXT_880_REGISTER)); break;
    case BC_SLOPE_REGISTER + 1: settings->SetBCSlope(dataTable->GetFloat(BC_SLOPE_REGISTER)); break;
    case BC_ZERO_REGISTER + 1: settings->SetBCZero(dataTable->GetFloat(BC_ZERO_REGISTER)); break;
    case FLOW_SLOPE_REGISTER + 1: settings->SetFlowSlope(dataTable->GetFloat(FLOW_SLOPE_REGISTER)); break;
    case FLOW_ZERO_REGISTER + 1: settings->SetFlowZero(dataTable->GetFloat(FLOW_ZERO_REGISTER)); break;
    default: break;
    }
    emit ReceivedNewSettings();

    return data;
}

QByteArray ModbusSlave::WriteMultipleCoils(QByteArray data){
    union{
        short val;
        char bytes[2];
    }byteArray;

    QByteArray toReturn;
    toReturn.append(data.at(0));
    toReturn.append(data.at(1));
    //Protocol
    toReturn.append('\0');
    toReturn.append('\0');
    //Size: 4, 5
    toReturn.append('\0');
    toReturn.append('\3');
    //Add unit ID
    toReturn.append(data.at(6));
    //Function code
    toReturn.append(data.at(7));
    toReturn.append(data[8]);//Address bytes
    toReturn.append(data[9]);
    toReturn.append(data[10]);//Length bytes
    toReturn.append(data[11]);

    int startAddress = 0;
    int toRead = 0;

    byteArray.bytes[1] = data.at(8);
    byteArray.bytes[0] = data.at(9);
    startAddress = byteArray.val;

    byteArray.bytes[1] = data[10];
    byteArray.bytes[0] = data[11];
    toRead = byteArray.val;

    dataTable->SetCoils(startAddress, toRead, data.remove(0, 13));

    return toReturn;
}

QByteArray ModbusSlave::WriteMultipleRegisters(QByteArray data){
    union{
        short val;
        char bytes[2];
    }byteArray;
    int startAddress = 0;
    int length = 0;

    QByteArray toReturn;
    //Function ID
    toReturn.append(data.at(0));
    toReturn.append(data.at(1));
    //
    toReturn.append(data.at(2));
    toReturn.append(data.at(3));
    //Length
    toReturn.append(data.at(4));
    toReturn.append(data.at(5));
    //Slave Address
    toReturn.append(data.at(6));
    //Function code
    toReturn.append(data.at(7));
    //Address bytes
    toReturn.append(data.at(8));
    toReturn.append(data.at(9));
    //Length bytes
    toReturn.append(data.at(10));
    toReturn.append(data.at(11));

    byteArray.bytes[1] = data.at(8);
    byteArray.bytes[0] = data.at(9);
    startAddress = byteArray.val;

    byteArray.bytes[1] = data.at(10);
    byteArray.bytes[0] = data.at(11);
    length = byteArray.val;

    data.remove(0, 12);

    QList<int16_t> rebuilt;
    RebuildRegisters(data, rebuilt);
    ParseWriteSettings(rebuilt);
    dataTable->SetRegisters(startAddress, length, data);
    return toReturn;
}

QByteArray ModbusSlave::WriteSingleCoil(QByteArray data){
    qDebug() << "Writing single coil";
    union{
        short val;
        char bytes[2];
    }byteArray;
    byteArray.bytes[0] = data.at(8);
    byteArray.bytes[1] = data.at(9);

    int startAddress =  byteArray.val;

    qDebug() << "Start address: " << startAddress;

    //coils[startAddress].set = (data.at(10) != 0) ? (1) : (0);
    dataTable->SetCoil(startAddress, data.at(10));

    return data;
}

void ModbusSlave::RebuildRegisters(QByteArray arr, QList<int16_t> &lst){
    union{
        int16_t val;
        char bytes[2];
    }byteArray;

    if(arr.count() > 1){
        byteArray.bytes[0] = arr.at(0);
        byteArray.bytes[1] = arr.at(1);

        //qDebug() << "Bytes: " << QString::number(arr.at(0)) << " and " << QString::number(arr.at(1));
        //qDebug() << "Rebuilt: " << byteArray.val;

        lst.append(byteArray.val);
        arr.remove(0, 2);
        return RebuildRegisters(arr, lst);
    }
}

void ModbusSlave::ParseWriteSettings(QList<short> lst){
    bool newValue = false;
    union{
        float f;
        short bytes[2];
    }byteArray;
    byteArray.f = 0;

    AQSyncSettings * settings = AQSyncSettings::GetInstance();

    if(settings->GetAvgTime() != lst[0]){
        newValue = true;
        qDebug() << "Modbus slave is changing avg time to " << QString::number(lst[0]) << " from " << settings->GetAvgTime();
        settings->SetAvgTime(static_cast<unsigned char>(lst[0]));
        qDebug() << "Need to add write command";
        dataTable->SetRegister(AVG_TIME_MARKER, lst[0]);
    }

    if(settings->GetMode() != lst[1]){
        newValue = true;
        qDebug() << "Modbus slave is changing mode to " << QString::number(lst[1]) << " from " << settings->GetMode();
        settings->SetMode(static_cast<unsigned char>(lst[1]));
        qDebug() << "Need to add write command";
        dataTable->SetRegister(MODE_REGISTER, lst[1]);
    }

    if(settings->GetAdShort() != lst[2]){
        newValue = true;
        qDebug() << "Modbus slave is changing ad short to " << QString::number(lst[2]) << " from " << settings->GetAdShort();
        settings->SetAdShort(static_cast<unsigned char>(lst[2]));
        qDebug() << "Need to add write command";
        dataTable->SetRegister(ADAPTIVE_SHORT_REGISTER, lst[2]);
    }

    if(settings->GetAdLong() != lst[3]){
        newValue = true;
        qDebug() << "Modbus slave is changing ad long to " << QString::number(lst[3]) << " from " << settings->GetAdLong();
        settings->SetAdLong(static_cast<unsigned char>(lst[3]));
        qDebug() << "Need to add write command";
        dataTable->SetRegister(ADAPTIVE_LONG_REGISTER, lst[3]);
    }

    if(settings->GetAdDiff() != lst[4]){
        newValue = true;
        qDebug() << "Modbus slave is changing ad diff to " << QString::number(lst[4]) << " from " << settings->GetAdDiff();
        settings->SetAdDiff(static_cast<unsigned char>(lst[4]));
        qDebug() << "Need to add write command";
        dataTable->SetRegister(ADAPTIVE_DIFF_REGISTER, lst[4]);
    }

    if(settings->GetAdPer() != lst[5]){
        newValue = true;
        qDebug() << "Modbus slave is changing ad per to " << QString::number(lst[5]) << " from " << settings->GetAdPer();
        settings->SetAdPer(static_cast<unsigned char>(lst[5]));
        qDebug() << "Need to add write command";
        dataTable->SetRegister(ADAPTIVE_PER_REGISTER, lst[5]);
    }

    byteArray.bytes[0] = lst[6];
    byteArray.bytes[1] = lst[7];
    if(fabs(static_cast<double>(settings->GetNOSlope() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is changing NO slope to " << byteArray.f << " from " << settings->GetNOSlope();
        settings->SetNOSlope(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(NO_SLOPE_REGISTER, 2, lst[6], lst[7]);
    }

    byteArray.bytes[0] = lst[8];
    byteArray.bytes[1] = lst[9];
    if(fabs(static_cast<double>(settings->GetNOZero() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is changing NO zero to " << byteArray.f << " from " << settings->GetNOZero();
        settings->SetNOZero(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(NO_ZERO_REGISTER, 2, lst[8], lst[9]);
    }

    byteArray.bytes[0] = lst[10];
    byteArray.bytes[1] = lst[11];
    if(fabs(static_cast<double>(settings->GetNO2Slope() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is changing NO2 slope to " << byteArray.f << " from " << settings->GetNO2Slope();
        settings->SetNO2Slope(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(NO2_SLOPE_MARKER, 2, lst[10], lst[11]);
    }

    byteArray.bytes[0] = lst[12];
    byteArray.bytes[1] = lst[13];
    if(fabs(static_cast<double>(settings->GetNO2Zero() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is changing no2 zero to " << byteArray.f << " from " << settings->GetNO2Zero();
        settings->SetNO2Zero(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(NO2_ZERO_MARKER, 2, lst[12], lst[13]);
    }

    byteArray.bytes[0] = lst[14];
    byteArray.bytes[1] = lst[15];
    if(fabs(static_cast<double>(settings->GetOzoneFlowSlope() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is changing ozone flow slope to " << byteArray.f << " from " << settings->GetOzoneFlowSlope();
        settings->SetOzoneFlowSlope(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(OZONE_FLOW_SLOPE_REGISTER, 2, lst[14], lst[15]);
    }

    byteArray.bytes[0] = lst[16];
    byteArray.bytes[1] = lst[17];
    if(fabs(static_cast<double>(settings->GetCellFlowSlope() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is changing cell flow slope to " << byteArray.f << " from " << settings->GetCellFlowSlope();
        settings->SetCellFlowSlope(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(CELL_FLOW_SLOPE_REGISTER, 2, lst[16], lst[17]);
    }

    byteArray.bytes[0] = lst[18];
    byteArray.bytes[1] = lst[19];
    if(fabs(static_cast<double>(settings->GetMassExt405() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is chaning mass ext 405 to " << byteArray.f << " from " << settings->GetMassExt405();
        settings->SetMassExt405(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(MASS_EXT_405_REGISTER, 2, lst[18], lst[19]);
    }

    byteArray.bytes[0] = lst[20];
    byteArray.bytes[1] = lst[21];
    if(fabs(static_cast<double>(settings->GetPMSlope() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is changing pm slope to " << byteArray.f << " from " << settings->GetPMSlope();
        settings->SetPMSlope(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(PM_SLOPE_REGISTER, 2, lst[20], lst[21]);
    }

    byteArray.bytes[0] = lst[22];
    byteArray.bytes[1] = lst[23];
    if(fabs(static_cast<double>(settings->GetPMZero() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is changing pm zero to " << byteArray.f << " from " << settings->GetPMZero();
        settings->SetPMZero(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(PM_ZERO_MARKER, 2, lst[22], lst[23]);
    }

    byteArray.bytes[0] = lst[24];
    byteArray.bytes[1] = lst[25];
    if(fabs(static_cast<double>(settings->GetMassExt880() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is changing mass ext 880 to " << byteArray.f << " from " << settings->GetMassExt880();
        settings->SetMassExt880(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(MASS_EXT_880_REGISTER, 2, lst[24], lst[25]);
    }

    byteArray.bytes[0] = lst[26];
    byteArray.bytes[1] = lst[27];
    if(fabs(static_cast<double>(settings->GetBCSlope() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is changing bc slope to " << byteArray.f << " from " << settings->GetBCSlope();
        settings->SetBCSlope(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(BC_SLOPE_REGISTER, 2, lst[26], lst[27]);
    }

    byteArray.bytes[0] = lst[28];
    byteArray.bytes[1] = lst[29];
    if(fabs(static_cast<double>(settings->GetBCZero() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is changing bc zero to " << byteArray.f << " from " << settings->GetBCZero();
        settings->SetBCZero(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(BC_ZERO_MARKER, 2, lst[28], lst[29]);
    }

    byteArray.bytes[0] = lst[30];
    byteArray.bytes[1] = lst[31];
    if(fabs(static_cast<double>(settings->GetFlowSlope() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is changing flow slope to " << byteArray.f << " from " << settings->GetFlowSlope();
        settings->SetFlowSlope(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(FLOW_SLOPE_REGISTER, 2, lst[30], lst[31]);
    }

    byteArray.bytes[0] = lst[32];
    byteArray.bytes[1] = lst[33];
    if(fabs(static_cast<double>(settings->GetFlowZero() - byteArray.f)) > 0.001){
        newValue = true;
        qDebug() << "Modbus slave is changing flow zero to " << byteArray.f << " from " << settings->GetFlowZero();
        settings->SetFlowZero(byteArray.f);
        qDebug() << "Need to add write command";
        dataTable->SetRegisters(FLOW_ZERO_MARKER, 2, lst[32], lst[33]);
    }

    if(newValue) emit ReceivedNewSettings();
}
