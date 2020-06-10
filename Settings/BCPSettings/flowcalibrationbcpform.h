#ifndef FLOWCALIBRATIONBCPFORM_H
#define FLOWCALIBRATIONBCPFORM_H

#include <QDialog>

namespace Ui {
class flowcalibrationBCPform;
}

class flowcalibrationBCPform : public QDialog
{
    Q_OBJECT

public:
    explicit flowcalibrationBCPform(QWidget *parent = 0);
    ~flowcalibrationBCPform();

private slots:
    void on_Left_clicked();

    void on_Right_clicked();

    void on_Home_clicked();

private:
    Ui::flowcalibrationBCPform *ui;
};

#endif // FLOWCALIBRATIONBCPFORM_H
