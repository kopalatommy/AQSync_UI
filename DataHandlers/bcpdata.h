#ifndef BCPDATA_H
#define BCPDATA_H

#include <QObject>
#include <QFile>

class BCPData : public QObject
{
public:
    static BCPData * GetInstance();

    long GetLogNumber();
    void SetLogNumber(long val);

    float GetMassExt405();
    void SetMassExt405(float val);

    float GetMassExt880();
    void SetMassExt880(float val);

    float GetBC();
    void SetBC(float val);

    float GetPM();
    void SetPM(float val);

    float GetMEC405();
    void SetMEC405(float val);

    float GetMEC880();
    void SetMEC880(float val);

    float GetCellTemp();
    void SetCellTemp(float val);

    float GetCellPress();
    void SetCellPress(float val);

    float GetCellFlow();
    void SetCellFlow(float val);

    float GetTemp2();
    void SetTemp2(float val);

    float GetPDV1();
    void SetPDV1(float val);

    float GetPDV2();
    void SetPDV2(float val);

    float GetHumidity();
    void SetHumidity(float val);

    float GetSystemTemp();
    void SetSystemTemp(float val);

    int GetStatus();
    void SetStatus(int val);

    float GetAutoBCZero();
    void SetAutoBCZero(float val);

    float GetAutoPMZero();
    void SetAutoPMZero(float val);

    char * GetFormattedDate();
    void SetFormattedDate(char * arr);

    char * GetFormattedTime();
    void SetFormattedTime(char * arr);

private:
    static BCPData * instance;
    BCPData();

    long logNumber = 0;
    float ext405 = 0;
    float ext880 = 0;
    float bc = 0;
    float pm = 0;
    float mec405 = 0;
    float mec880 = 0;
    float cellTemp = 0;
    float cellPress = 0;
    float cellFlow = 0;
    float temp2 = 0;
    float pdv1 = 0;
    float pdv2 = 0;
    float humidity = 0;
    float systTemp = 0;
    int status = 0;
    float autoBCZero = 0;
    float autoPMZero = 0;
    char formatedDate[9] = { 'D', 'D', '-', 'M', 'M', '-', 'Y', 'Y', 0 };
    char formatedTime[9] = { 'H', 'H', '-', 'M', 'M', '-', 'S', 'S', 0 };
};

#endif // BCPDATA_H
