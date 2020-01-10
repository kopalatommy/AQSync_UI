#ifndef NO2CALFORM_H
#define NO2CALFORM_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>

#include "numberpadform.h"
#include "Modbus/modbushandler.h"
#include "aqsyncsettings.h"

namespace Ui {
class NO2CalForm;
}

class NO2CalForm : public QWidget
{
    Q_OBJECT

public:
    explicit NO2CalForm(QWidget *parent = nullptr);
    ~NO2CalForm();

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

    void OnMessageBoxExited(int code);

private:
    Ui::NO2CalForm *ui;

    bool ignoreGrab = false;

    float slope = 0;
    float zero = 0;

    void UpdateUI();
    void showEvent(QShowEvent * event);
};

#endif // NO2CALFORM_H
