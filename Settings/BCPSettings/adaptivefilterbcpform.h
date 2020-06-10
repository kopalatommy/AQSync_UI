#ifndef ADAPTIVEFILTERBCPFORM_H
#define ADAPTIVEFILTERBCPFORM_H

#include <QDialog>

namespace Ui {
class adaptivefilterBCPform;
}

class adaptivefilterBCPform : public QDialog
{
    Q_OBJECT

public:
    explicit adaptivefilterBCPform(QWidget *parent = 0);
    ~adaptivefilterBCPform();

private slots:
    void on_Left_clicked();

    void on_Right_clicked();

    void on_Home_clicked();

private:
    Ui::adaptivefilterBCPform *ui;
};

#endif // ADAPTIVEFILTERBCPFORM_H
