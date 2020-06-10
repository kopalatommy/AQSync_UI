#ifndef ADAPTIVEFILTERFORM_H
#define ADAPTIVEFILTERFORM_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>

#include "numberpadform.h"
#include "Modbus/modbushandler.h"

namespace Ui {
class AdaptiveFilterForm;
}

class AdaptiveFilterForm : public QWidget
{
    Q_OBJECT

public:
    explicit AdaptiveFilterForm(QWidget *parent = nullptr);
    ~AdaptiveFilterForm();

signals:
    void CloseForms();
    void MoveRight();
    void MoveLeft();

private slots:
    void on_closeButton_clicked();

    void on_moveRightButton_clicked();

    void on_moveLeftButton_clicked();

    void on_shortMask_clicked();
    void NewShort(unsigned char val);

    void on_longMask_clicked();
    void NewLong(unsigned char val);

    void on_percentMask_clicked();
    void NewPercent(unsigned char val);

    void on_differenceMask_clicked();
    void NewDiff(unsigned char val);

    void on_saveButton_clicked();

    void OnMessageBoxExit(int code);

private:
    Ui::AdaptiveFilterForm *ui;

    unsigned char shortLength = 0;
    unsigned char longLength = 0;
    unsigned char difference = 0;
    unsigned char percent = 0;

    bool ignoreGrab = false;

    void UpdateUI();
    void showEvent(QShowEvent * event);
};

#endif // ADAPTIVEFILTERFORM_H
