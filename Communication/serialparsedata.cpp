#include "serialparsedata.h"

SerialParseData::SerialParseData(bool * date, bool * time, bool * _synced, bool * _syncing){
    rDate = date;
    rTime = time;
    synced = _synced;
    syncing = _syncing;

    connect(this, &SerialParseData::SaveLine, AQSyncData::GetInstance(), &AQSyncData::OnFinishedReadingLine);
}

void SerialParseData::ParseData(QList<unsigned char> lst){
    union{
        long l;
        float f;
        int i;
        unsigned char bytes[4];
    }byteArray;
    byteArray.l = 0;

    AQSyncSettings * settings = AQSyncSettings::GetInstance();
    char * dt = nullptr;

    switch (lst.at(0)) {
    case '*':
        qDebug() << "Serial message: " << lst;
        break;
    case AVG_TIME_MARKER:
        if(lst[1] == 254) lst[1] = 160;
        if(lst[1] == 255) lst[1] = 161;
        settings->SetAvgTime(lst[1]);
        qDebug() << "Set avg time to " << QString::number(settings->GetAvgTime());
        break;
    case MODE_MARKER:
        if(lst[1] == 254) lst[1] = 160;
        if(lst[1] == 255) lst[1] = 161;
        settings->SetMode(lst[1]);
        qDebug() << "Set mode to " << QString::number(settings->GetMode());
        break;
    case AD_SHORT_MARKER:
        if(lst[1] == 254) lst[1] = 160;
        if(lst[1] == 255) lst[1] = 161;
        settings->SetAdShort(lst[1]);
        qDebug() << "Set ad short to " << QString::number(settings->GetAdShort());
        break;
    case AD_LONG_MARKER:
        if(lst[1] == 254) lst[1] = 160;
        if(lst[1] == 255) lst[1] = 161;
        settings->SetAdLong(lst[1]);
        qDebug() << "Setting ad long to " << QString::number(settings->GetAdLong());
        break;
    case AD_DIFF_MARKER:
        if(lst[1] == 254) lst[1] = 160;
        if(lst[1] == 255) lst[1] = 161;
        settings->SetAdDiff(lst[1]);
        qDebug() << "Setting ad diff to " << QString::number(settings->GetAdDiff());
        break;
    case AD_PER_MARKER:
        if(lst[1] == 254) lst[1] = 160;
        if(lst[1] == 255) lst[1] = 161;
        settings->SetAdPer(lst[1]);
        qDebug() << "Setting ad per to " << QString::number(settings->GetAdPer());
        break;
    case NO_SLOPE_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetNOSlope(byteArray.f);
        qDebug() << "Setting no slope to " << settings->GetNOSlope();
        break;
    case NO_ZERO_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetNOZero(byteArray.f);
        qDebug() << "Setting no zero to " << settings->GetNOZero();
        break;
    case NO2_SLOPE_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetNO2Slope(byteArray.f);
        qDebug() << "Setting no2 slope to " << settings->GetNO2Slope();
        break;
    case NO2_ZERO_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetNO2Zero(byteArray.f);
        qDebug() << "Setting no2 zero to " << settings->GetNO2Zero();
        break;
    case OZONE_FLOW_SLOPE_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetOzoneFlowSlope(byteArray.f);
        qDebug() << "Setting ozone flow slope to " << settings->GetOzoneFlowSlope();
        break;
    case CELL_FLOW_SLOPE_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetCellFlowSlope(byteArray.f);
        qDebug() << "Setting cell flow slope to " << settings->GetCellFlowSlope();
        break;
    case MASS_EXT_405_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetMassExt405(byteArray.f);
        qDebug() << "Setting mass ext 405 to " << settings->GetMassExt405();
        break;
    case PM_SLOPE_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetPMSlope(byteArray.f);
        qDebug() << "Setting pm slope to " << settings->GetPMSlope();
        break;
    case PM_ZERO_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetPMZero(byteArray.f);
        qDebug() << "Setting pm zero to " << settings->GetPMZero();
        break;
    case MASS_EXT_880_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetMassExt880(byteArray.f);
        qDebug() << "Setting mass ext 880 to " << settings->GetMassExt880();
        break;
    case BC_SLOPE_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetBCSlope(byteArray.f);
        qDebug() << "Setting bc slope to " << settings->GetBCSlope();
        break;
    case BC_ZERO_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetBCZero(byteArray.f);
        qDebug() << "Setting bc zero to " << settings->GetBCZero();
        break;
    case FLOW_SLOPE_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetFlowSlope(byteArray.f);
        qDebug() << "Setting flow slope to " << settings->GetFlowSlope();
        break;
    case FLOW_ZERO_MARKER:
        byteArray.bytes[0] = lst.at(1);
        byteArray.bytes[1] = lst.at(2);
        byteArray.bytes[2] = lst.at(3);
        byteArray.bytes[3] = lst.at(4);
        settings->SetFlowZero(byteArray.f);
        qDebug() << "Setting flow zero to " << settings->GetFlowZero();
        break;
    case DATE_MARKER:
        *rDate = true;
        //DDMMYY
        dt = settings->GetDate();
        dt[0] = static_cast<char>(lst[1]);
        dt[1] = static_cast<char>(lst[2]);
        dt[2] = static_cast<char>(lst[3]);
        dt[3] = static_cast<char>(lst[4]);
        dt[4] = static_cast<char>(lst[5]);
        dt[5] = static_cast<char>(lst[6]);
        emit SetNewDate();
        if(!sentStart) HandleStart();
        break;
    case TIME_MARKER:
        *rTime = true;
        //HHMMSS
        dt = settings->GetTime();
        dt[0] = static_cast<char>(lst[1]);
        dt[1] = static_cast<char>(lst[2]);
        dt[2] = static_cast<char>(lst[3]);
        dt[3] = static_cast<char>(lst[4]);
        dt[4] = static_cast<char>(lst[5]);
        dt[5] = static_cast<char>(lst[6]);
        emit SetNewTime();
        if(!sentStart) HandleStart();
        break;
    case RESET_SYNC_CHAR:
        qDebug() << "Resetting sync";
        *synced = false;
        break;
    case HANDLE_LOG_CHAR:
        qDebug() << "Handling log";
        ParseLogBytes(lst);
        break;
    case SYNC_CHAR:
        if(!*syncing && !*synced){
            qDebug() << "Sterting sync";
            emit StartSyncing();
        }else if(*synced){
            qDebug() << "Finished syncing";
        }else{
            qDebug() << "Received sync char at bad time";
        }
        break;
    default:
        qDebug() << "SPD hit defualt case: " << QString(lst.at(0));
        break;
    }
}

