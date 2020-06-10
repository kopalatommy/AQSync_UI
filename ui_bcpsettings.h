/********************************************************************************
** Form generated from reading UI file 'bcpsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BCPSETTINGS_H
#define UI_BCPSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BCPSettings
{
public:
    QPushButton *NextRight;
    QLabel *PMSettings;
    QLabel *PMDevice;
    QPushButton *NO2Calibration;
    QPushButton *NextLeft;
    QPushButton *FlowCalibration;
    QPushButton *AdaptiveFilter;
    QPushButton *Mode_2;
    QPushButton *NOCalibration;
    QLabel *BlackCarbon;
    QLabel *Main_Settings;
    QPushButton *dataFileMenu;
    QPushButton *Home_Button;

    void setupUi(QDialog *BCPSettings)
    {
        if (BCPSettings->objectName().isEmpty())
            BCPSettings->setObjectName(QString::fromUtf8("BCPSettings"));
        BCPSettings->resize(800, 480);
        NextRight = new QPushButton(BCPSettings);
        NextRight->setObjectName(QString::fromUtf8("NextRight"));
        NextRight->setGeometry(QRect(680, 120, 100, 340));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NextRight->setIcon(icon);
        NextRight->setIconSize(QSize(100, 340));
        PMSettings = new QLabel(BCPSettings);
        PMSettings->setObjectName(QString::fromUtf8("PMSettings"));
        PMSettings->setGeometry(QRect(710, 150, 47, 21));
        QFont font;
        font.setPointSize(10);
        PMSettings->setFont(font);
        PMDevice = new QLabel(BCPSettings);
        PMDevice->setObjectName(QString::fromUtf8("PMDevice"));
        PMDevice->setGeometry(QRect(700, 130, 61, 31));
        PMDevice->setFont(font);
        NO2Calibration = new QPushButton(BCPSettings);
        NO2Calibration->setObjectName(QString::fromUtf8("NO2Calibration"));
        NO2Calibration->setGeometry(QRect(460, 220, 150, 90));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Buttons/405nmCalibration.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NO2Calibration->setIcon(icon1);
        NO2Calibration->setIconSize(QSize(150, 90));
        NextLeft = new QPushButton(BCPSettings);
        NextLeft->setObjectName(QString::fromUtf8("NextLeft"));
        NextLeft->setGeometry(QRect(20, 120, 100, 340));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NextLeft->setIcon(icon2);
        NextLeft->setIconSize(QSize(100, 340));
        FlowCalibration = new QPushButton(BCPSettings);
        FlowCalibration->setObjectName(QString::fromUtf8("FlowCalibration"));
        FlowCalibration->setGeometry(QRect(180, 330, 150, 90));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Buttons/button_flow-calibration.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        FlowCalibration->setIcon(icon3);
        FlowCalibration->setIconSize(QSize(150, 90));
        AdaptiveFilter = new QPushButton(BCPSettings);
        AdaptiveFilter->setObjectName(QString::fromUtf8("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(180, 110, 150, 90));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../Buttons/Adaptive_Filter_Setting.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        AdaptiveFilter->setIcon(icon4);
        AdaptiveFilter->setIconSize(QSize(150, 90));
        Mode_2 = new QPushButton(BCPSettings);
        Mode_2->setObjectName(QString::fromUtf8("Mode_2"));
        Mode_2->setGeometry(QRect(460, 110, 150, 90));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../Buttons/AutoZero.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Mode_2->setIcon(icon5);
        Mode_2->setIconSize(QSize(150, 90));
        NOCalibration = new QPushButton(BCPSettings);
        NOCalibration->setObjectName(QString::fromUtf8("NOCalibration"));
        NOCalibration->setGeometry(QRect(180, 220, 150, 90));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../Buttons/button_nm-calibration.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NOCalibration->setIcon(icon6);
        NOCalibration->setIconSize(QSize(150, 90));
        BlackCarbon = new QLabel(BCPSettings);
        BlackCarbon->setObjectName(QString::fromUtf8("BlackCarbon"));
        BlackCarbon->setGeometry(QRect(30, 130, 81, 41));
        BlackCarbon->setFont(font);
        Main_Settings = new QLabel(BCPSettings);
        Main_Settings->setObjectName(QString::fromUtf8("Main_Settings"));
        Main_Settings->setGeometry(QRect(210, 10, 421, 71));
        QFont font1;
        font1.setPointSize(40);
        Main_Settings->setFont(font1);
        dataFileMenu = new QPushButton(BCPSettings);
        dataFileMenu->setObjectName(QString::fromUtf8("dataFileMenu"));
        dataFileMenu->setGeometry(QRect(460, 330, 150, 90));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../Buttons/button_t-p-correction.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        dataFileMenu->setIcon(icon7);
        dataFileMenu->setIconSize(QSize(150, 90));
        Home_Button = new QPushButton(BCPSettings);
        Home_Button->setObjectName(QString::fromUtf8("Home_Button"));
        Home_Button->setGeometry(QRect(680, 10, 100, 100));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../Buttons/button_home.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home_Button->setIcon(icon8);
        Home_Button->setIconSize(QSize(100, 100));

        retranslateUi(BCPSettings);

        QMetaObject::connectSlotsByName(BCPSettings);
    } // setupUi

    void retranslateUi(QDialog *BCPSettings)
    {
        BCPSettings->setWindowTitle(QApplication::translate("BCPSettings", "Dialog", nullptr));
        NextRight->setText(QString());
        PMSettings->setText(QApplication::translate("BCPSettings", "Settings", nullptr));
        PMDevice->setText(QApplication::translate("BCPSettings", "PM Device", nullptr));
        NO2Calibration->setText(QString());
        NextLeft->setText(QString());
        FlowCalibration->setText(QString());
        AdaptiveFilter->setText(QString());
        Mode_2->setText(QString());
        NOCalibration->setText(QString());
        BlackCarbon->setText(QApplication::translate("BCPSettings", "405 Settings", nullptr));
        Main_Settings->setText(QApplication::translate("BCPSettings", "BCP Settings", nullptr));
        dataFileMenu->setText(QString());
        Home_Button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BCPSettings: public Ui_BCPSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BCPSETTINGS_H
