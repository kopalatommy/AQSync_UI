#include "settingshandler.h"

SettingsHandler::SettingsHandler()
{
    ReadAllSettings();

    SetUp405SettingsFile();
    SetUpBCPSettingsFile();
}

SettingsHandler * SettingsHandler::instance = nullptr;

SettingsHandler * SettingsHandler::GetInstance()
{
    if(instance == nullptr)
    {
        instance = new SettingsHandler();
    }
    return instance;
}

void SettingsHandler::SetUp405SettingsFile()
{
    //Default filename is the one used on the touchscreen
    settingsFile_405.setFileName(DEFAULT_SETTINGS_405_FILE_NAME);
    if(settingsFile_405.open(QIODevice::ReadOnly) == false)
    {
        //BAckup filename is used when the file is created inside of the same folder as the executable, should be used on computers
        settingsFile_405.setFileName(BACKUP_SETTINGS_405_FILE_NAME);
        if(settingsFile_405.open(QIODevice::ReadOnly) == false)
        {
            //Files are not present, try creating them starting with default
            settingsFile_405.setFileName(DEFAULT_SETTINGS_405_FILE_NAME);
            if(settingsFile_405.open(QIODevice::WriteOnly) == true)
            {
                settingsFile_405.write("CREATING");
            }
            else
            {
                settingsFile_405.setFileName(BACKUP_SETTINGS_405_FILE_NAME);
                if(settingsFile_405.open(QIODevice::WriteOnly) == true)
                {
                    settingsFile_405.write("CREATING");
                }
            }
        }
    }
    settingsFile_405.close();
}

void SettingsHandler::SetUpBCPSettingsFile()
{
    //Default filename is the one used on the touchscreen
    settingsFile_bcp.setFileName(DEFAULT_SETTINGS_BCP_FILE_NAME);
    if(settingsFile_bcp.open(QIODevice::ReadOnly) == false)
    {
        //BAckup filename is used when the file is created inside of the same folder as the executable, should be used on computers
        settingsFile_bcp.setFileName(BACKUP_SETTINGS_BCP_FILE_NAME);
        if(settingsFile_bcp.open(QIODevice::ReadOnly) == false)
        {
            //Files are not present, try creating them starting with default
            settingsFile_bcp.setFileName(DEFAULT_SETTINGS_BCP_FILE_NAME);
            if(settingsFile_bcp.open(QIODevice::WriteOnly) == true)
            {
                settingsFile_bcp.write("CREATING");
            }
            else
            {
                settingsFile_bcp.setFileName(BACKUP_SETTINGS_BCP_FILE_NAME);
                if(settingsFile_bcp.open(QIODevice::WriteOnly) == true)
                {
                    settingsFile_bcp.write("CREATING");
                }
            }
        }
    }
    settingsFile_bcp.close();
}

unsigned char SettingsHandler::GetAvgTime()
{
    return avgTime;
}
void SettingsHandler::SetAvgTime(unsigned char val)
{
    avgTime = val;
    Write405Settings();
}

char * SettingsHandler::GetDate()
{
    return date;
}
void SettingsHandler::SetDate(char * arr)
{
    memcpy(date, arr, 6);
}

char * SettingsHandler::GetTime()
{
    return time;
}
void SettingsHandler::SetTime(char * arr)
{
    memcpy(time, arr, 6);
}

unsigned char SettingsHandler::GetAdShort_405()
{
    return adShort_405;
}
void SettingsHandler::SetAdShort_405(unsigned char val)
{
    adShort_405 = val;
    Write405Settings();
}

unsigned char SettingsHandler::GetAdLong_405()
{
    return adLong_405;
}
void SettingsHandler::SetAdLong_405(unsigned char val)
{
    adLong_405 = val;
    Write405Settings();
}

unsigned char SettingsHandler::GetAdDiff_405()
{
    return adDiff_405;
}
void SettingsHandler::SetAdDiff_405(unsigned char val)
{
    adDiff_405 = val;
    Write405Settings();
}

unsigned char SettingsHandler::GetAdPercent_405()
{
    return adPercent_405;
}
void SettingsHandler::SetAdPercent_405(unsigned char val)
{
    adPercent_405 = val;
    Write405Settings();
}

