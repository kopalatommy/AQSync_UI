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
    explicit settings405(QWidget *parent = nullptr);
    void on_AdaptiveFilter_clicked();
    ~settings405();

private slots:
    void on_Mode_2_clicked();

private:
    Ui::settings405 *ui;
};

#endif // SETTINGS405_H
