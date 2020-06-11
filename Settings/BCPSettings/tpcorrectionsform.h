#ifndef TPCORRECTIONSFORM_H
#define TPCORRECTIONSFORM_H

#include <QDialog>

namespace Ui {
class tpcorrectionsform;
}

class tpcorrectionsform : public QDialog
{
    Q_OBJECT

public:
    explicit tpcorrectionsform(QWidget *parent = 0);
    ~tpcorrectionsform();

private slots:
    void on_Left_clicked();
    void on_Right_clicked();
    void on_Home_clicked();



private:
    Ui::tpcorrectionsform *ui;
};

#endif // TPCORRECTIONSFORM_H
