#ifndef SETTINGS405_H
#define SETTINGS405_H

#include <QDialog>
#include <QDebug>

#include "Settings/settingformshandler.h"

namespace Ui {
class settings405;
}

class settings405 : public QDialog
{
    Q_OBJECT

public:
    explicit settings405(QWidget *parent = nullptr);
    ~settings405();

private slots:
    void on_Mode_2_clicked();

    void on_AdaptiveFilter_clicked();

    void on_NOCalibration_clicked();

    void on_FlowCalibration_clicked();

    void on_NO2Calibration_clicked();

    void on_Home_Button_clicked();

    void on_NextLeft_clicked();

    void on_NextRight_clicked();

private:
    Ui::settings405 *ui;
};

#endif // SETTINGS405_H
