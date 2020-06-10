#ifndef ADAPTIVEFILTER405FORM_H
#define ADAPTIVEFILTER405FORM_H


#include <QMessageBox>
#include <QDialog>
#include "Settings/settingformshandler.h"
#include "DataHandlers/settingshandler.h"
#include "numberpadform.h"
#include "Communication/communicationhandler.h"

namespace Ui {
class adaptivefilter405form;
}

class adaptivefilter405form : public QDialog
{
    Q_OBJECT

public:
    explicit adaptivefilter405form(QWidget *parent = 0);
    ~adaptivefilter405form();

    static bool isEnabled;

private slots:
    void on_Left_clicked();
    void on_Right_clicked();
    void on_Home_clicked();
    void on_save_clicked();

    void on_shortMask_clicked();
    void NewShort(unsigned char);

    void on_longMask_clicked();
    void NewLong(unsigned char);

    void on_percentMask_clicked();
    void NewPercent(unsigned char);

    void on_differnceMask_clicked();
    void NewDifference(unsigned char);


    void UpdateLocalUI();
    void GetNewSettings();

private:
    Ui::adaptivefilter405form *ui;

    unsigned char shortLength = 0;
    unsigned char longLength = 0;
    unsigned char difference = 0;
    unsigned char percent = 0;

    bool dontGrab = false;

    int OnExit();

    void showEvent(QShowEvent * event);

};

#endif // ADAPTIVEFILTER405FORM_H
