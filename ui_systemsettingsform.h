/********************************************************************************
** Form generated from reading UI file 'systemsettingsform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMSETTINGSFORM_H
#define UI_SYSTEMSETTINGSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemSettingsForm
{
public:
    QPushButton *closeButton;
    QPushButton *moveRightButton;
    QPushButton *moveLeftButton;
    QLabel *Title;
    QCheckBox *createEveryDay;
    QPushButton *applyButton;
    QLabel *dataSpaceLabel;
    QLabel *updateLabel;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SystemSettingsForm)
    {
        if (SystemSettingsForm->objectName().isEmpty())
            SystemSettingsForm->setObjectName(QStringLiteral("SystemSettingsForm"));
        SystemSettingsForm->resize(800, 480);
        SystemSettingsForm->setMinimumSize(QSize(800, 480));
        SystemSettingsForm->setMaximumSize(QSize(800, 480));
        closeButton = new QPushButton(SystemSettingsForm);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(680, 10, 100, 100));
        QFont font;
        font.setPointSize(15);
        closeButton->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("../Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);
        closeButton->setIconSize(QSize(100, 100));
        moveRightButton = new QPushButton(SystemSettingsForm);
        moveRightButton->setObjectName(QStringLiteral("moveRightButton"));
        moveRightButton->setGeometry(QRect(680, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        moveRightButton->setIcon(icon1);
        moveRightButton->setIconSize(QSize(100, 340));
        moveLeftButton = new QPushButton(SystemSettingsForm);
        moveLeftButton->setObjectName(QStringLiteral("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(20, 120, 100, 340));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        moveLeftButton->setIcon(icon2);
        moveLeftButton->setIconSize(QSize(100, 340));
        Title = new QLabel(SystemSettingsForm);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(160, 10, 461, 61));
        QFont font1;
        font1.setPointSize(30);
        Title->setFont(font1);
        Title->setAlignment(Qt::AlignCenter);
        createEveryDay = new QCheckBox(SystemSettingsForm);
        createEveryDay->setObjectName(QStringLiteral("createEveryDay"));
        createEveryDay->setGeometry(QRect(110, 90, 311, 31));
        QFont font2;
        font2.setPointSize(12);
        createEveryDay->setFont(font2);
        applyButton = new QPushButton(SystemSettingsForm);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setGeometry(QRect(500, 90, 93, 28));
        dataSpaceLabel = new QLabel(SystemSettingsForm);
        dataSpaceLabel->setObjectName(QStringLiteral("dataSpaceLabel"));
        dataSpaceLabel->setGeometry(QRect(90, 150, 621, 61));
        dataSpaceLabel->setFont(font);
        dataSpaceLabel->setAlignment(Qt::AlignCenter);
        updateLabel = new QLabel(SystemSettingsForm);
        updateLabel->setObjectName(QStringLiteral("updateLabel"));
        updateLabel->setGeometry(QRect(70, 320, 621, 61));
        updateLabel->setFont(font);
        updateLabel->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(SystemSettingsForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 390, 140, 60));
        pushButton->setFont(font2);
        QIcon icon3;
        icon3.addFile(QStringLiteral("../Buttons/button_check-for-update.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(140, 60));
        pushButton_2 = new QPushButton(SystemSettingsForm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 230, 140, 60));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../Buttons/CleanLogsButton.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(140, 60));
        Title->raise();
        closeButton->raise();
        moveRightButton->raise();
        moveLeftButton->raise();
        createEveryDay->raise();
        applyButton->raise();
        dataSpaceLabel->raise();
        updateLabel->raise();
        pushButton->raise();
        pushButton_2->raise();

        retranslateUi(SystemSettingsForm);

        QMetaObject::connectSlotsByName(SystemSettingsForm);
    } // setupUi

    void retranslateUi(QWidget *SystemSettingsForm)
    {
        SystemSettingsForm->setWindowTitle(QApplication::translate("SystemSettingsForm", "Form", 0));
        closeButton->setText(QString());
        moveRightButton->setText(QString());
        moveLeftButton->setText(QString());
        Title->setText(QApplication::translate("SystemSettingsForm", "System Settings Form", 0));
        createEveryDay->setText(QApplication::translate("SystemSettingsForm", "Create new data file every day", 0));
        applyButton->setText(QApplication::translate("SystemSettingsForm", "Apply", 0));
        dataSpaceLabel->setText(QApplication::translate("SystemSettingsForm", "Space used: 100mb / 400 mb : 25 %", 0));
        updateLabel->setText(QApplication::translate("SystemSettingsForm", "Current Version: Build 1", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SystemSettingsForm: public Ui_SystemSettingsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMSETTINGSFORM_H
