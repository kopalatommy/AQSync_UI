/********************************************************************************
** Form generated from reading UI file 'datafile405form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAFILE405FORM_H
#define UI_DATAFILE405FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_datafile405form
{
public:
    QPushButton *Home;
    QPushButton *Left;
    QPushButton *SavetoUSB;
    QPushButton *Right;
    QLabel *DataFileMenu;
    QLabel *Connection;
    QLabel *CurrentDataFile;
    QLabel *SelectedDatFile;
    QPushButton *Delete;
    QPushButton *SelectFile;
    QPushButton *Refresh;

    void setupUi(QDialog *datafile405form)
    {
        if (datafile405form->objectName().isEmpty())
            datafile405form->setObjectName(QString::fromUtf8("datafile405form"));
        datafile405form->resize(800, 480);
        Home = new QPushButton(datafile405form);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(660, 10, 100, 100));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Buttons/button_home.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        Left = new QPushButton(datafile405form);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(10, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon1);
        Left->setIconSize(QSize(100, 340));
        SavetoUSB = new QPushButton(datafile405form);
        SavetoUSB->setObjectName(QString::fromUtf8("SavetoUSB"));
        SavetoUSB->setGeometry(QRect(480, 400, 120, 60));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Buttons/button_save-to-usb (1).jpg"), QSize(), QIcon::Normal, QIcon::Off);
        SavetoUSB->setIcon(icon2);
        SavetoUSB->setIconSize(QSize(120, 60));
        Right = new QPushButton(datafile405form);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(660, 120, 100, 340));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon3);
        Right->setIconSize(QSize(100, 340));
        DataFileMenu = new QLabel(datafile405form);
        DataFileMenu->setObjectName(QString::fromUtf8("DataFileMenu"));
        DataFileMenu->setGeometry(QRect(200, 20, 331, 61));
        QFont font;
        font.setPointSize(35);
        DataFileMenu->setFont(font);
        Connection = new QLabel(datafile405form);
        Connection->setObjectName(QString::fromUtf8("Connection"));
        Connection->setGeometry(QRect(200, 110, 191, 51));
        QFont font1;
        font1.setPointSize(20);
        Connection->setFont(font1);
        CurrentDataFile = new QLabel(datafile405form);
        CurrentDataFile->setObjectName(QString::fromUtf8("CurrentDataFile"));
        CurrentDataFile->setGeometry(QRect(200, 210, 171, 41));
        QFont font2;
        font2.setPointSize(15);
        CurrentDataFile->setFont(font2);
        SelectedDatFile = new QLabel(datafile405form);
        SelectedDatFile->setObjectName(QString::fromUtf8("SelectedDatFile"));
        SelectedDatFile->setGeometry(QRect(200, 290, 191, 41));
        SelectedDatFile->setFont(font2);
        Delete = new QPushButton(datafile405form);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setGeometry(QRect(180, 400, 120, 60));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../Buttons/button_delete.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Delete->setIcon(icon4);
        Delete->setIconSize(QSize(120, 60));
        SelectFile = new QPushButton(datafile405form);
        SelectFile->setObjectName(QString::fromUtf8("SelectFile"));
        SelectFile->setGeometry(QRect(330, 400, 120, 60));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../Buttons/button_select-file.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        SelectFile->setIcon(icon5);
        SelectFile->setIconSize(QSize(120, 60));
        Refresh = new QPushButton(datafile405form);
        Refresh->setObjectName(QString::fromUtf8("Refresh"));
        Refresh->setGeometry(QRect(460, 100, 161, 81));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../Buttons/button_refresh.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Refresh->setIcon(icon6);
        Refresh->setIconSize(QSize(160, 80));

        retranslateUi(datafile405form);

        QMetaObject::connectSlotsByName(datafile405form);
    } // setupUi

    void retranslateUi(QDialog *datafile405form)
    {
        datafile405form->setWindowTitle(QApplication::translate("datafile405form", "Dialog", nullptr));
        Home->setText(QString());
        Left->setText(QString());
        SavetoUSB->setText(QString());
        Right->setText(QString());
        DataFileMenu->setText(QApplication::translate("datafile405form", "Data File Menu", nullptr));
        Connection->setText(QApplication::translate("datafile405form", "Not Connected", nullptr));
        CurrentDataFile->setText(QApplication::translate("datafile405form", "Current Data File:", nullptr));
        SelectedDatFile->setText(QApplication::translate("datafile405form", "Slected Data File:", nullptr));
        Delete->setText(QString());
        SelectFile->setText(QString());
        Refresh->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class datafile405form: public Ui_datafile405form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAFILE405FORM_H
