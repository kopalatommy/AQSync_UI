/********************************************************************************
** Form generated from reading UI file 'avgsettingform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVGSETTINGFORM_H
#define UI_AVGSETTINGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AvgSettingForm
{
public:
    QPushButton *closeButton;
    QPushButton *moveLeftButton;
    QPushButton *moveRightButton;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *saveButton;

    void setupUi(QWidget *AvgSettingForm)
    {
        if (AvgSettingForm->objectName().isEmpty())
            AvgSettingForm->setObjectName(QStringLiteral("AvgSettingForm"));
        AvgSettingForm->resize(800, 480);
        closeButton = new QPushButton(AvgSettingForm);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font;
        font.setPointSize(15);
        closeButton->setFont(font);
        moveLeftButton = new QPushButton(AvgSettingForm);
        moveLeftButton->setObjectName(QStringLiteral("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        moveRightButton = new QPushButton(AvgSettingForm);
        moveRightButton->setObjectName(QStringLiteral("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        label = new QLabel(AvgSettingForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 781, 71));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        comboBox = new QComboBox(AvgSettingForm);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(270, 200, 231, 51));
        comboBox->setFont(font);
        saveButton = new QPushButton(AvgSettingForm);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(330, 280, 93, 28));
        label->raise();
        closeButton->raise();
        moveLeftButton->raise();
        moveRightButton->raise();
        comboBox->raise();
        saveButton->raise();

        retranslateUi(AvgSettingForm);

        QMetaObject::connectSlotsByName(AvgSettingForm);
    } // setupUi

    void retranslateUi(QWidget *AvgSettingForm)
    {
        AvgSettingForm->setWindowTitle(QApplication::translate("AvgSettingForm", "Form", 0));
        closeButton->setText(QApplication::translate("AvgSettingForm", "Back", 0));
        moveLeftButton->setText(QApplication::translate("AvgSettingForm", "<-", 0));
        moveRightButton->setText(QApplication::translate("AvgSettingForm", "->", 0));
        label->setText(QApplication::translate("AvgSettingForm", "Average Setting", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AvgSettingForm", "Average Settings", 0)
         << QApplication::translate("AvgSettingForm", "10 seconds", 0)
         << QApplication::translate("AvgSettingForm", "1 minute", 0)
         << QApplication::translate("AvgSettingForm", "5 minutes", 0)
         << QApplication::translate("AvgSettingForm", "1 hour", 0)
        );
        saveButton->setText(QApplication::translate("AvgSettingForm", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class AvgSettingForm: public Ui_AvgSettingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVGSETTINGFORM_H
