#ifndef FLOWCALFORM_H
#define FLOWCALFORM_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>

#include "aqsyncsettings.h"
#include "numberpadform.h"
#include "Modbus/modbushandler.h"

namespace Ui {
class FlowCalForm;
}

class FlowCalForm : public QWidget
{
    Q_OBJECT

public:
    explicit FlowCalForm(QWidget *parent = nullptr);
    ~FlowCalForm();

signals:
    void CloseForms();
    void MoveLeft();
    void MoveRight();

private slots:
    void on_closeButton_clicked();

    void on_moveRightButton_clicked();

    void on_moveLeftButton_clicked();

    void on_slopeMask_clicked();
    void NewSlope(float val);

    void on_zeroMask_clicked();
    void NewZero(float val);

    void on_saveButton_clicked();

    void OnMessageBoxFinished(int code);

    void on_cellFlowMask_clicked();
    void NewCellFlow(float valS);

    void on_ozoneFlowMask_clicked();
    void NewOzoneFlow(float val);

private:
    Ui::FlowCalForm *ui;

    bool ignoreGrab = false;

    float slope = 0;
    float zero = 0;
    float cell = 0;
    float ozone = 0;

    void UpdateUI();
    void showEvent(QShowEvent * event);
};

#endif // FLOWCALFORM_H
