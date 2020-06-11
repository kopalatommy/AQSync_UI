#ifndef NOCALIBRATION405FORM_H
#define NOCALIBRATION405FORM_H

#include <QWidget>
#include <QMessageBox>

#include "Settings/settingformshandler.h"
#include "DataHandlers/settingshandler.h"
#include "numberpadform.h"
#include "Communication/serialhandler405.h"

namespace Ui {
class NOCalibration405form;
}

class NOCalibration405form : public QWidget
{
    Q_OBJECT

public:
    explicit NOCalibration405form(QWidget *parent = nullptr);
    ~NOCalibration405form();

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
    Ui::NOCalibration405form *ui;

    float slope = 0;
    float zero = 0;
    int analog = 0;

    bool dontGrab = false;

    int OnExit();
    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent *event);
};

#endif // NOCALIBRATION405FORM_H
