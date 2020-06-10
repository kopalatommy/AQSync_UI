#ifndef FLOWCALIBRATION405FORM_H
#define FLOWCALIBRATION405FORM_H

#include <QDialog>

namespace Ui {
class flowcalibration405form;
}

class flowcalibration405form : public QDialog
{
    Q_OBJECT

public:
    explicit flowcalibration405form(QWidget *parent = 0);
    ~flowcalibration405form();

private slots:
    void on_Left_clicked();

    void on_Right_clicked();

    void on_Home_clicked();

private:
    Ui::flowcalibration405form *ui;
};

#endif // FLOWCALIBRATION405FORM_H
