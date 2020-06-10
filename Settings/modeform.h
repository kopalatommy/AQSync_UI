#ifndef MODEFORM_H
#define MODEFORM_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>

#include "Modbus/modbushandler.h"

namespace Ui {
class ModeForm;
}

class ModeForm : public QWidget
{
    Q_OBJECT

public:
    explicit ModeForm(QWidget *parent = nullptr);
    ~ModeForm();

signals:
    void CloseForms();
    void MoveLeft();
    void MoveRight();

private slots:
    void on_closeButton_clicked();

    void on_moveRightButton_clicked();

    void on_moveLeftButton_clicked();

    void on_saveButton_clicked();

    void OnMessageBoxFinished(int code);

private:
    Ui::ModeForm *ui;

    void showEvent(QShowEvent * event);
};

#endif // MODEFORM_H
