#include "bcpserialhandler.h"

BCPSerialHandler::BCPSerialHandler()
{
    SetUpSerialPort();
}

BCPSerialHandler * BCPSerialHandler::instance = nullptr;
BCPSerialHandler * BCPSerialHandler::GetInstance()
{
    if(instance == nullptr)
    {
        instance = new BCPSerialHandler();
    }
    return instance;
}

void BCPSerialHandler::SetUpSerialPort()
{
    serialPort.setPortName(PORT_NAME_BCP);
    serialPort.setBaudRate(BAUD_RATE_BCP);

    if(serialPort.open(QIODevice::ReadWrite))
    {
        qDebug() << "Opened BCP serial port";

        connect(&serialPort, &QSerialPort::readyRead, this, &BCPSerialHandler::ReadyRead);
    }
    else
    {
        qDebug() << "Failed to open BCP serialport: " << serialPort.errorString();
    }
}

void BCPSerialHandler::ReadyRead()
{
    while (serialPort.bytesAvailable() > 0)
    {
        unsigned char temp = static_cast<unsigned char>(serialPort.read(1).at(0));
        received.append(static_cast<char>(temp));

        //Check for bad start
        if(received.count() <= 2 && temp != 0xFF)
        {
            qDebug() << "BCP serial port received bad start";
            received.clear();
        }
        else
        {
            //Get the package length
            unsigned int pLen = static_cast<unsigned int>(received[2]);

            //If length = 255, there is a good chance that it is a bad value

            //Check if the whole message has been received
            if(static_cast<unsigned int>(received.count()) == 3 + pLen)
            {
                //Calc checksum, avg byte value of message
                unsigned int checksum = 0;
                //Sum the byte values except for the sent checksum
                for(int i = 0; i < received.count() - 1; i++)
                {
                    checksum += static_cast<unsigned int>(received.at(i));
                }
                //Divide sum by number of bytes to get average
                checksum /= static_cast<unsigned int>(received.count() - 1);

                //Compare checksums to make sure the message is good
                if(checksum != static_cast<unsigned char>(received.at(received.count() - 1)))
                {
                    qDebug() << "BCP serial handler received message with bad checksum: L: "
                             << QString::number(checksum) << " S: " << QString::number(static_cast<unsigned char>(received.at(received.count() - 1)));
                    qDebug() << "Message: " << received << " " << QString(received);
                    received.clear();
                }
                else
                {
                    //Remove extra bytes, 2 start bytes, length
                    received = received.remove(0, 3);
                    //checksum
                    received = received.remove(received.count() - 1, 1);

                    ParseData(received);
                    received.clear();
                }
            }
        }
    }
}

