#ifndef CALIBRATION405NM_H
#define CALIBRATION405NM_H

#include <QDialog>

namespace Ui {
class calibration405nm;
}

class calibration405nm : public QDialog
{
    Q_OBJECT

public:
    explicit calibration405nm(QWidget *parent = 0);
    ~calibration405nm();

private:
    Ui::calibration405nm *ui;
};

#endif // CALIBRATION405NM_H
