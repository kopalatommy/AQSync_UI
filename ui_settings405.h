/********************************************************************************
** Form generated from reading UI file 'settings405.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS405_H
#define UI_SETTINGS405_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_settings405
{
public:
    QPushButton *Home_Button;
    QLabel *BlackCarbon;
    QPushButton *NextLeft;
    QLabel *PMSettings;
    QPushButton *Mode_2;
    QPushButton *NextRight;
    QLabel *BCsettings;
    QLabel *Main_Settings;
    QPushButton *FlowCalibration;
    QLabel *PMDevice;
    QPushButton *NO2Calibration;
    QPushButton *Parameters;
    QPushButton *NOCalibration;
    QPushButton *AdaptiveFilter;

    void setupUi(QDialog *settings405)
    {
        if (settings405->objectName().isEmpty())
            settings405->setObjectName(QStringLiteral("settings405"));
        settings405->resize(800, 480);
        Home_Button = new QPushButton(settings405);
        Home_Button->setObjectName(QStringLiteral("Home_Button"));
        Home_Button->setGeometry(QRect(680, 10, 100, 100));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/button_home.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home_Button->setIcon(icon);
        Home_Button->setIconSize(QSize(100, 100));
        BlackCarbon = new QLabel(settings405);
        BlackCarbon->setObjectName(QStringLiteral("BlackCarbon"));
        BlackCarbon->setGeometry(QRect(30, 130, 81, 41));
        QFont font;
        font.setPointSize(10);
        BlackCarbon->setFont(font);
        NextLeft = new QPushButton(settings405);
        NextLeft->setObjectName(QStringLiteral("NextLeft"));
        NextLeft->setGeometry(QRect(20, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NextLeft->setIcon(icon1);
        NextLeft->setIconSize(QSize(100, 340));
        PMSettings = new QLabel(settings405);
        PMSettings->setObjectName(QStringLiteral("PMSettings"));
        PMSettings->setGeometry(QRect(710, 150, 47, 21));
        PMSettings->setFont(font);
        Mode_2 = new QPushButton(settings405);
        Mode_2->setObjectName(QStringLiteral("Mode_2"));
        Mode_2->setGeometry(QRect(460, 110, 150, 90));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/button_mode.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Mode_2->setIcon(icon2);
        Mode_2->setIconSize(QSize(150, 90));
        NextRight = new QPushButton(settings405);
        NextRight->setObjectName(QStringLiteral("NextRight"));
        NextRight->setGeometry(QRect(680, 120, 100, 340));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NextRight->setIcon(icon3);
        NextRight->setIconSize(QSize(100, 340));
        BCsettings = new QLabel(settings405);
        BCsettings->setObjectName(QStringLiteral("BCsettings"));
        BCsettings->setGeometry(QRect(40, 160, 51, 16));
        BCsettings->setFont(font);
        Main_Settings = new QLabel(settings405);
        Main_Settings->setObjectName(QStringLiteral("Main_Settings"));
        Main_Settings->setGeometry(QRect(210, 10, 421, 71));
        QFont font1;
        font1.setPointSize(40);
        Main_Settings->setFont(font1);
        FlowCalibration = new QPushButton(settings405);
        FlowCalibration->setObjectName(QStringLiteral("FlowCalibration"));
        FlowCalibration->setGeometry(QRect(180, 330, 150, 90));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Buttons/button_flow-calibration.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        FlowCalibration->setIcon(icon4);
        FlowCalibration->setIconSize(QSize(150, 90));
        PMDevice = new QLabel(settings405);
        PMDevice->setObjectName(QStringLiteral("PMDevice"));
        PMDevice->setGeometry(QRect(700, 130, 61, 31));
        PMDevice->setFont(font);
        NO2Calibration = new QPushButton(settings405);
        NO2Calibration->setObjectName(QStringLiteral("NO2Calibration"));
        NO2Calibration->setGeometry(QRect(460, 220, 150, 90));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Buttons/button_no2-calibration.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NO2Calibration->setIcon(icon5);
        NO2Calibration->setIconSize(QSize(150, 90));
        Parameters = new QPushButton(settings405);
        Parameters->setObjectName(QStringLiteral("Parameters"));
        Parameters->setGeometry(QRect(460, 330, 150, 90));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Buttons/button_parameters.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Parameters->setIcon(icon6);
        Parameters->setIconSize(QSize(150, 90));
        NOCalibration = new QPushButton(settings405);
        NOCalibration->setObjectName(QStringLiteral("NOCalibration"));
        NOCalibration->setGeometry(QRect(180, 220, 150, 90));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Buttons/button_no-calibration.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NOCalibration->setIcon(icon7);
        NOCalibration->setIconSize(QSize(150, 90));
        AdaptiveFilter = new QPushButton(settings405);
        AdaptiveFilter->setObjectName(QStringLiteral("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(180, 110, 150, 90));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Buttons/Adaptive_Filter_Setting.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        AdaptiveFilter->setIcon(icon8);
        AdaptiveFilter->setIconSize(QSize(150, 90));
        NextRight->raise();
        NextLeft->raise();
        Home_Button->raise();
        BlackCarbon->raise();
        PMSettings->raise();
        Mode_2->raise();
        BCsettings->raise();
        Main_Settings->raise();
        FlowCalibration->raise();
        PMDevice->raise();
        NO2Calibration->raise();
        Parameters->raise();
        NOCalibration->raise();
        AdaptiveFilter->raise();

        retranslateUi(settings405);

        QMetaObject::connectSlotsByName(settings405);
    } // setupUi

    void retranslateUi(QDialog *settings405)
    {
        settings405->setWindowTitle(QApplication::translate("settings405", "Dialog", 0));
        Home_Button->setText(QString());
        BlackCarbon->setText(QApplication::translate("settings405", "Black Carbon", 0));
        NextLeft->setText(QString());
        PMSettings->setText(QApplication::translate("settings405", "Settings", 0));
        Mode_2->setText(QString());
        NextRight->setText(QString());
        BCsettings->setText(QApplication::translate("settings405", "Settings", 0));
        Main_Settings->setText(QApplication::translate("settings405", "405 Settings", 0));
        FlowCalibration->setText(QString());
        PMDevice->setText(QApplication::translate("settings405", "PM Device", 0));
        NO2Calibration->setText(QString());
        Parameters->setText(QString());
        NOCalibration->setText(QString());
        AdaptiveFilter->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class settings405: public Ui_settings405 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS405_H
