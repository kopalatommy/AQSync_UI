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

private:
    Ui::NOCalibration405form *ui;
};

#endif // NOCALIBRATION405FORM_H
