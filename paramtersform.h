#ifndef PARAMTERSFORM_H
#define PARAMTERSFORM_H

#include <QWidget>
#include <QDebug>

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

private:
    Ui::ParamtersForm *ui;

    bool viewing = false;

    bool showingBCP = true;

    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
};

#endif // PARAMTERSFORM_H