unsigned char SettingsHandler::GetBitMask_405()
{
    return bitMask_405;
}
void SettingsHandler::SetBitMask_405(unsigned char val)
{
    bitMask_405 = val;
    Write405Settings();
}

int SettingsHandler::GetAnalogNO_405()
{
    return analogNO_405;
}
void SettingsHandler::SetAnalogNO_405(int val)
{
    analogNO_405 = val;
    Write405Settings();
}

int SettingsHandler::GetAnalogNO2_405()
{
    return analogNO2_405;
}
void SettingsHandler::SetAnalogNO2_405(int val)
{
    analogNO2_405 = val;
    Write405Settings();
}

float SettingsHandler::GetNOSlope_405()
{
    return noSlope_405;
}
void SettingsHandler::SetNOSlope_405(float val)
{
    noSlope_405 = val;
    Write405Settings();
}

float SettingsHandler::GetNOZero_405()
{
    return noZero_405;
}
void SettingsHandler::SetNOZero_405(float val)
{
    noZero_405 = val;
    Write405Settings();
}

float SettingsHandler::GetNO2Slope_405()
{
    return no2Slope_405;
}
void SettingsHandler::SetNO2Slope_405(float val)
{
    no2Slope_405 = val;
    Write405Settings();
}

float SettingsHandler::GetNO2Zero_405()
{
    return no2Zero_405;
}
void SettingsHandler::SetNO2Zero_405(float val)
{
    no2Zero_405 = val;
    Write405Settings();
}

float SettingsHandler::GetOzoneFlowSlope_405()
{
    return ozoneFlowSlope_405;
}
void SettingsHandler::SetOzoneFlowSlope_405(float val)
{
    ozoneFlowSlope_405 = val;
    Write405Settings();
}

float SettingsHandler::GetCellFlowSlope_405()
{
    return cellFlowSlope_405;
}
void SettingsHandler::SetCellFlowSlope_405(float val)
{
    cellFlowSlope_405 = val;
    Write405Settings();
}

unsigned char SettingsHandler::GetMode_405()
{
    return mode_405;
}
void SettingsHandler::SetMode_405(unsigned char val)
{
    mode_405 = val;
    Write405Settings();
}

unsigned char SettingsHandler::GetZeroPeriod_bcp()
{
    return zeroPeriod_bcp;
}
void SettingsHandler::SetZeroPeriod_bcp(unsigned char val)
{
    zeroPeriod_bcp = val;
    WriteBCPSettings();
}

int SettingsHandler::GetZeroFrequency_bcp()
{
    return zeroFreq_bcp;
}
void SettingsHandler::SetZeroFrequency_bcp(int val)
{
    zeroFreq_bcp = val;
    WriteBCPSettings();
}

unsigned char SettingsHandler::GetAdShort_bcp()
{
    return adShort_bcp;
}
void SettingsHandler::SetAdShort_bcp(unsigned char val)
{
    adShort_bcp = val;
    WriteBCPSettings();
}

unsigned char SettingsHandler::GetAdLong_bcp()
{
    return adLong_bcp;
}
void SettingsHandler::SetAdLong_bcp(unsigned char val)
{
    adLong_bcp = val;
    WriteBCPSettings();
}

unsigned char SettingsHandler::GetAdDiff_bcp()
{
    return adDiff_bcp;
}
void SettingsHandler::SetAdDiff_bcp(unsigned char val)
{
    adDiff_bcp = val;
    WriteBCPSettings();
}

unsigned char SettingsHandler::GetAdPer_bcp()
{
    return adPercent_bcp;
}
void SettingsHandler::SetAdPer_bcp(unsigned char val)
{
    adPercent_bcp = val;
    WriteBCPSettings();
}

int SettingsHandler::GetAnalog405_bcp()
{
    return analog405_bcp;
}
void SettingsHandler::SetAnalog405_bcp(int val)
{
    analog405_bcp = val;
    WriteBCPSettings();
}

int SettingsHandler::GetAnalog880_bcp()
{
    return analog880_bcp;
}
void SettingsHandler::SetAnalog880_bcp(int val)
{
    analog880_bcp = val;
    WriteBCPSettings();
}

