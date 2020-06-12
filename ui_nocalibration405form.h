/********************************************************************************
** Form generated from reading UI file 'nocalibration405form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOCALIBRATION405FORM_H
#define UI_NOCALIBRATION405FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NOCalibration405form
{
public:
    QLabel *AnalogLabel;
    QPushButton *Left;
    QPushButton *slopeMask;
    QPushButton *Right;
    QPushButton *Home;
    QPushButton *AnalogMask;
    QLabel *NOCalibration;
    QLabel *SlopeLabel;
    QPushButton *Save;
    QPushButton *zeroMask;
    QLabel *ZeroLabel;

    void setupUi(QWidget *NOCalibration405form)
    {
        if (NOCalibration405form->objectName().isEmpty())
            NOCalibration405form->setObjectName(QString::fromUtf8("NOCalibration405form"));
        NOCalibration405form->resize(800, 480);
        AnalogLabel = new QLabel(NOCalibration405form);
        AnalogLabel->setObjectName(QString::fromUtf8("AnalogLabel"));
        AnalogLabel->setGeometry(QRect(146, 300, 511, 71));
        Left = new QPushButton(NOCalibration405form);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(10, 119, 100, 351));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon);
        Left->setIconSize(QSize(100, 340));
        slopeMask = new QPushButton(NOCalibration405form);
        slopeMask->setObjectName(QString::fromUtf8("slopeMask"));
        slopeMask->setGeometry(QRect(140, 120, 521, 71));
        Right = new QPushButton(NOCalibration405form);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(690, 119, 100, 351));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon1);
        Right->setIconSize(QSize(100, 340));
        Home = new QPushButton(NOCalibration405form);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(690, 10, 100, 100));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon2);
        Home->setIconSize(QSize(100, 100));
        AnalogMask = new QPushButton(NOCalibration405form);
        AnalogMask->setObjectName(QString::fromUtf8("AnalogMask"));
        AnalogMask->setGeometry(QRect(140, 300, 521, 71));
        NOCalibration = new QLabel(NOCalibration405form);
        NOCalibration->setObjectName(QString::fromUtf8("NOCalibration"));
        NOCalibration->setGeometry(QRect(0, 10, 801, 101));
        QFont font;
        font.setPointSize(30);
        NOCalibration->setFont(font);
        NOCalibration->setAlignment(Qt::AlignCenter);
        SlopeLabel = new QLabel(NOCalibration405form);
        SlopeLabel->setObjectName(QString::fromUtf8("SlopeLabel"));
        SlopeLabel->setGeometry(QRect(146, 122, 511, 61));
        Save = new QPushButton(NOCalibration405form);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(340, 410, 120, 60));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon3);
        Save->setIconSize(QSize(120, 60));
        zeroMask = new QPushButton(NOCalibration405form);
        zeroMask->setObjectName(QString::fromUtf8("zeroMask"));
        zeroMask->setGeometry(QRect(140, 210, 521, 71));
        ZeroLabel = new QLabel(NOCalibration405form);
        ZeroLabel->setObjectName(QString::fromUtf8("ZeroLabel"));
        ZeroLabel->setGeometry(QRect(146, 210, 511, 71));
        NOCalibration->raise();
        ZeroLabel->raise();
        SlopeLabel->raise();
        AnalogLabel->raise();
        Left->raise();
        slopeMask->raise();
        Right->raise();
        AnalogMask->raise();
        Save->raise();
        zeroMask->raise();
        Home->raise();

        retranslateUi(NOCalibration405form);

        QMetaObject::connectSlotsByName(NOCalibration405form);
    } // setupUi

    void retranslateUi(QWidget *NOCalibration405form)
    {
        NOCalibration405form->setWindowTitle(QApplication::translate("NOCalibration405form", "Form", nullptr));
        AnalogLabel->setText(QApplication::translate("NOCalibration405form", "TextLabel", nullptr));
        Left->setText(QString());
        slopeMask->setText(QString());
        Right->setText(QString());
        Home->setText(QString());
        AnalogMask->setText(QString());
        NOCalibration->setText(QApplication::translate("NOCalibration405form", "NO Calibration", nullptr));
        SlopeLabel->setText(QApplication::translate("NOCalibration405form", "TextLabel", nullptr));
        Save->setText(QString());
        zeroMask->setText(QString());
        ZeroLabel->setText(QApplication::translate("NOCalibration405form", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NOCalibration405form: public Ui_NOCalibration405form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOCALIBRATION405FORM_H
