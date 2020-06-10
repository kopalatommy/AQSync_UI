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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::tpcorrectionsform *ui;
};

#endif // TPCORRECTIONSFORM_H
