#include "datahandler405.h"

DataHandler405::DataHandler405()
{

}

DataHandler405 * DataHandler405::instance = nullptr;
DataHandler405 * DataHandler405::GetInstance()
{
    if(instance == nullptr)
    {
        instance = new DataHandler405();
    }
    return instance;
}

long DataHandler405::GetLogNumber()
{
    return logNumber;
}
void DataHandler405::SetLogNumber(long val)
{
    logNumber = val;
}

float DataHandler405::GetNO()
{
    return no;
}
void DataHandler405::SetNO(float val)
{
    no = val;
}

float DataHandler405::GetNOX()
{
    return nox;
}
void DataHandler405::SetNOX(float val)
{
    nox = val;
}

float DataHandler405::GetNO2()
{
    return no2;
}
void DataHandler405::SetNO2(float val)
{
    no2 = val;
}

float DataHandler405::GetCellTemp()
{
    return cellTemp;
}
void DataHandler405::SetCellTemp(float val)
{
    cellTemp = val;
}

float DataHandler405::GetCellPress()
{
    return cellPress;
}
void DataHandler405::SetCellPress(float val)
{
    cellPress = val;
}

float DataHandler405::GetCellFlow()
{
    return cellFlow;
}
void DataHandler405::SetCellFlow(float val)
{
    cellFlow = val;
}

float DataHandler405::GetPDV1()
{
    return pdv1;
}
void DataHandler405::SetPDV1(float val)
{
    pdv1 = val;
}

float DataHandler405::GetPDV2()
{
    return pdv2;
}
void DataHandler405::SetPDV2(float val)
{
    pdv2 = val;
}

float DataHandler405::GetScrubberTemp()
{
    return scrubberTemp;
}
void DataHandler405::SetScrubberTemp(float val)
{
    scrubberTemp = val;
}

float DataHandler405::GetOzoneFlow()
{
    return ozoneFlow;
}
void DataHandler405::SetOzoneFlow(float val)
{
    ozoneFlow = val;
}

int DataHandler405::GetErrorByte()
{
    return errorByte;
}
void DataHandler405::SetErrorByte(int val)
{
    errorByte = val;
}

char * DataHandler405::GetDate()
{
    return date;
}
void DataHandler405::SetDate(char * arr)
{
    memcpy(date, arr, 6);
}

char * DataHandler405::GetTime()
{
    return time;
}
void DataHandler405::SetTime(char * arr)
{
    memcpy(time, arr, 6);
}
