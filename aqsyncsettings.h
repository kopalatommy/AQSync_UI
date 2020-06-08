#ifndef AQSYNCSETTINGS_H
#define AQSYNCSETTINGS_H

#include <QDebug>
#include <QFile>

//BCP Settings
//Serial
#define BCP_ZERO_PERIOD_MARKER 'A'
#define BCP_ZERO_FREQUENCY_MARKER 'B'
#define BCP_DATE_MARKER 'C'
#define BCP_TIME_MARKER 'D'
#define BCP_ADAPTIVE_SHORT_MARKER 'E'
#define BCP_ADAPTIVE_LONG_MARKER 'F'
#define BCP_ADAPTIVE_DIFFERENCT_MARKER 'G'
#define BCP_ADAPTIVE_PERCENT_MARKER 'H'
#define BCP_BIT_MASK_MARKER 'I'
#define BCP_ANALOG_405_MARKER 'K'
#define BCP_ANALOG_880_MARKER 'L'
#define BCP_PM_MASS_EXT_MARKER 'M'
#define BCP_PM_SLOPE_MARKER 'N'
#define BCP_PM_ZERO_MARKER 'O'
#define BCP_BC_MASS_EXT_MARKER 'P'
#define BCP_SLOPE_MARKER 'Q'
#define BCP_ZERO_MARKER 'R'
#define BCP_FLOW_SLOPE_MARKER 'S'
#define BCP_FLOW_ZERO_MARKER 'T'
#define BCP_FLOW_COFF_MARKER 'U'
//Modbus
    //Char
#define BCP_ZERO_PERIOD_REGISTER 0
    //short
#define BCP_ZERO_FREQUENCY_REGISTER 1
    //char[6]
#define BCP_DATE_REGISTER 2
    //char[6]
#define BCP_TIME_REGISTER 8
    //char
#define BCP_ADAPTIVE_SHORT_REGISTER 14
    //char
#define BCP_ADAPTIVE_LONG_REGISTER 15
    //char
#define BCP_ADAPTIVE_DIFFERENCT_REGISTER 16
    //char
#define BCP_ADAPTIVE_PERCENT_REGISTER 17
    //char
#define BCP_BIT_MASK_REGISTER 18
    //short
#define BCP_ANALOG_405_REGISTER 19
    //short
#define BCP_ANALOG_880_REGISTER 20
    //float
#define BCP_PM_MASS_EXT_REGISTER 21
    //float
#define BCP_PM_SLOPE_REGISTER 23
    //float
#define BCP_PM_ZERO_REGISTER 24
    //float
#define BCP_BC_MASS_EXT_REGISTER 26
    //float
#define BCP_SLOPE_REISTER 28
    //float
#define BCP_ZERO_REGISTER 30
    //float
#define BCP_FLOW_SLOPE_REGISTER 32
    //float
#define BCP_FLOW_ZERO_REISER 34
    //float
#define BCP_FLOW_COFF_REGISTER 36

//405
#define AVG_TIME_405_MARKER 'A'
#define BIT_MASK_405_MARKER 'B'
#define ADAPTIVE_SHORT_405_405_MARKER 'C'
#define ADAPTIVE_LONG_405_MARKER 'D'
#define ADAPTIVE_DIFFERENCE_405_MARKER 'E'
#define ADAPTIVE_PERCENT_405_MARKER 'F'
#define NO_SLOPE_405_MARKER 'G'
#define NO_ZERO_405_MARKER 'H'
#define NO_ANALOG_405_MARKER 'I'
#define NO2_SLOPE_405_MARKER 'J'
#define NO2_ZERO_405_MARKER 'K'
#define NO2_ANALOG_405_MARKER 'L'
#define OZONE_FLOW_SLOPE_405_MARKER 'M'
#define CELL_FLOW_SLOPE_405_MARKER 'N'
#define MODE_405_MARKER 'O'
#define DATE_405_MARKER 'P'
#define TIME_405_MARKER 'Q'
//Modbus
    //char
#define AVG_TIME_405_REGISTER 38
    //char
#define BIT_MASK_405_REGISTER 39
    //char
#define ADAPTIVE_SHORT_405_REGISTER 40
    //char
#define ADAPTIVE_LONG_405_REGISTER 41
    //char
#define ADAPTIVE_DIFFERENCE_405_REGISTER 42
    //char
#define ADAPTIVE_PERCENT_405_REGISTER 43
    //float
#define NO_SLOPE_405_REGISTER 44
    //float
#define NO_ZERO_405_REGISTER 46
    //short
#define NO_ANALOG_405_REGISTER 48
    //short
#define NO2_SLOPE_405_REGISTER 49
    //float
#define NO2_ZERO_405_REGISTER 51
    //float
#define NO2_ANALOG_405_REGISTER 53
    //float
#define OZONE_FLOW_SLOPE_405_REGISTER 55
    //float
#define CELL_FLOW_SLOPE_405_REGISTER 57
    //char
#define MODE_405_REGISTER 58
    //char[6]
#define DATE_405_REGISTER 59
    //char
#define TIME_405_REGISTER 65

//PAM

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
