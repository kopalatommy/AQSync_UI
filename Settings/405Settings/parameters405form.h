#ifndef PARAMETERS405FORM_H
#define PARAMETERS405FORM_H

#include <QDialog>

namespace Ui {
class parameters405form;
}

class parameters405form : public QDialog
{
    Q_OBJECT

public:
    explicit parameters405form(QWidget *parent = 0);
    ~parameters405form();

private slots:
    void on_right_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::parameters405form *ui;
};

#endif // PARAMETERS405FORM_H
