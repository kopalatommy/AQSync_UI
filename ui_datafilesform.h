/********************************************************************************
** Form generated from reading UI file 'datafilesform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAFILESFORM_H
#define UI_DATAFILESFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            DataFilesForm->setObjectName(QStringLiteral("DataFilesForm"));
        DataFilesForm->resize(800, 480);
        DataFilesForm->setMinimumSize(QSize(800, 480));
        DataFilesForm->setMaximumSize(QSize(800, 480));
        moveRightButton = new QPushButton(DataFilesForm);
        moveRightButton->setObjectName(QStringLiteral("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        closeButton = new QPushButton(DataFilesForm);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font;
        font.setPointSize(15);
        closeButton->setFont(font);
        Title = new QLabel(DataFilesForm);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(0, 20, 801, 61));
        QFont font1;
        font1.setPointSize(20);
        font1.setKerning(true);
        Title->setFont(font1);
        Title->setAlignment(Qt::AlignCenter);
        moveLeftButton = new QPushButton(DataFilesForm);
        moveLeftButton->setObjectName(QStringLiteral("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        usbStatus = new QLabel(DataFilesForm);
        usbStatus->setObjectName(QStringLiteral("usbStatus"));
        usbStatus->setGeometry(QRect(110, 120, 301, 31));
        QFont font2;
        font2.setPointSize(12);
        usbStatus->setFont(font2);
        refreshButton = new QPushButton(DataFilesForm);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setGeometry(QRect(490, 100, 131, 41));
        refreshButton->setFont(font);
        deleteButton = new QPushButton(DataFilesForm);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(90, 420, 150, 50));
        deleteButton->setFont(font);
        selectButton = new QPushButton(DataFilesForm);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setGeometry(QRect(330, 420, 150, 50));
        selectButton->setFont(font);
        saveButton = new QPushButton(DataFilesForm);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(560, 420, 150, 50));
        saveButton->setFont(font);
        currentFileLabel = new QLabel(DataFilesForm);
        currentFileLabel->setObjectName(QStringLiteral("currentFileLabel"));
        currentFileLabel->setGeometry(QRect(100, 180, 611, 51));
        currentFileLabel->setFont(font);
        selectedFileLabel = new QLabel(DataFilesForm);
        selectedFileLabel->setObjectName(QStringLiteral("selectedFileLabel"));
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
        DataFilesForm->setWindowTitle(QApplication::translate("DataFilesForm", "Form", 0));
        moveRightButton->setText(QApplication::translate("DataFilesForm", "->", 0));
        closeButton->setText(QApplication::translate("DataFilesForm", "Back", 0));
        Title->setText(QApplication::translate("DataFilesForm", "Data Files", 0));
        moveLeftButton->setText(QApplication::translate("DataFilesForm", "<-", 0));
        usbStatus->setText(QApplication::translate("DataFilesForm", "USB Connected: Not Connected", 0));
        refreshButton->setText(QApplication::translate("DataFilesForm", "Refresh", 0));
        deleteButton->setText(QApplication::translate("DataFilesForm", "Delete", 0));
        selectButton->setText(QApplication::translate("DataFilesForm", "Select", 0));
        saveButton->setText(QApplication::translate("DataFilesForm", "Save", 0));
        currentFileLabel->setText(QApplication::translate("DataFilesForm", "Current Data File: Not Selected", 0));
        selectedFileLabel->setText(QApplication::translate("DataFilesForm", "Selected Data File: Not selected", 0));
    } // retranslateUi

};

namespace Ui {
    class DataFilesForm: public Ui_DataFilesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAFILESFORM_H