float SettingsHandler::GetMassExt405_bcp()
{
    return massExt405_bcp;
}
void SettingsHandler::SetMassExt405_bcp(float val)
{
    massExt405_bcp = val;
    WriteBCPSettings();
}

float SettingsHandler::GetPMSlope_bcp()
{
    return pmSlope_bcp;
}
void SettingsHandler::SetPMSlope_bcp(float val)
{
    pmSlope_bcp = val;
    WriteBCPSettings();
}

float SettingsHandler::GetPMZero_bcp()
{
    return pmZero_bcp;
}
void SettingsHandler::SetPMZero_bcp(float val)
{
    pmZero_bcp = val;
    WriteBCPSettings();
}

float SettingsHandler::GetMassExt880_bcp()
{
    return massExt880_bcp;
}
void SettingsHandler::SetMassExt880_bcp(float val)
{
    massExt880_bcp = val;
}

float SettingsHandler::GetBCSlope_bcp()
{
    return bcSlope_bcp;
}
void SettingsHandler::SetBCSlope_bcp(float val)
{
    bcSlope_bcp = val;
    WriteBCPSettings();
}

float SettingsHandler::GetBCZero_bcp()
{
    return bcZero_bcp;
}
void SettingsHandler::SetBCZero_bcp(float val)
{
    bcZero_bcp = val;
    WriteBCPSettings();
}

float SettingsHandler::GetFlowSlope_bcp()
{
    return flowSlope_bcp;
}
void SettingsHandler::SetFlowSlope_bcp(float val)
{
    flowSlope_bcp = val;
    WriteBCPSettings();
}

float SettingsHandler::GetFlowZero_bcp()
{
    return flowZero_bcp;
}
void SettingsHandler::SetFlowZero_bcp(float val)
{
    flowZero_bcp = val;
    WriteBCPSettings();
}

char SettingsHandler::GetDateFormat()
{
    return dateFormat;
}
void SettingsHandler::SetDateFormat(char val)
{
    dateFormat = val;
}

void SettingsHandler::ReadAllSettings()
{
    Read405Settings();
    ReadBCPSettings();
}

void SettingsHandler::Read405Settings()
{
    if(settingsFile_405.open(QIODevice::ReadOnly))
    {
        char line[64];
        long long length;
        while (settingsFile_405.atEnd() == false)
        {
            length = settingsFile_405.readLine(line, 64);
            line[length] = 0;

            switch (line[0])
            {
            case AVG_TIME_MARKER_405:
                avgTime = static_cast<unsigned char>(atoi(line + 1));
                break;

            case BIT_MASK_MARKER_405:
                bitMask_405 = static_cast<unsigned char>(atoi(line + 1));
                break;

            case AD_SHORT_MARKER_405:
                adShort_405 = static_cast<unsigned char>(atoi(line + 1));
                break;

            case AD_LONG_MARKER_405:
                adLong_405 = static_cast<unsigned char>(atoi(line + 1));
                break;

            case AD_DIFF_MARKER_405:
                adDiff_405 = static_cast<unsigned char>(atoi(line + 1));
                break;

            case AD_PER_MARKER_405:
                adPercent_405 = static_cast<unsigned char>(atoi(line + 1));
                break;

            case NO_SLOPE_MARKER_405:
                noSlope_405 = static_cast<float>(atof(line + 1));
                break;

            case NO_ZERO_MARKER_405:
                noZero_405 = static_cast<float>(atof(line + 1));
                break;

            case NO2_SLOPE_MARKER_405:
                no2Slope_405 = static_cast<float>(atof(line + 1));
                break;

            case NO2_ZERO_MARKER_405:
                no2Zero_405 = static_cast<float>(atof(line + 1));
                break;

            case NO_ANALOG_MARKER_405:
                analogNO_405 = atoi(line + 1);
                break;

            case NO2_ANALOG_MARKER_405:
                analogNO2_405 = atoi(line + 1);
                break;

            case OZONE_FLOW_SLOPE_MARKER_405:
                ozoneFlowSlope_405 = static_cast<float>(atof(line + 1));
                break;

            case CELL_FLOW_SLOPE_MARKER_405:
                cellFlowSlope_405 = static_cast<float>(atof(line + 1));
                break;

            case MODE_MARKER_405:
                mode_405 = static_cast<unsigned char>(atoi(line + 1));
                break;
            }
        }
        settingsFile_405.close();
    }
    else
    {
        qDebug() << "Failed to open 405Settings.txt for read";
    }
}

