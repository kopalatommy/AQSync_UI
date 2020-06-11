/********************************************************************************
** Form generated from reading UI file 'staticipform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATICIPFORM_H
#define UI_STATICIPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            StaticIPForm->setObjectName(QStringLiteral("StaticIPForm"));
        StaticIPForm->resize(800, 480);
        applyButton = new QPushButton(StaticIPForm);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setGeometry(QRect(340, 270, 93, 28));
        staticIP = new QLabel(StaticIPForm);
        staticIP->setObjectName(QStringLiteral("staticIP"));
        staticIP->setGeometry(QRect(150, 120, 481, 41));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(15);
        staticIP->setFont(font);
        staticIP->setAlignment(Qt::AlignCenter);
        Gateway = new QLabel(StaticIPForm);
        Gateway->setObjectName(QStringLiteral("Gateway"));
        Gateway->setGeometry(QRect(150, 170, 481, 41));
        QFont font1;
        font1.setPointSize(15);
        Gateway->setFont(font1);
        Gateway->setAlignment(Qt::AlignCenter);
        IPMask = new QPushButton(StaticIPForm);
        IPMask->setObjectName(QStringLiteral("IPMask"));
        IPMask->setGeometry(QRect(240, 110, 311, 51));
        activatedLabel = new QLabel(StaticIPForm);
        activatedLabel->setObjectName(QStringLiteral("activatedLabel"));
        activatedLabel->setGeometry(QRect(164, 90, 471, 20));
        activatedLabel->setAlignment(Qt::AlignCenter);
        Name = new QLabel(StaticIPForm);
        Name->setObjectName(QStringLiteral("Name"));
        Name->setGeometry(QRect(160, 30, 481, 61));
        QFont font2;
        font2.setPointSize(30);
        Name->setFont(font2);
        Name->setAlignment(Qt::AlignCenter);
        GatewayMask = new QPushButton(StaticIPForm);
        GatewayMask->setObjectName(QStringLiteral("GatewayMask"));
        GatewayMask->setGeometry(QRect(240, 160, 311, 51));
        Subnet = new QLabel(StaticIPForm);
        Subnet->setObjectName(QStringLiteral("Subnet"));
        Subnet->setGeometry(QRect(150, 220, 481, 41));
        Subnet->setFont(font1);
        Subnet->setAlignment(Qt::AlignCenter);
        SubnetMask = new QPushButton(StaticIPForm);
        SubnetMask->setObjectName(QStringLiteral("SubnetMask"));
        SubnetMask->setGeometry(QRect(240, 210, 311, 51));
        closeButton = new QPushButton(StaticIPForm);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        closeButton->setFont(font1);
        moveLeftButton = new QPushButton(StaticIPForm);
        moveLeftButton->setObjectName(QStringLiteral("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        moveRightButton = new QPushButton(StaticIPForm);
        moveRightButton->setObjectName(QStringLiteral("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));

        retranslateUi(StaticIPForm);

        QMetaObject::connectSlotsByName(StaticIPForm);
    } // setupUi

    void retranslateUi(QWidget *StaticIPForm)
    {
        StaticIPForm->setWindowTitle(QApplication::translate("StaticIPForm", "Form", 0));
        applyButton->setText(QApplication::translate("StaticIPForm", "Apply", 0));
        staticIP->setText(QApplication::translate("StaticIPForm", "Static IP: 172.0.0.1", 0));
        Gateway->setText(QApplication::translate("StaticIPForm", "Gateway: 172.0.0.1", 0));
        IPMask->setText(QString());
        activatedLabel->setText(QApplication::translate("StaticIPForm", "Active", 0));
        Name->setText(QApplication::translate("StaticIPForm", "Static IP settings", 0));
        GatewayMask->setText(QString());
        Subnet->setText(QApplication::translate("StaticIPForm", "Subnet mask: 172.0.0.1", 0));
        SubnetMask->setText(QString());
        closeButton->setText(QApplication::translate("StaticIPForm", "Back", 0));
        moveLeftButton->setText(QApplication::translate("StaticIPForm", "<-", 0));
        moveRightButton->setText(QApplication::translate("StaticIPForm", "->", 0));
    } // retranslateUi

};

namespace Ui {
    class StaticIPForm: public Ui_StaticIPForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATICIPFORM_H
