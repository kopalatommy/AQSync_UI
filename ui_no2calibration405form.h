/********************************************************************************
** Form generated from reading UI file 'no2calibration405form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NO2CALIBRATION405FORM_H
#define UI_NO2CALIBRATION405FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NO2Calibration405Form
{
public:
    QPushButton *Home;
    QPushButton *Right;
    QPushButton *Save;
    QPushButton *zeroMask;
    QPushButton *slopeMask;
    QPushButton *AnalogMask;
    QLabel *NOCalibration;
    QPushButton *Left;
    QLabel *SlopeLabel;
    QLabel *ZeroLabel;
    QLabel *AnalogLabel;

    void setupUi(QWidget *NO2Calibration405Form)
    {
        if (NO2Calibration405Form->objectName().isEmpty())
            NO2Calibration405Form->setObjectName(QString::fromUtf8("NO2Calibration405Form"));
        NO2Calibration405Form->resize(800, 480);
        Home = new QPushButton(NO2Calibration405Form);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(690, 10, 100, 100));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        Right = new QPushButton(NO2Calibration405Form);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(690, 119, 100, 351));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon1);
        Right->setIconSize(QSize(100, 340));
        Save = new QPushButton(NO2Calibration405Form);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(340, 410, 120, 60));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon2);
        Save->setIconSize(QSize(120, 60));
        zeroMask = new QPushButton(NO2Calibration405Form);
        zeroMask->setObjectName(QString::fromUtf8("zeroMask"));
        zeroMask->setGeometry(QRect(140, 210, 521, 71));
        slopeMask = new QPushButton(NO2Calibration405Form);
        slopeMask->setObjectName(QString::fromUtf8("slopeMask"));
        slopeMask->setGeometry(QRect(140, 120, 521, 71));
        AnalogMask = new QPushButton(NO2Calibration405Form);
        AnalogMask->setObjectName(QString::fromUtf8("AnalogMask"));
        AnalogMask->setGeometry(QRect(140, 300, 521, 71));
        NOCalibration = new QLabel(NO2Calibration405Form);
        NOCalibration->setObjectName(QString::fromUtf8("NOCalibration"));
        NOCalibration->setGeometry(QRect(0, 10, 801, 101));
        QFont font;
        font.setPointSize(30);
        NOCalibration->setFont(font);
        NOCalibration->setAlignment(Qt::AlignCenter);
        Left = new QPushButton(NO2Calibration405Form);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(10, 119, 100, 351));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon3);
        Left->setIconSize(QSize(100, 340));
        SlopeLabel = new QLabel(NO2Calibration405Form);
        SlopeLabel->setObjectName(QString::fromUtf8("SlopeLabel"));
        SlopeLabel->setGeometry(QRect(146, 122, 511, 61));
        ZeroLabel = new QLabel(NO2Calibration405Form);
        ZeroLabel->setObjectName(QString::fromUtf8("ZeroLabel"));
        ZeroLabel->setGeometry(QRect(146, 210, 511, 71));
        AnalogLabel = new QLabel(NO2Calibration405Form);
        AnalogLabel->setObjectName(QString::fromUtf8("AnalogLabel"));
        AnalogLabel->setGeometry(QRect(146, 300, 511, 71));
        NOCalibration->raise();
        AnalogLabel->raise();
        ZeroLabel->raise();
        SlopeLabel->raise();
        Right->raise();
        Save->raise();
        zeroMask->raise();
        slopeMask->raise();
        AnalogMask->raise();
        Left->raise();
        Home->raise();

        retranslateUi(NO2Calibration405Form);

        QMetaObject::connectSlotsByName(NO2Calibration405Form);
    } // setupUi

    void retranslateUi(QWidget *NO2Calibration405Form)
    {
        NO2Calibration405Form->setWindowTitle(QApplication::translate("NO2Calibration405Form", "Form", nullptr));
        Home->setText(QString());
        Right->setText(QString());
        Save->setText(QString());
        zeroMask->setText(QString());
        slopeMask->setText(QString());
        AnalogMask->setText(QString());
        NOCalibration->setText(QApplication::translate("NO2Calibration405Form", "NO2 Calibration", nullptr));
        Left->setText(QString());
        SlopeLabel->setText(QApplication::translate("NO2Calibration405Form", "TextLabel", nullptr));
        ZeroLabel->setText(QApplication::translate("NO2Calibration405Form", "TextLabel", nullptr));
        AnalogLabel->setText(QApplication::translate("NO2Calibration405Form", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NO2Calibration405Form: public Ui_NO2Calibration405Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NO2CALIBRATION405FORM_H
