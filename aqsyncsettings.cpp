#include "aqsyncsettings.h"

AQSyncSettings::AQSyncSettings(){
    ReadSettings();
}

AQSyncSettings * AQSyncSettings::instance = nullptr;
AQSyncSettings * AQSyncSettings::GetInstance(){
    if(instance == nullptr) instance = new AQSyncSettings();
    return instance;
}

unsigned char AQSyncSettings::GetAvgTime(){
    return avgTime;
}
void AQSyncSettings::SetAvgTime(unsigned char val){
    avgTime = val;
    WriteSettings();
}

unsigned char AQSyncSettings::GetMode(){
    return mode;
}
void AQSyncSettings::SetMode(unsigned char val){
    mode = val;
    WriteSettings();
}

unsigned char AQSyncSettings::GetAdShort(){
    return adShort;
}
void AQSyncSettings::SetAdShort(unsigned char val){
    adShort = val;
    WriteSettings();
}

unsigned char AQSyncSettings::GetAdLong(){
    return adLong;
}
void AQSyncSettings::SetAdLong(unsigned char val){
    adLong = val;
    WriteSettings();
}

unsigned char AQSyncSettings::GetAdDiff(){
    return adDiff;
}
void AQSyncSettings::SetAdDiff(unsigned char val){
    adDiff = val;
    WriteSettings();
}

unsigned char AQSyncSettings::GetAdPer(){
    return adPer;
}
void AQSyncSettings::SetAdPer(unsigned char val){
    adPer = val;
    WriteSettings();
}
//DDMMYY
char * AQSyncSettings::GetDate(){
    return date;
}
void AQSyncSettings::SetFormattedDate(char *val){
    char temp[11]{ date[0], date[1], '/', date[2], date[3], '/', '2', '0', date[4], date[5], 0};
    memcpy(val, temp, 11);
}
void AQSyncSettings::SetDate(char val[6]){
    memcpy(date, val, 6);
}

char * AQSyncSettings::GetTime(){
    return time;
}
void AQSyncSettings::SetFormattedTime(char *val){
    char temp[9]{ time[0], time[1], ':', time[2], time[3], '/', time[4], time[5], 0};
    memcpy(val, temp, 11);
}
void AQSyncSettings::SetTime(char val[6]){
    memcpy(time, val, 6);
}

float AQSyncSettings::GetNOSlope(){
    return noSlope;
}
void AQSyncSettings::SetNOSlope(float val){
    noSlope = val;
    WriteSettings();
}

float AQSyncSettings::GetNOZero(){
    return  noZero;
}
void AQSyncSettings::SetNOZero(float val){
    noZero = val;
    WriteSettings();
}

float AQSyncSettings::GetNO2Slope(){
    return no2Slope;
}
void AQSyncSettings::SetNO2Slope(float val){
    no2Slope = val;
    WriteSettings();
}

float AQSyncSettings::GetNO2Zero(){
    return no2Zero;
}
void AQSyncSettings::SetNO2Zero(float val){
    no2Zero = val;
    WriteSettings();
}

float AQSyncSettings::GetOzoneFlowSlope(){
    return ozoneFlowSlope;
}
void AQSyncSettings::SetOzoneFlowSlope(float val){
    ozoneFlowSlope = val;
    WriteSettings();
}

float AQSyncSettings::GetCellFlowSlope(){
    return cellFlowSlope;
}
void AQSyncSettings::SetCellFlowSlope(float val){
    cellFlowSlope = val;
    WriteSettings();
}

float AQSyncSettings::GetMassExt405(){
    return massExt405;
}
void AQSyncSettings::SetMassExt405(float val){
    massExt405 = val;
    WriteSettings();
}

float AQSyncSettings::GetPMSlope(){
    return pmSlope;
}
void AQSyncSettings::SetPMSlope(float val){
    pmSlope = val;
    WriteSettings();
}

