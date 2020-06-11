#ifndef FLOWCALIBRATION405FORM_H
#define FLOWCALIBRATION405FORM_H

#include <QMessageBox>
#include <QDialog>
#include "Settings/settingformshandler.h"
#include "DataHandlers/settingshandler.h"
#include "numberpadform.h"
#include "Communication/serialhandler405.h"


namespace Ui {
class flowcalibration405form;
}

class flowcalibration405form : public QWidget
{
    Q_OBJECT

public:
    explicit flowcalibration405form(QWidget *parent = 0);
    ~flowcalibration405form();

    static bool isEnabled;

public slots:
    void NewCellFlowSlope(float s);
    void NewOzoneFlowSlope(float s);

    void UpdateLocalUI();
    void GetNewSettings();

private slots:
    void on_Previous_clicked();
    void on_Next_clicked();
    void on_home_clicked();
    void on_CellSlopeMask_clicked();
    void on_OzoneSlopeMask_clicked();
    void on_Save_clicked();

private:
    Ui::flowcalibration405form *ui;

    float cellFlowSlope = 0;
    float ozoneFlowSlope = 0;

    bool dontGrab = false;

    bool OnExit();

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // FLOWCALIBRATION405FORM_H
