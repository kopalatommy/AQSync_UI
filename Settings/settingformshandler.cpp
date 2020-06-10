#include "settingformshandler.h"

SettingFormsHandler::SettingFormsHandler(){

}

SettingFormsHandler * SettingFormsHandler::instance = nullptr;
/*SettingFormsHandler * SettingFormsHandler::GetInstance(){
    if(instance == nullptr) instance = new SettingFormsHandler();
    return instance;
}*/

int SettingFormsHandler::currentForm = 0;
QList<QWidget *> SettingFormsHandler::forms;
void SettingFormsHandler::GenerateForms(){
    /*instance = new SettingFormsHandler();

    SettingsForm * settings = new SettingsForm();
    connect(settings, &SettingsForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(settings, &SettingsForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(settings, &SettingsForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    connect(settings, &SettingsForm::JumpToIndex, instance, &SettingFormsHandler::JumpToIndex);
    forms.append(settings);

    AvgSettingForm * avg = new AvgSettingForm();
    connect(avg, &AvgSettingForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(avg, &AvgSettingForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(avg, &AvgSettingForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    forms.append(avg);

    ModeForm * mode = new ModeForm();
    connect(mode, &ModeForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(mode, &ModeForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(mode, &ModeForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    forms.append(mode);

    AdaptiveFilterForm * filter = new AdaptiveFilterForm();
    connect(filter, &AdaptiveFilterForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(filter, &AdaptiveFilterForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(filter, &AdaptiveFilterForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    forms.append(filter);

    BCCalForm * bc = new BCCalForm();
    connect(bc, &BCCalForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(bc, &BCCalForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(bc, &BCCalForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    forms.append(bc);

    PMCalForm * pm = new PMCalForm();
    connect(pm, &PMCalForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(pm, &PMCalForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(pm, &PMCalForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    forms.append(pm);

    NOCalForm * no = new NOCalForm();
    connect(no, &NOCalForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(no, &NOCalForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(no, &NOCalForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    forms.append(no);

    NO2CalForm * no2 = new NO2CalForm();
    connect(no2, &NO2CalForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(no2, &NO2CalForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(no2, &NO2CalForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    forms.append(no2);

    FlowCalForm * flow = new FlowCalForm();
    connect(flow, &FlowCalForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(flow, &FlowCalForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(flow, &FlowCalForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    forms.append(flow);

    ModbusForm * modbus = new ModbusForm();
    connect(modbus, &ModbusForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(modbus, &ModbusForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(modbus, &ModbusForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    forms.append(modbus);

    StaticIPForm * sIP = new StaticIPForm();
    connect(sIP, &StaticIPForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(sIP, &StaticIPForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(sIP, &StaticIPForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    forms.append(sIP);

    DataFilesForm * data = new DataFilesForm();
    connect(data, &DataFilesForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(data, &DataFilesForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(data, &DataFilesForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    forms.append(data);

    SystemSettingsForm * system = new SystemSettingsForm();
    connect(system, &SystemSettingsForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(system, &SystemSettingsForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(system, &SystemSettingsForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    forms.append(system);

    AboutForm * about = new AboutForm();
    connect(about, &AboutForm::MoveLeft, instance, &SettingFormsHandler::MoveLeft);
    connect(about, &AboutForm::MoveRight, instance, &SettingFormsHandler::MoveRight);
    connect(about, &AboutForm::CloseForms, instance, &SettingFormsHandler::CloseForms);
    forms.append(about);*/
}

void SettingFormsHandler::ShowInitial(){
    for(int i = 0; i < forms.count(); i++) forms[i]->close();
    currentForm = 0;
    forms[currentForm]->show();
}

void SettingFormsHandler::MoveLeft(){
    forms[currentForm]->close();
    currentForm--;
    if(currentForm < 0) currentForm = forms.count() - 1;
    forms[currentForm]->show();
}

void SettingFormsHandler::MoveRight(){
    forms[currentForm]->close();
    currentForm++;
    if(currentForm >= forms.count()) currentForm = 0;
    forms[currentForm]->show();
}

void SettingFormsHandler::CloseForms(){
    forms[currentForm]->close();
    currentForm = 0;
}

void SettingFormsHandler::JumpToIndex(int index){
    if(index < forms.count()){
        forms[currentForm]->close();
        currentForm = index;
        forms[currentForm]->show();
    }
}

QList<QWidget*> * SettingFormsHandler::GetSettingsList()
{
    return &forms;
}
