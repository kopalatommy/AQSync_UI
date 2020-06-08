#ifndef NO2CALIBRATION405FORM_H
#define NO2CALIBRATION405FORM_H

#include <QDialog>

namespace Ui {
class no2calibration405form;
}

class no2calibration405form : public QDialog
{
    Q_OBJECT

public:
    explicit no2calibration405form(QWidget *parent = 0);
    ~no2calibration405form();

private:
    Ui::no2calibration405form *ui;
};

#endif // NO2CALIBRATION405FORM_H
