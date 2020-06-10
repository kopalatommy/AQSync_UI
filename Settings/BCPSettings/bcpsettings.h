#ifndef BCPSETTINGS_H
#define BCPSETTINGS_H

#include <QDialog>

#include "Settings/settingformshandler.h"

namespace Ui {
class BCPSettings;
}

class BCPSettings : public QDialog
{
    Q_OBJECT

public:
    explicit BCPSettings(QWidget *parent = 0);
    ~BCPSettings();

private slots:
    void on_AdaptiveFilter_clicked();

    void on_cali880_clicked();

    void on_FlowCalibration_clicked();

    void on_Auto_Zero_clicked();

    void on_cali405_clicked();

    void on_TP_clicked();

    void on_NextLeft_clicked();

    void on_Home_Button_clicked();

private:
    Ui::BCPSettings *ui;
};

#endif // BCPSETTINGS_H
