#ifndef FLOWCALIBRATIONBCPFORM_H
#define FLOWCALIBRATIONBCPFORM_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
#include <QtMath>

#include "Communication/bcpserialhandler.h"
#include "Settings/settingformshandler.h"
#include "numberpadform.h"

namespace Ui {
class FlowCalibrationBCPForm;
}

class FlowCalibrationBCPForm : public QWidget
{
    Q_OBJECT

public:
    explicit FlowCalibrationBCPForm(QWidget *parent = nullptr);
    ~FlowCalibrationBCPForm();

    void NewCellFlowSlope(float s);
    void NewOzoneFlowSlope(float s);

    void UpdateLocalUI();
    void GetNewSettings();

private slots:
    void on_Left_clicked();
    void on_Right_clicked();
    void on_Home_clicked();
    void on_CellSlopeMask_clicked();
    void on_OzoneSlopeMask_clicked();
    void on_Save_clicked();

private:
    Ui::FlowCalibrationBCPForm *ui;

    float cellFlowSlope = 0;
    float ozoneFlowSlope = 0;

    bool dontGrab = false;

    bool OnExit();

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // FLOWCALIBRATIONBCPFORM_H
