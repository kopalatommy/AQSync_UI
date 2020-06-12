#include "bcpdata.h"

BCPData::BCPData()
{

}

BCPData * BCPData::instance = nullptr;
BCPData * BCPData::GetInstance()
{
    if(instance == nullptr)
    {
        instance = new BCPData();
    }
    return instance;
}

long BCPData::GetLogNumber()
{
    return logNumber;
}
void BCPData::SetLogNumber(long val)
{
    logNumber = val;
}

float BCPData::GetMassExt405()
{
    return ext405;
}
void BCPData::SetMassExt405(float val)
{
    ext405 = val;
}

float BCPData::GetMassExt880()
{
    return ext880;
}
void BCPData::SetMassExt880(float val)
{
    ext880 = val;
}

float BCPData::GetBC()
{
    return bc;
}
void BCPData::SetBC(float val)
{
    bc = val;
}

float BCPData::GetPM()
{
    return pm;
}
void BCPData::SetPM(float val)
{
    pm = val;
}

float BCPData::GetMEC405()
{
    return mec405;
}
void BCPData::SetMEC405(float val)
{
    mec405 = val;
}

float BCPData::GetMEC880()
{
    return mec880;
}
void BCPData::SetMEC880(float val)
{
    mec880 = val;
}

float BCPData::GetCellTemp()
{
    return cellTemp;
}
void BCPData::SetCellTemp(float val)
{
    cellTemp = val;
}

float BCPData::GetCellPress()
{
    return cellPress;
}
void BCPData::SetCellPress(float val)
{
    cellPress = val;
}

float BCPData::GetCellFlow()
{
    return cellFlow;
}
void BCPData::SetCellFlow(float val)
{
    cellFlow = val;
}

float BCPData::GetTemp2()
{
    return temp2;
}
void BCPData::SetTemp2(float val)
{
    temp2 = val;
}

float BCPData::GetPDV1()
{
    return pdv1;
}
void BCPData::SetPDV1(float val)
{
    pdv1 = val;
}

float BCPData::GetPDV2()
{
    return pdv2;
}
void BCPData::SetPDV2(float val)
{
    pdv2 = val;
}

float BCPData::GetHumidity()
{
    return humidity;
}
void BCPData::SetHumidity(float val)
{
    humidity = val;
}

float BCPData::GetSystemTemp()
{
    return systTemp;
}
void BCPData::SetSystemTemp(float val)
{
    systTemp = val;
}

int BCPData::GetStatus()
{
    return status;
}
void BCPData::SetStatus(int val)
{
    status = val;
}

float BCPData::GetAutoBCZero()
{
    return autoBCZero;
}
void BCPData::SetAutoBCZero(float val)
{
    autoBCZero = val;
}

float BCPData::GetAutoPMZero()
{
    return autoPMZero;
}
void BCPData::SetAutoPMZero(float val)
{
    autoPMZero = val;
}

char * BCPData::GetFormattedDate()
{
    return formatedDate;
}
void BCPData::SetFormattedDate(char * arr)
{
    memcpy(formatedDate, arr, 8);
}

char * BCPData::GetFormattedTime()
{
    return formatedTime;
}
void BCPData::SetFormattedTime(char * arr)
{
    memcpy(formatedTime, arr, 8);
}
