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
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Mode405form
{
public:
    QLabel *ModeSettings;
    QPushButton *Home;
    QPushButton *Left;
    QPushButton *Right;
    QPushButton *Save;
    QComboBox *setMode;

    void setupUi(QDialog *Mode405form)
    {
        if (Mode405form->objectName().isEmpty())
            Mode405form->setObjectName(QString::fromUtf8("Mode405form"));
        Mode405form->resize(800, 480);
        ModeSettings = new QLabel(Mode405form);
        ModeSettings->setObjectName(QString::fromUtf8("ModeSettings"));
        ModeSettings->setGeometry(QRect(240, 10, 301, 101));
        QFont font;
        font.setPointSize(35);
        ModeSettings->setFont(font);
        Home = new QPushButton(Mode405form);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(660, 10, 100, 100));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        Left = new QPushButton(Mode405form);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(30, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon1);
        Left->setIconSize(QSize(100, 340));
        Right = new QPushButton(Mode405form);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(660, 120, 100, 340));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon2);
        Right->setIconSize(QSize(100, 340));
        Save = new QPushButton(Mode405form);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(340, 390, 120, 60));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon3);
        Save->setIconSize(QSize(120, 60));
        setMode = new QComboBox(Mode405form);
        setMode->addItem(QString());
        setMode->addItem(QString());
        setMode->addItem(QString());
        setMode->addItem(QString());
        setMode->setObjectName(QString::fromUtf8("setMode"));
        setMode->setGeometry(QRect(280, 200, 251, 61));
        QFont font1;
        font1.setPointSize(15);
        setMode->setFont(font1);

        retranslateUi(Mode405form);

        QMetaObject::connectSlotsByName(Mode405form);
    } // setupUi

    void retranslateUi(QDialog *Mode405form)
    {
        Mode405form->setWindowTitle(QApplication::translate("Mode405form", "Dialog", nullptr));
        ModeSettings->setText(QApplication::translate("Mode405form", "Mode Settings", nullptr));
        Home->setText(QString());
        Left->setText(QString());
        Right->setText(QString());
        Save->setText(QString());
        setMode->setItemText(0, QApplication::translate("Mode405form", "Measurement Mode", nullptr));
        setMode->setItemText(1, QApplication::translate("Mode405form", "NO", nullptr));
        setMode->setItemText(2, QApplication::translate("Mode405form", "NO2", nullptr));
        setMode->setItemText(3, QApplication::translate("Mode405form", "NO and NO2", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Mode405form: public Ui_Mode405form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODE405FORM_H
