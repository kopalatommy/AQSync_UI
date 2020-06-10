#ifndef DATAHANDLER405_H
#define DATAHANDLER405_H

#include <QObject>

class DataHandler405 : public QObject
{
    Q_OBJECT
public:
    static DataHandler405 * GetInstance();

    long GetLogNumber();
    void SetLogNumber(long val);

    float GetNO();
    void SetNO(float val);

    float GetNOX();
    void SetNOX(float val);

    float GetNO2();
    void SetNO2(float val);

    float GetCellTemp();
    void SetCellTemp(float val);

    float GetCellPress();
    void SetCellPress(float val);

    float GetCellFlow();
    void SetCellFlow(float val);

    float GetPDV1();
    void SetPDV1(float val);

    float GetPDV2();
    void SetPDV2(float val);

    float GetScrubberTemp();
    void SetScrubberTemp(float val);

    float GetOzoneFlow();
    void SetOzoneFlow(float val);

    int GetErrorByte();
    void SetErrorByte(int val);

    char * GetDate();
    void SetDate(char * arr);

    char * GetTime();
    void SetTime(char * arr);

private:
    static DataHandler405 * instance;
    DataHandler405();

    long logNumber = 0;
    float no = 0;
    float nox = 0;
    float no2 = 0;
    float cellTemp = 0;
    float cellPress = 0;
    float cellFlow = 0;
    float pdv1 = 0;
    float pdv2 = 0;
    float ozoneFlow = 0;
    float scrubberTemp = 0;
    int errorByte = 0;
    char date[7] = {0, };
    char time[7] = {0, };
};

#endif // DATAHANDLER405_H
