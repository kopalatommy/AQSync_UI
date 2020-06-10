#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "Communication/serialhandler405.h"
#include "Communication/bcpserialhandler.h"
#include "Modbus/modbustestform.h"
#include "Settings/settingformshandler.h"
#include "paramtersform.h"
#include "Settings/405Settings/settings405.h"

//Settings pages
#include "Settings/405Settings/settings405.h"
#include "Settings/BCPSettings/bcpsettings.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_settingsButton_clicked();

    void on_parametersButton_clicked();

    void on_graphButton_clicked();

    void on_modbusTestButton_clicked();

    void UpdateUI();

    void FinishedWarmingUp();

private:
    Ui::MainWindow *ui;

    //ModbusForm modbusForm;
    ModbusTestForm modbusTestForm;
    ParamtersForm parameters;

    QTimer updateTimer;

    bool startingUp = true;
    int uiIndex = 0;

    void CreateSettingPages();
};

#endif // MAINWINDOW_H
