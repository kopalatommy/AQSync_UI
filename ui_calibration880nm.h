/********************************************************************************
** Form generated from reading UI file 'calibration880nm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATION880NM_H
#define UI_CALIBRATION880NM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Calibration880nm
{
public:
    QLabel *AdaptiveFilter;
    QPushButton *zeroMask;
    QPushButton *Home;
    QPushButton *MassExtMask;
    QPushButton *Left;
    QPushButton *AnalogMask;
    QPushButton *slopeMask;
    QPushButton *Right;
    QPushButton *Save;
    QLabel *slopeLabel;
    QLabel *zeroLabel;
    QLabel *massExtLabel;
    QLabel *analogLabel;

    void setupUi(QDialog *Calibration880nm)
    {
        if (Calibration880nm->objectName().isEmpty())
            Calibration880nm->setObjectName(QString::fromUtf8("Calibration880nm"));
        Calibration880nm->resize(800, 480);
        AdaptiveFilter = new QLabel(Calibration880nm);
        AdaptiveFilter->setObjectName(QString::fromUtf8("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(0, 20, 801, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(30);
        AdaptiveFilter->setFont(font);
        AdaptiveFilter->setAlignment(Qt::AlignCenter);
        zeroMask = new QPushButton(Calibration880nm);
        zeroMask->setObjectName(QString::fromUtf8("zeroMask"));
        zeroMask->setGeometry(QRect(440, 140, 211, 111));
        Home = new QPushButton(Calibration880nm);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(680, 10, 100, 100));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        MassExtMask = new QPushButton(Calibration880nm);
        MassExtMask->setObjectName(QString::fromUtf8("MassExtMask"));
        MassExtMask->setGeometry(QRect(160, 280, 211, 111));
        Left = new QPushButton(Calibration880nm);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(30, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon1);
        Left->setIconSize(QSize(100, 340));
        AnalogMask = new QPushButton(Calibration880nm);
        AnalogMask->setObjectName(QString::fromUtf8("AnalogMask"));
        AnalogMask->setGeometry(QRect(440, 280, 211, 111));
        slopeMask = new QPushButton(Calibration880nm);
        slopeMask->setObjectName(QString::fromUtf8("slopeMask"));
        slopeMask->setGeometry(QRect(164, 140, 211, 111));
        Right = new QPushButton(Calibration880nm);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(680, 120, 100, 340));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon2);
        Right->setIconSize(QSize(100, 340));
        Save = new QPushButton(Calibration880nm);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(340, 410, 120, 60));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon3);
        Save->setIconSize(QSize(120, 60));
        slopeLabel = new QLabel(Calibration880nm);
        slopeLabel->setObjectName(QString::fromUtf8("slopeLabel"));
        slopeLabel->setEnabled(false);
        slopeLabel->setGeometry(QRect(170, 140, 201, 111));
        zeroLabel = new QLabel(Calibration880nm);
        zeroLabel->setObjectName(QString::fromUtf8("zeroLabel"));
        zeroLabel->setGeometry(QRect(446, 139, 201, 111));
        massExtLabel = new QLabel(Calibration880nm);
        massExtLabel->setObjectName(QString::fromUtf8("massExtLabel"));
        massExtLabel->setGeometry(QRect(166, 280, 201, 111));
        analogLabel = new QLabel(Calibration880nm);
        analogLabel->setObjectName(QString::fromUtf8("analogLabel"));
        analogLabel->setGeometry(QRect(450, 280, 201, 111));
        AdaptiveFilter->raise();
        analogLabel->raise();
        massExtLabel->raise();
        zeroLabel->raise();
        slopeLabel->raise();
        zeroMask->raise();
        Home->raise();
        MassExtMask->raise();
        Left->raise();
        AnalogMask->raise();
        slopeMask->raise();
        Right->raise();
        Save->raise();

        retranslateUi(Calibration880nm);

        QMetaObject::connectSlotsByName(Calibration880nm);
    } // setupUi

    void retranslateUi(QDialog *Calibration880nm)
    {
        Calibration880nm->setWindowTitle(QApplication::translate("Calibration880nm", "Dialog", nullptr));
        AdaptiveFilter->setText(QApplication::translate("Calibration880nm", "880nm Calibration", nullptr));
        zeroMask->setText(QApplication::translate("Calibration880nm", "PushButton", nullptr));
        Home->setText(QString());
        MassExtMask->setText(QApplication::translate("Calibration880nm", "PushButton", nullptr));
        Left->setText(QString());
        AnalogMask->setText(QApplication::translate("Calibration880nm", "PushButton", nullptr));
        slopeMask->setText(QApplication::translate("Calibration880nm", "PushButton", nullptr));
        Right->setText(QString());
        Save->setText(QString());
        slopeLabel->setText(QApplication::translate("Calibration880nm", "Slope", nullptr));
        zeroLabel->setText(QApplication::translate("Calibration880nm", "Zero:", nullptr));
        massExtLabel->setText(QApplication::translate("Calibration880nm", "Mass Ext", nullptr));
        analogLabel->setText(QApplication::translate("Calibration880nm", "Analog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calibration880nm: public Ui_Calibration880nm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATION880NM_H
