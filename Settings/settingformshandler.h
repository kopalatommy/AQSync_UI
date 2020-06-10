#ifndef SETTINGFORMSHANDLER_H
#define SETTINGFORMSHANDLER_H

#include <QObject>
#include <QDebug>
#include <QWidget>

#define SETTINGS_405_INDEX 0
#define SETTINGS_BCP_INDEX 1
#define ADAPTIVEFILTER_405_Index 2
#define MODE_405_INDEX 3
#define NOCALIBRATION_405_INDEX 4
#define NO2CALIBRATION_405_INDEX 5
#define FLOWCALIBRATION_405_INDEX 6
#define PARAMETERS_405_INDEX 7
#define ADAPTIVEFILTER_BCP_INDEX 8
#define AUTOZERO_BCP_INDEX 9
#define CALIBRATION_405NM_INDEX 10
#define CALIBRATION_880NM_INDEX 11
#define FLOWCALIBRATION_BCP_INDEX 12
#define TPCORRECTION_BCP_INDEX 13

/*#include "settingsform.h"
#include "avgsettingform.h"
#include "modeform.h"
#include "adaptivefilterform.h"
#include "bccalform.h"
#include "pmcalform.h"
#include "nocalform.h"
#include "no2calform.h"
#include "flowcalform.h"
#include "Modbus/modbusform.h"
#include "Modbus/staticipform.h"
#include "datafilesform.h"
#include "systemsettingsform.h"
#include "aboutform.h"*/

class SettingFormsHandler : public QObject
{
public:
    //static SettingFormsHandler * GetInstance();

    static void ShowInitial();
    static void GenerateForms();
    static QList<QWidget*> * GetSettingsList();

public slots:
    static void MoveLeft();
    static void MoveRight();
    static void CloseForms();

    static void JumpToIndex(int index);

private:
    static SettingFormsHandler * instance;
    SettingFormsHandler();

    static int currentForm;
    static QList<QWidget *> forms;
};

#endif // SETTINGFORMSHANDLER_H
