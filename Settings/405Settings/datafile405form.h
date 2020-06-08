#ifndef DATAFILE405FORM_H
#define DATAFILE405FORM_H

#include <QDialog>

namespace Ui {
class datafile405form;
}

class datafile405form : public QDialog
{
    Q_OBJECT

public:
    explicit datafile405form(QWidget *parent = 0);
    ~datafile405form();

private:
    Ui::datafile405form *ui;
};

#endif // DATAFILE405FORM_H
