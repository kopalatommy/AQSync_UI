#ifndef DATAFILESFORM_H
#define DATAFILESFORM_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QMovie>
#include <QProcess>

#include "DataFiles/datafilemenuform.h"
#include "DataFiles/filebrowserform.h"

#define FILE_FOLDER "/home/2b/2BTouchLogs/"
#define DEST_FOLDER "/media/usb/"


namespace Ui {
class DataFilesForm;
}

class DataFilesForm : public QWidget
{
    Q_OBJECT

public:
    explicit DataFilesForm(QWidget *parent = nullptr);
    ~DataFilesForm();

signals:
    void CloseForms();
    void MoveLeft();
    void MoveRight();

    void StartSave(QString fileLoc, QString fileDestination);
    void SaveAll(QString sourceDir, QStringList files, QString destDir);

private slots:
    void on_closeButton_clicked();

    void on_moveRightButton_clicked();

    void on_moveLeftButton_clicked();

    void on_refreshButton_clicked();

    void on_deleteButton_clicked();

    void on_selectButton_clicked();

    void on_saveButton_clicked();

    void SelectAll();
    void SelectCurrent();
    void Browse();

    void SelectedFile(QString fileName);

private:
    Ui::DataFilesForm *ui;

    bool savingFile = false;
    QString currentFile = "Not Set";
    QString selectedFile = "Not Set";

    QMovie loadingGIF;

    DataFileMenuForm menu;
    FileBrowserForm browser;

    void DeleteFile(QString pathToFile, bool askUser);

    bool IsUSBConnected();
    void UpdateUI();
    void showEvent(QShowEvent * event);

    void SetUpMenuForm();
    void SetUpBrowseForm();
};

#endif // DATAFILESFORM_H
