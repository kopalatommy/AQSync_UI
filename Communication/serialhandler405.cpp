#include "serialhandler405.h"

SerialHandler405::SerialHandler405()
{
    SetUpSerialPort();
}

SerialHandler405 * SerialHandler405::instance = nullptr;
SerialHandler405 * SerialHandler405::GetInstance()
{
    if(instance == nullptr)
    {
        instance = new SerialHandler405();
    }
    return instance;
}

void SerialHandler405::SetUpSerialPort()
{
    serialPort.setPortName(PORT_NAME);
    serialPort.setBaudRate(BAUD_RATE);

    if(serialPort.open(QIODevice::ReadWrite))
    {
        qDebug() << "Opened 405 serial port";

        connect(&serialPort, &QSerialPort::readyRead, this, &SerialHandler405::ReadyRead);
    }
    else
    {
        qDebug() << "Failed to open 405 serialport: " << serialPort.errorString();
    }
}

void SerialHandler405::ReadyRead()
{
    while (serialPort.bytesAvailable() > 0)
    {
        unsigned char temp = static_cast<unsigned char>(serialPort.read(1).at(0));
        received.append(static_cast<char>(temp));

        //Check for bad start
        if(received.count() <= 2 && temp != 0xFF)
        {
            qDebug() << "405 serial port received bad start";
            received.clear();
        }
        else
        {
            //Get the package length
            unsigned int pLen = static_cast<unsigned int>(received[2]);

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
                if(checksum != static_cast<unsigned int>(received.at(received.count() - 1)) / 2)
                {
                    qDebug() << "405 serial handler received message with bad checksum: L: "
                             << QString::number(checksum) << " S: " << QString::number(static_cast<unsigned char>(received.at(received.count() - 1) / 2));
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
    /*int len = 0;

    while((len = static_cast<int>(serialPort.bytesAvailable())) > 0){
        unsigned char temp = static_cast<unsigned char>(serialPort.read(1).at(0));
        received.append(temp);

        if(received.count() < 2 && temp != 0xFF){
            received.clear();
            qDebug() << "Received bad start from pic";
            continue;
        }

        if(received.count() > 2){
            unsigned int pLen = static_cast<unsigned int>(received[2]) & 0xFF;

            if(pLen == 255) received.remove(0, 1);

            if(static_cast<unsigned int>(received.count()) == (3 + pLen)){
                unsigned int checksum = 0;
                for(int i = 0; i < received.count() - 1; i++)
                {
                    checksum += static_cast<unsigned int>(received.at(i)) & 0xFF;
                }
                checksum /= static_cast<unsigned int>(received.count() - 1);
                unsigned int t = static_cast<unsigned int>(temp) & 0xFF;
                if(checksum != t){
                    qDebug() << "Received bad checksum: " << checksum << " != " << temp;
                    qDebug() << "Message: " << received;
                    continue;
                }
                received.remove(0, 3);

                //emit ParseData(QList<unsigned char>() << received);
                received.clear();
            }
        }
    }*/
}

//Review,
void SerialHandler405::ParseData(QByteArray data)
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
        qDebug() << "405 received debug message: " << data;
        break;

    case AVG_TIME_MARKER_405:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetAvgTime(tempChar);
        break;

    case AD_SHORT_MARKER_405:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetAdShort_405(tempChar);
        break;

    case AD_LONG_MARKER_405:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetAdLong_405(tempChar);
        break;

    case AD_DIFF_MARKER_405:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetAdDiff_405(tempChar);
        break;

    case AD_PER_MARKER_405:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetAdPercent_405(tempChar);
        break;

    case BIT_MASK_MARKER_405:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetBitMask_405(tempChar);
        break;

    case NO_ANALOG_MARKER_405:
        intArray.bytes[0] = data.at(1);
        intArray.bytes[1] = data.at(2);
        Utilities::ConvertIntTo(intArray.val);
        settings->SetAnalogNO_405(intArray.val);
        break;

    case NO2_ANALOG_MARKER_405:
        intArray.bytes[0] = data.at(1);
        intArray.bytes[1] = data.at(2);
        Utilities::ConvertIntTo(intArray.val);
        settings->SetAnalogNO2_405(intArray.val);
        break;

    case NO_SLOPE_MARKER_405:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetNOSlope_405(floatArray.val);
        break;

    case NO_ZERO_MARKER_405:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetNOZero_405(floatArray.val);
        break;

    case NO2_SLOPE_MARKER_405:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetNO2Slope_405(floatArray.val);
        break;

    case NO2_ZERO_MARKER_405:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetNO2Zero_405(floatArray.val);
        break;

    case OZONE_FLOW_SLOPE_MARKER_405:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetOzoneFlowSlope_405(floatArray.val);
        break;

    case CELL_FLOW_SLOPE_MARKER_405:
        floatArray.bytes[0] = data.at(1);
        floatArray.bytes[1] = data.at(2);
        floatArray.bytes[2] = data.at(3);
        floatArray.bytes[3] = data.at(4);
        settings->SetCellFlowSlope_405(floatArray.val);
        break;

    case MODE_MARKER_405:
        tempChar = static_cast<unsigned char>(data.at(1));
        Utilities::ConvertCharBack(tempChar);
        settings->SetMode_405(tempChar);
        break;

    case DATE_MARKER_405:
        //Received as YYMMDD, need DDMMYY
        tempDT[0] = data.at(5);
        tempDT[1] = data.at(6);
        tempDT[2] = data.at(3);
        tempDT[3] = data.at(4);
        tempDT[4] = data.at(1);
        tempDT[5] = data.at(2);

        settings->SetDate(tempDT);

        receivedDate = true;
        if(syncStatus == NotSynced && receivedDate == true && receivedTime == true)
        {
            StartSync();
        }
        break;

    case TIME_MARKER_405:
        //Received as YYMMDD, need DDMMYY
        tempDT[0] = data.at(1);
        tempDT[1] = data.at(2);
        tempDT[2] = data.at(3);
        tempDT[3] = data.at(4);
        tempDT[4] = data.at(5);
        tempDT[5] = data.at(6);

        settings->SetTime(tempDT);

        receivedTime = true;
        if(syncStatus == NotSynced && receivedDate == true && receivedTime == true)
        {
            StartSync();
        }
        break;

    case '5':
        syncStatus = NotSynced;
        break;

    case '!':
        ParseLog(data.remove(0, 1));
        break;

    default:
        break;

    /*
     * #define AVG_TIME_MARKER_405 'A'
#define BIT_MASK_MARKER_405 'B'
#define AD_SHORT_MARKER_405 'C'
#define AD_LONG_MARKER_405 'D'
#define AD_DIFF_MARKER_405 'E'
#define AD_PER_MARKER_405 'F'
#define NO_SLOPE_MARKER_405 'G'
#define NO_ZERO_MARKER_405 'H'
#define NO_ANALOG_MARKER_405 'I'
#define NO2_SLOPE_MARKER_405 'J'
#define NO2_ZERO_MARKER_405 'K'
#define NO2_ANALOG_MARKER_405 'L'
#define OZONE_FLOW_SLOPE_MARKER_405 'M'
#define CELL_FLOW_SLOPE_MARKER_405 'N'
#define MODE_MARKER_405 'O'
#define DATE_MARKER_405 'P'
#define TIME_MARKER_405 'Q'
     */
    }
}

//Review, need to add handler for 405 error byte
//Review, check received date time against device date time
void SerialHandler405::ParseLog(QByteArray data)
{
    static long prevLogNum = 0;
    QString str;
    QString sqlInsert;
    char arr[25] = {0, };
    int len = 0;
    union{
        float f;
        long l;
        char bytes[4];
        int16_t registerValues[2];
    }byteArray;

    QString fileName;
    QFile file;

    DataHandler405 * dataHandler = DataHandler405::GetInstance();
    SettingsHandler * settings = SettingsHandler::GetInstance();

    //Log Number
    byteArray.bytes[0] = data[4];
    byteArray.bytes[1] = data[3];
    byteArray.bytes[2] = data[2];
    byteArray.bytes[3] = data[1];
    if(prevLogNum + 1 != byteArray.l && prevLogNum != byteArray.l)
    {
        //DataHandler::GetInstance()->SetErrorByte(MissedLog);
        //emit SetCoil(MissedLog, true);
        //emit OnDetectedCrash();
        qDebug() << "Detected crash";
    }
    prevLogNum = byteArray.l;
    dataHandler->SetLogNumber(byteArray.l);
    len = sprintf(arr, "%ld,", byteArray.l);
    arr[len] = 0;
    str.append(str);

    //NO2
    byteArray.bytes[0] = data[12];
    byteArray.bytes[1] = data[11];
    byteArray.bytes[2] = data[10];
    byteArray.bytes[3] = data[9];
    dataHandler->SetNO2(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);

    //NO
    byteArray.bytes[0] = data[8];
    byteArray.bytes[1] = data[7];
    byteArray.bytes[2] = data[6];
    byteArray.bytes[3] = data[5];
    dataHandler->SetNO(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);

    //NOx
    byteArray.bytes[0] = data[16];
    byteArray.bytes[1] = data[15];
    byteArray.bytes[2] = data[14];
    byteArray.bytes[3] = data[13];
    dataHandler->SetNOX(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);

    //Cell Temp
    byteArray.bytes[0] = data[20];
    byteArray.bytes[1] = data[19];
    byteArray.bytes[2] = data[18];
    byteArray.bytes[3] = data[17];
    dataHandler->SetCellTemp(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.l));
    arr[len] = 0;
    str.append(arr);

    //Cell Pressure
    byteArray.bytes[0] = data[24];
    byteArray.bytes[1] = data[23];
    byteArray.bytes[2] = data[22];
    byteArray.bytes[3] = data[21];
    dataHandler->SetCellPress(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);

    //Cell Flow
    byteArray.bytes[0] = data[28];
    byteArray.bytes[1] = data[27];
    byteArray.bytes[2] = data[26];
    byteArray.bytes[3] = data[25];
    dataHandler->SetCellFlow(byteArray.f);
    len = sprintf(arr, "%1.0f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);

    //Ozone flow
    byteArray.bytes[0] = data[32];
    byteArray.bytes[1] = data[31];
    byteArray.bytes[2] = data[30];
    byteArray.bytes[3] = data[29];
    dataHandler->SetOzoneFlow(byteArray.f);
    len = sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);

    //PDV a
    byteArray.bytes[0] = data[36];
    byteArray.bytes[1] = data[35];
    byteArray.bytes[2] = data[34];
    byteArray.bytes[3] = data[33];
    dataHandler->SetPDV1(byteArray.f);
    len = sprintf(arr, "%1.6f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);

    //PDV b
    byteArray.bytes[0] = data[40];
    byteArray.bytes[1] = data[39];
    byteArray.bytes[2] = data[38];
    byteArray.bytes[3] = data[37];
    dataHandler->SetPDV2(byteArray.f);
    len = sprintf(arr, "%1.6f,", static_cast<double>(byteArray.f));
    arr[len] = 0;
    str.append(arr);

    //Scrubber temp
    byteArray.bytes[0] = data[44];
    byteArray.bytes[1] = data[43];
    byteArray.bytes[2] = data[42];
    byteArray.bytes[3] = data[41];
    dataHandler->SetScrubberTemp(byteArray.f);
    sprintf(arr, "%1.1f,", static_cast<double>(byteArray.f));
    str.append(arr);

    int errorByte = static_cast<int>(data[45]);
    str.append(QString::number(errorByte).append(','));

    char tempDT[9] = {0, };
    char tempD[7] = {0, };
    switch (settings->GetDateFormat())
    {
    //DD-MM-YY
    case 0:
        tempDT[0] = tempD[0] = data[46] + 0x30;
        tempDT[1] = tempD[1] = data[47] + 0x30;
        tempDT[2] = '/';
        tempDT[3] = tempD[2] = data[48] + 0x30;
        tempDT[4] = tempD[3] = data[49] + 0x30;
        tempDT[5] = '/';
        tempDT[6] = tempD[4] = data[50] + 0x30;
        tempDT[7] = tempD[5] = data[51] + 0x30;
        tempDT[8] = 0;
        break;

    //MM-DD-YY
    case 1:
        tempDT[3] = tempD[2] = data[48] + 0x30;
        tempDT[4] = tempD[3] = data[49] + 0x30;
        tempDT[5] = '/';
        tempDT[0] = tempD[0] = data[46] + 0x30;
        tempDT[1] = tempD[1] = data[47] + 0x30;
        tempDT[2] = '/';
        tempDT[6] = tempD[4] = data[50] + 0x30;
        tempDT[7] = tempD[5] = data[51] + 0x30;
        tempDT[8] = 0;
        break;

    //YY-MM-DD
    case 2:
        tempDT[6] = tempD[4] = data[50] + 0x30;
        tempDT[7] = tempD[5] = data[51] + 0x30;
        tempDT[2] = '/';
        tempDT[3] = tempD[2] = data[48] + 0x30;
        tempDT[4] = tempD[3] = data[49] + 0x30;
        tempDT[5] = '/';
        tempDT[0] = tempD[0] = data[46] + 0x30;
        tempDT[1] = tempD[1] = data[47] + 0x30;
        tempDT[8] = 0;
        break;
    default:
        qDebug() << "Trying to parse date with a bad format: " << QString::number(settings->GetDateFormat());
    }
    str.append(tempDT).append(',');
    dataHandler->SetDate(tempD);

    //DD_MM_YY
    tempDT[0] = tempD[0] = data[46] + 0x30;
    tempDT[1] = tempD[1] = data[47] + 0x30;
    tempDT[2] = '_';
    tempDT[3] = tempD[2] = data[48] + 0x30;
    tempDT[4] = tempD[3] = data[49] + 0x30;
    tempDT[5] = '_';
    tempDT[6] = tempD[4] = data[50] + 0x30;
    tempDT[7] = tempD[5] = data[51] + 0x30;
    tempDT[8] = 0;
    fileName = QString(tempDT).append(".csv");

    //Time
    tempDT[0] = tempD[0] = data[52] + 0x30;
    tempDT[1] = tempD[1] = data[53] + 0x30;
    tempDT[2] = ':';
    tempDT[3] = tempD[2] = data[54] + 0x30;
    tempDT[4] = tempD[3] = data[55] + 0x30;
    tempDT[5] = ':';
    tempDT[6] = tempD[4] = data[56] + 0x30;
    tempDT[7] = tempD[5] = data[57] + 0x30;
    tempDT[8] = 0;
    str.append(tempDT).append(',');

    //Mode
    int mode = data[58];
    str.append(QString::number(mode));

    file.setFileName("/home/2b/DataFiles/" + fileName);

    if(file.open(QIODevice::Append))
    {
        str.append('\n');
        file.write(str.toLatin1());
    }
    else
    {
        qDebug() << "Failed to open data file for append: " << ("/home/2b/DataFiles/" + fileName) << " : " << file.errorString();
    }

    emit ParsedDataLine();
}


void SerialHandler405::SendSetting(char marker, unsigned char val)
{
    QByteArray message;
    message.append(marker);
    message.append(static_cast<char>(val));
    SendMessage(message);
}
void SerialHandler405::SendSetting(char marker, int val)
{
    union{
        int val;
        char bytes[2];
    }byteArray;
    byteArray.val = val;
    QByteArray message;

    message.append(marker);
    message.append(byteArray.bytes[0]);
    message.append(byteArray.bytes[1]);
    SendMessage(message);
}
void SerialHandler405::SendSetting(char marker, float val)
{
    union{
        float val;
        char bytes[4];
    }byteArray;
    byteArray.val = val;
    QByteArray message;

    message.append(marker);
    message.append(byteArray.bytes[0]);
    message.append(byteArray.bytes[1]);
    message.append(byteArray.bytes[2]);
    message.append(byteArray.bytes[3]);
    SendMessage(message);
}

void SerialHandler405::SendMessage(QByteArray message)
{
    messageQueue.append(PackageMessage(message));

    if(sendingMessage == false)
    {
        StartWritingMessages();
    }
}

QByteArray SerialHandler405::PackageMessage(QByteArray message)
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

void SerialHandler405::StartWritingMessages()
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
            qDebug() << "405 serial port failed to send message: " << message;
        }
    }
}

