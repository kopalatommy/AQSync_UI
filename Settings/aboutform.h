#ifndef ABOUTFORM_H
#define ABOUTFORM_H

#include <QWidget>
#include <QDebug>

#include "aqsyncsettings.h"

namespace Ui {
class AboutForm;
}

class AboutForm : public QWidget
{
    Q_OBJECT

public:
    explicit AboutForm(QWidget *parent = nullptr);
    ~AboutForm();

signals:
    void CloseForms();
    void MoveLeft();
    void MoveRight();

private slots:
    void on_closeButton_clicked();

    void on_moveRightButton_clicked();

    void on_moveLeftButton_clicked();

private:
    Ui::AboutForm *ui;
};

#endif // ABOUTFORM_H
