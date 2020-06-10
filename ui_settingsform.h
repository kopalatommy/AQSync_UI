/********************************************************************************
** Form generated from reading UI file 'settingsform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSFORM_H
#define UI_SETTINGSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            SettingsForm->setObjectName(QStringLiteral("SettingsForm"));
        SettingsForm->resize(800, 480);
        closeButton = new QPushButton(SettingsForm);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font;
        font.setPointSize(15);
        closeButton->setFont(font);
        label = new QLabel(SettingsForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 20, 801, 61));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        modbusButton = new QPushButton(SettingsForm);
        modbusButton->setObjectName(QStringLiteral("modbusButton"));
        modbusButton->setGeometry(QRect(310, 330, 175, 50));
        staticIPButton = new QPushButton(SettingsForm);
        staticIPButton->setObjectName(QStringLiteral("staticIPButton"));
        staticIPButton->setGeometry(QRect(530, 90, 175, 50));
        avgButton = new QPushButton(SettingsForm);
        avgButton->setObjectName(QStringLiteral("avgButton"));
        avgButton->setGeometry(QRect(90, 90, 175, 50));
        modeButton = new QPushButton(SettingsForm);
        modeButton->setObjectName(QStringLiteral("modeButton"));
        modeButton->setGeometry(QRect(90, 150, 175, 50));
        adaptiveFilterButton = new QPushButton(SettingsForm);
        adaptiveFilterButton->setObjectName(QStringLiteral("adaptiveFilterButton"));
        adaptiveFilterButton->setGeometry(QRect(90, 210, 175, 50));
        noCalButton = new QPushButton(SettingsForm);
        noCalButton->setObjectName(QStringLiteral("noCalButton"));
        noCalButton->setGeometry(QRect(310, 150, 175, 50));
        no2CalButton = new QPushButton(SettingsForm);
        no2CalButton->setObjectName(QStringLiteral("no2CalButton"));
        no2CalButton->setGeometry(QRect(310, 210, 175, 50));
        flowCalButton = new QPushButton(SettingsForm);
        flowCalButton->setObjectName(QStringLiteral("flowCalButton"));
        flowCalButton->setGeometry(QRect(310, 270, 175, 50));
        bcCalButton = new QPushButton(SettingsForm);
        bcCalButton->setObjectName(QStringLiteral("bcCalButton"));
        bcCalButton->setGeometry(QRect(90, 270, 175, 50));
        pmCalFactors = new QPushButton(SettingsForm);
        pmCalFactors->setObjectName(QStringLiteral("pmCalFactors"));
        pmCalFactors->setGeometry(QRect(310, 90, 175, 50));
        aboutButton = new QPushButton(SettingsForm);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));
        aboutButton->setGeometry(QRect(530, 270, 175, 50));
        systemSettingsButton = new QPushButton(SettingsForm);
        systemSettingsButton->setObjectName(QStringLiteral("systemSettingsButton"));
        systemSettingsButton->setGeometry(QRect(530, 210, 175, 50));
        moveLeftButton = new QPushButton(SettingsForm);
        moveLeftButton->setObjectName(QStringLiteral("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        moveRightButton = new QPushButton(SettingsForm);
        moveRightButton->setObjectName(QStringLiteral("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        dataFilesButton = new QPushButton(SettingsForm);
        dataFilesButton->setObjectName(QStringLiteral("dataFilesButton"));
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
        SettingsForm->setWindowTitle(QApplication::translate("SettingsForm", "Form", 0));
        closeButton->setText(QApplication::translate("SettingsForm", "Back", 0));
        label->setText(QApplication::translate("SettingsForm", "Settings Page", 0));
        modbusButton->setText(QApplication::translate("SettingsForm", "Modbus", 0));
        staticIPButton->setText(QApplication::translate("SettingsForm", "StaticIP", 0));
        avgButton->setText(QApplication::translate("SettingsForm", "Avg", 0));
        modeButton->setText(QApplication::translate("SettingsForm", "Mode", 0));
        adaptiveFilterButton->setText(QApplication::translate("SettingsForm", "Adaptive Filter", 0));
        noCalButton->setText(QApplication::translate("SettingsForm", "NO Cal Factors", 0));
        no2CalButton->setText(QApplication::translate("SettingsForm", "NO2 Cal Factors", 0));
        flowCalButton->setText(QApplication::translate("SettingsForm", "Flow Cal Factors", 0));
        bcCalButton->setText(QApplication::translate("SettingsForm", "BC Cal Factors", 0));
        pmCalFactors->setText(QApplication::translate("SettingsForm", "PM Cal Factors", 0));
        aboutButton->setText(QApplication::translate("SettingsForm", "About", 0));
        systemSettingsButton->setText(QApplication::translate("SettingsForm", "System Settings", 0));
        moveLeftButton->setText(QApplication::translate("SettingsForm", "<-", 0));
        moveRightButton->setText(QApplication::translate("SettingsForm", "->", 0));
        dataFilesButton->setText(QApplication::translate("SettingsForm", "Data Files", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsForm: public Ui_SettingsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSFORM_H
