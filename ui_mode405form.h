/********************************************************************************
** Form generated from reading UI file 'mode405form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODE405FORM_H
#define UI_MODE405FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mode405Form
{
public:
    QPushButton *Home;
    QLabel *ModeSettings;
    QPushButton *Right;
    QPushButton *Save;
    QPushButton *Left;
    QComboBox *setMode;

    void setupUi(QWidget *Mode405Form)
    {
        if (Mode405Form->objectName().isEmpty())
            Mode405Form->setObjectName(QString::fromUtf8("Mode405Form"));
        Mode405Form->resize(800, 480);
        Home = new QPushButton(Mode405Form);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(690, 10, 100, 100));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        ModeSettings = new QLabel(Mode405Form);
        ModeSettings->setObjectName(QString::fromUtf8("ModeSettings"));
        ModeSettings->setGeometry(QRect(0, 20, 801, 101));
        QFont font;
        font.setPointSize(35);
        ModeSettings->setFont(font);
        ModeSettings->setAlignment(Qt::AlignCenter);
        Right = new QPushButton(Mode405Form);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(690, 130, 100, 340));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon1);
        Right->setIconSize(QSize(100, 340));
        Save = new QPushButton(Mode405Form);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(340, 400, 120, 60));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon2);
        Save->setIconSize(QSize(120, 60));
        Left = new QPushButton(Mode405Form);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(10, 130, 100, 340));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon3);
        Left->setIconSize(QSize(100, 340));
        setMode = new QComboBox(Mode405Form);
        setMode->addItem(QString());
        setMode->addItem(QString());
        setMode->addItem(QString());
        setMode->addItem(QString());
        setMode->setObjectName(QString::fromUtf8("setMode"));
        setMode->setGeometry(QRect(270, 200, 301, 61));
        QFont font1;
        font1.setPointSize(15);
        setMode->setFont(font1);
        ModeSettings->raise();
        Home->raise();
        Right->raise();
        Save->raise();
        Left->raise();
        setMode->raise();

        retranslateUi(Mode405Form);

        QMetaObject::connectSlotsByName(Mode405Form);
    } // setupUi

    void retranslateUi(QWidget *Mode405Form)
    {
        Mode405Form->setWindowTitle(QApplication::translate("Mode405Form", "Form", nullptr));
        Home->setText(QString());
        ModeSettings->setText(QApplication::translate("Mode405Form", "Mode Settings", nullptr));
        Right->setText(QString());
        Save->setText(QString());
        Left->setText(QString());
        setMode->setItemText(0, QApplication::translate("Mode405Form", "Measurement Mode", nullptr));
        setMode->setItemText(1, QApplication::translate("Mode405Form", "NO", nullptr));
        setMode->setItemText(2, QApplication::translate("Mode405Form", "NO2", nullptr));
        setMode->setItemText(3, QApplication::translate("Mode405Form", "NO and NO2", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Mode405Form: public Ui_Mode405Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODE405FORM_H
