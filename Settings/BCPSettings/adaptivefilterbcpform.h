#ifndef ADAPTIVEFILTERBCPFORM_H
#define ADAPTIVEFILTERBCPFORM_H

#include <QMessageBox>
#include <QWidget>
#include <QDebug>

#include "Settings/settingformshandler.h"
#include "DataHandlers/settingshandler.h"
#include "numberpadform.h"
#include "Communication/bcpserialhandler.h"

namespace Ui {
class AdaptiveFilterBCPForm;
}

class AdaptiveFilterBCPForm : public QWidget
{
    Q_OBJECT

public:
    explicit AdaptiveFilterBCPForm(QWidget *parent = nullptr);
    ~AdaptiveFilterBCPForm();

    static bool isEnabled;

private slots:
    void on_Left_clicked();
    void on_Right_clicked();
    void on_Home_clicked();
    void on_Save_clicked();

    void on_shortMask_clicked();
    void NewShort(unsigned char val);

    void on_longMask_clicked();
    void NewLong(unsigned char val);

    void on_percentMask_clicked();
    void NewPercent(unsigned char val);

    void on_differenceMask_clicked();
    void NewDifference(unsigned char val);

    void UpdateLocalUI();
    void GetNewSettings();

private:
    Ui::AdaptiveFilterBCPForm *ui;

    unsigned char shortLength = 0;
    unsigned char longLength = 0;
    unsigned char difference = 0;
    unsigned char percent = 0;

    int OnExit();

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // ADAPTIVEFILTERBCPFORM_H
