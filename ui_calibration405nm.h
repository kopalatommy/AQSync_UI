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
    QPushButton *PushButton_1;
    QPushButton *Home;
    QPushButton *PushButton_2;
    QPushButton *Save;
    QPushButton *Left;
    QLabel *AdaptiveFilter;
    QPushButton *PushButton;
    QPushButton *PushButton_3;

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
        PushButton_1 = new QPushButton(calibration405nm);
        PushButton_1->setObjectName(QString::fromUtf8("PushButton_1"));
        PushButton_1->setGeometry(QRect(164, 140, 211, 111));
        Home = new QPushButton(calibration405nm);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(680, 10, 100, 100));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon1);
        Home->setIconSize(QSize(100, 100));
        PushButton_2 = new QPushButton(calibration405nm);
        PushButton_2->setObjectName(QString::fromUtf8("PushButton_2"));
        PushButton_2->setGeometry(QRect(160, 280, 211, 111));
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
        AdaptiveFilter->setGeometry(QRect(120, 20, 481, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(30);
        AdaptiveFilter->setFont(font);
        AdaptiveFilter->setAlignment(Qt::AlignCenter);
        PushButton = new QPushButton(calibration405nm);
        PushButton->setObjectName(QString::fromUtf8("PushButton"));
        PushButton->setGeometry(QRect(440, 140, 211, 111));
        PushButton_3 = new QPushButton(calibration405nm);
        PushButton_3->setObjectName(QString::fromUtf8("PushButton_3"));
        PushButton_3->setGeometry(QRect(440, 280, 211, 111));

        retranslateUi(calibration405nm);

        QMetaObject::connectSlotsByName(calibration405nm);
    } // setupUi

    void retranslateUi(QDialog *calibration405nm)
    {
        calibration405nm->setWindowTitle(QApplication::translate("calibration405nm", "Dialog", nullptr));
        Right->setText(QString());
        PushButton_1->setText(QApplication::translate("calibration405nm", "PushButton", nullptr));
        Home->setText(QString());
        PushButton_2->setText(QApplication::translate("calibration405nm", "PushButton", nullptr));
        Save->setText(QString());
        Left->setText(QString());
        AdaptiveFilter->setText(QApplication::translate("calibration405nm", "405nm Calibration", nullptr));
        PushButton->setText(QApplication::translate("calibration405nm", "PushButton", nullptr));
        PushButton_3->setText(QApplication::translate("calibration405nm", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calibration405nm: public Ui_calibration405nm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATION405NM_H
