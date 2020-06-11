#ifndef ADAPTIVEFILTER405FORM_H
#define ADAPTIVEFILTER405FORM_H

#include <QMessageBox>
#include <QWidget>
#include <QDebug>

#include "Settings/settingformshandler.h"
#include "DataHandlers/settingshandler.h"
#include "numberpadform.h"
#include "Communication/serialhandler405.h"

namespace Ui {
class AdaptiveFilter405Form;
}

class AdaptiveFilter405Form : public QWidget
{
    Q_OBJECT

public:
    explicit AdaptiveFilter405Form(QWidget *parent = nullptr);
    ~AdaptiveFilter405Form();

    static bool isEnabled;

private slots:
    void on_Left_clicked();
    void on_Right_clicked();
    void on_Home_clicked();
    void on_save_clicked();

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
    Ui::AdaptiveFilter405Form *ui;

    unsigned char shortLength = 0;
    unsigned char longLength = 0;
    unsigned char difference = 0;
    unsigned char percent = 0;

    int OnExit();

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // ADAPTIVEFILTER405FORM_H
