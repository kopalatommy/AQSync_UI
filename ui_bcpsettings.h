/********************************************************************************
** Form generated from reading UI file 'bcpsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BCPSETTINGS_H
#define UI_BCPSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BCPSettings
{
public:
    QPushButton *NextRight;
    QLabel *PMSettings;
    QLabel *PMDevice;
    QPushButton *cali405;
    QPushButton *NextLeft;
    QPushButton *FlowCalibration;
    QPushButton *AdaptiveFilter;
    QPushButton *Auto_Zero;
    QPushButton *cali880;
    QLabel *BlackCarbon;
    QLabel *Main_Settings;
    QPushButton *TP;
    QPushButton *Home_Button;

    void setupUi(QDialog *BCPSettings)
    {
        if (BCPSettings->objectName().isEmpty())
            BCPSettings->setObjectName(QStringLiteral("BCPSettings"));
        BCPSettings->resize(800, 480);
        NextRight = new QPushButton(BCPSettings);
        NextRight->setObjectName(QStringLiteral("NextRight"));
        NextRight->setGeometry(QRect(680, 120, 100, 340));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NextRight->setIcon(icon);
        NextRight->setIconSize(QSize(100, 340));
        PMSettings = new QLabel(BCPSettings);
        PMSettings->setObjectName(QStringLiteral("PMSettings"));
        PMSettings->setGeometry(QRect(710, 150, 47, 21));
        QFont font;
        font.setPointSize(10);
        PMSettings->setFont(font);
        PMDevice = new QLabel(BCPSettings);
        PMDevice->setObjectName(QStringLiteral("PMDevice"));
        PMDevice->setGeometry(QRect(700, 130, 61, 31));
        PMDevice->setFont(font);
        cali405 = new QPushButton(BCPSettings);
        cali405->setObjectName(QStringLiteral("cali405"));
        cali405->setGeometry(QRect(460, 240, 150, 90));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/405nmCalibration.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        cali405->setIcon(icon1);
        cali405->setIconSize(QSize(150, 90));
        NextLeft = new QPushButton(BCPSettings);
        NextLeft->setObjectName(QStringLiteral("NextLeft"));
        NextLeft->setGeometry(QRect(20, 120, 100, 340));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        NextLeft->setIcon(icon2);
        NextLeft->setIconSize(QSize(100, 340));
        FlowCalibration = new QPushButton(BCPSettings);
        FlowCalibration->setObjectName(QStringLiteral("FlowCalibration"));
        FlowCalibration->setGeometry(QRect(180, 350, 150, 90));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/button_flow-calibration.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        FlowCalibration->setIcon(icon3);
        FlowCalibration->setIconSize(QSize(150, 90));
        AdaptiveFilter = new QPushButton(BCPSettings);
        AdaptiveFilter->setObjectName(QStringLiteral("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(180, 130, 150, 90));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Buttons/Adaptive_Filter_Setting.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        AdaptiveFilter->setIcon(icon4);
        AdaptiveFilter->setIconSize(QSize(150, 90));
        Auto_Zero = new QPushButton(BCPSettings);
        Auto_Zero->setObjectName(QStringLiteral("Auto_Zero"));
        Auto_Zero->setGeometry(QRect(460, 130, 150, 90));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Buttons/AutoZero.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Auto_Zero->setIcon(icon5);
        Auto_Zero->setIconSize(QSize(150, 90));
        cali880 = new QPushButton(BCPSettings);
        cali880->setObjectName(QStringLiteral("cali880"));
        cali880->setGeometry(QRect(180, 240, 150, 90));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Buttons/button_nm-calibration.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        cali880->setIcon(icon6);
        cali880->setIconSize(QSize(150, 90));
        BlackCarbon = new QLabel(BCPSettings);
        BlackCarbon->setObjectName(QStringLiteral("BlackCarbon"));
        BlackCarbon->setGeometry(QRect(30, 130, 81, 41));
        BlackCarbon->setFont(font);
        Main_Settings = new QLabel(BCPSettings);
        Main_Settings->setObjectName(QStringLiteral("Main_Settings"));
        Main_Settings->setGeometry(QRect(0, 10, 801, 101));
        QFont font1;
        font1.setPointSize(40);
        Main_Settings->setFont(font1);
        Main_Settings->setAlignment(Qt::AlignCenter);
        TP = new QPushButton(BCPSettings);
        TP->setObjectName(QStringLiteral("TP"));
        TP->setGeometry(QRect(460, 350, 150, 90));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Buttons/button_t-p-correction.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        TP->setIcon(icon7);
        TP->setIconSize(QSize(150, 90));
        Home_Button = new QPushButton(BCPSettings);
        Home_Button->setObjectName(QStringLiteral("Home_Button"));
        Home_Button->setGeometry(QRect(680, 10, 100, 100));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Buttons/button_home.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home_Button->setIcon(icon8);
        Home_Button->setIconSize(QSize(100, 100));

        retranslateUi(BCPSettings);

        QMetaObject::connectSlotsByName(BCPSettings);
    } // setupUi

    void retranslateUi(QDialog *BCPSettings)
    {
        BCPSettings->setWindowTitle(QApplication::translate("BCPSettings", "Dialog", 0));
        NextRight->setText(QString());
        PMSettings->setText(QApplication::translate("BCPSettings", "Settings", 0));
        PMDevice->setText(QApplication::translate("BCPSettings", "PM Device", 0));
        cali405->setText(QString());
        NextLeft->setText(QString());
        FlowCalibration->setText(QString());
        AdaptiveFilter->setText(QString());
        Auto_Zero->setText(QString());
        cali880->setText(QString());
        BlackCarbon->setText(QApplication::translate("BCPSettings", "405 Settings", 0));
        Main_Settings->setText(QApplication::translate("BCPSettings", "BCP Settings", 0));
        TP->setText(QString());
        Home_Button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BCPSettings: public Ui_BCPSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BCPSETTINGS_H