void SettingsHandler::ReadBCPSettings()
{
    if(settingsFile_bcp.open(QIODevice::ReadOnly))
    {
        char line[64];
        long long length;
        while (settingsFile_bcp.atEnd() == false)
        {
            length = settingsFile_bcp.readLine(line, 64);
            line[length] = 0;

            switch (line[0])
            {
            case ZERO_PERIOD_MARKER_BCP:
                zeroPeriod_bcp = static_cast<unsigned char>(atoi(line + 1));
                break;

            case ZERO_FREQUENCY_MARKER_BCP:
                zeroFreq_bcp = static_cast<unsigned char>(atoi(line + 1));
                break;

            case AD_SHORT_MARKER_BCP:
                adShort_bcp = static_cast<unsigned char>(atoi(line + 1));
                break;

            case AD_LONG_MARKER_BCP:
                adLong_bcp = static_cast<unsigned char>(atoi(line + 1));
                break;

            case AD_DIFF_MARKER_BCP:
                adDiff_bcp = static_cast<unsigned char>(atoi(line + 1));
                break;

            case AD_PER_MARKER_BCP:
                zeroPeriod_bcp = static_cast<unsigned char>(atoi(line + 1));
                break;

            case BIT_MASK_MARKER_BCP:
                bitMask_bcp = static_cast<unsigned char>(atoi(line + 1));
                break;

            case ANALOG_405_MARKER_BCP:
                analog405_bcp = atoi(line + 1);
                break;

            case ANALOG_880_MARKER_BCP:
                analog880_bcp = atoi(line + 1);
                break;

            case PM_MASS_EXT_MARKER_BCP:
                massExt405_bcp = static_cast<float>(atof(line + 1));
                break;

            case PM_SLOPE_MARKER_BCP:
                pmSlope_bcp = static_cast<float>(atof(line + 1));
                break;

            case PM_ZERO_MARKER_BCP:
                pmZero_bcp = static_cast<float>(atof(line + 1));
                break;

            case BC_MASS_EXT_MARKER_BCP:
                massExt880_bcp = static_cast<float>(atof(line + 1));
                break;

            case BC_SLOPE_MARKER_BCP:
                bcSlope_bcp = static_cast<float>(atof(line + 1));
                break;

            case BC_ZERO_MARKER_BCP:
                bcZero_bcp = static_cast<float>(atof(line + 1));
                break;

            case FLOW_SLOPE_MARKER_BCP:
                flowSlope_bcp = static_cast<float>(atof(line + 1));
                break;

            case FLOW_ZERO_MARKER_BCP:
                flowZero_bcp = static_cast<float>(atof(line + 1));
                break;

            default:
                qDebug() << "BCP settings read in bad marker: " << QString(line);
            }
        }
        settingsFile_bcp.close();
    }
    else
    {
        qDebug() << "Failed to read bcp settings file";
    }
}


void SettingsHandler::WriteAllSettings()
{
    Write405Settings();
    WriteBCPSettings();
}

