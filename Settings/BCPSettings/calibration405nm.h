#ifndef CALIBRATION405NM_H
#define CALIBRATION405NM_H

#include <QDialog>
#include <QMessageBox>
#include <QWidget>
#include <QDebug>

#include "Settings/settingformshandler.h"
#include "DataHandlers/settingshandler.h"
#include "numberpadform.h"
#include "Communication/serialhandler405.h"

namespace Ui {
class calibration405nm;
}

class calibration405nm : public QDialog
{
    Q_OBJECT

public:
    explicit calibration405nm(QWidget *parent = 0);
    ~calibration405nm();

private slots:
    void on_Left_clicked();
    void on_Right_clicked();
    void on_Home_clicked();
    void on_Save_clicked();

    void on_slopeMask_clicked();
    void on_zeroMask_clicked();
    void on_MassExtMask_clicked();
    void on_AnalogMask_clicked();

    void newSlope(float val);
    void newZero(float val);
    void NewMassExt(float val);
    void newAnalog(int val);

    void updateLocalUI();
    void GetNewSettings();


    void on_massExtMask_clicked();

private:
    Ui::calibration405nm *ui;

    float slope = 0;
    float zero = 0;
    float massExt = 0;
    int analog = 0;

    int OnExit();

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // CALIBRATION405NM_H
