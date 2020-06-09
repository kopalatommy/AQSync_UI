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

private:
    Ui::adaptivefilterBCPform *ui;
};

#endif // ADAPTIVEFILTERBCPFORM_H