float AQSyncSettings::GetPMZero(){
    return pmZero;
}
void AQSyncSettings::SetPMZero(float val){
    pmZero = val;
    WriteSettings();
}

float AQSyncSettings::GetMassExt880(){
    return massExt880;
}
void AQSyncSettings::SetMassExt880(float val){
    massExt880 = val;
    WriteSettings();
}

float AQSyncSettings::GetBCSlope(){
    return bcSlope;
}
void AQSyncSettings::SetBCSlope(float val){
    bcSlope = val;
    WriteSettings();
}

float AQSyncSettings::GetBCZero(){
    return bcZero;
}
void AQSyncSettings::SetBCZero(float val){
    bcZero = val;
    WriteSettings();
}

float AQSyncSettings::GetFlowSlope(){
    return flowSlope;
}
void AQSyncSettings::SetFlowSlope(float val){
    flowSlope = val;
    WriteSettings();
}

float AQSyncSettings::GetFlowZero(){
    return flowZero;
}
void AQSyncSettings::SetFlowZero(float val){
    flowZero = val;
    WriteSettings();
}

void AQSyncSettings::WriteSettings(){
    QFile file("/home/2b/AQSyncSettings.txt");
    if(!file.exists()) file.setFileName("AQSyncSettings.txt");

    if(file.open(QIODevice::WriteOnly)){
        file.write(QString(AVG_TIME_MARKER).append(QString::number(avgTime)).append("\n").toStdString().c_str());
        file.write(QString(MODE_MARKER).append(QString::number(mode)).append("\n").toStdString().c_str());
        file.write(QString(AD_SHORT_MARKER).append(QString::number(adShort)).append("\n").toStdString().c_str());
        file.write(QString(AD_LONG_MARKER).append(QString::number(adLong)).append("\n").toStdString().c_str());
        file.write(QString(AD_DIFF_MARKER).append(QString::number(adDiff)).append("\n").toStdString().c_str());
        file.write(QString(AD_PER_MARKER).append(QString::number(adPer)).append("\n").toStdString().c_str());
        file.write(QString(NO_SLOPE_MARKER).append(QString::number(static_cast<double>(noSlope))).append("\n").toStdString().c_str());
        file.write(QString(NO_ZERO_MARKER).append(QString::number(static_cast<double>(noZero))).append("\n").toStdString().c_str());
        file.write(QString(NO2_SLOPE_MARKER).append(QString::number(static_cast<double>(no2Slope))).append("\n").toStdString().c_str());
        file.write(QString(NO2_ZERO_MARKER).append(QString::number(static_cast<double>(no2Zero))).append("\n").toStdString().c_str());
        file.write(QString(OZONE_FLOW_SLOPE_MARKER).append(QString::number(static_cast<double>(ozoneFlowSlope))).append("\n").toStdString().c_str());
        file.write(QString(CELL_FLOW_SLOPE_MARKER).append(QString::number(static_cast<double>(cellFlowSlope))).append("\n").toStdString().c_str());
        file.write(QString(MASS_EXT_405_MARKER).append(QString::number(static_cast<double>(massExt405))).append("\n").toStdString().c_str());
        file.write(QString(PM_SLOPE_MARKER).append(QString::number(static_cast<double>(pmSlope))).append("\n").toStdString().c_str());
        file.write(QString(PM_ZERO_MARKER).append(QString::number(static_cast<double>(pmZero))).append("\n").toStdString().c_str());
        file.write(QString(MASS_EXT_880_MARKER).append(QString::number(static_cast<double>(massExt880))).append("\n").toStdString().c_str());
        file.write(QString(BC_SLOPE_MARKER).append(QString::number(static_cast<double>(bcSlope))).append("\n").toStdString().c_str());
        file.write(QString(BC_ZERO_MARKER).append(QString::number(static_cast<double>(bcZero))).append("\n").toStdString().c_str());
        file.write(QString(FLOW_SLOPE_MARKER).append(QString::number(static_cast<double>(flowSlope))).append("\n").toStdString().c_str());
        file.write(QString(FLOW_ZERO_MARKER).append(QString::number(static_cast<double>(flowZero))).append("\n").toStdString().c_str());
    }
}

