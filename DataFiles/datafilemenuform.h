#ifndef DATAFILEMENUFORM_H
#define DATAFILEMENUFORM_H

#include <QWidget>

namespace Ui {
class DataFileMenuForm;
}

class DataFileMenuForm : public QWidget
{
    Q_OBJECT

public:
    explicit DataFileMenuForm(QWidget *parent = nullptr);
    ~DataFileMenuForm();

signals:
    void SelectCurrent();
    void SelectAll();
    void Browse();

private slots:
    void on_SelectCurrent_clicked();
    void on_SelectAll_clicked();
    void on_Browse_clicked();
    void on_Cancel_clicked();

private:
    Ui::DataFileMenuForm *ui;
};

#endif // DATAFILEMENUFORM_H
