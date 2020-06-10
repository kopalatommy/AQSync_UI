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

private slots:
    void on_Left_clicked();

    void on_Right_clicked();

    void on_Home_clicked();

private:
    Ui::calibration405nm *ui;
};

#endif // CALIBRATION405NM_H
