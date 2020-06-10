/********************************************************************************
** Form generated from reading UI file 'adaptivefilterbcpform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADAPTIVEFILTERBCPFORM_H
#define UI_ADAPTIVEFILTERBCPFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adaptivefilterBCPform
{
public:
    QPushButton *Left;
    QLabel *AdaptiveFilter;
    QPushButton *shortMask;
    QPushButton *differenceMask;
    QPushButton *Right;
    QPushButton *percentMask;
    QPushButton *longMask;
    QPushButton *Home;
    QPushButton *pushButton;

    void setupUi(QDialog *adaptivefilterBCPform)
    {
        if (adaptivefilterBCPform->objectName().isEmpty())
            adaptivefilterBCPform->setObjectName(QString::fromUtf8("adaptivefilterBCPform"));
        adaptivefilterBCPform->resize(800, 480);
        Left = new QPushButton(adaptivefilterBCPform);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(20, 120, 100, 340));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon);
        Left->setIconSize(QSize(100, 340));
        AdaptiveFilter = new QLabel(adaptivefilterBCPform);
        AdaptiveFilter->setObjectName(QString::fromUtf8("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(150, 20, 481, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(30);
        AdaptiveFilter->setFont(font);
        AdaptiveFilter->setAlignment(Qt::AlignCenter);
        shortMask = new QPushButton(adaptivefilterBCPform);
        shortMask->setObjectName(QString::fromUtf8("shortMask"));
        shortMask->setGeometry(QRect(154, 140, 211, 111));
        differenceMask = new QPushButton(adaptivefilterBCPform);
        differenceMask->setObjectName(QString::fromUtf8("differenceMask"));
        differenceMask->setGeometry(QRect(430, 280, 211, 111));
        Right = new QPushButton(adaptivefilterBCPform);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(670, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon1);
        Right->setIconSize(QSize(100, 340));
        percentMask = new QPushButton(adaptivefilterBCPform);
        percentMask->setObjectName(QString::fromUtf8("percentMask"));
        percentMask->setGeometry(QRect(150, 280, 211, 111));
        longMask = new QPushButton(adaptivefilterBCPform);
        longMask->setObjectName(QString::fromUtf8("longMask"));
        longMask->setGeometry(QRect(430, 140, 211, 111));
        Home = new QPushButton(adaptivefilterBCPform);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(670, 10, 100, 100));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Buttons/button_home.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon2);
        Home->setIconSize(QSize(100, 100));
        pushButton = new QPushButton(adaptivefilterBCPform);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 410, 120, 60));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(120, 60));

        retranslateUi(adaptivefilterBCPform);

        QMetaObject::connectSlotsByName(adaptivefilterBCPform);
    } // setupUi

    void retranslateUi(QDialog *adaptivefilterBCPform)
    {
        adaptivefilterBCPform->setWindowTitle(QApplication::translate("adaptivefilterBCPform", "Dialog", nullptr));
        Left->setText(QString());
        AdaptiveFilter->setText(QApplication::translate("adaptivefilterBCPform", "Adaptive Filter", nullptr));
        shortMask->setText(QApplication::translate("adaptivefilterBCPform", "PushButton", nullptr));
        differenceMask->setText(QApplication::translate("adaptivefilterBCPform", "PushButton", nullptr));
        Right->setText(QString());
        percentMask->setText(QApplication::translate("adaptivefilterBCPform", "PushButton", nullptr));
        longMask->setText(QApplication::translate("adaptivefilterBCPform", "PushButton", nullptr));
        Home->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adaptivefilterBCPform: public Ui_adaptivefilterBCPform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAPTIVEFILTERBCPFORM_H
