#ifndef STATICIPFORM_H
#define STATICIPFORM_H

#include <QWidget>
#include <QProcess>

#include "numberpadform.h"

#define IPFileLocation "/home/2b/StaticIPSettings.txt"
#define IPFileLocation_test "StaticIPSettings.txt"

namespace Ui {
class StaticIPForm;
}

class StaticIPForm : public QWidget
{
    Q_OBJECT

public:
    explicit StaticIPForm(QWidget *parent = nullptr);
    ~StaticIPForm();

signals:
    void CloseForms();
    void MoveLeft();
    void MoveRight();

private slots:
    void on_IPMask_clicked();
    void NewIP(QString newIP);

    void on_GatewayMask_clicked();
    void NewGateway(QString newGateway);

    void on_SubnetMask_clicked();
    void NewSubnet(QString newSubnet);

    void on_applyButton_clicked();

    void OnProcessFinished(int exitCode);

    void on_closeButton_clicked();

    void on_moveRightButton_clicked();

    void on_moveLeftButton_clicked();

private:
    Ui::StaticIPForm *ui;

    //Local is new value, other is saved settings
    QString staticIP = "";
    QString localStaticIP = "";

    QString gateway = "";
    QString localGateway = "";

    QString subnet = "";
    QString localSubnet = "";

    bool isStatic = false;

    void UpdateUI();

    void ReadSettingsFile();
    void WriteSettingsFile();
};

#endif // STATICIPFORM_H
