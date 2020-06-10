#ifndef AVGSETTINGFORM_H
#define AVGSETTINGFORM_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>

#include "Modbus/modbushandler.h"

namespace Ui {
class AvgSettingForm;
}

class AvgSettingForm : public QWidget
{
    Q_OBJECT

public:
    explicit AvgSettingForm(QWidget *parent = nullptr);
    ~AvgSettingForm();

signals:
    void CloseForms();
    void MoveLeft();
    void MoveRight();

private slots:
    void on_closeButton_clicked();

    void on_moveRightButton_clicked();

    void on_moveLeftButton_clicked();

    void on_saveButton_clicked();

    void OnMessageBoxFinish(int code);

private:
    Ui::AvgSettingForm *ui;

    void showEvent(QShowEvent * event);
};

#endif // AVGSETTINGFORM_H
