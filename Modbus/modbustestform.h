#ifndef MODBUSTESTFORM_H
#define MODBUSTESTFORM_H

#include <QWidget>
#include <QDebug>
#include <QTimer>

#include "modbushandler.h"

namespace Ui {
class ModbusTestForm;
}

class ModbusTestForm : public QWidget
{
    Q_OBJECT

public:
    explicit ModbusTestForm(QWidget *parent = nullptr);
    ~ModbusTestForm();

private slots:
    void on_refreshButton_clicked();

    void on_closeButton_clicked();

    void UpdateUI();

private:
    Ui::ModbusTestForm *ui;

    bool displaying = false;

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // MODBUSTESTFORM_H
