#ifndef MODBUSFORM_H
#define MODBUSFORM_H

#include <QWidget>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QProcess>

#include "modbustestform.h"
#include "numberpadform.h"

#define DEVICE_PORT_MARKER 'A'
#define DEVICE_ID_MARKER 'B'
#define TARGET_IP_MARKER 'C'
#define TARGET_PORT_MARKER 'D'
#define TARGET_ID_MARKER 'E'

namespace Ui {
class ModbusForm;
}

class ModbusForm : public QWidget
{
    Q_OBJECT

public:
    explicit ModbusForm(QWidget *parent = nullptr);
    ~ModbusForm();

signals:
    void MoveLeft();
    void MoveRight();
    void CloseForms();

private slots:
    void on_testButton_clicked();

    void OnGetIPExit(int exitCode);

    void on_ThisIPMask_clicked();

    void on_ThisPortMask_clicked();
    void NewDevicePort(int val);

    void on_ThisIDMask_clicked();
    void NewDeviceID(int val);

    void on_RemoteIPMask_clicked();
    void NewTargetIP(QString val);

    void on_RemotePortMask_clicked();
    void NewTargetPort(int val);

    void on_RemoteIDMask_clicked();
    void NewTargetID(int val);

    void on_UpdateInfoButton_clicked();

    void on_connectionButton_clicked();

    void on_closeButton_clicked();

    void on_moveRightButton_clicked();

    void on_moveLeftButton_clicked();

private:
    Ui::ModbusForm *ui;

    ModbusTestForm testForm;

    QString deviceIPAddress = "127.0.0.1";
    unsigned short devicePort = 50200;
    char deviceID = 0;
    QString targetIPAddress = "127.0.0.1";
    unsigned short targetPort = 50200;
    char targetID = 0;

    void ReadSettingsFile();
    void WriteSettingsFile();
    void GetDeviceIP();
    void UpdateUI();

    void showEvent(QShowEvent * event);
};

#endif // MODBUSFORM_H
