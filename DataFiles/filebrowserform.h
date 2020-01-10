#ifndef FILEBROWSERFORM_H
#define FILEBROWSERFORM_H

#include <QWidget>
#include <QDir>
#include <QFile>
#include <QDebug>

#define FILE_FOLDER "/home/2b/2BTouchLogs/"

namespace Ui {
class FileBrowserForm;
}

class FileBrowserForm : public QWidget
{
    Q_OBJECT

public:
    explicit FileBrowserForm(QWidget *parent = nullptr);
    ~FileBrowserForm();

signals:
    void SelectedFile(QString fileName);

private slots:
    void on_Cancel_clicked();

    void on_Confirm_clicked();

private:
    Ui::FileBrowserForm *ui;

    void UpdateUI();

    void showEvent(QShowEvent * event);
};

#endif // FILEBROWSERFORM_H
