#ifndef CALIBRATION880NM_H
#define CALIBRATION880NM_H

#include <QMessageBox>
#include <QWidget>
#include <QDebug>
#include <QtMath>

#include "Settings/settingformshandler.h"
#include "DataHandlers/settingshandler.h"
#include "numberpadform.h"
#include "Communication/bcpserialhandler.h"

namespace Ui {
class Calibration880nm;
}

class Calibration880nm : public QDialog
{
    Q_OBJECT

public:
    explicit Calibration880nm(QWidget *parent = 0);
    ~Calibration880nm();

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

    //void on_massExtMask_clicked();

private:
    Ui::Calibration880nm *ui;

    float slope = 0;
    float zero = 0;
    float massExt = 0;
    int analog = 0;

    int OnExit();

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // CALIBRATION880NM_H
