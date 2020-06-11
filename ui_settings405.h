/********************************************************************************
** Form generated from reading UI file 'settings405.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS405_H
#define UI_SETTINGS405_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_settings405
{
public:
    QPushButton *Home_Button;
    QPushButton *NextLeft;
    QPushButton *Mode_2;
    QPushButton *NextRight;
    QLabel *Main_Settings;
    QPushButton *FlowCalibration;
    QPushButton *NO2Calibration;
    QPushButton *Parameters;
    QPushButton *NOCalibration;
    QPushButton *AdaptiveFilter;

    void setupUi(QDialog *settings405)
    {
        if (settings405->objectName().isEmpty())
            settings405->setObjectName(QString::fromUtf8("settings405"));
        settings405->resize(800, 480);
        Home_Button = new QPushButton(settings405);
        Home_Button->setObjectName(QString::fromUtf8("Home_Button"));
        Home_Button->setGeometry(QRect(690, 10, 100, 100));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/button_home.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home_Button->setIcon(icon);
        Home_Button->setIconSize(QSize(100, 100));
        NextLeft = new QPushButton(settings405);
        NextLeft->setObjectName(QString::fromUtf8("NextLeft"));
        NextLeft->setGeometry(QRect(10, 130, 100, 340));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NextLeft->setIcon(icon1);
        NextLeft->setIconSize(QSize(100, 340));
        Mode_2 = new QPushButton(settings405);
        Mode_2->setObjectName(QString::fromUtf8("Mode_2"));
        Mode_2->setGeometry(QRect(460, 110, 150, 90));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/button_mode.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Mode_2->setIcon(icon2);
        Mode_2->setIconSize(QSize(150, 90));
        NextRight = new QPushButton(settings405);
        NextRight->setObjectName(QString::fromUtf8("NextRight"));
        NextRight->setGeometry(QRect(690, 130, 100, 340));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NextRight->setIcon(icon3);
        NextRight->setIconSize(QSize(100, 340));
        Main_Settings = new QLabel(settings405);
        Main_Settings->setObjectName(QString::fromUtf8("Main_Settings"));
        Main_Settings->setGeometry(QRect(210, 10, 421, 71));
        QFont font;
        font.setPointSize(40);
        Main_Settings->setFont(font);
        FlowCalibration = new QPushButton(settings405);
        FlowCalibration->setObjectName(QString::fromUtf8("FlowCalibration"));
        FlowCalibration->setGeometry(QRect(180, 330, 150, 90));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Buttons/button_flow-calibration.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        FlowCalibration->setIcon(icon4);
        FlowCalibration->setIconSize(QSize(150, 90));
        NO2Calibration = new QPushButton(settings405);
        NO2Calibration->setObjectName(QString::fromUtf8("NO2Calibration"));
        NO2Calibration->setGeometry(QRect(460, 220, 150, 90));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Buttons/button_no2-calibration.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NO2Calibration->setIcon(icon5);
        NO2Calibration->setIconSize(QSize(150, 90));
        Parameters = new QPushButton(settings405);
        Parameters->setObjectName(QString::fromUtf8("Parameters"));
        Parameters->setGeometry(QRect(460, 330, 150, 90));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Buttons/button_parameters.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Parameters->setIcon(icon6);
        Parameters->setIconSize(QSize(150, 90));
        NOCalibration = new QPushButton(settings405);
        NOCalibration->setObjectName(QString::fromUtf8("NOCalibration"));
        NOCalibration->setGeometry(QRect(180, 220, 150, 90));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Buttons/button_no-calibration.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NOCalibration->setIcon(icon7);
        NOCalibration->setIconSize(QSize(150, 90));
        AdaptiveFilter = new QPushButton(settings405);
        AdaptiveFilter->setObjectName(QString::fromUtf8("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(180, 110, 150, 90));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Buttons/Adaptive_Filter_Setting.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        AdaptiveFilter->setIcon(icon8);
        AdaptiveFilter->setIconSize(QSize(150, 90));
        NextRight->raise();
        NextLeft->raise();
        Home_Button->raise();
        Mode_2->raise();
        Main_Settings->raise();
        FlowCalibration->raise();
        NO2Calibration->raise();
        Parameters->raise();
        NOCalibration->raise();
        AdaptiveFilter->raise();

        retranslateUi(settings405);

        QMetaObject::connectSlotsByName(settings405);
    } // setupUi

    void retranslateUi(QDialog *settings405)
    {
        settings405->setWindowTitle(QApplication::translate("settings405", "Dialog", nullptr));
        Home_Button->setText(QString());
        NextLeft->setText(QString());
        Mode_2->setText(QString());
        NextRight->setText(QString());
        Main_Settings->setText(QApplication::translate("settings405", "405 Settings", nullptr));
        FlowCalibration->setText(QString());
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
