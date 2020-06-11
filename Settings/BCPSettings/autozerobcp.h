#ifndef AUTOZEROBCP_H
#define AUTOZEROBCP_H

#include <QMessageBox>
#include <QWidget>
#include <QDebug>

#include "Settings/settingformshandler.h"
#include "DataHandlers/settingshandler.h"
#include "numberpadform.h"
#include "Communication/serialhandler405.h"

namespace Ui {
class AutoZeroBCP;
}

class AutoZeroBCP : public QDialog
{
    Q_OBJECT

public:
    explicit AutoZeroBCP(QWidget *parent = 0);
    ~AutoZeroBCP();

    static bool isEnabled;

private slots:
    void on_Left_clicked();
    void on_Right_clicked();
    void on_Home_clicked();

    void on_zeroingFrequenctMask_clicked();
    void on_zeroPeriodMask_clicked();

    void newFrequency(int val);
    void newPeriod(unsigned char val);

    void GetNewSettings();


private:
    Ui::AutoZeroBCP *ui;

    int freq = 0;
    unsigned char per = 0;

    void UpdateUI();

    int OnExit();

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // AUTOZEROBCP_H
