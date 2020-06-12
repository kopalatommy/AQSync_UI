/********************************************************************************
** Form generated from reading UI file 'calibration405nm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATION405NM_H
#define UI_CALIBRATION405NM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_calibration405nm
{
public:
    QPushButton *Right;
    QPushButton *slopeMask;
    QPushButton *Home;
    QPushButton *MassExtMask;
    QPushButton *Save;
    QPushButton *Left;
    QLabel *AdaptiveFilter;
    QPushButton *zeroMask;
    QPushButton *AnalogMask;
    QLabel *slopeLabel;
    QLabel *zeroLabel;
    QLabel *massExtLabel;
    QLabel *analogLabel;

    void setupUi(QDialog *calibration405nm)
    {
        if (calibration405nm->objectName().isEmpty())
            calibration405nm->setObjectName(QString::fromUtf8("calibration405nm"));
        calibration405nm->resize(800, 480);
        Right = new QPushButton(calibration405nm);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(680, 120, 100, 340));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon);
        Right->setIconSize(QSize(100, 340));
        slopeMask = new QPushButton(calibration405nm);
        slopeMask->setObjectName(QString::fromUtf8("slopeMask"));
        slopeMask->setGeometry(QRect(164, 140, 211, 111));
        Home = new QPushButton(calibration405nm);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(680, 10, 100, 100));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon1);
        Home->setIconSize(QSize(100, 100));
        MassExtMask = new QPushButton(calibration405nm);
        MassExtMask->setObjectName(QString::fromUtf8("MassExtMask"));
        MassExtMask->setGeometry(QRect(160, 280, 211, 111));
        Save = new QPushButton(calibration405nm);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(340, 410, 120, 60));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon2);
        Save->setIconSize(QSize(120, 60));
        Left = new QPushButton(calibration405nm);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(30, 120, 100, 340));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon3);
        Left->setIconSize(QSize(100, 340));
        AdaptiveFilter = new QLabel(calibration405nm);
        AdaptiveFilter->setObjectName(QString::fromUtf8("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(0, 10, 801, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(30);
        AdaptiveFilter->setFont(font);
        AdaptiveFilter->setAlignment(Qt::AlignCenter);
        zeroMask = new QPushButton(calibration405nm);
        zeroMask->setObjectName(QString::fromUtf8("zeroMask"));
        zeroMask->setGeometry(QRect(440, 140, 211, 111));
        AnalogMask = new QPushButton(calibration405nm);
        AnalogMask->setObjectName(QString::fromUtf8("AnalogMask"));
        AnalogMask->setGeometry(QRect(440, 280, 211, 111));
        slopeLabel = new QLabel(calibration405nm);
        slopeLabel->setObjectName(QString::fromUtf8("slopeLabel"));
        slopeLabel->setGeometry(QRect(170, 140, 201, 111));
        zeroLabel = new QLabel(calibration405nm);
        zeroLabel->setObjectName(QString::fromUtf8("zeroLabel"));
        zeroLabel->setGeometry(QRect(440, 145, 211, 101));
        massExtLabel = new QLabel(calibration405nm);
        massExtLabel->setObjectName(QString::fromUtf8("massExtLabel"));
        massExtLabel->setGeometry(QRect(170, 280, 201, 111));
        analogLabel = new QLabel(calibration405nm);
        analogLabel->setObjectName(QString::fromUtf8("analogLabel"));
        analogLabel->setGeometry(QRect(450, 285, 201, 101));
        analogLabel->raise();
        massExtLabel->raise();
        zeroLabel->raise();
        slopeLabel->raise();
        Right->raise();
        slopeMask->raise();
        Home->raise();
        MassExtMask->raise();
        Save->raise();
        Left->raise();
        AdaptiveFilter->raise();
        zeroMask->raise();
        AnalogMask->raise();

        retranslateUi(calibration405nm);

        QMetaObject::connectSlotsByName(calibration405nm);
    } // setupUi

    void retranslateUi(QDialog *calibration405nm)
    {
        calibration405nm->setWindowTitle(QApplication::translate("calibration405nm", "Dialog", nullptr));
        Right->setText(QString());
        slopeMask->setText(QApplication::translate("calibration405nm", "PushButton", nullptr));
        Home->setText(QString());
        MassExtMask->setText(QApplication::translate("calibration405nm", "PushButton", nullptr));
        Save->setText(QString());
        Left->setText(QString());
        AdaptiveFilter->setText(QApplication::translate("calibration405nm", "405nm Calibration", nullptr));
        zeroMask->setText(QApplication::translate("calibration405nm", "PushButton", nullptr));
        AnalogMask->setText(QApplication::translate("calibration405nm", "PushButton", nullptr));
        slopeLabel->setText(QApplication::translate("calibration405nm", "Slope", nullptr));
        zeroLabel->setText(QApplication::translate("calibration405nm", "Zero", nullptr));
        massExtLabel->setText(QApplication::translate("calibration405nm", "Mass Ext", nullptr));
        analogLabel->setText(QApplication::translate("calibration405nm", "Analog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calibration405nm: public Ui_calibration405nm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATION405NM_H
