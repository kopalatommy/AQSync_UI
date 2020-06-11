/********************************************************************************
** Form generated from reading UI file 'filebrowserform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEBROWSERFORM_H
#define UI_FILEBROWSERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileBrowserForm
{
public:
    QPushButton *Confirm;
    QPushButton *Cancel;
    QListWidget *listWidget;

    void setupUi(QWidget *FileBrowserForm)
    {
        if (FileBrowserForm->objectName().isEmpty())
            FileBrowserForm->setObjectName(QString::fromUtf8("FileBrowserForm"));
        FileBrowserForm->resize(800, 480);
        FileBrowserForm->setMinimumSize(QSize(800, 480));
        FileBrowserForm->setMaximumSize(QSize(800, 480));
        Confirm = new QPushButton(FileBrowserForm);
        Confirm->setObjectName(QString::fromUtf8("Confirm"));
        Confirm->setGeometry(QRect(420, 440, 100, 30));
        Confirm->setIconSize(QSize(100, 30));
        Cancel = new QPushButton(FileBrowserForm);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(270, 440, 100, 30));
        Cancel->setIconSize(QSize(100, 30));
        listWidget = new QListWidget(FileBrowserForm);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(5, 11, 791, 411));

        retranslateUi(FileBrowserForm);

        QMetaObject::connectSlotsByName(FileBrowserForm);
    } // setupUi

    void retranslateUi(QWidget *FileBrowserForm)
    {
        FileBrowserForm->setWindowTitle(QApplication::translate("FileBrowserForm", "Form", nullptr));
        Confirm->setText(QApplication::translate("FileBrowserForm", "Confirm", nullptr));
        Cancel->setText(QApplication::translate("FileBrowserForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileBrowserForm: public Ui_FileBrowserForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEBROWSERFORM_H
