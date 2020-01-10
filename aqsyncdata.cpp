#include "aqsyncdata.h"

AQSyncData::AQSyncData()
{

}

AQSyncData * AQSyncData::instance = nullptr;
AQSyncData * AQSyncData::GetInstance(){
    if(instance == nullptr) instance = new AQSyncData();
    return instance;
}

QString AQSyncData::GetSaveFilePath(){
    return saveFilePath;
}
//Only want to create a new save name once date and time has been set
QString AQSyncData::GetSaveFileString(){
    return saveFilePath + QDate::currentDate().toString("dd_mm_yy").append(".txt");
}
QString AQSyncData::GetAltSaveFileString(){
    return QDate::currentDate().toString("dd_mm_yy").append(".txt");
}

void AQSyncData::SaveString(){
    QString line = QString::number(logNumber).append(',');
    line.append(QString::number(static_cast<double>(blackCarbon))).append(',');
    line.append(QString::number(static_cast<double>(pm))).append(',');
    line.append(QString::number(static_cast<double>(NO2))).append(',');
    line.append(QString::number(static_cast<double>(NO))).append(',');
    line.append(QString::number(static_cast<double>(NOx))).append(',');
    line.append(QString::number(static_cast<double>(cellTemp))).append(',');
    line.append(QString::number(static_cast<double>(cellPress))).append(',');
    line.append(QString::number(static_cast<double>(cellFlow))).append(',');
    line.append(QString::number(static_cast<double>(ozoneFlow))).append(',');
    line.append(QString::number(static_cast<double>(pdv1))).append(',');
    line.append(QString::number(static_cast<double>(pdv2))).append(',');
    line.append(QString::number(errorByte)).append(',');
    line.append(*date).append(',');
    line.append(*time).append(',');
    line.append(mode);
    SaveString(line);
}
void AQSyncData::SaveString(QString line){
    QFile file(GetSaveFileString());
    if(!file.open(QIODevice::ReadWrite)){
        file.setFileName(GetAltSaveFileString());
        file.open(QIODevice::ReadWrite);
    }
    file.write(line.toStdString().c_str(), line.count());
    file.close();
}

long AQSyncData::GetLogNumber(){
    return logNumber;
}
void AQSyncData::SetLogNumber(long val){
    logNumber = val;
}

float AQSyncData::GetBlackCarbon(){
    return blackCarbon;
}
void AQSyncData::SetBlackCarbon(float val){
    blackCarbon = val;
}

float AQSyncData::GetPM(){
    return pm;
}
void AQSyncData::SetPM(float val){
    pm = val;
}

float AQSyncData::GetMassExt880(){
    return massExt880;
}
void AQSyncData::SetMassExt880(float val){
    massExt880 = val;
}

float AQSyncData::GetMassExt405(){
    return massExt405;
}
void AQSyncData::SetMassExt405(float val){
    massExt405 = val;
}

float AQSyncData::GetNO(){
    return NO;
}
void AQSyncData::SetNO(float val){
    NO = val;
}

float AQSyncData::GetNOx(){
    return NOx;
}
void AQSyncData::SetNOx(float val){
    NOx = val;
}

float AQSyncData::GetNO2(){
    return NO2;
}
void AQSyncData::SetNO2(float val){
    NO2 = val;
}

float AQSyncData::GetCellTemp(){
    return cellTemp;
}
void AQSyncData::SetCellTemp(float val){
    cellTemp = val;
}

float AQSyncData::GetCellPress(){
    return cellPress;
}
void AQSyncData::SetCellPress(float val){
    cellPress = val;
}

float AQSyncData::GetCellFlow(){
    return cellFlow;
}
void AQSyncData::SetCellFlow(float val){
    cellFlow = val;
}

float AQSyncData::GetOzoneFlow(){
    return ozoneFlow;
}
void AQSyncData::SetOzoneFlow(float val){
    ozoneFlow = val;
}

float AQSyncData::GetPDV1(){
    return pdv1;
}
void AQSyncData::SetPDV1(float val){
    pdv1 = val;
}

float AQSyncData::GetPDV2(){
    return pdv2;
}
void AQSyncData::SetPDV2(float val){
    pdv2 = val;
}

float AQSyncData::GetScrubberTemp(){
    return scrubberTemp;
}
void AQSyncData::SetScrubberTemp(float val){
    scrubberTemp = val;
}

int AQSyncData::GetErrorByte(){
    return errorByte;
}
void AQSyncData::SetErrorByte(int val){
    errorByte = val;
}

int AQSyncData::GetMode(){
    return mode;
}
void AQSyncData::SetMode(int val){
    mode = val;
}

char * AQSyncData::GetDate(){
    return date;
}
char * AQSyncData::GetTime(){
    return time;
}

void AQSyncData::OnFinishedReadingLine(QString dataLine){
    QFile file(saveFilePath + GenerateSaveFileName(createNewFileEveryDay));
    qDebug() << (saveFilePath + GenerateSaveFileName(createNewFileEveryDay));

    if(file.open(QIODevice::ReadWrite)){
        file.write(dataLine.toLatin1(), dataLine.length());
        file.write(QString("\n").toLatin1());
        file.close();
    }else{
        qDebug() << "Failed to write to file";
        file.setFileName(QDir::homePath().append("/2BTouchLogs/").append(saveFileName));
        qDebug() << "New File name: " << file.fileName();
        if(file.open(QIODevice::ReadWrite)){
            file.write(dataLine.toLatin1());
            file.write(QString("\n").toLatin1());
            file.close();
        }else{
            qDebug() << "Still failed";
        }
    }

    emit FinshedReadingLine();
}

QString AQSyncData::GenerateSaveFileName(bool createDaily){
    QString toReturn;

    if(createDaily){
        toReturn.append(date);
        toReturn.replace(2, 1, '_');
        toReturn.replace(5, 1, '_');
        toReturn.append(".csv");
    }else{

    }

    return toReturn;
}

void AQSyncData::GenerateSingleName(){
    singleFileName.append(date);
    singleFileName.replace(2, 1, '_');
    singleFileName.replace(5, 1, '_');
    singleFileName.append('_').append(time);
    singleFileName.replace(10, 1, '_');
    singleFileName.replace(13, 1, '_');
    singleFileName.append(".csv");
}

//First:  QDateTime(2020-01-10 15:07:32.098 Mountain Standard Time Qt::LocalTime)  last:  QDateTime(2020-01-10 15:05:56.121 Mountain Standard Time Qt::LocalTime)
void AQSyncData::RecoverPreviousName(){
    QDir logFolder = QDir("/home/2b/2BTouchLogs/");

    if(logFolder.exists()){
        singleFileName = logFolder.entryList(QDir::Filter::Files).at(0);
    }else{
        logFolder.setPath(QDir::homePath() + "/2BTouchLogs/");
        if(logFolder.exists()){
            singleFileName = logFolder.entryList(QDir::Filter::Files).at(0);
        }else{
            qDebug() << "Log folder does not exist";
        }
    }
}

void AQSyncData::SetCreateNewFileEveryDay(bool val){
    createNewFileEveryDay = val;
}
