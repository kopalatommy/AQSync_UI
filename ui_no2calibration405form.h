/********************************************************************************
** Form generated from reading UI file 'no2calibration405form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NO2CALIBRATION405FORM_H
#define UI_NO2CALIBRATION405FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_no2calibration405form
{
public:
    QPushButton *Home;
    QLabel *NOCalibration;
    QPushButton *save;
    QPushButton *Left;
    QPushButton *Right;
    QPushButton *slopeMask;
    QPushButton *slopeMask_2;
    QPushButton *slopeMask_3;

    void setupUi(QDialog *no2calibration405form)
    {
        if (no2calibration405form->objectName().isEmpty())
            no2calibration405form->setObjectName(QStringLiteral("no2calibration405form"));
        no2calibration405form->resize(800, 480);
        Home = new QPushButton(no2calibration405form);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(680, 10, 100, 100));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        NOCalibration = new QLabel(no2calibration405form);
        NOCalibration->setObjectName(QStringLiteral("NOCalibration"));
        NOCalibration->setGeometry(QRect(220, 20, 301, 81));
        QFont font;
        font.setPointSize(30);
        NOCalibration->setFont(font);
        save = new QPushButton(no2calibration405form);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(340, 400, 120, 60));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon1);
        save->setIconSize(QSize(120, 60));
        Left = new QPushButton(no2calibration405form);
        Left->setObjectName(QStringLiteral("Left"));
        Left->setGeometry(QRect(20, 120, 100, 340));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon2);
        Left->setIconSize(QSize(100, 340));
        Right = new QPushButton(no2calibration405form);
        Right->setObjectName(QStringLiteral("Right"));
        Right->setGeometry(QRect(680, 120, 100, 340));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon3);
        Right->setIconSize(QSize(100, 340));
        slopeMask = new QPushButton(no2calibration405form);
        slopeMask->setObjectName(QStringLiteral("slopeMask"));
        slopeMask->setGeometry(QRect(140, 130, 521, 71));
        slopeMask_2 = new QPushButton(no2calibration405form);
        slopeMask_2->setObjectName(QStringLiteral("slopeMask_2"));
        slopeMask_2->setGeometry(QRect(140, 220, 521, 71));
        slopeMask_3 = new QPushButton(no2calibration405form);
        slopeMask_3->setObjectName(QStringLiteral("slopeMask_3"));
        slopeMask_3->setGeometry(QRect(140, 300, 521, 71));

        retranslateUi(no2calibration405form);

        QMetaObject::connectSlotsByName(no2calibration405form);
    } // setupUi

    void retranslateUi(QDialog *no2calibration405form)
    {
        no2calibration405form->setWindowTitle(QApplication::translate("no2calibration405form", "Dialog", 0));
        Home->setText(QString());
        NOCalibration->setText(QApplication::translate("no2calibration405form", "NO2 Calibration", 0));
        save->setText(QString());
        Left->setText(QString());
        Right->setText(QString());
        slopeMask->setText(QApplication::translate("no2calibration405form", "PushButton", 0));
        slopeMask_2->setText(QApplication::translate("no2calibration405form", "PushButton", 0));
        slopeMask_3->setText(QApplication::translate("no2calibration405form", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class no2calibration405form: public Ui_no2calibration405form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NO2CALIBRATION405FORM_H
