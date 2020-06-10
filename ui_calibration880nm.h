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
        icon.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        PushButton_2 = new QPushButton(Calibration880nm);
        PushButton_2->setObjectName(QString::fromUtf8("PushButton_2"));
        PushButton_2->setGeometry(QRect(160, 280, 211, 111));
        Left = new QPushButton(Calibration880nm);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(30, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
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
    } // retranslateUi

};

namespace Ui {
    class Calibration880nm: public Ui_Calibration880nm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATION880NM_H
