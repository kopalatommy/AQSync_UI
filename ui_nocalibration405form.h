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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NOCalibration405form
{
public:
    QPushButton *Left;
    QPushButton *Right;
    QPushButton *Home;
    QPushButton *save;
    QPushButton *analogMask;
    QLabel *NOCalibration;
    QPushButton *zeroMask;
    QPushButton *slopeMask;

    void setupUi(QDialog *NOCalibration405form)
    {
        if (NOCalibration405form->objectName().isEmpty())
            NOCalibration405form->setObjectName(QStringLiteral("NOCalibration405form"));
        NOCalibration405form->resize(800, 480);
        Left = new QPushButton(NOCalibration405form);
        Left->setObjectName(QStringLiteral("Left"));
        Left->setGeometry(QRect(30, 130, 100, 340));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon);
        Left->setIconSize(QSize(100, 340));
        Right = new QPushButton(NOCalibration405form);
        Right->setObjectName(QStringLiteral("Right"));
        Right->setGeometry(QRect(690, 120, 100, 340));
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
        save = new QPushButton(NOCalibration405form);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(350, 410, 120, 60));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon3);
        save->setIconSize(QSize(120, 60));
        analogMask = new QPushButton(NOCalibration405form);
        analogMask->setObjectName(QStringLiteral("analogMask"));
        analogMask->setGeometry(QRect(150, 320, 521, 71));
        NOCalibration = new QLabel(NOCalibration405form);
        NOCalibration->setObjectName(QStringLiteral("NOCalibration"));
        NOCalibration->setGeometry(QRect(260, 20, 351, 71));
        QFont font;
        font.setPointSize(30);
        NOCalibration->setFont(font);
        zeroMask = new QPushButton(NOCalibration405form);
        zeroMask->setObjectName(QStringLiteral("zeroMask"));
        zeroMask->setGeometry(QRect(150, 220, 521, 71));
        slopeMask = new QPushButton(NOCalibration405form);
        slopeMask->setObjectName(QStringLiteral("slopeMask"));
        slopeMask->setGeometry(QRect(150, 130, 521, 71));

        retranslateUi(NOCalibration405form);

        QMetaObject::connectSlotsByName(NOCalibration405form);
    } // setupUi

    void retranslateUi(QDialog *NOCalibration405form)
    {
        NOCalibration405form->setWindowTitle(QApplication::translate("NOCalibration405form", "Dialog", 0));
        Left->setText(QString());
        Right->setText(QString());
        Home->setText(QString());
        save->setText(QString());
        analogMask->setText(QApplication::translate("NOCalibration405form", "PushButton", 0));
        NOCalibration->setText(QApplication::translate("NOCalibration405form", "NO Calibration", 0));
        zeroMask->setText(QApplication::translate("NOCalibration405form", "PushButton", 0));
        slopeMask->setText(QApplication::translate("NOCalibration405form", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class NOCalibration405form: public Ui_NOCalibration405form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOCALIBRATION405FORM_H
