#ifndef BCCALFORM_H
#define BCCALFORM_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>

#include "Modbus/modbushandler.h"
#include "numberpadform.h"

namespace Ui {
class BCCalForm;
}

class BCCalForm : public QWidget
{
    Q_OBJECT

public:
    explicit BCCalForm(QWidget *parent = nullptr);
    ~BCCalForm();

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
    void NewMassExt(float val);

    void OnMessageBoxExit(int code);

private:
    Ui::BCCalForm *ui;

    bool ignoreGrab = false;

    float slope = 0;
    float zero = 0;
    float massExt = 0;

    void UpdateUI();
    void showEvent(QShowEvent * event);
};

#endif // BCCALFORM_H
