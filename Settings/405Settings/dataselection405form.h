#ifndef DATASELECTION405FORM_H
#define DATASELECTION405FORM_H

#include <QDialog>

namespace Ui {
class dataselection405form;
}

class dataselection405form : public QDialog
{
    Q_OBJECT

public:
    explicit dataselection405form(QWidget *parent = 0);
    ~dataselection405form();

private:
    Ui::dataselection405form *ui;
};

#endif // DATASELECTION405FORM_H
