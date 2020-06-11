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
    QPushButton *save;
    QPushButton *slopeMask_2;
    QPushButton *slopeMask;
    QPushButton *slopeMask_3;
    QLabel *NOCalibration;
    QPushButton *Left;

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
        save = new QPushButton(NO2Calibration405Form);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(340, 410, 120, 60));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon2);
        save->setIconSize(QSize(120, 60));
        slopeMask_2 = new QPushButton(NO2Calibration405Form);
        slopeMask_2->setObjectName(QString::fromUtf8("slopeMask_2"));
        slopeMask_2->setGeometry(QRect(140, 210, 521, 71));
        slopeMask = new QPushButton(NO2Calibration405Form);
        slopeMask->setObjectName(QString::fromUtf8("slopeMask"));
        slopeMask->setGeometry(QRect(140, 120, 521, 71));
        slopeMask_3 = new QPushButton(NO2Calibration405Form);
        slopeMask_3->setObjectName(QString::fromUtf8("slopeMask_3"));
        slopeMask_3->setGeometry(QRect(140, 300, 521, 71));
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
        NOCalibration->raise();
        Home->raise();
        Right->raise();
        save->raise();
        slopeMask_2->raise();
        slopeMask->raise();
        slopeMask_3->raise();
        Left->raise();

        retranslateUi(NO2Calibration405Form);

        QMetaObject::connectSlotsByName(NO2Calibration405Form);
    } // setupUi

    void retranslateUi(QWidget *NO2Calibration405Form)
    {
        NO2Calibration405Form->setWindowTitle(QApplication::translate("NO2Calibration405Form", "Form", nullptr));
        Home->setText(QString());
        Right->setText(QString());
        save->setText(QString());
        slopeMask_2->setText(QApplication::translate("NO2Calibration405Form", "PushButton", nullptr));
        slopeMask->setText(QApplication::translate("NO2Calibration405Form", "PushButton", nullptr));
        slopeMask_3->setText(QApplication::translate("NO2Calibration405Form", "PushButton", nullptr));
        NOCalibration->setText(QApplication::translate("NO2Calibration405Form", "NO2 Calibration", nullptr));
        Left->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NO2Calibration405Form: public Ui_NO2Calibration405Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NO2CALIBRATION405FORM_H
