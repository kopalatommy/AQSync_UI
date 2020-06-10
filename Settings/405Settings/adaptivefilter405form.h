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

private slots:
    void on_Left_clicked();

    void on_pushButton_clicked();

    void on_Right_clicked();

    void on_Home_clicked();

private:
    Ui::adaptivefilter405form *ui;
};

#endif // ADAPTIVEFILTER405FORM_H
