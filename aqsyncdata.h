#ifndef AQSYNCDATA_H
#define AQSYNCDATA_H

#include <QObject>
#include <QDebug>
#include <QDateTime>
#include <QFile>
#include <QDir>

//BCP
#define BCP_LOG_NUMBER_REGISTER 100
#define BCP_NO_DATA_REGISTER 102
#define BCP_NO2_DATA_REGISTER 104
#define BCP_NOX_DATA_REGISTER 106
#define BCP_CELL_TEMP_REGISTER 108
#define BCP_CELL_PRESS_REGISTER 110
#define BCP_CELL_FLOW_REGISTER 112
#define BCP_PDV1_REGISTER 114
#define BCP_PDV2_REGISTER 116

//405


//PAM











#define LOG_NUMBER_REGISTER 34
#define BC_REGISTER 36
#define PM_REGISTER 38
#define DATA_MASS_EXT_405 40
#define DATA_MASS_EXT_880 42
#define NO_REGISTER 44
#define NOX_REGISTER 46
#define NO2_REGISTER 48
#define CELL_TEMP_REGISTER 50
#define CELL_PRESS_REGISTER 52
#define CELL_FLOW_REGISTER 54
#define OZONE_FLOW_REGISTER 56
#define PDV1_REGISTER 58
#define PDV2_REGISTER 60
#define SCRUBBER_TEMP_REGISTER 62
#define ERROR_BYTE_REGISTER 64
#define DATA_DATE_REGISTER 65
#define DATA_TIME_REGISTER 71
#define DATA_MODE_REGISTER 77

class AQSyncData : public QObject
{
    Q_OBJECT

public:
    static AQSyncData * GetInstance();

    QString GetSaveFilePath();
    //Only want to create a new save name once date and time has been set
    QString GetSaveFileString();
    QString GetAltSaveFileString();
    void SaveString();
    void SaveString(QString line);

    long GetLogNumber();
    void SetLogNumber(long val);

    float GetBlackCarbon();
    void SetBlackCarbon(float val);

    float GetPM();
    void SetPM(float val);

    float GetMassExt880();
    void SetMassExt880(float val);

    float GetMassExt405();
    void SetMassExt405(float val);

    float GetNO();
    void SetNO(float val);

    float GetNOx();
    void SetNOx(float val);

    float GetNO2();
    void SetNO2(float val);

    float GetCellTemp();
    void SetCellTemp(float val);

    float GetCellPress();
    void SetCellPress(float val);

    float GetCellFlow();
    void SetCellFlow(float val);

    float GetOzoneFlow();
    void SetOzoneFlow(float val);

    float GetPDV1();
    void SetPDV1(float val);

    float GetPDV2();
    void SetPDV2(float val);

    float GetScrubberTemp();
    void SetScrubberTemp(float val);

    int GetErrorByte();
    void SetErrorByte(int val);

    int GetMode();
    void SetMode(int val);

    char * GetDate();
    char * GetTime();

    void GenerateSingleName();
    void RecoverPreviousName();
    void SetCreateNewFileEveryDay(bool val);

public slots:
    void OnFinishedReadingLine(QString dataLine);

signals:
    void FinshedReadingLine();

private:
    static AQSyncData * instance;
    AQSyncData();

    QString saveFilePath = "/home/2b/2BTouchData/";
    QString saveFileName = "DataFile.csv";
    QString singleFileName = "DataFile.csv";
    bool createNewFileEveryDay = false;
    char lastDate[11] = {0, };

    long logNumber = 0;
    float blackCarbon = 0;
    float pm = 0;
    float massExt880 = 0;
    float massExt405 = 0;
    float NO = 0;
    float NOx = 0;
    float NO2 = 0;
    float cellTemp = 0;
    float cellPress = 0;
    float cellFlow = 0;
    float ozoneFlow = 0;
    float pdv1 = 0;
    float pdv2 = 0;
    float scrubberTemp = 0;
    int errorByte = 0;
    char date[11] = {'0', '3', '/', '0', '1', '/', '2', '0', '2', '2', 0};
    char time[9] = {'1', '0', ':', '1', '0', ':', '1', '0', 0};
    int mode = 0;

    QString GenerateSaveFileName(bool createDaily);
};

#endif // AQSYNCDATA_H
