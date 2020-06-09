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

private:
    Ui::AutoZeroBCP *ui;
};

#endif // AUTOZEROBCP_H