//Review, add range checks for settings
void BCPSerialHandler::ParseData(QByteArray data)
{
    union{
        float val;
        char bytes[4];
    }floatArray;
    union{
        int val;
        char bytes[2];
    }intArray;

    SettingsHandler * settings = SettingsHandler::GetInstance();

    char tempDT[7] = {0, };

    unsigned char tempChar = 0;

    switch (data.at(0))
    {
        //Ack
        case '_':
            qDebug() << "Received ack: " << data;
            if(ackList.removeOne(data.remove(0, 1)) == true)
            {
                qDebug() << "Received ack for " << data;
            }
            break;

    //Debug message
    case '*':
        qDebug() << "BCP received debug message: " << data;
        break;

    case ZERO_PERIOD_MARKER_BCP:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetZeroPeriod_bcp(tempChar);
        emit NewAutoZeroSettingBCP();
        break;

    case ZERO_FREQUENCY_MARKER_BCP:
        intArray.bytes[0] = data.at(1);
        intArray.bytes[1] = data.at(2);
        Utilities::ConvertIntBack(intArray.val);
        settings->SetZeroFrequency_bcp(intArray.val);
        emit NewAutoZeroSettingBCP();
        break;

    case DATE_MARKER_BCP:
        tempDT[0] = data.at(1);
        tempDT[1] = data.at(2);
        tempDT[2] = data.at(3);
        tempDT[3] = data.at(4);
        tempDT[4] = data.at(5);
        tempDT[5] = data.at(6);

        settings->SetDate(tempDT);

        receivedDate = true;
        if(syncStatus == NotSynced && receivedDate == true && receivedTime == true)
        {
            StartSync();
        }

        emit NewDateSetting();
        break;

    case TIME_MARKER_BCP:
        tempDT[0] = data.at(1);
        tempDT[1] = data.at(2);
        tempDT[2] = data.at(3);
        tempDT[3] = data.at(4);
        tempDT[4] = data.at(5);
        tempDT[5] = data.at(6);

        settings->SetTime(tempDT);

        receivedDate = true;
        if(syncStatus == NotSynced && receivedDate == true && receivedTime == true)
        {
            StartSync();
        }
        break;

    case AD_SHORT_MARKER_BCP:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetAdShort_405(tempChar);
        break;

    case AD_LONG_MARKER_BCP:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetAdLong_405(tempChar);
        break;

    case AD_DIFF_MARKER_BCP:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetAdDiff_405(tempChar);
        break;

    case AD_PER_MARKER_BCP:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetAdPercent_405(tempChar);
        break;

    case BIT_MASK_MARKER_BCP:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetBitMask_405(tempChar);
        break;

    case AVG_TIME_MARKER_BCP:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetAvgTime(tempChar);
        break;

    case ANALOG_405_MARKER_BCP:
        intArray.bytes[0] = data.at(1);
        intArray.bytes[1] = data.at(2);
        Utilities::ConvertIntBack(intArray.val);
        settings->SetAnalog405_bcp(intArray.val);
        break;

    case ANALOG_880_MARKER_BCP:
        intArray.bytes[0] = data.at(1);
        intArray.bytes[1] = data.at(2);
        Utilities::ConvertIntBack(intArray.val);
        settings->SetAnalog880_bcp(intArray.val);
        break;

    case PM_MASS_EXT_MARKER_BCP:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetMassExt405_bcp(floatArray.val);
        break;

    case PM_SLOPE_MARKER_BCP:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetPMSlope_bcp(floatArray.val);
        break;

    case PM_ZERO_MARKER_BCP:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetPMZero_bcp(floatArray.val);
        break;

    case BC_MASS_EXT_MARKER_BCP:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetMassExt880_bcp(floatArray.val);
        break;

    case BC_SLOPE_MARKER_BCP:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetBCSlope_bcp(floatArray.val);
        break;

    case BC_ZERO_MARKER_BCP:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetBCZero_bcp(floatArray.val);
        break;

    case FLOW_SLOPE_MARKER_BCP:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetFlowSlope_bcp(floatArray.val);
        break;

    case FLOW_ZERO_MARKER_BCP:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetFlowZero_bcp(floatArray.val);
        break;

    //Auto zeroed bc zero
    case 'U':
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(2);
        floatArray.bytes[3] = data.at(4);
        qDebug() << "Received new auto zero bc zero: " << floatArray.val;
        break;

    case 'V':
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(2);
        floatArray.bytes[3] = data.at(4);
        qDebug() << "Received new auto zero pm zero: " << floatArray.val;
        break;

    case '?':
        //Reset the syncing status, triggered if the ADuC restarts and the touch screen does not
        syncStatus = NotSynced;
        break;

    case '!':
        ParseLog(data);
        break;

    case '1':
        if(syncStatus == NotSynced)
        {
            StartSync();
        }
        break;

    //Sync timeout
    case '5':
        if(syncStatus == NotSynced)
        {
            StartSync();
        }
        break;

    default:
        qDebug() << "BCP serial handler received bad marker: " << QString(data) << " : " << QString::number(data.at(0));
    }
}

