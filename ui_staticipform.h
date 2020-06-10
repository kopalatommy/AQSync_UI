/********************************************************************************
** Form generated from reading UI file 'staticipform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATICIPFORM_H
#define UI_STATICIPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StaticIPForm
{
public:
    QPushButton *applyButton;
    QLabel *staticIP;
    QLabel *Gateway;
    QPushButton *IPMask;
    QLabel *activatedLabel;
    QLabel *Name;
    QPushButton *GatewayMask;
    QLabel *Subnet;
    QPushButton *SubnetMask;
    QPushButton *closeButton;
    QPushButton *moveLeftButton;
    QPushButton *moveRightButton;

    void setupUi(QWidget *StaticIPForm)
    {
        if (StaticIPForm->objectName().isEmpty())
            StaticIPForm->setObjectName(QString::fromUtf8("StaticIPForm"));
        StaticIPForm->resize(800, 480);
        applyButton = new QPushButton(StaticIPForm);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setGeometry(QRect(340, 270, 93, 28));
        staticIP = new QLabel(StaticIPForm);
        staticIP->setObjectName(QString::fromUtf8("staticIP"));
        staticIP->setGeometry(QRect(150, 120, 481, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(15);
        staticIP->setFont(font);
        staticIP->setAlignment(Qt::AlignCenter);
        Gateway = new QLabel(StaticIPForm);
        Gateway->setObjectName(QString::fromUtf8("Gateway"));
        Gateway->setGeometry(QRect(150, 170, 481, 41));
        QFont font1;
        font1.setPointSize(15);
        Gateway->setFont(font1);
        Gateway->setAlignment(Qt::AlignCenter);
        IPMask = new QPushButton(StaticIPForm);
        IPMask->setObjectName(QString::fromUtf8("IPMask"));
        IPMask->setGeometry(QRect(240, 110, 311, 51));
        activatedLabel = new QLabel(StaticIPForm);
        activatedLabel->setObjectName(QString::fromUtf8("activatedLabel"));
        activatedLabel->setGeometry(QRect(164, 90, 471, 20));
        activatedLabel->setAlignment(Qt::AlignCenter);
        Name = new QLabel(StaticIPForm);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setGeometry(QRect(160, 30, 481, 61));
        QFont font2;
        font2.setPointSize(30);
        Name->setFont(font2);
        Name->setAlignment(Qt::AlignCenter);
        GatewayMask = new QPushButton(StaticIPForm);
        GatewayMask->setObjectName(QString::fromUtf8("GatewayMask"));
        GatewayMask->setGeometry(QRect(240, 160, 311, 51));
        Subnet = new QLabel(StaticIPForm);
        Subnet->setObjectName(QString::fromUtf8("Subnet"));
        Subnet->setGeometry(QRect(150, 220, 481, 41));
        Subnet->setFont(font1);
        Subnet->setAlignment(Qt::AlignCenter);
        SubnetMask = new QPushButton(StaticIPForm);
        SubnetMask->setObjectName(QString::fromUtf8("SubnetMask"));
        SubnetMask->setGeometry(QRect(240, 210, 311, 51));
        closeButton = new QPushButton(StaticIPForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        closeButton->setFont(font1);
        moveLeftButton = new QPushButton(StaticIPForm);
        moveLeftButton->setObjectName(QString::fromUtf8("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        moveRightButton = new QPushButton(StaticIPForm);
        moveRightButton->setObjectName(QString::fromUtf8("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));

        retranslateUi(StaticIPForm);

        QMetaObject::connectSlotsByName(StaticIPForm);
    } // setupUi

    void retranslateUi(QWidget *StaticIPForm)
    {
        StaticIPForm->setWindowTitle(QApplication::translate("StaticIPForm", "Form", nullptr));
        applyButton->setText(QApplication::translate("StaticIPForm", "Apply", nullptr));
        staticIP->setText(QApplication::translate("StaticIPForm", "Static IP: 172.0.0.1", nullptr));
        Gateway->setText(QApplication::translate("StaticIPForm", "Gateway: 172.0.0.1", nullptr));
        IPMask->setText(QString());
        activatedLabel->setText(QApplication::translate("StaticIPForm", "Active", nullptr));
        Name->setText(QApplication::translate("StaticIPForm", "Static IP settings", nullptr));
        GatewayMask->setText(QString());
        Subnet->setText(QApplication::translate("StaticIPForm", "Subnet mask: 172.0.0.1", nullptr));
        SubnetMask->setText(QString());
        closeButton->setText(QApplication::translate("StaticIPForm", "Back", nullptr));
        moveLeftButton->setText(QApplication::translate("StaticIPForm", "<-", nullptr));
        moveRightButton->setText(QApplication::translate("StaticIPForm", "->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StaticIPForm: public Ui_StaticIPForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATICIPFORM_H
