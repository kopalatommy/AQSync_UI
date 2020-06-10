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
#include "Helpers/utilities.h"
#include "syncstatus.h"

#define PORT_NAME "ttyUSB0"
#define BAUD_RATE 19200

class BCPSerialHandler : public QObject
{
public:
<<<<<<< HEAD

=======
    static BCPSerialHandler * GetInstance();

    void SendMessage(QByteArray message);

    void SendSetting(char marker, unsigned char val);
    void SendSetting(char marker, int val);
    void SendSetting(char marker, float val);

signals:
    void ParsedDataLine();

private slots:
    void OnMessageTimerTimeout();
    void OnAckTimeout(QByteArray message);

    void ReadyRead();
>>>>>>> a2a00dc81fe12de8ca7991ccd7b781237858feda

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
    void StartWritingMessages();
    void ParseData(QByteArray data);
    void ParseLog(QByteArray data);

    void StartSync();
};

#endif // BCPSERIALHANDLER_H