//Review, add error handling
//Review, add modbus
//Review, add graphing
void BCPSerialHandler::ParseLog(QByteArray data)
{
    static int prevLogNum = 0;
    QString str;
    char arr[25] = {0, };
    union{
        float f;
        long l;
        char bytes[4];
        int16_t registerValues[2];
    }byteArray;
    bool writeToFile = false;
    long long len = 0;

    BCPData * dataHandler = BCPData::GetInstance();
    SettingsHandler * settings = SettingsHandler::GetInstance();

    char temp[7] = {0, };
    char tempDate[9] = {0, };
    QString fileName;
    QFile file;

    //Log Number
    byteArray.bytes[0] = data[4];
    byteArray.bytes[1] = data[3];
    byteArray.bytes[2] = data[2];
    byteArray.bytes[3] = data[1];
    byteArray.l &= static_cast<long>(0xFFFFFFFF);

    if(byteArray.l < 0) qDebug() << "Received bad log number";
    //If the previod log number is not one less the device lost a log and should let the user know
    if(prevLogNum + 1 != byteArray.l && prevLogNum != byteArray.l){
        //Utilities::SetBit(Globals::getInstance()->errorCode, missedLog);
        //Globals::getInstance()->SetErrorBit(missedLog);
        //emit SetCoil(missedLog, true);
        //emit detectedCrash();
    }
    //Data is still written during longer averaging periods, so dont save those data lines to the file
    else if(prevLogNum != byteArray.l){
        writeToFile = true;
    }
    prevLogNum = byteArray.l;
    dataHandler->SetLogNumber(byteArray.l);
    //Add log number to rebuilt data line
    len = sprintf(arr, "%ld,", byteArray.l);
    arr[len] = 0;
    str.append(arr);
    //emit SetSettingRegister(logNumberRegister, map.registerValues[0], map.registerValues[1]);

    //EXT(880) or Long term average BC
    byteArray.bytes[0] = data[8];
    byteArray.bytes[1] = data[7];
    byteArray.bytes[2] = data[6];
    byteArray.bytes[3] = data[5];
    dataHandler->SetMassExt880(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);
    //gasses->at(0)->AddDataPoint(QCPData(*logNumber, static_cast<double>(*ext880)));
    //emit SetSettingRegister(massExt880Register, map.registerValues[0], map.registerValues[1]);

    //EXT(405)
    byteArray.bytes[0] = data[12];
    byteArray.bytes[1] = data[11];
    byteArray.bytes[2] = data[10];
    byteArray.bytes[3] = data[9];
    dataHandler->SetMassExt405(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);
    //gasses->at(1)->AddDataPoint(QCPData(*logNumber, static_cast<double>(*ext405)));
    //emit SetSettingRegister(massExt405Register, map.registerValues[0], map.registerValues[1]);

    //BC
    byteArray.bytes[0] = data[16];
    byteArray.bytes[1] = data[15];
    byteArray.bytes[2] = data[14];
    byteArray.bytes[3] = data[13];
    dataHandler->SetBC(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);
    //gasses->at(2)->AddDataPoint(QCPData(*logNumber, static_cast<double>(*bc)));
    //emit SetSettingRegister(BCRegister, map.registerValues[0], map.registerValues[1]);

    //PM
    byteArray.bytes[0] = data[20];
    byteArray.bytes[1] = data[19];
    byteArray.bytes[2] = data[18];
    byteArray.bytes[3] = data[17];
    dataHandler->SetPM(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);
    //gasses->at(3)->AddDataPoint(QCPData(*logNumber, static_cast<double>(*pm)));
    //emit SetSettingRegister(PMRegister, map.registerValues[0], map.registerValues[1]);

    //Cell Temp
    byteArray.bytes[0] = data[24];
    byteArray.bytes[1] = data[23];
    byteArray.bytes[2] = data[22];
    byteArray.bytes[3] = data[21];
    dataHandler->SetCellTemp(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);
    //gasses->at(4)->AddDataPoint(QCPData(*logNumber, static_cast<double>(*cellTemp)));
    //emit SetSettingRegister(cellTempRegister, map.registerValues[0], map.registerValues[1]);

    //Cell Pressure
    byteArray.bytes[0] = data[28];
    byteArray.bytes[1] = data[27];
    byteArray.bytes[2] = data[26];
    byteArray.bytes[3] = data[25];
    dataHandler->SetCellPress(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);
    //gasses->at(5)->AddDataPoint(QCPData(*logNumber, static_cast<double>(*cellPress)));
    //emit SetSettingRegister(cellPressureRegister, map.registerValues[0], map.registerValues[1]);

    //Cell Flow
    byteArray.bytes[0] = data[32];
    byteArray.bytes[1] = data[31];
    byteArray.bytes[2] = data[30];
    byteArray.bytes[3] = data[29];
    dataHandler->SetCellFlow(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);
    //gasses->at(6)->AddDataPoint(QCPData(*logNumber, static_cast<double>(*cellFlow)));
    //emit SetSettingRegister(cellFlowRegister, map.registerValues[0], map.registerValues[1]);

    //Humidity
    byteArray.bytes[0] = data[36];
    byteArray.bytes[1] = data[35];
    byteArray.bytes[2] = data[34];
    byteArray.bytes[3] = data[33];
    dataHandler->SetHumidity(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);
    //gasses->at(7)->AddDataPoint(QCPData(*logNumber, static_cast<double>(*humidity)));
    //emit SetSettingRegister(humidityRegister, map.registerValues[0], map.registerValues[1]);

    //Sytem Temperature
    byteArray.bytes[0] = data[40];
    byteArray.bytes[1] = data[39];
    byteArray.bytes[2] = data[38];
    byteArray.bytes[3] = data[37];
    dataHandler->SetSystemTemp(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);
    //gasses->at(8)->AddDataPoint(QCPData(*logNumber, static_cast<double>(*systTemp)));
    //emit SetSettingRegister(systemTempRegister, map.registerValues[0], map.registerValues[1]);

    //PDV1(880)
    byteArray.bytes[0] = data[44];
    byteArray.bytes[1] = data[43];
    byteArray.bytes[2] = data[42];
    byteArray.bytes[3] = data[41];
    dataHandler->SetPDV1(byteArray.f);
    len = sprintf(arr, "%1.6f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);
    //gasses->at(9)->AddDataPoint(QCPData(*logNumber, static_cast<double>(*pdv1)));
    //emit SetSettingRegister(pdv1Register, map.registerValues[0], map.registerValues[1]);

    //PDV2(405)
    byteArray.bytes[0] = data[48];
    byteArray.bytes[1] = data[47];
    byteArray.bytes[2] = data[46];
    byteArray.bytes[3] = data[45];
    dataHandler->SetPDV2(byteArray.f);
    len = sprintf(arr, "%1.6f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);
    //gasses->at(10)->AddDataPoint(QCPData(*logNumber, static_cast<double>(*pdv2)));
    //emit SetSettingRegister(pdv2Register, map.registerValues[0], map.registerValues[1]);

    //Date
    tempDate[0] = temp[0] = data.at(49) + 0x30;
    tempDate[1] = temp[1] = data.at(50) + 0x30;
    tempDate[2] = '-';
    tempDate[3] = temp[2] = data.at(51) + 0x30;
    tempDate[4] = temp[3] = data.at(52) + 0x30;
    tempDate[5] = '-';
    tempDate[6] = temp[4] = data.at(53) + 0x30;
    tempDate[7] = temp[5] = data.at(54) + 0x30;
    tempDate[0] = 0;
    str.append(tempDate);
    str.append(',');
    settings->SetDate(temp);
    fileName.append(tempDate).append(".csv");

    //Time
    tempDate[0] = temp[0] = data.at(55) + 0x30;
    tempDate[0] = temp[1] = data.at(56) + 0x30;
    tempDate[0] = ':';
    tempDate[0] = temp[2] = data.at(57) + 0x30;
    tempDate[0] = temp[3] = data.at(58) + 0x30;
    tempDate[0] = ':';
    tempDate[0] = temp[4] = data.at(59) + 0x30;
    tempDate[0] = temp[5] = data.at(60) + 0x30;
    str.append(tempDate);
    str.append(',');
    settings->SetTime(temp);

    //Status
    dataHandler->SetStatus(data.at(61));
    str.append( QString::number(data.at(61)).append(',') );

    //BC zero
    byteArray.bytes[0] = data[65];
    byteArray.bytes[1] = data[64];
    byteArray.bytes[2] = data[63];
    byteArray.bytes[3] = data[62];
    dataHandler->SetAutoBCZero(byteArray.f);
    len = sprintf(arr, "%1.1f", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr).append(',');

    byteArray.bytes[0] = data[69];
    byteArray.bytes[1] = data[68];
    byteArray.bytes[2] = data[67];
    byteArray.bytes[3] = data[66];
    dataHandler->SetAutoPMZero(byteArray.f);
    len = sprintf(arr, "%1.1f", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);

    qDebug() << str;

    if(writeToFile)
    {
        file.setFileName("/home/2b/DataFiles/" + fileName);
        if(file.open(QIODevice::Append))
        {
            str.append('\n');
            file.write(str.toLatin1());
            file.flush();
            file.close();
        }
        else
        {
            qDebug() << "Failed to write data file: " << ("/home/2b/DataFiles/" + fileName) << " : " << file.errorString();
        }
    }

    emit ParsedDataLine();
}

void BCPSerialHandler::SendSetting(char marker, unsigned char val)
{
    QByteArray message;
    message.append(marker);
    message.append(static_cast<char>(val));
    SendMessage(message);
}

void BCPSerialHandler::SendSetting(char marker, int val)
{
    union{
        int val;
        char bytes[2];
    }byteArray;

    QByteArray message;
    message.append(marker);

    byteArray.val = val;
    message.append(byteArray.bytes[0]);
    message.append(byteArray.bytes[1]);

    SendMessage(message);
}

void BCPSerialHandler::SendSetting(char marker, float val)
{
    union{
        float val;
        char bytes[4];
    }byteArray;

    QByteArray message;
    message.append(marker);

    byteArray.val = val;
    message.append(byteArray.bytes[0]);
    message.append(byteArray.bytes[1]);
    message.append(byteArray.bytes[2]);
    message.append(byteArray.bytes[3]);

    SendMessage(message);
}

void BCPSerialHandler::SendMessage(QByteArray message)
{
    messageQueue.append(PackageMessage(message));

    if(sendingMessage == false)
    {
        StartWritingMessages();
    }
}

QByteArray BCPSerialHandler::PackageMessage(QByteArray message)
{
    unsigned int checksum = 0;
    QByteArray toReturn;

    toReturn.append(static_cast<char>(0xFF));
    toReturn.append(static_cast<char>(0xFF));
    toReturn.append(static_cast<char>(message.count() + 1));
    toReturn.append(message);

    for(int i = 0; i < toReturn.count(); i++)
    {
        checksum += static_cast<unsigned int>(toReturn.at(i));
    }
    checksum /= static_cast<unsigned int>(toReturn.count());
    toReturn.append(static_cast<char>(checksum));

    return toReturn;
}

void BCPSerialHandler::StartWritingMessages()
{
    if(messageQueue.count() > 0 && sendingMessage == false)
    {
        sendingMessage = true;

        QByteArray message = messageQueue.dequeue();

        if(serialPort.write(message) == message.length())
        {
            ackList.append(message);
            //Handles triggering function that checks if an ack was received for the message
            QTimer::singleShot(1000, this, SLOT(OnAckTimeout(message)));
            //Handles triggering the function that writes the next message if one is pressent
            QTimer::singleShot(500, this, SLOT(OnMessageTimerTimeout()));
        }
        else
        {
            qDebug() << "BCP serial port failed to send message: " << message;
        }
    }
}

void BCPSerialHandler::OnMessageTimerTimeout()
{
    if(messageQueue.count() > 0)
    {
        QByteArray message = messageQueue.dequeue();

        if(serialPort.write(message) == message.length())
        {
            ackList.append(message);
            //Handles triggering function that checks if an ack was received for the message
            QTimer::singleShot(1000, this, SLOT(OnAckTimeout(message)));
            //Handles triggering the function that writes the next message if one is pressent
            QTimer::singleShot(500, this, SLOT(OnMessageTimerTimeout()));
        }
        else
        {
            qDebug() << "BCP serial port failed to send message: " << message;
        }
    }
    else
    {
        if(syncStatus == Syncing)
        {
            syncStatus = Synced;
            qDebug() << "Finished syncing";
        }
        sendingMessage = false;
    }
}

//If the message is still in the acks list, an ack was not received so requeue the message
void BCPSerialHandler::OnAckTimeout(QByteArray message)
{
    if(ackList.contains(message) == true)
    {
        qDebug() << "BCP serialport failed to received ack for " << message;
        ackList.removeOne(message);
        messageQueue.append(message);
        StartWritingMessages();
    }
}

void BCPSerialHandler::StartSync()
{
    syncStatus = Syncing;

    SettingsHandler * settings = SettingsHandler::GetInstance();

    SendSetting(ZERO_PERIOD_MARKER_BCP, settings->GetZeroPeriod_bcp());
    SendSetting(ZERO_FREQUENCY_MARKER_BCP, settings->GetZeroFrequency_bcp());
    SendSetting(AD_SHORT_MARKER_BCP, settings->GetAdShort_bcp());
    SendSetting(AD_LONG_MARKER_BCP, settings->GetAdLong_bcp());
    SendSetting(AD_DIFF_MARKER_BCP, settings->GetAdDiff_bcp());
    SendSetting(AD_PER_MARKER_BCP, settings->GetAdPer_bcp());
    SendSetting(ANALOG_405_MARKER_BCP, settings->GetAnalog405_bcp());
    SendSetting(ANALOG_880_MARKER_BCP, settings->GetAnalog880_bcp());
    SendSetting(PM_MASS_EXT_MARKER_BCP, settings->GetMassExt405_bcp());
    SendSetting(PM_SLOPE_MARKER_BCP, settings->GetPMSlope_bcp());
    SendSetting(PM_ZERO_MARKER_BCP, settings->GetPMZero_bcp());
    SendSetting(BC_MASS_EXT_MARKER_BCP, settings->GetMassExt880_bcp());
    SendSetting(BC_SLOPE_MARKER_BCP, settings->GetBCSlope_bcp());
    SendSetting(BC_ZERO_MARKER_BCP, settings->GetBCZero_bcp());
    SendSetting(FLOW_SLOPE_MARKER_BCP, settings->GetFlowSlope_bcp());
    SendSetting(FLOW_ZERO_MARKER_BCP, settings->GetFlowZero_bcp());
}
