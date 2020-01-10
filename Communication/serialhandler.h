#ifndef SERIALHANDLER_H
#define SERIALHANDLER_H

#include <QtSerialPort>
#include <QDebug>

#include "aqsyncsettings.h"

class SerialHandler : public QObject
{
    Q_OBJECT

public:
    SerialHandler();

public slots:

signals:
    void ParseA(QList<unsigned char> lst);
    void ParseB(QList<unsigned char> lst);

private slots:
    void ReadSerialA();
    void ReadSerialB();

private:
    int statusCode = 0;

    bool syncingA = false;
    bool syncedA = false;
    bool syncingB = false;
    bool syncedB = false;

    QSerialPort serialPortA;
    QSerialPort serialPortB;
//19200
    void InitializeSerialPorts();

    QByteArray ListToArray(QList<unsigned char> lst);
};

#endif // SERIALHANDLER_H