void SerialHandler405::OnMessageTimerTimeout()
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
            qDebug() << "405 serial port failed to send message: " << message;
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
void SerialHandler405::OnAckTimeout(QByteArray message)
{
    if(ackList.contains(message) == true)
    {
        qDebug() << "405 serialport failed to received ack for " << message;
        ackList.removeOne(message);
        messageQueue.append(message);
        StartWritingMessages();
    }
}

void SerialHandler405::StartSync()
{
    syncStatus = Syncing;

    qDebug() << "Starting sync";

    SettingsHandler * settings = SettingsHandler::GetInstance();

    SendMessage("@");
    SendSetting(AVG_TIME_MARKER_405, settings->GetAvgTime());
    SendSetting(BIT_MASK_MARKER_405, settings->GetBitMask_405());
    SendSetting(AD_SHORT_MARKER_405, settings->GetAdShort_405());
    SendSetting(AD_LONG_MARKER_405, settings->GetAdLong_405());
    SendSetting(AD_DIFF_MARKER_405, settings->GetAdDiff_405());
    SendSetting(AD_PER_MARKER_405, settings->GetAdPercent_405());
    SendSetting(NO_SLOPE_MARKER_405, settings->GetNOSlope_405());
    SendSetting(NO_ZERO_MARKER_405, settings->GetNOZero_405());
    SendSetting(NO_ANALOG_MARKER_405, settings->GetAnalogNO_405());
    SendSetting(NO2_SLOPE_MARKER_405, settings->GetNO2Slope_405());
    SendSetting(NO2_ZERO_MARKER_405, settings->GetNO2Zero_405());
    SendSetting(NO2_ANALOG_MARKER_405, settings->GetAnalogNO2_405());
    SendSetting(OZONE_FLOW_SLOPE_MARKER_405, settings->GetOzoneFlowSlope_405());
    SendSetting(CELL_FLOW_SLOPE_MARKER_405, settings->GetCellFlowSlope_405());
    SendSetting(MODE_MARKER_405, settings->GetMode_405());
}














