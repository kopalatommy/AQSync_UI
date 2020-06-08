#ifndef DATAFILEMENU405FORM_H
#define DATAFILEMENU405FORM_H

#include <QDialog>

namespace Ui {
class datafilemenu405form;
}

class datafilemenu405form : public QDialog
{
    Q_OBJECT

public:
    explicit datafilemenu405form(QWidget *parent = 0);
    ~datafilemenu405form();

private:
    Ui::datafilemenu405form *ui;
};

#endif // DATAFILEMENU405FORM_H
