#ifndef FLOWCALIBRATIONBCPFORM_H
#define FLOWCALIBRATIONBCPFORM_H

#include <QWidget>

#include "Settings/settingformshandler.h"

namespace Ui {
class FlowCalibrationBCPForm;
}

class FlowCalibrationBCPForm : public QWidget
{
    Q_OBJECT

public:
    explicit FlowCalibrationBCPForm(QWidget *parent = nullptr);
    ~FlowCalibrationBCPForm();

private slots:
    void on_Left_clicked();

    void on_Right_clicked();

    void on_Home_clicked();

private:
    Ui::FlowCalibrationBCPForm *ui;
};

#endif // FLOWCALIBRATIONBCPFORM_H
