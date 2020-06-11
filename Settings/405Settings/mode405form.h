#ifndef MODE405FORM_H
#define MODE405FORM_H

#include <QWidget>
#include <QMessageBox>

#include "Settings/settingformshandler.h"
#include "DataHandlers/settingshandler.h"
#include "Communication/serialhandler405.h"

namespace Ui {
class Mode405Form;
}

class Mode405Form : public QWidget
{
    Q_OBJECT

public:
    explicit Mode405Form(QWidget *parent = nullptr);
    ~Mode405Form();

private slots:
    void on_Left_clicked();

    void on_Right_clicked();

    void on_Home_clicked();

    void on_Save_clicked();

private:
    Ui::Mode405Form *ui;

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // MODE405FORM_H
