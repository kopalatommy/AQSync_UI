/********************************************************************************
** Form generated from reading UI file 'autozerobcp.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOZEROBCP_H
#define UI_AUTOZEROBCP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AutoZeroBCP
{
public:
    QPushButton *Left;
    QPushButton *Right;
    QPushButton *Home;
    QPushButton *Save;
    QPushButton *zeroingFrequenctMask;
    QLabel *AutoZero;
    QCheckBox *checkBox;
    QPushButton *zeroPeriodMask;
    QPushButton *BCZeroMask;
    QPushButton *PMZeroMask;
    QLabel *FreqLabel;
    QLabel *PeriodLabel;

    void setupUi(QDialog *AutoZeroBCP)
    {
        if (AutoZeroBCP->objectName().isEmpty())
            AutoZeroBCP->setObjectName(QStringLiteral("AutoZeroBCP"));
        AutoZeroBCP->resize(800, 480);
        Left = new QPushButton(AutoZeroBCP);
        Left->setObjectName(QStringLiteral("Left"));
        Left->setGeometry(QRect(30, 120, 100, 340));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon);
        Left->setIconSize(QSize(100, 340));
        Right = new QPushButton(AutoZeroBCP);
        Right->setObjectName(QStringLiteral("Right"));
        Right->setGeometry(QRect(680, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon1);
        Right->setIconSize(QSize(100, 340));
        Home = new QPushButton(AutoZeroBCP);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(680, 10, 100, 100));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon2);
        Home->setIconSize(QSize(100, 100));
        Save = new QPushButton(AutoZeroBCP);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(320, 400, 120, 60));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon3);
        Save->setIconSize(QSize(120, 60));
        zeroingFrequenctMask = new QPushButton(AutoZeroBCP);
        zeroingFrequenctMask->setObjectName(QStringLiteral("zeroingFrequenctMask"));
        zeroingFrequenctMask->setGeometry(QRect(180, 120, 411, 61));
        AutoZero = new QLabel(AutoZeroBCP);
        AutoZero->setObjectName(QStringLiteral("AutoZero"));
        AutoZero->setGeometry(QRect(0, 10, 801, 81));
        QFont font;
        font.setPointSize(30);
        AutoZero->setFont(font);
        AutoZero->setAlignment(Qt::AlignCenter);
        checkBox = new QCheckBox(AutoZeroBCP);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(280, 80, 201, 31));
        QFont font1;
        font1.setPointSize(15);
        checkBox->setFont(font1);
        zeroPeriodMask = new QPushButton(AutoZeroBCP);
        zeroPeriodMask->setObjectName(QStringLiteral("zeroPeriodMask"));
        zeroPeriodMask->setGeometry(QRect(180, 190, 411, 61));
        BCZeroMask = new QPushButton(AutoZeroBCP);
        BCZeroMask->setObjectName(QStringLiteral("BCZeroMask"));
        BCZeroMask->setGeometry(QRect(180, 260, 411, 61));
        PMZeroMask = new QPushButton(AutoZeroBCP);
        PMZeroMask->setObjectName(QStringLiteral("PMZeroMask"));
        PMZeroMask->setGeometry(QRect(180, 330, 411, 61));
        FreqLabel = new QLabel(AutoZeroBCP);
        FreqLabel->setObjectName(QStringLiteral("FreqLabel"));
        FreqLabel->setGeometry(QRect(310, 110, 351, 71));
        QFont font2;
        font2.setPointSize(25);
        FreqLabel->setFont(font2);
        PeriodLabel = new QLabel(AutoZeroBCP);
        PeriodLabel->setObjectName(QStringLiteral("PeriodLabel"));
        PeriodLabel->setGeometry(QRect(310, 190, 401, 61));
        PeriodLabel->setFont(font2);
        BCZeroMask->raise();
        FreqLabel->raise();
        PeriodLabel->raise();
        zeroPeriodMask->raise();
        zeroingFrequenctMask->raise();
        AutoZero->raise();
        Left->raise();
        Right->raise();
        Home->raise();
        Save->raise();
        checkBox->raise();
        PMZeroMask->raise();

        retranslateUi(AutoZeroBCP);

        QMetaObject::connectSlotsByName(AutoZeroBCP);
    } // setupUi

    void retranslateUi(QDialog *AutoZeroBCP)
    {
        AutoZeroBCP->setWindowTitle(QApplication::translate("AutoZeroBCP", "Dialog", 0));
        Left->setText(QString());
        Right->setText(QString());
        Home->setText(QString());
        Save->setText(QString());
        zeroingFrequenctMask->setText(QString());
        AutoZero->setText(QApplication::translate("AutoZeroBCP", "Auto Zero", 0));
        checkBox->setText(QApplication::translate("AutoZeroBCP", "Enable Auto Zeroing", 0));
        zeroPeriodMask->setText(QString());
        BCZeroMask->setText(QString());
        PMZeroMask->setText(QString());
        FreqLabel->setText(QApplication::translate("AutoZeroBCP", "TextLabel", 0));
        PeriodLabel->setText(QApplication::translate("AutoZeroBCP", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class AutoZeroBCP: public Ui_AutoZeroBCP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOZEROBCP_H
