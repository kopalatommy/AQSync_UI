#ifndef AUTOZEROBCP_H
#define AUTOZEROBCP_H

#include <QDialog>

namespace Ui {
class AutoZeroBCP;
}

class AutoZeroBCP : public QDialog
{
    Q_OBJECT

public:
    explicit AutoZeroBCP(QWidget *parent = 0);
    ~AutoZeroBCP();

private slots:
    void on_Left_clicked();

    void on_Right_clicked();

    void on_Home_clicked();

private:
    Ui::AutoZeroBCP *ui;
};

#endif // AUTOZEROBCP_H
