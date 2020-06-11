/********************************************************************************
** Form generated from reading UI file 'datafilesform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAFILESFORM_H
#define UI_DATAFILESFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataFilesForm
{
public:
    QPushButton *moveRightButton;
    QPushButton *closeButton;
    QLabel *Title;
    QPushButton *moveLeftButton;
    QLabel *usbStatus;
    QPushButton *refreshButton;
    QPushButton *deleteButton;
    QPushButton *selectButton;
    QPushButton *saveButton;
    QLabel *currentFileLabel;
    QLabel *selectedFileLabel;

    void setupUi(QWidget *DataFilesForm)
    {
        if (DataFilesForm->objectName().isEmpty())
            DataFilesForm->setObjectName(QString::fromUtf8("DataFilesForm"));
        DataFilesForm->resize(800, 480);
        DataFilesForm->setMinimumSize(QSize(800, 480));
        DataFilesForm->setMaximumSize(QSize(800, 480));
        moveRightButton = new QPushButton(DataFilesForm);
        moveRightButton->setObjectName(QString::fromUtf8("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        closeButton = new QPushButton(DataFilesForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font;
        font.setPointSize(15);
        closeButton->setFont(font);
        Title = new QLabel(DataFilesForm);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(0, 20, 801, 61));
        QFont font1;
        font1.setPointSize(20);
        font1.setKerning(true);
        Title->setFont(font1);
        Title->setAlignment(Qt::AlignCenter);
        moveLeftButton = new QPushButton(DataFilesForm);
        moveLeftButton->setObjectName(QString::fromUtf8("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        usbStatus = new QLabel(DataFilesForm);
        usbStatus->setObjectName(QString::fromUtf8("usbStatus"));
        usbStatus->setGeometry(QRect(110, 120, 301, 31));
        QFont font2;
        font2.setPointSize(12);
        usbStatus->setFont(font2);
        refreshButton = new QPushButton(DataFilesForm);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setGeometry(QRect(490, 100, 131, 41));
        refreshButton->setFont(font);
        deleteButton = new QPushButton(DataFilesForm);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(90, 420, 150, 50));
        deleteButton->setFont(font);
        selectButton = new QPushButton(DataFilesForm);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(330, 420, 150, 50));
        selectButton->setFont(font);
        saveButton = new QPushButton(DataFilesForm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(560, 420, 150, 50));
        saveButton->setFont(font);
        currentFileLabel = new QLabel(DataFilesForm);
        currentFileLabel->setObjectName(QString::fromUtf8("currentFileLabel"));
        currentFileLabel->setGeometry(QRect(100, 180, 611, 51));
        currentFileLabel->setFont(font);
        selectedFileLabel = new QLabel(DataFilesForm);
        selectedFileLabel->setObjectName(QString::fromUtf8("selectedFileLabel"));
        selectedFileLabel->setGeometry(QRect(100, 260, 611, 51));
        selectedFileLabel->setFont(font);
        Title->raise();
        moveRightButton->raise();
        closeButton->raise();
        moveLeftButton->raise();
        usbStatus->raise();
        refreshButton->raise();
        deleteButton->raise();
        selectButton->raise();
        saveButton->raise();
        currentFileLabel->raise();
        selectedFileLabel->raise();

        retranslateUi(DataFilesForm);

        QMetaObject::connectSlotsByName(DataFilesForm);
    } // setupUi

    void retranslateUi(QWidget *DataFilesForm)
    {
        DataFilesForm->setWindowTitle(QApplication::translate("DataFilesForm", "Form", nullptr));
        moveRightButton->setText(QApplication::translate("DataFilesForm", "->", nullptr));
        closeButton->setText(QApplication::translate("DataFilesForm", "Back", nullptr));
        Title->setText(QApplication::translate("DataFilesForm", "Data Files", nullptr));
        moveLeftButton->setText(QApplication::translate("DataFilesForm", "<-", nullptr));
        usbStatus->setText(QApplication::translate("DataFilesForm", "USB Connected: Not Connected", nullptr));
        refreshButton->setText(QApplication::translate("DataFilesForm", "Refresh", nullptr));
        deleteButton->setText(QApplication::translate("DataFilesForm", "Delete", nullptr));
        selectButton->setText(QApplication::translate("DataFilesForm", "Select", nullptr));
        saveButton->setText(QApplication::translate("DataFilesForm", "Save", nullptr));
        currentFileLabel->setText(QApplication::translate("DataFilesForm", "Current Data File: Not Selected", nullptr));
        selectedFileLabel->setText(QApplication::translate("DataFilesForm", "Selected Data File: Not selected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataFilesForm: public Ui_DataFilesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAFILESFORM_H
