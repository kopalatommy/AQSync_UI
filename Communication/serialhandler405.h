#ifndef SERIALHANDLER405_H
#define SERIALHANDLER405_H

#include <QObject>
#include <QDebug>
#include <QSerialPort>
#include <QQueue>
#include <QTimer>
#include <QFile>

#include "DataHandlers/settingshandler.h"
#include "DataHandlers/datahandler405.h"
#include "utilities.h"
#include "syncstatus.h"

//#define PORT_NAME "ttyUSB1"
#define PORT_NAME "COM5"
#define BAUD_RATE 19200

class SerialHandler405 : public QObject
{
    Q_OBJECT
public:
    static SerialHandler405 * GetInstance();

    void SendSetting(char marker, unsigned char val);
    void SendSetting(char marker, int val);
    void SendSetting(char marker, float val);

signals:
    void ParsedDataLine();

private slots:
    void OnMessageTimerTimeout();
    void OnAckTimeout(QByteArray message);

    void ReadyRead();

private:
    static SerialHandler405 * instance;
    SerialHandler405();

    QSerialPort serialPort;
    QTimer messageTimer;
    bool sendingMessage = false;
    QQueue<QByteArray> messageQueue;
    QList<QByteArray> ackList;
    QByteArray received;

    SyncStatus syncStatus = NotSynced;
    bool receivedDate = false;
    bool receivedTime = false;

    void SendMessage(QByteArray message);
    QByteArray PackageMessage(QByteArray message);

    void SetUpSerialPort();
    void StartWritingMessages();
    void ParseData(QByteArray data);
    void ParseLog(QByteArray data);
    void StartSync();
};

#endif // SERIALHANDLER405_H
