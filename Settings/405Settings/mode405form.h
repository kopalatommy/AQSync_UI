#ifndef MODE405FORM_H
#define MODE405FORM_H

#include <QDialog>

namespace Ui {
class Mode405form;
}

class Mode405form : public QDialog
{
    Q_OBJECT

public:
    explicit Mode405form(QWidget *parent = 0);
    ~Mode405form();

private slots:
    void on_Left_clicked();

    void on_Right_clicked();

    void on_Home_clicked();

private:
    Ui::Mode405form *ui;
};

#endif // MODE405FORM_H
