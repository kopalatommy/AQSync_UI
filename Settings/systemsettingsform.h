#ifndef SYSTEMSETTINGSFORM_H
#define SYSTEMSETTINGSFORM_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QProcess>
#include <QFile>
#include <QDir>

#include "aqsyncsettings.h"
#include "aqsyncdata.h"

#define CREATE_EVERY_DAY_MARKER 'A'

namespace Ui {
class SystemSettingsForm;
}

class SystemSettingsForm : public QWidget
{
    Q_OBJECT

public:
    explicit SystemSettingsForm(QWidget *parent = nullptr);
    ~SystemSettingsForm();

    void GetUsedSpace();

    void GetRemoteVer();
    void UpdateUI();

signals:
    void CloseForms();
    void MoveLeft();
    void MoveRight();

private slots:
    void on_closeButton_clicked();

    void on_moveRightButton_clicked();

    void on_moveLeftButton_clicked();

    void on_applyButton_clicked();

    void on_cleanLogs_clicked();

    void OnCleanExit(int code);
    void OnGetUsedSpaceExit(int code);
    void OnGetRemoteVerExit(int code);
    void OnUpdateExit(int code);

    void OnMessageBoxFinished(int code);

private:
    Ui::SystemSettingsForm *ui;

    bool createFileEveryDay = false;

    void showEvent(QShowEvent * event);

    void ReadSettingsFile();
    void WriteSettingsFile();
};

#endif // SYSTEMSETTINGSFORM_H
