#ifndef SETTINGFORMSHANDLER_H
#define SETTINGFORMSHANDLER_H

#include <QObject>
#include <QDebug>
#include <QWidget>

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
