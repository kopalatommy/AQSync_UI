#ifndef AQSYNCSETTINGS_H
#define AQSYNCSETTINGS_H

#include <QDebug>
#include <QFile>

#define AVG_TIME_MARKER 'A'
#define MODE_MARKER 'B'
#define AD_SHORT_MARKER 'C'
#define AD_LONG_MARKER 'D'
#define AD_DIFF_MARKER 'E'
#define AD_PER_MARKER 'F'
#define NO_SLOPE_MARKER 'G'
#define NO_ZERO_MARKER 'H'
#define NO2_SLOPE_MARKER 'I'
#define NO2_ZERO_MARKER 'J'
#define OZONE_FLOW_SLOPE_MARKER 'K'
#define CELL_FLOW_SLOPE_MARKER 'L'
#define MASS_EXT_405_MARKER 'M'
#define PM_SLOPE_MARKER 'N'
#define PM_ZERO_MARKER 'O'
#define MASS_EXT_880_MARKER 'P'
#define BC_SLOPE_MARKER 'Q'
#define BC_ZERO_MARKER 'R'
#define FLOW_SLOPE_MARKER 'S'
#define FLOW_ZERO_MARKER 'T'
#define DATE_MARKER 'U'
#define TIME_MARKER 'V'

#define AVG_TIME_REGISTER 0
#define MODE_REGISTER 1
#define ADAPTIVE_SHORT_REGISTER 2
#define ADAPTIVE_LONG_REGISTER 3
#define ADAPTIVE_DIFF_REGISTER 4
#define ADAPTIVE_PER_REGISTER 5
#define NO_SLOPE_REGISTER 6
#define NO_ZERO_REGISTER 8
#define NO2_SLOPE_REGISTER 10
#define NO2_ZERO_REGISTER 12
#define OZONE_FLOW_SLOPE_REGISTER 14
#define CELL_FLOW_SLOPE_REGISTER 16
#define MASS_EXT_405_REGISTER 18
#define PM_SLOPE_REGISTER 20
#define PM_ZERO_REGISTER 22
#define MASS_EXT_880_REGISTER 24
#define BC_SLOPE_REGISTER 26
#define BC_ZERO_REGISTER 28
#define FLOW_SLOPE_REGISTER 30
#define FLOW_ZERO_REGISTER 32

#define BUILD_NUMBER 1

class AQSyncSettings
{
public:
    static AQSyncSettings * GetInstance();

    unsigned char GetAvgTime();
    void SetAvgTime(unsigned char val);

    unsigned char GetMode();
    void SetMode(unsigned char val);

    unsigned char GetAdShort();
    void SetAdShort(unsigned char val);

    unsigned char GetAdLong();
    void SetAdLong(unsigned char val);

    unsigned char GetAdDiff();
    void SetAdDiff(unsigned char val);

    unsigned char GetAdPer();
    void SetAdPer(unsigned char val);

    char * GetDate();
    void SetFormattedDate(char * val);
    void SetDate(char val[6]);

    char * GetTime();
    void SetFormattedTime(char * val);
    void SetTime(char val[6]);

    float GetNOSlope();
    void SetNOSlope(float val);

    float GetNOZero();
    void SetNOZero(float val);

    float GetNO2Slope();
    void SetNO2Slope(float val);

    float GetNO2Zero();
    void SetNO2Zero(float val);

    float GetOzoneFlowSlope();
    void SetOzoneFlowSlope(float val);

    float GetCellFlowSlope();
    void SetCellFlowSlope(float val);

    float GetMassExt405();
    void SetMassExt405(float val);

    float GetPMSlope();
    void SetPMSlope(float val);

    float GetPMZero();
    void SetPMZero(float val);

    float GetMassExt880();
    void SetMassExt880(float val);

    float GetBCSlope();
    void SetBCSlope(float val);

    float GetBCZero();
    void SetBCZero(float val);

    float GetFlowSlope();
    void SetFlowSlope(float val);

    float GetFlowZero();
    void SetFlowZero(float val);

    int GetBuildNumber();

private:
    static AQSyncSettings * instance;
    AQSyncSettings();

    unsigned char avgTime = 0;
    unsigned char mode = 0;
    unsigned char adShort = 0;
    unsigned char adLong = 0;
    unsigned char adDiff = 0;
    unsigned char adPer = 0;

    //DDMMYY
    char date[7] = {0, 3, 0, 1, 2, 0, 0};
    //HHMMSS
    char time[7] = {1, 0, 1, 0, 1, 0, 0};

    float noSlope = 0;
    float noZero = 0;

    float no2Slope = 0;
    float no2Zero = 0;

    float ozoneFlowSlope = 0;
    float cellFlowSlope = 0;

    float massExt405 = 0;
    float pmSlope = 0;
    float pmZero = 0;

    float massExt880 = 0;
    float bcSlope = 0;
    float bcZero = 0;

    float flowSlope = 0;
    float flowZero = 0;

    void ReadSettings();
    void WriteSettings();
};

#endif // AQSYNCSETTINGS_H
