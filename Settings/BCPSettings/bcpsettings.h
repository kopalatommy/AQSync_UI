#ifndef BCPSETTINGS_H
#define BCPSETTINGS_H

#include <QDialog>

namespace Ui {
class BCPSettings;
}

class BCPSettings : public QDialog
{
    Q_OBJECT

public:
    explicit BCPSettings(QWidget *parent = 0);
    ~BCPSettings();

private:
    Ui::BCPSettings *ui;
};

#endif // BCPSETTINGS_H
