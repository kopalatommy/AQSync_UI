#ifndef NO2CALIBRATION405FORM_H
#define NO2CALIBRATION405FORM_H

#include <QWidget>
#include <QMessageBox>

#include "Settings/settingformshandler.h"
#include "DataHandlers/settingshandler.h"
#include "numberpadform.h"
#include "Communication/serialhandler405.h"

namespace Ui {
class NO2Calibration405Form;
}

class NO2Calibration405Form : public QWidget
{
    Q_OBJECT

public:
    explicit NO2Calibration405Form(QWidget *parent = nullptr);
    ~NO2Calibration405Form();

private slots:
    void on_Left_clicked();
    void on_Right_clicked();
    void on_Home_clicked();

    void UpdateLocalUI();

    void on_slopeMask_clicked();
    void NewSlope(float);

    void on_zeroMask_clicked();
    void NewZero(float);

    void on_AnalogMask_clicked();
    void NewAnalog(int);

    void on_Save_clicked();

    void GetNewSettings();


private:
    Ui::NO2Calibration405Form *ui;

    float slope = 0;
    float zero = 0;
    int analog = 0;

    bool dontGrab = false;

    int OnExit();
    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent *event);
};

#endif // NO2CALIBRATION405FORM_H
