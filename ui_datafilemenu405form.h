/********************************************************************************
** Form generated from reading UI file 'datafilemenu405form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAFILEMENU405FORM_H
#define UI_DATAFILEMENU405FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_datafilemenu405form
{
public:
    QPushButton *currentFile;
    QPushButton *allFile;
    QPushButton *browse;
    QPushButton *cancel;
    QPushButton *Home;

    void setupUi(QDialog *datafilemenu405form)
    {
        if (datafilemenu405form->objectName().isEmpty())
            datafilemenu405form->setObjectName(QStringLiteral("datafilemenu405form"));
        datafilemenu405form->resize(800, 480);
        currentFile = new QPushButton(datafilemenu405form);
        currentFile->setObjectName(QStringLiteral("currentFile"));
        currentFile->setGeometry(QRect(20, 10, 630, 100));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/select_current_file.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        currentFile->setIcon(icon);
        currentFile->setIconSize(QSize(630, 100));
        allFile = new QPushButton(datafilemenu405form);
        allFile->setObjectName(QStringLiteral("allFile"));
        allFile->setGeometry(QRect(20, 130, 720, 100));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/Select_All_Files.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        allFile->setIcon(icon1);
        allFile->setIconSize(QSize(720, 100));
        browse = new QPushButton(datafilemenu405form);
        browse->setObjectName(QStringLiteral("browse"));
        browse->setGeometry(QRect(20, 250, 720, 100));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/Browse.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        browse->setIcon(icon2);
        browse->setIconSize(QSize(720, 100));
        cancel = new QPushButton(datafilemenu405form);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(20, 370, 720, 100));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/Cancel.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        cancel->setIcon(icon3);
        cancel->setIconSize(QSize(720, 100));
        Home = new QPushButton(datafilemenu405form);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(680, 10, 100, 100));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Buttons/button_home.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon4);
        Home->setIconSize(QSize(100, 100));

        retranslateUi(datafilemenu405form);

        QMetaObject::connectSlotsByName(datafilemenu405form);
    } // setupUi

    void retranslateUi(QDialog *datafilemenu405form)
    {
        datafilemenu405form->setWindowTitle(QApplication::translate("datafilemenu405form", "Dialog", 0));
        currentFile->setText(QString());
        allFile->setText(QString());
        browse->setText(QString());
        cancel->setText(QString());
        Home->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class datafilemenu405form: public Ui_datafilemenu405form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAFILEMENU405FORM_H
