#ifndef ADAPTIVEFILTERBCPFORM_H
#define ADAPTIVEFILTERBCPFORM_H

#include <QWidget>

#include "Settings/settingformshandler.h"

namespace Ui {
class AdaptiveFilterBCPForm;
}

class AdaptiveFilterBCPForm : public QWidget
{
    Q_OBJECT

public:
    explicit AdaptiveFilterBCPForm(QWidget *parent = nullptr);
    ~AdaptiveFilterBCPForm();

private slots:
    void on_Left_clicked();

    void on_Right_clicked();

    void on_Home_clicked();

private:
    Ui::AdaptiveFilterBCPForm *ui;
};

#endif // ADAPTIVEFILTERBCPFORM_H
