/********************************************************************************
** Form generated from reading UI file 'modeform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODEFORM_H
#define UI_MODEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModeForm
{
public:
    QPushButton *moveRightButton;
    QLabel *label;
    QPushButton *moveLeftButton;
    QPushButton *closeButton;
    QPushButton *saveButton;
    QComboBox *comboBox;

    void setupUi(QWidget *ModeForm)
    {
        if (ModeForm->objectName().isEmpty())
            ModeForm->setObjectName(QString::fromUtf8("ModeForm"));
        ModeForm->resize(800, 480);
        ModeForm->setMinimumSize(QSize(800, 480));
        ModeForm->setMaximumSize(QSize(800, 480));
        moveRightButton = new QPushButton(ModeForm);
        moveRightButton->setObjectName(QString::fromUtf8("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        label = new QLabel(ModeForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 781, 71));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        moveLeftButton = new QPushButton(ModeForm);
        moveLeftButton->setObjectName(QString::fromUtf8("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        closeButton = new QPushButton(ModeForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font1;
        font1.setPointSize(15);
        closeButton->setFont(font1);
        saveButton = new QPushButton(ModeForm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(330, 280, 93, 28));
        comboBox = new QComboBox(ModeForm);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(270, 200, 231, 51));
        comboBox->setFont(font1);
        label->raise();
        moveRightButton->raise();
        moveLeftButton->raise();
        closeButton->raise();
        saveButton->raise();
        comboBox->raise();

        retranslateUi(ModeForm);

        QMetaObject::connectSlotsByName(ModeForm);
    } // setupUi

    void retranslateUi(QWidget *ModeForm)
    {
        ModeForm->setWindowTitle(QApplication::translate("ModeForm", "Form", nullptr));
        moveRightButton->setText(QApplication::translate("ModeForm", "->", nullptr));
        label->setText(QApplication::translate("ModeForm", "Mode Setting", nullptr));
        moveLeftButton->setText(QApplication::translate("ModeForm", "<-", nullptr));
        closeButton->setText(QApplication::translate("ModeForm", "Back", nullptr));
        saveButton->setText(QApplication::translate("ModeForm", "Save", nullptr));
        comboBox->setItemText(0, QApplication::translate("ModeForm", "Mode Setting", nullptr));
        comboBox->setItemText(1, QApplication::translate("ModeForm", "Calc 1", nullptr));
        comboBox->setItemText(2, QApplication::translate("ModeForm", "Calc 2", nullptr));
        comboBox->setItemText(3, QApplication::translate("ModeForm", "Calc 3", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ModeForm: public Ui_ModeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODEFORM_H
