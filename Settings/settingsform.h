#ifndef SETTINGSFORM_H
#define SETTINGSFORM_H

#include <QWidget>

#define SETTINGS_FORM_INDEX 0
#define AVG_INDEX 1
#define MODE_INDEX 2
#define ADAPTIVE_FILTER_INDEX 3
#define BC_CAL_FACTORS_INDEX 4
#define PM_CAL_FACTORS_INDEX 5
#define NO_CAL_FACTORS_INDEX 6
#define NO2_CAL_FACTORS_INDEX 7
#define FLOW_CAL_FACTORS_INDEX 8
#define MODBUS_FORM_INDEX 9
#define STATIC_IP_FORM_INDEX 10
#define DATA_FILES_FORM_INDEX 11
#define SYSTEM_SETTINGS_INDEX 12
#define ABOUT_INDEX 13

namespace Ui {
class SettingsForm;
}

class SettingsForm : public QWidget
{
    Q_OBJECT

public:
    explicit SettingsForm(QWidget *parent = nullptr);
    ~SettingsForm();

signals:
    void MoveLeft();
    void MoveRight();
    void CloseForms();

    void JumpToIndex(int index);

private slots:
    void on_avgButton_clicked();

    void on_modeButton_clicked();

    void on_adaptiveFilterButton_clicked();

    void on_bcCalButton_clicked();

    void on_pmCalFactors_clicked();

    void on_noCalButton_clicked();

    void on_flowCalButton_clicked();

    void on_no2CalButton_clicked();

    void on_modbusButton_clicked();

    void on_staticIPButton_clicked();

    void on_systemSettingsButton_clicked();

    void on_aboutButton_clicked();

    void on_moveRightButton_clicked();

    void on_moveLeftButton_clicked();

    void on_closeButton_clicked();

    void on_dataFilesButton_clicked();

private:
    Ui::SettingsForm *ui;
};

#endif // SETTINGSFORM_H
