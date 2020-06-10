#ifndef SETTINGS405_H
#define SETTINGS405_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class settings405;
}

class settings405 : public QDialog
{
    Q_OBJECT

public:
    explicit settings405(QWidget *parent = 0);
    void on_AdaptiveFilter_clicked();
    ~settings405();

private:
    Ui::settings405 *ui;
};

#endif // SETTINGS405_H