void SerialParseData::HandleStart(){
    if(*rDate && *rTime && !sentStart){
        sentStart = true;
        emit PackageMessage(QByteArray("@"));
    }
}

void SerialParseData::ParseLogBytes(QList<unsigned char> buffer){
    static int prevLogNumber = 0;
    QString str;
    QString sqlInsert;
    char arr[25] = {0, };
    union{
        float f;
        long l;
        unsigned char bytes[4];
    }byteArray;

    AQSyncData * data = AQSyncData::GetInstance();
    AQSyncSettings * settings = AQSyncSettings::GetInstance();

    //Log Number
    byteArray.bytes[0] = buffer[4];
    byteArray.bytes[1] = buffer[3];
    byteArray.bytes[2] = buffer[2];
    byteArray.bytes[3] = buffer[1];

    if(byteArray.l == 1) AQSyncData::GetInstance()->GenerateSingleName();

    if(byteArray.l < 0) qDebug() << "Received bad log number: " << byteArray.l;
    if(prevLogNumber + 1 != byteArray.l && prevLogNumber != byteArray.l){
        qDebug() << "Device has missed a log. Prev: " << prevLogNumber << " current: " << byteArray.l;
        AQSyncData::GetInstance()->RecoverPreviousName();
    }
    prevLogNumber = byteArray.l;
    data->SetLogNumber(byteArray.l);
    sprintf(arr, "%ld,", data->GetLogNumber());
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //Black carbon
    byteArray.bytes[0] = buffer[8];
    byteArray.bytes[1] = buffer[7];
    byteArray.bytes[2] = buffer[6];
    byteArray.bytes[3] = buffer[5];
    data->SetBlackCarbon(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //PM
    byteArray.bytes[0] = buffer[12];
    byteArray.bytes[1] = buffer[11];
    byteArray.bytes[2] = buffer[10];
    byteArray.bytes[3] = buffer[9];
    data->SetPM(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //Mass ext 880
    byteArray.bytes[0] = buffer[16];
    byteArray.bytes[1] = buffer[15];
    byteArray.bytes[2] = buffer[14];
    byteArray.bytes[3] = buffer[13];
    data->SetMassExt880(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //Mass ext 405
    byteArray.bytes[0] = buffer[20];
    byteArray.bytes[1] = buffer[19];
    byteArray.bytes[2] = buffer[18];
    byteArray.bytes[3] = buffer[17];
    data->SetMassExt405(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //NO
    byteArray.bytes[0] = buffer[24];
    byteArray.bytes[1] = buffer[23];
    byteArray.bytes[2] = buffer[22];
    byteArray.bytes[3] = buffer[21];
    data->SetNO(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //NO2
    byteArray.bytes[0] = buffer[28];
    byteArray.bytes[1] = buffer[27];
    byteArray.bytes[2] = buffer[26];
    byteArray.bytes[3] = buffer[25];
    data->SetNO2(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //NOx
    byteArray.bytes[0] = buffer[32];
    byteArray.bytes[1] = buffer[33];
    byteArray.bytes[2] = buffer[32];
    byteArray.bytes[3] = buffer[31];
    data->SetNOx(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //Cell temp
    byteArray.bytes[0] = buffer[36];
    byteArray.bytes[1] = buffer[35];
    byteArray.bytes[2] = buffer[34];
    byteArray.bytes[3] = buffer[33];
    data->SetCellTemp(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //Cell pressure
    byteArray.bytes[0] = buffer[40];
    byteArray.bytes[1] = buffer[39];
    byteArray.bytes[2] = buffer[38];
    byteArray.bytes[3] = buffer[37];
    data->SetCellPress(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //Cell flow
    byteArray.bytes[0] = buffer[44];
    byteArray.bytes[1] = buffer[43];
    byteArray.bytes[2] = buffer[42];
    byteArray.bytes[3] = buffer[41];
    data->SetCellFlow(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //Ozone flow
    byteArray.bytes[0] = buffer[48];
    byteArray.bytes[1] = buffer[47];
    byteArray.bytes[2] = buffer[46];
    byteArray.bytes[3] = buffer[45];
    data->SetOzoneFlow(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //PDV a
    byteArray.bytes[0] = buffer[52];
    byteArray.bytes[1] = buffer[51];
    byteArray.bytes[2] = buffer[50];
    byteArray.bytes[3] = buffer[49];
    data->SetPDV1(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //PDV b
    byteArray.bytes[0] = buffer[56];
    byteArray.bytes[1] = buffer[55];
    byteArray.bytes[2] = buffer[54];
    byteArray.bytes[3] = buffer[53];
    data->SetPDV2(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //Scrubber Temp
    byteArray.bytes[0] = buffer[60];
    byteArray.bytes[1] = buffer[59];
    byteArray.bytes[2] = buffer[58];
    byteArray.bytes[3] = buffer[57];
    data->SetScrubberTemp(byteArray.f);
    str.append(arr);
    sqlInsert.append(arr);
    memset(arr, 0, 25);

    //Error byte
    int errorByte = static_cast<int>(buffer[61]);
    str.append(QString::number(errorByte)).append(',');
    sqlInsert.append(QString::number(errorByte)).append(',');
    data->SetErrorByte(errorByte);

    //Date
    //DDMMYY
    char temp[7] = {0, };
    char formatted[11] = {0, };
    temp[0] = static_cast<char>(buffer[62] + 0x30);
    temp[1] = static_cast<char>(buffer[63] + 0x30);
    temp[2] = static_cast<char>(buffer[64] + 0x30);
    temp[3] = static_cast<char>(buffer[65] + 0x30);
    temp[4] = static_cast<char>(buffer[66] + 0x30);
    temp[5] = static_cast<char>(buffer[67] + 0x30);
    qDebug() << "Data line date: " << QString(temp);
    settings->SetDate(temp);
    settings->SetFormattedDate(formatted);
    str.append(formatted).append(',');
    sqlInsert.append('\'').append(formatted).append('\'').append(',');

    //HHMMSS
    temp[0] = static_cast<char>(buffer[68] + 0x30);
    temp[1] = static_cast<char>(buffer[69] + 0x30);
    temp[2] = static_cast<char>(buffer[70] + 0x30);
    temp[3] = static_cast<char>(buffer[71] + 0x30);
    temp[4] = static_cast<char>(buffer[72] + 0x30);
    temp[5] = static_cast<char>(buffer[73] + 0x30);
    qDebug() << "Data line time: " << QString(temp);
    settings->SetTime(temp);
    memset(formatted, 0, 11);
    settings->SetFormattedTime(formatted);
    str.append(formatted).append(',');
    sqlInsert.append('\'').append(formatted).append('\'').append(',');

    int mode = buffer[74];
    data->SetMode(mode);
    sqlInsert.append(mode);

    qDebug() << sqlInsert;
    qDebug() << str;

    emit SaveLine(str);
}
