#ifndef CALIBRATION880NM_H
#define CALIBRATION880NM_H

#include <QDialog>

namespace Ui {
class Calibration880nm;
}

class Calibration880nm : public QDialog
{
    Q_OBJECT

public:
    explicit Calibration880nm(QWidget *parent = 0);
    ~Calibration880nm();

private:
    Ui::Calibration880nm *ui;
};

#endif // CALIBRATION880NM_H