void AQSyncSettings::ReadSettings(){
    QFile file("/home/2b/AQSyncSettings.txt");
    if(!file.exists()) file.setFileName("AQSyncSettings.txt");

    if(file.open(QIODevice::ReadOnly)){
        while (!file.atEnd()) {
            char * line = new char[25];
            memset(line, 0, 25);
            file.readLine(line, 25);
            QByteArray temp = QByteArray().append(line);

            switch (temp.at(0)) {
            case AVG_TIME_MARKER:
                avgTime = static_cast<unsigned char>(QString(temp.remove(0, 1)).toInt());
                qDebug() << "Read in " << QString::number(avgTime) << " for avg time";
                break;
            case MODE_MARKER:
                mode = static_cast<unsigned char>(QString(temp.remove(0, 1)).toInt());
                qDebug() << "Read in " << QString::number(mode) << " for mode";
                break;
            case AD_SHORT_MARKER:
                adShort = static_cast<unsigned char>(QString(temp.remove(0, 1)).toInt());
                qDebug() << "Read in " << QString::number(adShort) << " for ad short";
                break;
            case AD_LONG_MARKER:
                adLong = static_cast<unsigned char>(QString(temp.remove(0, 1)).toInt());
                qDebug() << "Read in " << QString::number(adLong) << " for ad long";
                break;
            case AD_DIFF_MARKER:
                adDiff = static_cast<unsigned char>(QString(temp.remove(0, 1)).toInt());
                qDebug() << "Read in " << QString::number(adDiff) << " for ad diff";
                break;
            case AD_PER_MARKER:
                adPer = static_cast<unsigned char>(QString(temp.remove(0, 1)).toInt());
                qDebug() << "Read in " << QString::number(adPer) << " for ad per";
                break;
            case NO_SLOPE_MARKER:
                noSlope = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << noSlope << " for no slope";
                break;
            case NO_ZERO_MARKER:
                noZero = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << noZero << " for no zero";
                break;
            case NO2_SLOPE_MARKER:
                no2Slope = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << no2Slope << " for no2 slope";
                break;
            case NO2_ZERO_MARKER:
                no2Zero = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << no2Zero << " for no2 zero";
                break;
            case OZONE_FLOW_SLOPE_MARKER:
                ozoneFlowSlope = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << ozoneFlowSlope << " for ozone flow slope";
                break;
            case CELL_FLOW_SLOPE_MARKER:
                cellFlowSlope = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << cellFlowSlope << " for cell flow slope";
                break;
            case MASS_EXT_405_MARKER:
                massExt405 = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << massExt405 << " for mass ext 405";
                break;
            case PM_SLOPE_MARKER:
                pmSlope = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << pmSlope << " for pm slope";
                break;
            case PM_ZERO_MARKER:
                pmZero = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << pmZero << " for pm zero";
                break;
            case MASS_EXT_880_MARKER:
                massExt880 = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << massExt880 << " for mass ext 880";
                break;
            case BC_SLOPE_MARKER:
                bcSlope = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << bcSlope << " for bc slope";
                break;
            case BC_ZERO_MARKER:
                bcZero = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << bcZero << " for bc zero";
                break;
            case FLOW_SLOPE_MARKER:
                flowSlope = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << flowSlope << " for flow slope";
                break;
            case FLOW_ZERO_MARKER:
                flowZero = QString(temp.remove(0, 1)).toFloat();
                qDebug() << "Read in " << flowZero << " for flow zero";
                break;
            default:
                qDebug() << "Read in bad setting marker: " << QString(temp.at(0));
            }
        }
    }
}

int AQSyncSettings::GetBuildNumber(){
    return BUILD_NUMBER;
}
