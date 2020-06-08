#ifndef ADAPTIVEFILTER405FORM_H
#define ADAPTIVEFILTER405FORM_H

#include <QDialog>

namespace Ui {
class adaptivefilter405form;
}

class adaptivefilter405form : public QDialog
{
    Q_OBJECT

public:
    explicit adaptivefilter405form(QWidget *parent = 0);
    ~adaptivefilter405form();

private:
    Ui::adaptivefilter405form *ui;
};

#endif // ADAPTIVEFILTER405FORM_H
