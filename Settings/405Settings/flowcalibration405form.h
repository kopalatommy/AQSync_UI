#ifndef FLOWCALIBRATION405FORM_H
#define FLOWCALIBRATION405FORM_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
#include <QtMath>

#include "Communication/serialhandler405.h"
#include "Settings/settingformshandler.h"
#include "numberpadform.h"

namespace Ui {
class FlowCalibration405Form;
}

class FlowCalibration405Form : public QWidget
{
    Q_OBJECT

public:
    explicit FlowCalibration405Form(QWidget *parent = nullptr);
    ~FlowCalibration405Form();

    static bool isEnabled;

public slots:
    void NewCellFlowSlope(float s);
    void NewOzoneFlowSlope(float s);

    void UpdateLocalUI();
    void GetNewSettings();

private slots:
    void on_Previous_clicked();
    void on_Next_clicked();
    void on_Home_clicked();
    void on_CellSlopeMask_clicked();
    void on_OzoneSlopeMask_clicked();
    void on_Save_clicked();

private:
    Ui::FlowCalibration405Form *ui;

    float cellFlowSlope = 0;
    float ozoneFlowSlope = 0;

    bool dontGrab = false;

    bool OnExit();

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // FLOWCALIBRATION405FORM_H
