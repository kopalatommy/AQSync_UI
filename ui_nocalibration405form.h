/********************************************************************************
** Form generated from reading UI file 'nocalibration405form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOCALIBRATION405FORM_H
#define UI_NOCALIBRATION405FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            NOCalibration405form->setObjectName(QStringLiteral("NOCalibration405form"));
        NOCalibration405form->resize(800, 480);
        AnalogLabel = new QLabel(NOCalibration405form);
        AnalogLabel->setObjectName(QStringLiteral("AnalogLabel"));
        AnalogLabel->setGeometry(QRect(270, 300, 511, 71));
        QFont font;
        font.setPointSize(25);
        AnalogLabel->setFont(font);
        Left = new QPushButton(NOCalibration405form);
        Left->setObjectName(QStringLiteral("Left"));
        Left->setGeometry(QRect(10, 119, 100, 351));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon);
        Left->setIconSize(QSize(100, 340));
        slopeMask = new QPushButton(NOCalibration405form);
        slopeMask->setObjectName(QStringLiteral("slopeMask"));
        slopeMask->setGeometry(QRect(140, 120, 521, 71));
        QFont font1;
        font1.setPointSize(45);
        slopeMask->setFont(font1);
        Right = new QPushButton(NOCalibration405form);
        Right->setObjectName(QStringLiteral("Right"));
        Right->setGeometry(QRect(690, 119, 100, 351));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon1);
        Right->setIconSize(QSize(100, 340));
        Home = new QPushButton(NOCalibration405form);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(690, 10, 100, 100));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon2);
        Home->setIconSize(QSize(100, 100));
        AnalogMask = new QPushButton(NOCalibration405form);
        AnalogMask->setObjectName(QStringLiteral("AnalogMask"));
        AnalogMask->setGeometry(QRect(140, 300, 521, 71));
        NOCalibration = new QLabel(NOCalibration405form);
        NOCalibration->setObjectName(QStringLiteral("NOCalibration"));
        NOCalibration->setGeometry(QRect(0, 10, 801, 101));
        QFont font2;
        font2.setPointSize(30);
        NOCalibration->setFont(font2);
        NOCalibration->setAlignment(Qt::AlignCenter);
        SlopeLabel = new QLabel(NOCalibration405form);
        SlopeLabel->setObjectName(QStringLiteral("SlopeLabel"));
        SlopeLabel->setGeometry(QRect(270, 120, 511, 61));
        SlopeLabel->setFont(font);
        Save = new QPushButton(NOCalibration405form);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(340, 410, 120, 60));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon3);
        Save->setIconSize(QSize(120, 60));
        zeroMask = new QPushButton(NOCalibration405form);
        zeroMask->setObjectName(QStringLiteral("zeroMask"));
        zeroMask->setGeometry(QRect(140, 210, 521, 71));
        ZeroLabel = new QLabel(NOCalibration405form);
        ZeroLabel->setObjectName(QStringLiteral("ZeroLabel"));
        ZeroLabel->setGeometry(QRect(270, 210, 511, 71));
        ZeroLabel->setFont(font);
        AnalogLabel->raise();
        ZeroLabel->raise();
        SlopeLabel->raise();
        AnalogMask->raise();
        zeroMask->raise();
        slopeMask->raise();
        NOCalibration->raise();
        Left->raise();
        Right->raise();
        Save->raise();
        Home->raise();

        retranslateUi(NOCalibration405form);

        QMetaObject::connectSlotsByName(NOCalibration405form);
    } // setupUi

    void retranslateUi(QWidget *NOCalibration405form)
    {
        NOCalibration405form->setWindowTitle(QApplication::translate("NOCalibration405form", "Form", 0));
        AnalogLabel->setText(QApplication::translate("NOCalibration405form", "TextLabel", 0));
        Left->setText(QString());
        slopeMask->setText(QString());
        Right->setText(QString());
        Home->setText(QString());
        AnalogMask->setText(QString());
        NOCalibration->setText(QApplication::translate("NOCalibration405form", "NO Calibration", 0));
        SlopeLabel->setText(QApplication::translate("NOCalibration405form", "TextLabel", 0));
        Save->setText(QString());
        zeroMask->setText(QString());
        ZeroLabel->setText(QApplication::translate("NOCalibration405form", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class NOCalibration405form: public Ui_NOCalibration405form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOCALIBRATION405FORM_H
