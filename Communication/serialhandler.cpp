#include "serialhandler.h"

SerialHandler::SerialHandler(){
    /*qDebug() << "Number of serial ports:" << QSerialPortInfo::availablePorts().count();
    for(int i = 0; i < QSerialPortInfo::availablePorts().count(); i++){
        qDebug() << QSerialPortInfo::availablePorts()[i].portName();
    }*/

    InitializeSerialPorts();
}

void SerialHandler::InitializeSerialPorts(){
    if(QSerialPortInfo::availablePorts().count() < 2){
        qDebug() << "Not enough available ports: " << QSerialPortInfo::availablePorts().count();
        return;
    }

    serialPortA.setPortName(QSerialPortInfo::availablePorts()[0].portName());
    serialPortA.setBaudRate(19200);
    serialPortB.setPortName(QSerialPortInfo::availablePorts()[1].portName());
    serialPortB.setBaudRate(19200);

    if(serialPortA.open(QIODevice::ReadWrite) && serialPortB.open(QIODevice::ReadWrite)){
        connect(&serialPortA, &QSerialPort::readyRead, this, &SerialHandler::ReadSerialA);
        connect(&serialPortB, &QSerialPort::readyRead, this, &SerialHandler::ReadSerialB);
        qDebug() << "Opened serial ports";
        qDebug() << "SerialPort A: port: " << serialPortA.portName() << ", baud rate: " << serialPortA.baudRate();
        qDebug() << "SerialPort B: port: " << serialPortB.portName() << ", baud rate: " << serialPortB.baudRate();
    }else{
        qDebug() << "Failed to open serial ports";
        qDebug() << "A is open: " << serialPortA.isOpen() << " " << serialPortA.errorString();
        qDebug() << "B is open: " << serialPortB.isOpen() << " " << serialPortB.errorString();
    }
}

void SerialHandler::ReadSerialA(){
    int len = 0;
    static QList<unsigned char> receivedBytes;

    while((len = static_cast<int>(serialPortA.bytesAvailable())) > 0){
        unsigned char temp = static_cast<unsigned char>(serialPortA.read(1).at(0));
        receivedBytes.append(temp);

        if(receivedBytes.count() < 2 && temp != 0xFF){
            receivedBytes.clear();
            qDebug() << "Received bad start from pic";
            continue;
        }

        if(receivedBytes.count() > 2){
            unsigned int pLen = static_cast<unsigned int>(receivedBytes[2]) & 0xFF;

            if(pLen == 255) receivedBytes.removeFirst();

            if(static_cast<unsigned int>(receivedBytes.count()) == (3 + pLen)){
                unsigned int checksum = 0;
                for(int i = 0; i < receivedBytes.count() - 1; i++) checksum += static_cast<unsigned int>(receivedBytes.at(i)) & 0xFF;
                checksum /= static_cast<unsigned int>(receivedBytes.count() - 1);
                unsigned int t = static_cast<unsigned int>(temp) & 0xFF;
                if(checksum != t){
                    qDebug() << "Received bad checksum: " << checksum << " != " << temp;
                    continue;
                }
                receivedBytes.removeFirst();
                receivedBytes.removeFirst();
                receivedBytes.removeFirst();

                /*emit ParseData(QList<unsigned char>() << receivedBytes);
                receivedBytes.clear();*/
                if(!syncingA) emit ParseA(QList<unsigned char>() << receivedBytes);
                //else SyncV2(ListToArray(receivedBytes));
                receivedBytes.clear();
            }
        }
    }
}

void SerialHandler::ReadSerialB(){
    int len = 0;
    static QList<unsigned char> receivedBytes;

    while((len = static_cast<int>(serialPortA.bytesAvailable())) > 0){
        unsigned char temp = static_cast<unsigned char>(serialPortB.read(1).at(0));
        receivedBytes.append(temp);

        if(receivedBytes.count() < 2 && temp != 0xFF){
            receivedBytes.clear();
            qDebug() << "Received bad start from pic";
            continue;
        }

        if(receivedBytes.count() > 2){
            unsigned int pLen = static_cast<unsigned int>(receivedBytes[2]) & 0xFF;

            if(pLen == 255) receivedBytes.removeFirst();

            if(static_cast<unsigned int>(receivedBytes.count()) == (3 + pLen)){
                unsigned int checksum = 0;
                for(int i = 0; i < receivedBytes.count() - 1; i++) checksum += static_cast<unsigned int>(receivedBytes.at(i)) & 0xFF;
                checksum /= static_cast<unsigned int>(receivedBytes.count() - 1);
                unsigned int t = static_cast<unsigned int>(temp) & 0xFF;
                if(checksum != t){
                    qDebug() << "Received bad checksum: " << checksum << " != " << temp;
                    continue;
                }
                receivedBytes.removeFirst();
                receivedBytes.removeFirst();
                receivedBytes.removeFirst();

                /*emit ParseData(QList<unsigned char>() << receivedBytes);
                receivedBytes.clear();*/
                if(!syncingB) emit ParseB(QList<unsigned char>() << receivedBytes);
                //else SyncV2(ListToArray(receivedBytes));
                receivedBytes.clear();
            }
        }
    }
}
