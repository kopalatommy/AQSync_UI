#ifndef NOCALFORM_H
#define NOCALFORM_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>

#include "numberpadform.h"
#include "aqsyncsettings.h"
#include "Modbus/modbushandler.h"

namespace Ui {
class NOCalForm;
}

class NOCalForm : public QWidget
{
    Q_OBJECT

public:
    explicit NOCalForm(QWidget *parent = nullptr);
    ~NOCalForm();

signals:
    void CloseForms();
    void MoveLeft();
    void MoveRight();

private slots:
    void on_closeButton_clicked();

    void on_moveRightButton_clicked();

    void on_moveLeftButton_clicked();

    void on_slopeMask_clicked();
    void NewSLope(float val);

    void on_zeroMask_clicked();
    void NewZero(float val);

    void on_saveButton_clicked();

    void OnMessageBoxFinished(int code);

private:
    Ui::NOCalForm *ui;

    bool ignoreGrab = false;

    float slope = 0;
    float zero = 0;

    void showEvent(QShowEvent * event);
    void UpdateUI();
};

#endif // NOCALFORM_H
