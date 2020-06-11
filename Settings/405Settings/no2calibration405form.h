#ifndef NO2CALIBRATION405FORM_H
#define NO2CALIBRATION405FORM_H

#include <QWidget>

#include "numberpadform.h"
#include "Settings/settingformshandler.h"

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

private:
    Ui::NO2Calibration405Form *ui;
};

#endif // NO2CALIBRATION405FORM_H
