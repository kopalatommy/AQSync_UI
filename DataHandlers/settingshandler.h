#ifndef SETTINGSHANDLER_H
#define SETTINGSHANDLER_H

#include <QObject>
#include <QDebug>
#include <QFile>

//BCP definitions
#define ZERO_PERIOD_MARKER_BCP 'A'
#define ZERO_FREQUENCY_MARKER_BCP 'B'
#define DATE_MARKER_BCP 'C'
#define TIME_MARKER_BCP 'D'
#define AD_SHORT_MARKER_BCP 'E'
#define AD_LONG_MARKER_BCP 'F'
#define AD_DIFF_MARKER_BCP 'G'
#define AD_PER_MARKER_BCP 'H'
#define BIT_MASK_MARKER_BCP 'I'
#define AVG_TIME_MARKER_BCP 'J'
#define ANALOG_405_MARKER_BCP 'K'
#define ANALOG_880_MARKER_BCP 'L'
#define PM_MASS_EXT_MARKER_BCP 'M'
#define PM_SLOPE_MARKER_BCP 'N'
#define PM_ZERO_MARKER_BCP 'O'
#define BC_MASS_EXT_MARKER_BCP 'P'
#define BC_SLOPE_MARKER_BCP 'Q'
#define BC_ZERO_MARKER_BCP 'R'
#define FLOW_SLOPE_MARKER_BCP 'S'
#define FLOW_ZERO_MARKER_BCP 'T'

//405 definitions
#define AVG_TIME_MARKER_405 'A'
#define BIT_MASK_MARKER_405 'B'
#define AD_SHORT_MARKER_405 'C'
#define AD_LONG_MARKER_405 'D'
#define AD_DIFF_MARKER_405 'E'
#define AD_PER_MARKER_405 'F'
#define NO_SLOPE_MARKER_405 'G'
#define NO_ZERO_MARKER_405 'H'
#define NO_ANALOG_MARKER_405 'I'
#define NO2_SLOPE_MARKER_405 'J'
#define NO2_ZERO_MARKER_405 'K'
#define NO2_ANALOG_MARKER_405 'L'
#define OZONE_FLOW_SLOPE_MARKER_405 'M'
#define CELL_FLOW_SLOPE_MARKER_405 'N'
#define MODE_MARKER_405 'O'
#define DATE_MARKER_405 'P'
#define TIME_MARKER_405 'Q'

class SettingsHandler
{
public:
    static SettingsHandler * GetInstance();

    unsigned char GetAvgTime();
    void SetAvgTime(unsigned char val);

    char * GetDate();
    void SetDate(char * arr);

    char * GetTime();
    void SetTime(char * arr);

    unsigned char GetAdShort_405();
    void SetAdShort_405(unsigned char val);

    unsigned char GetAdLong_405();
    void SetAdLong_405(unsigned char val);

    unsigned char GetAdDiff_405();
    void SetAdDiff_405(unsigned char val);

    unsigned char GetAdPercent_405();
    void SetAdPercent_405(unsigned char val);

    unsigned char GetBitMask_405();
    void SetBitMask_405(unsigned char val);

    int GetAnalogNO_405();
    void SetAnalogNO_405(int val);

    int GetAnalogNO2_405();
    void SetAnalogNO2_405(int val);

    float GetNOSlope_405();
    void SetNOSlope_405(float val);

    float GetNOZero_405();
    void SetNOZero_405(float val);

    float GetNO2Slope_405();
    void SetNO2Slope_405(float val);

    float GetNO2Zero_405();
    void SetNO2Zero_405(float val);

    float GetOzoneFlowSlope_405();
    void SetOzoneFlowSlope_405(float val);

    float GetCellFlowSlope_405();
    void SetCellFlowSlope_405(float val);

    unsigned char GetMode_405();
    void SetMode_405(unsigned char val);

    unsigned char GetZeroPeriod_bcp();
    void SetZeroPeriod_bcp(unsigned char val);

    int GetZeroFrequency_bcp();
    void SetZeroFrequency_bcp(int val);

    unsigned char GetAdShort_bcp();
    void SetAdShort_bcp(unsigned char val);

    unsigned char GetAdLong_bcp();
    void SetAdLong_bcp(unsigned char val);

    unsigned char GetAdDiff_bcp();
    void SetAdDiff_bcp(unsigned char val);

    unsigned char GetAdPer_bcp();
    void SetAdPer_bcp(unsigned char val);

    int GetAnalog405_bcp();
    void SetAnalog405_bcp(int val);

    int GetAnalog880_bcp();
    void SetAnalog880_bcp(int val);

    float GetMassExt405_bcp();
    void SetMassExt405_bcp(float val);

    float GetPMSlope_bcp();
    void SetPMSlope_bcp(float val);

    float GetPMZero_bcp();
    void SetPMZero_bcp(float val);

    float GetMassExt880_bcp();
    void SetMassExt880_bcp(float val);

    float GetBCSlope_bcp();
    void SetBCSlope_bcp(float val);

    float GetBCZero_bcp();
    void SetBCZero_bcp(float val);

    float GetFlowSlope_bcp();
    void SetFlowSlope_bcp(float val);

    float GetFlowZero_bcp();
    void SetFlowZero_bcp(float val);

private:
    static SettingsHandler * instance;
    SettingsHandler();

    //Shared settings
    unsigned char avgTime = 0;
    //DDMMYY
    char date[7];
    //HHMMSS
    char time[7];

    //BCP settings
    unsigned char zeroPeriod_bcp = 0;
    int zeroFreq_bcp = 0;
    unsigned char adShort_bcp = 0;
    unsigned char adLong_bcp = 0;
    unsigned char adDiff_bcp = 0;
    unsigned char adPercent_bcp = 0;
    unsigned char bitMask_bcp = 0;
    int analog405_bcp = 0;
    int analog880_bcp = 0;
    float massExt405_bcp = 0;
    float pmSlope_bcp = 0;
    float pmZero_bcp = 0;
    float massExt880_bcp = 0;
    float bcSlope_bcp = 0;
    float bcZero_bcp = 0;
    float flowSlope_bcp = 0;
    float flowZero_bcp = 0;

    //405 Settings
    unsigned char adShort_405 = 0;
    unsigned char adLong_405 = 0;
    unsigned char adDiff_405 = 0;
    unsigned char adPercent_405 = 0;
    unsigned char bitMask_405 = 0;
    int analogNO_405 = 0;
    int analogNO2_405 = 0;
    float noSlope_405 = 0;
    float noZero_405 = 0;
    float no2Slope_405 = 0;
    float no2Zero_405 = 0;
    float ozoneFlowSlope_405 = 0;
    float cellFlowSlope_405 = 0;
    unsigned char mode_405 = 0;

    //Modbus Settings

    //Static IP settings

    void ReadAllSettings();
    void Read405Settings();
    void ReadBCPSettings();

    void WriteAllSettings();
    void Write405Settings();
    void WriteBCPSettings();
};

#endif // SETTINGSHANDLER_H
