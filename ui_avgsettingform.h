/********************************************************************************
** Form generated from reading UI file 'avgsettingform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVGSETTINGFORM_H
#define UI_AVGSETTINGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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
            AvgSettingForm->setObjectName(QString::fromUtf8("AvgSettingForm"));
        AvgSettingForm->resize(800, 480);
        closeButton = new QPushButton(AvgSettingForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font;
        font.setPointSize(15);
        closeButton->setFont(font);
        moveLeftButton = new QPushButton(AvgSettingForm);
        moveLeftButton->setObjectName(QString::fromUtf8("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        moveRightButton = new QPushButton(AvgSettingForm);
        moveRightButton->setObjectName(QString::fromUtf8("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        label = new QLabel(AvgSettingForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 781, 71));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        comboBox = new QComboBox(AvgSettingForm);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(270, 200, 231, 51));
        comboBox->setFont(font);
        saveButton = new QPushButton(AvgSettingForm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
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
        AvgSettingForm->setWindowTitle(QApplication::translate("AvgSettingForm", "Form", nullptr));
        closeButton->setText(QApplication::translate("AvgSettingForm", "Back", nullptr));
        moveLeftButton->setText(QApplication::translate("AvgSettingForm", "<-", nullptr));
        moveRightButton->setText(QApplication::translate("AvgSettingForm", "->", nullptr));
        label->setText(QApplication::translate("AvgSettingForm", "Average Setting", nullptr));
        comboBox->setItemText(0, QApplication::translate("AvgSettingForm", "Average Settings", nullptr));
        comboBox->setItemText(1, QApplication::translate("AvgSettingForm", "10 seconds", nullptr));
        comboBox->setItemText(2, QApplication::translate("AvgSettingForm", "1 minute", nullptr));
        comboBox->setItemText(3, QApplication::translate("AvgSettingForm", "5 minutes", nullptr));
        comboBox->setItemText(4, QApplication::translate("AvgSettingForm", "1 hour", nullptr));

        saveButton->setText(QApplication::translate("AvgSettingForm", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AvgSettingForm: public Ui_AvgSettingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVGSETTINGFORM_H