void SettingsHandler::Write405Settings()
{
    if(settingsFile_405.open(QIODevice::WriteOnly))
    {
        char line[64];
        long long length = 0;

        length = sprintf(line, "%c%i\n", BIT_MASK_MARKER_405, bitMask_405);
        line[length] = 0;
        settingsFile_405.write(line, length);

        length = sprintf(line, "%c%i\n", AD_SHORT_MARKER_405, adShort_405);
        line[length] = 0;
        settingsFile_405.write(line, length);

        length = sprintf(line, "%c%i\n", AD_LONG_MARKER_405, adLong_405);
        line[length] = 0;
        settingsFile_405.write(line, length);

        length = sprintf(line, "%c%i\n", AD_DIFF_MARKER_405, adDiff_405);
        line[length] = 0;
        settingsFile_405.write(line, length);

        length = sprintf(line, "%c%i\n", AD_PER_MARKER_405, adPercent_405);
        line[length] = 0;
        settingsFile_405.write(line, length);

        length = sprintf(line, "%c%1.2f\n", NO_SLOPE_MARKER_405, static_cast<double>(noSlope_405));
        line[length] = 0;
        settingsFile_405.write(line, length);

        length = sprintf(line, "%c%1.2f\n", NO_ZERO_MARKER_405, static_cast<double>(noZero_405));
        line[length] = 0;
        settingsFile_405.write(line, length);

        length = sprintf(line, "%c%i\n", NO_ANALOG_MARKER_405, analogNO_405);
        line[length] = 0;
        settingsFile_405.write(line, length);

        length = sprintf(line, "%c%1.2f\n", NO2_SLOPE_MARKER_405, static_cast<double>(no2Slope_405));
        line[length] = 0;
        settingsFile_405.write(line, length);

        length = sprintf(line, "%c%1.2f\n", NO2_ZERO_MARKER_405, static_cast<double>(no2Zero_405));
        line[length] = 0;
        settingsFile_405.write(line, length);

        length = sprintf(line, "%c%i\n", NO2_ANALOG_MARKER_405, analogNO2_405);
        line[length] = 0;
        settingsFile_405.write(line, length);

        length = sprintf(line, "%c%1.2f\n", OZONE_FLOW_SLOPE_MARKER_405, static_cast<double>(ozoneFlowSlope_405));
        line[length] = 0;
        settingsFile_405.write(line, length);

        length = sprintf(line, "%c%1.2f\n", CELL_FLOW_SLOPE_MARKER_405, static_cast<double>(cellFlowSlope_405));
        line[length] = 0;
        settingsFile_405.write(line, length);

        length = sprintf(line, "%c%i\n", MODE_MARKER_405, mode_405);
        line[length] = 0;
        settingsFile_405.write(line, length);

        settingsFile_405.close();
    }
    else
    {
        qDebug() << "Failed to open 405Settings.txt for write";
    }
}

void SettingsHandler::WriteBCPSettings()
{
    if(settingsFile_bcp.open(QIODevice::WriteOnly))
    {
        char line[64];
        long long length = 0;

        length = sprintf(line, "%c%i\n", ZERO_PERIOD_MARKER_BCP, zeroPeriod_bcp);
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%i\n", ZERO_FREQUENCY_MARKER_BCP, zeroFreq_bcp);
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%i\n", AD_SHORT_MARKER_BCP, adShort_bcp);
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%i\n", AD_LONG_MARKER_BCP, adLong_bcp);
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%i\n", AD_DIFF_MARKER_BCP, adDiff_bcp);
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%i\n", AD_PER_MARKER_BCP, adPercent_bcp);
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%i\n", BIT_MASK_MARKER_BCP, bitMask_bcp);
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%i\n", ANALOG_405_MARKER_BCP, analog405_bcp);
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%i\n", ANALOG_880_MARKER_BCP, analog880_bcp);
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%1.2f\n", PM_MASS_EXT_MARKER_BCP, static_cast<double>(massExt405_bcp));
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%1.2f\n", PM_SLOPE_MARKER_BCP, static_cast<double>(pmSlope_bcp));
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%1.2f\n", PM_ZERO_MARKER_BCP, static_cast<double>(pmZero_bcp));
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%1.2f\n", BC_SLOPE_MARKER_BCP, static_cast<double>(bcSlope_bcp));
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%1.2f\n", BC_ZERO_MARKER_BCP, static_cast<double>(bcZero_bcp));
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%1.2f\n", FLOW_SLOPE_MARKER_BCP, static_cast<double>(flowSlope_bcp));
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        length = sprintf(line, "%c%1.2f", FLOW_ZERO_MARKER_BCP, static_cast<double>(flowZero_bcp));
        line[length] = 0;
        settingsFile_bcp.write(line, length);

        settingsFile_bcp.close();
    }
    else
    {
        qDebug() << "Failed to open BCPSettings.txt for write";
    }
}
