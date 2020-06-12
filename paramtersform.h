#ifndef PARAMTERSFORM_H
#define PARAMTERSFORM_H

#include <QWidget>
#include <QDebug>

#include "DataHandlers/datahandler405.h"
#include "DataHandlers/bcpdata.h"

#define PARAMETERS_BCP_INDEX 0
#define PARAMETERS_405_INDEX 1
#define PARAMETERS_108_INDEX 2

#define PARAMETERS_PAGES 3

namespace Ui {
class ParamtersForm;
}

class ParamtersForm : public QWidget
{
    Q_OBJECT

public:
    explicit ParamtersForm(QWidget *parent = nullptr);
    ~ParamtersForm();

public slots:
    void UpdateUI();

private slots:
    void on_closeButton_clicked();

    void on_leftButton_clicked();

    void on_rightButton_clicked();

private:
    Ui::ParamtersForm *ui;

    bool viewing = false;

    char showingIndex = 0;

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // PARAMTERSFORM_H
