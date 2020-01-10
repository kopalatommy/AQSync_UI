#ifndef COMMUNICATIONHANDLER_H
#define COMMUNICATIONHANDLER_H

#include <QObject>
#include <QDebug>

#include "serialhandler.h"
#include "Modbus/modbushandler.h"

class CommunicationHandler : public QObject
{
    Q_OBJECT
public:
    static CommunicationHandler * GetInstance();

    void NewCharSetting(char value, char marker, int address);
    void NewFloatSetting(float value, char marker, int address);

private:
    CommunicationHandler();
    static CommunicationHandler * instance;

    SerialHandler serial;
    //ModbusHandler modbus;
};

#endif // COMMUNICATIONHANDLER_H
