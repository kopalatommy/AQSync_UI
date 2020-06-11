/********************************************************************************
** Form generated from reading UI file 'adaptivefilterbcpform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADAPTIVEFILTERBCPFORM_H
#define UI_ADAPTIVEFILTERBCPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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
            adaptivefilterBCPform->setObjectName(QStringLiteral("adaptivefilterBCPform"));
        adaptivefilterBCPform->resize(800, 480);
        Left = new QPushButton(adaptivefilterBCPform);
        Left->setObjectName(QStringLiteral("Left"));
        Left->setGeometry(QRect(20, 120, 100, 340));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon);
        Left->setIconSize(QSize(100, 340));
        AdaptiveFilter = new QLabel(adaptivefilterBCPform);
        AdaptiveFilter->setObjectName(QStringLiteral("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(150, 20, 481, 81));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(30);
        AdaptiveFilter->setFont(font);
        AdaptiveFilter->setAlignment(Qt::AlignCenter);
        shortMask = new QPushButton(adaptivefilterBCPform);
        shortMask->setObjectName(QStringLiteral("shortMask"));
        shortMask->setGeometry(QRect(154, 140, 211, 111));
        differenceMask = new QPushButton(adaptivefilterBCPform);
        differenceMask->setObjectName(QStringLiteral("differenceMask"));
        differenceMask->setGeometry(QRect(430, 280, 211, 111));
        Right = new QPushButton(adaptivefilterBCPform);
        Right->setObjectName(QStringLiteral("Right"));
        Right->setGeometry(QRect(670, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon1);
        Right->setIconSize(QSize(100, 340));
        percentMask = new QPushButton(adaptivefilterBCPform);
        percentMask->setObjectName(QStringLiteral("percentMask"));
        percentMask->setGeometry(QRect(150, 280, 211, 111));
        longMask = new QPushButton(adaptivefilterBCPform);
        longMask->setObjectName(QStringLiteral("longMask"));
        longMask->setGeometry(QRect(430, 140, 211, 111));
        Home = new QPushButton(adaptivefilterBCPform);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(670, 10, 100, 100));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon2);
        Home->setIconSize(QSize(100, 100));
        pushButton = new QPushButton(adaptivefilterBCPform);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 410, 120, 60));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(120, 60));

        retranslateUi(adaptivefilterBCPform);

        QMetaObject::connectSlotsByName(adaptivefilterBCPform);
    } // setupUi

    void retranslateUi(QDialog *adaptivefilterBCPform)
    {
        adaptivefilterBCPform->setWindowTitle(QApplication::translate("adaptivefilterBCPform", "Dialog", 0));
        Left->setText(QString());
        AdaptiveFilter->setText(QApplication::translate("adaptivefilterBCPform", "Adaptive Filter", 0));
        shortMask->setText(QApplication::translate("adaptivefilterBCPform", "PushButton", 0));
        differenceMask->setText(QApplication::translate("adaptivefilterBCPform", "PushButton", 0));
        Right->setText(QString());
        percentMask->setText(QApplication::translate("adaptivefilterBCPform", "PushButton", 0));
        longMask->setText(QApplication::translate("adaptivefilterBCPform", "PushButton", 0));
        Home->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adaptivefilterBCPform: public Ui_adaptivefilterBCPform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAPTIVEFILTERBCPFORM_H
