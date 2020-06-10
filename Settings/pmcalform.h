#ifndef PMCALFORM_H
#define PMCALFORM_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>

#include "numberpadform.h"
#include "Modbus/modbushandler.h"

namespace Ui {
class PMCalForm;
}

class PMCalForm : public QWidget
{
    Q_OBJECT

public:
    explicit PMCalForm(QWidget *parent = nullptr);
    ~PMCalForm();

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

    void on_massExtMask_clicked();
    void NewMassExt(float);

    void OnMessageBoxFinished(int code);

private:
    bool ignoreGrab = false;

    float slope = 0;
    float zero = 0;
    float massExt = 0;

    void UpdateUI();
    void showEvent(QShowEvent * event);

    Ui::PMCalForm *ui;
};

#endif // PMCALFORM_H
