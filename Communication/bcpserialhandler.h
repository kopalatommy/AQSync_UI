#ifndef BCPSERIALHANDLER_H
#define BCPSERIALHANDLER_H

#include <QObject>
#include <QDebug>
#include <QSerialPort>
#include <QQueue>
#include <QTimer>
#include <QFile>

#include "DataHandlers/settingshandler.h"
#include "DataHandlers/bcpdata.h"
#include "utilities.h"
#include "syncstatus.h"

#define PORT_NAME_BCP "ttyUSB0"
#define BAUD_RATE_BCP 19200

class BCPSerialHandler : public QObject
{
    Q_OBJECT
public:
    static BCPSerialHandler * GetInstance();

    void SendMessage(QByteArray message);

    void SendSetting(char marker, unsigned char val);
    void SendSetting(char marker, int val);
    void SendSetting(char marker, float val);

signals:
    void ParsedDataLine();

    void NewAvgTime();
    void NewDateSetting();
    void NewTimeStting();

    void NewAdFilterSettingsBCP();
    void NewAutoZeroSettingBCP();
    void New880CalSettingsBCP();
    void New405CalSettingsBCP();
    void NewFlowCalSettingsBCP();
    void NewTPCorrSettingsBCP();

private slots:
    void OnMessageTimerTimeout();
    void OnAckTimeout(QByteArray message);

    void ReadyRead();

private:
    static BCPSerialHandler * instance;
    BCPSerialHandler();

    QSerialPort serialPort;
    QTimer messageTimer;
    bool sendingMessage = false;
    QQueue<QByteArray> messageQueue;
    QList<QByteArray> ackList;
    QByteArray received;

    SyncStatus syncStatus = NotSynced;
    bool receivedDate = false;
    bool receivedTime = false;

    QByteArray PackageMessage(QByteArray message);

    void SetUpSerialPort();
    void StartSync();
    void StartWritingMessages();
    void ParseData(QByteArray data);
    void ParseLog(QByteArray data);
};

#endif // BCPSERIALHANDLER_H
