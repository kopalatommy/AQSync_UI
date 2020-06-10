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
    QPushButton *PushButton;
    QPushButton *Home;
    QPushButton *PushButton_2;
    QPushButton *Left;
    QPushButton *PushButton_3;
    QPushButton *PushButton_1;
    QPushButton *Right;
    QPushButton *Save;
    QPushButton *Right_2;
    QPushButton *PushButton_4;
    QPushButton *Home_2;
    QPushButton *PushButton_5;
    QPushButton *Save_2;
    QPushButton *Left_2;
    QLabel *AdaptiveFilter_2;
    QPushButton *PushButton_6;
    QPushButton *PushButton_7;

    void setupUi(QDialog *Calibration880nm)
    {
        if (Calibration880nm->objectName().isEmpty())
            Calibration880nm->setObjectName(QString::fromUtf8("Calibration880nm"));
        Calibration880nm->resize(800, 480);
        AdaptiveFilter = new QLabel(Calibration880nm);
        AdaptiveFilter->setObjectName(QString::fromUtf8("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(120, 20, 481, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(30);
        AdaptiveFilter->setFont(font);
        AdaptiveFilter->setAlignment(Qt::AlignCenter);
        PushButton = new QPushButton(Calibration880nm);
        PushButton->setObjectName(QString::fromUtf8("PushButton"));
        PushButton->setGeometry(QRect(440, 140, 211, 111));
        Home = new QPushButton(Calibration880nm);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(680, 10, 100, 100));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Buttons/button_home.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        PushButton_2 = new QPushButton(Calibration880nm);
        PushButton_2->setObjectName(QString::fromUtf8("PushButton_2"));
        PushButton_2->setGeometry(QRect(160, 280, 211, 111));
        Left = new QPushButton(Calibration880nm);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(30, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon1);
        Left->setIconSize(QSize(100, 340));
        PushButton_3 = new QPushButton(Calibration880nm);
        PushButton_3->setObjectName(QString::fromUtf8("PushButton_3"));
        PushButton_3->setGeometry(QRect(440, 280, 211, 111));
        PushButton_1 = new QPushButton(Calibration880nm);
        PushButton_1->setObjectName(QString::fromUtf8("PushButton_1"));
        PushButton_1->setGeometry(QRect(164, 140, 211, 111));
        Right = new QPushButton(Calibration880nm);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(680, 120, 100, 340));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon2);
        Right->setIconSize(QSize(100, 340));
        Save = new QPushButton(Calibration880nm);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(340, 410, 120, 60));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon3);
        Save->setIconSize(QSize(120, 60));
        Right_2 = new QPushButton(Calibration880nm);
        Right_2->setObjectName(QString::fromUtf8("Right_2"));
        Right_2->setGeometry(QRect(790, 390, 100, 340));
        Right_2->setIcon(icon2);
        Right_2->setIconSize(QSize(100, 340));
        PushButton_4 = new QPushButton(Calibration880nm);
        PushButton_4->setObjectName(QString::fromUtf8("PushButton_4"));
        PushButton_4->setGeometry(QRect(274, 410, 211, 111));
        Home_2 = new QPushButton(Calibration880nm);
        Home_2->setObjectName(QString::fromUtf8("Home_2"));
        Home_2->setGeometry(QRect(790, 280, 100, 100));
        Home_2->setIcon(icon);
        Home_2->setIconSize(QSize(100, 100));
        PushButton_5 = new QPushButton(Calibration880nm);
        PushButton_5->setObjectName(QString::fromUtf8("PushButton_5"));
        PushButton_5->setGeometry(QRect(270, 550, 211, 111));
        Save_2 = new QPushButton(Calibration880nm);
        Save_2->setObjectName(QString::fromUtf8("Save_2"));
        Save_2->setGeometry(QRect(450, 680, 120, 60));
        Save_2->setIcon(icon3);
        Save_2->setIconSize(QSize(120, 60));
        Left_2 = new QPushButton(Calibration880nm);
        Left_2->setObjectName(QString::fromUtf8("Left_2"));
        Left_2->setGeometry(QRect(140, 390, 100, 340));
        Left_2->setIcon(icon1);
        Left_2->setIconSize(QSize(100, 340));
        AdaptiveFilter_2 = new QLabel(Calibration880nm);
        AdaptiveFilter_2->setObjectName(QString::fromUtf8("AdaptiveFilter_2"));
        AdaptiveFilter_2->setGeometry(QRect(230, 290, 481, 81));
        AdaptiveFilter_2->setFont(font);
        AdaptiveFilter_2->setAlignment(Qt::AlignCenter);
        PushButton_6 = new QPushButton(Calibration880nm);
        PushButton_6->setObjectName(QString::fromUtf8("PushButton_6"));
        PushButton_6->setGeometry(QRect(550, 410, 211, 111));
        PushButton_7 = new QPushButton(Calibration880nm);
        PushButton_7->setObjectName(QString::fromUtf8("PushButton_7"));
        PushButton_7->setGeometry(QRect(550, 550, 211, 111));

        retranslateUi(Calibration880nm);

        QMetaObject::connectSlotsByName(Calibration880nm);
    } // setupUi

    void retranslateUi(QDialog *Calibration880nm)
    {
        Calibration880nm->setWindowTitle(QApplication::translate("Calibration880nm", "Dialog", nullptr));
        AdaptiveFilter->setText(QApplication::translate("Calibration880nm", "880nm Calibration", nullptr));
        PushButton->setText(QApplication::translate("Calibration880nm", "PushButton", nullptr));
        Home->setText(QString());
        PushButton_2->setText(QApplication::translate("Calibration880nm", "PushButton", nullptr));
        Left->setText(QString());
        PushButton_3->setText(QApplication::translate("Calibration880nm", "PushButton", nullptr));
        PushButton_1->setText(QApplication::translate("Calibration880nm", "PushButton", nullptr));
        Right->setText(QString());
        Save->setText(QString());
        Right_2->setText(QString());
        PushButton_4->setText(QApplication::translate("Calibration880nm", "PushButton", nullptr));
        Home_2->setText(QString());
        PushButton_5->setText(QApplication::translate("Calibration880nm", "PushButton", nullptr));
        Save_2->setText(QString());
        Left_2->setText(QString());
        AdaptiveFilter_2->setText(QApplication::translate("Calibration880nm", "880nm Calibration", nullptr));
        PushButton_6->setText(QApplication::translate("Calibration880nm", "PushButton", nullptr));
        PushButton_7->setText(QApplication::translate("Calibration880nm", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calibration880nm: public Ui_Calibration880nm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATION880NM_H
