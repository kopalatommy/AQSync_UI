#ifndef SERIALPARSEDATA_H
#define SERIALPARSEDATA_H

#include <QObject>
#include <QDebug>

#include "aqsyncdata.h"
#include "aqsyncdata.h"
#include "aqsyncsettings.h"
#include "utilities.h"

#define RESET_SYNC_CHAR '?'
#define HANDLE_LOG_CHAR '!'
#define SYNC_CHAR '1'

class SerialParseData : public QObject
{
    Q_OBJECT
public:
    SerialParseData(bool * date, bool * time, bool * _synced, bool * _syncing);

public slots:
    void ParseData(const QList<unsigned char> lst);

signals:
    void PackageMessage(QByteArray);

    void StartSyncing();
    void FinishedSyncing();

    void UpdateCharRegister(int startAddress, short val);
    void UpdateFloatRegister(int startAddress, short v1, short v2);
    void UpdateDateTimeRegisters(int startAddress, char * arr);

    void HandledLog();
    void SaveLine(QString);

    void SetNewDate();
    void SetNewTime();

private:
    bool * rDate = nullptr;
    bool * rTime = nullptr;
    bool * synced = nullptr;
    bool * syncing = nullptr;
    bool sentStart = false;

    void ParseLogBytes(QList<unsigned char> lst);

    void HandleStart();
};

#endif // SERIALPARSEDATA_H
