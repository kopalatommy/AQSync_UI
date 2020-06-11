/********************************************************************************
** Form generated from reading UI file 'modeform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODEFORM_H
#define UI_MODEFORM_H

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
            ModeForm->setObjectName(QStringLiteral("ModeForm"));
        ModeForm->resize(800, 480);
        ModeForm->setMinimumSize(QSize(800, 480));
        ModeForm->setMaximumSize(QSize(800, 480));
        moveRightButton = new QPushButton(ModeForm);
        moveRightButton->setObjectName(QStringLiteral("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        label = new QLabel(ModeForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 781, 71));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        moveLeftButton = new QPushButton(ModeForm);
        moveLeftButton->setObjectName(QStringLiteral("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        closeButton = new QPushButton(ModeForm);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font1;
        font1.setPointSize(15);
        closeButton->setFont(font1);
        saveButton = new QPushButton(ModeForm);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(330, 280, 93, 28));
        comboBox = new QComboBox(ModeForm);
        comboBox->setObjectName(QStringLiteral("comboBox"));
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
        ModeForm->setWindowTitle(QApplication::translate("ModeForm", "Form", 0));
        moveRightButton->setText(QApplication::translate("ModeForm", "->", 0));
        label->setText(QApplication::translate("ModeForm", "Mode Setting", 0));
        moveLeftButton->setText(QApplication::translate("ModeForm", "<-", 0));
        closeButton->setText(QApplication::translate("ModeForm", "Back", 0));
        saveButton->setText(QApplication::translate("ModeForm", "Save", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ModeForm", "Mode Setting", 0)
         << QApplication::translate("ModeForm", "Calc 1", 0)
         << QApplication::translate("ModeForm", "Calc 2", 0)
         << QApplication::translate("ModeForm", "Calc 3", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class ModeForm: public Ui_ModeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODEFORM_H
