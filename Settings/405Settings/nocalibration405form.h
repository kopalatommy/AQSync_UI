#ifndef NOCALIBRATION405FORM_H
#define NOCALIBRATION405FORM_H

#include <QDialog>

namespace Ui {
class NOCalibration405form;
}

class NOCalibration405form : public QDialog
{
    Q_OBJECT

public:
    explicit NOCalibration405form(QWidget *parent = 0);
    ~NOCalibration405form();

private slots:
    void on_Left_clicked();

    void on_Right_clicked();

    void on_Home_clicked();

private:
    Ui::NOCalibration405form *ui;
};

#endif // NOCALIBRATION405FORM_H
