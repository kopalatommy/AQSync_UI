/********************************************************************************
** Form generated from reading UI file 'datafilemenuform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAFILEMENUFORM_H
#define UI_DATAFILEMENUFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataFileMenuForm
{
public:
    QPushButton *Cancel;
    QPushButton *SelectCurrent;
    QPushButton *Browse;
    QPushButton *SelectAll;

    void setupUi(QWidget *DataFileMenuForm)
    {
        if (DataFileMenuForm->objectName().isEmpty())
            DataFileMenuForm->setObjectName(QStringLiteral("DataFileMenuForm"));
        DataFileMenuForm->resize(800, 480);
        DataFileMenuForm->setMinimumSize(QSize(800, 480));
        DataFileMenuForm->setMaximumSize(QSize(800, 480));
        Cancel = new QPushButton(DataFileMenuForm);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(190, 300, 450, 50));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(20);
        Cancel->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/dataMenu_cancel.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Cancel->setIcon(icon);
        Cancel->setIconSize(QSize(450, 50));
        SelectCurrent = new QPushButton(DataFileMenuForm);
        SelectCurrent->setObjectName(QStringLiteral("SelectCurrent"));
        SelectCurrent->setGeometry(QRect(190, 90, 450, 50));
        SelectCurrent->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/dataMenu_selectCurrentFile.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        SelectCurrent->setIcon(icon1);
        SelectCurrent->setIconSize(QSize(450, 50));
        Browse = new QPushButton(DataFileMenuForm);
        Browse->setObjectName(QStringLiteral("Browse"));
        Browse->setGeometry(QRect(190, 230, 450, 50));
        Browse->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/buttons/dataMenu_browse.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Browse->setIcon(icon2);
        Browse->setIconSize(QSize(450, 50));
        SelectAll = new QPushButton(DataFileMenuForm);
        SelectAll->setObjectName(QStringLiteral("SelectAll"));
        SelectAll->setGeometry(QRect(190, 160, 450, 50));
        SelectAll->setFont(font);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/buttons/dataMenu_selectAllFiles.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        SelectAll->setIcon(icon3);
        SelectAll->setIconSize(QSize(450, 50));

        retranslateUi(DataFileMenuForm);

        QMetaObject::connectSlotsByName(DataFileMenuForm);
    } // setupUi

    void retranslateUi(QWidget *DataFileMenuForm)
    {
        DataFileMenuForm->setWindowTitle(QApplication::translate("DataFileMenuForm", "Form", 0));
        Cancel->setText(QApplication::translate("DataFileMenuForm", "Cancel", 0));
        SelectCurrent->setText(QApplication::translate("DataFileMenuForm", "Select Current", 0));
        Browse->setText(QApplication::translate("DataFileMenuForm", "Browse", 0));
        SelectAll->setText(QApplication::translate("DataFileMenuForm", "Select All", 0));
    } // retranslateUi

};

namespace Ui {
    class DataFileMenuForm: public Ui_DataFileMenuForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAFILEMENUFORM_H
