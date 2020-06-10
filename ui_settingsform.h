/********************************************************************************
** Form generated from reading UI file 'settingsform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSFORM_H
#define UI_SETTINGSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsForm
{
public:
    QPushButton *closeButton;
    QLabel *label;
    QPushButton *modbusButton;
    QPushButton *staticIPButton;
    QPushButton *avgButton;
    QPushButton *modeButton;
    QPushButton *adaptiveFilterButton;
    QPushButton *noCalButton;
    QPushButton *no2CalButton;
    QPushButton *flowCalButton;
    QPushButton *bcCalButton;
    QPushButton *pmCalFactors;
    QPushButton *aboutButton;
    QPushButton *systemSettingsButton;
    QPushButton *moveLeftButton;
    QPushButton *moveRightButton;
    QPushButton *dataFilesButton;

    void setupUi(QWidget *SettingsForm)
    {
        if (SettingsForm->objectName().isEmpty())
            SettingsForm->setObjectName(QString::fromUtf8("SettingsForm"));
        SettingsForm->resize(800, 480);
        closeButton = new QPushButton(SettingsForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font;
        font.setPointSize(15);
        closeButton->setFont(font);
        label = new QLabel(SettingsForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 20, 801, 61));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        modbusButton = new QPushButton(SettingsForm);
        modbusButton->setObjectName(QString::fromUtf8("modbusButton"));
        modbusButton->setGeometry(QRect(310, 330, 175, 50));
        staticIPButton = new QPushButton(SettingsForm);
        staticIPButton->setObjectName(QString::fromUtf8("staticIPButton"));
        staticIPButton->setGeometry(QRect(530, 90, 175, 50));
        avgButton = new QPushButton(SettingsForm);
        avgButton->setObjectName(QString::fromUtf8("avgButton"));
        avgButton->setGeometry(QRect(90, 90, 175, 50));
        modeButton = new QPushButton(SettingsForm);
        modeButton->setObjectName(QString::fromUtf8("modeButton"));
        modeButton->setGeometry(QRect(90, 150, 175, 50));
        adaptiveFilterButton = new QPushButton(SettingsForm);
        adaptiveFilterButton->setObjectName(QString::fromUtf8("adaptiveFilterButton"));
        adaptiveFilterButton->setGeometry(QRect(90, 210, 175, 50));
        noCalButton = new QPushButton(SettingsForm);
        noCalButton->setObjectName(QString::fromUtf8("noCalButton"));
        noCalButton->setGeometry(QRect(310, 150, 175, 50));
        no2CalButton = new QPushButton(SettingsForm);
        no2CalButton->setObjectName(QString::fromUtf8("no2CalButton"));
        no2CalButton->setGeometry(QRect(310, 210, 175, 50));
        flowCalButton = new QPushButton(SettingsForm);
        flowCalButton->setObjectName(QString::fromUtf8("flowCalButton"));
        flowCalButton->setGeometry(QRect(310, 270, 175, 50));
        bcCalButton = new QPushButton(SettingsForm);
        bcCalButton->setObjectName(QString::fromUtf8("bcCalButton"));
        bcCalButton->setGeometry(QRect(90, 270, 175, 50));
        pmCalFactors = new QPushButton(SettingsForm);
        pmCalFactors->setObjectName(QString::fromUtf8("pmCalFactors"));
        pmCalFactors->setGeometry(QRect(310, 90, 175, 50));
        aboutButton = new QPushButton(SettingsForm);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));
        aboutButton->setGeometry(QRect(530, 270, 175, 50));
        systemSettingsButton = new QPushButton(SettingsForm);
        systemSettingsButton->setObjectName(QString::fromUtf8("systemSettingsButton"));
        systemSettingsButton->setGeometry(QRect(530, 210, 175, 50));
        moveLeftButton = new QPushButton(SettingsForm);
        moveLeftButton->setObjectName(QString::fromUtf8("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        moveRightButton = new QPushButton(SettingsForm);
        moveRightButton->setObjectName(QString::fromUtf8("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        dataFilesButton = new QPushButton(SettingsForm);
        dataFilesButton->setObjectName(QString::fromUtf8("dataFilesButton"));
        dataFilesButton->setGeometry(QRect(530, 150, 175, 50));
        label->raise();
        closeButton->raise();
        modbusButton->raise();
        staticIPButton->raise();
        avgButton->raise();
        modeButton->raise();
        adaptiveFilterButton->raise();
        noCalButton->raise();
        no2CalButton->raise();
        flowCalButton->raise();
        bcCalButton->raise();
        pmCalFactors->raise();
        aboutButton->raise();
        systemSettingsButton->raise();
        moveLeftButton->raise();
        moveRightButton->raise();
        dataFilesButton->raise();

        retranslateUi(SettingsForm);

        QMetaObject::connectSlotsByName(SettingsForm);
    } // setupUi

    void retranslateUi(QWidget *SettingsForm)
    {
        SettingsForm->setWindowTitle(QApplication::translate("SettingsForm", "Form", nullptr));
        closeButton->setText(QApplication::translate("SettingsForm", "Back", nullptr));
        label->setText(QApplication::translate("SettingsForm", "Settings Page", nullptr));
        modbusButton->setText(QApplication::translate("SettingsForm", "Modbus", nullptr));
        staticIPButton->setText(QApplication::translate("SettingsForm", "StaticIP", nullptr));
        avgButton->setText(QApplication::translate("SettingsForm", "Avg", nullptr));
        modeButton->setText(QApplication::translate("SettingsForm", "Mode", nullptr));
        adaptiveFilterButton->setText(QApplication::translate("SettingsForm", "Adaptive Filter", nullptr));
        noCalButton->setText(QApplication::translate("SettingsForm", "NO Cal Factors", nullptr));
        no2CalButton->setText(QApplication::translate("SettingsForm", "NO2 Cal Factors", nullptr));
        flowCalButton->setText(QApplication::translate("SettingsForm", "Flow Cal Factors", nullptr));
        bcCalButton->setText(QApplication::translate("SettingsForm", "BC Cal Factors", nullptr));
        pmCalFactors->setText(QApplication::translate("SettingsForm", "PM Cal Factors", nullptr));
        aboutButton->setText(QApplication::translate("SettingsForm", "About", nullptr));
        systemSettingsButton->setText(QApplication::translate("SettingsForm", "System Settings", nullptr));
        moveLeftButton->setText(QApplication::translate("SettingsForm", "<-", nullptr));
        moveRightButton->setText(QApplication::translate("SettingsForm", "->", nullptr));
        dataFilesButton->setText(QApplication::translate("SettingsForm", "Data Files", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsForm: public Ui_SettingsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSFORM_H
