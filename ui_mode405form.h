/********************************************************************************
** Form generated from reading UI file 'mode405form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODE405FORM_H
#define UI_MODE405FORM_H

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
            Mode405Form->setObjectName(QStringLiteral("Mode405Form"));
        Mode405Form->resize(800, 480);
        Home = new QPushButton(Mode405Form);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(690, 10, 100, 100));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        ModeSettings = new QLabel(Mode405Form);
        ModeSettings->setObjectName(QStringLiteral("ModeSettings"));
        ModeSettings->setGeometry(QRect(0, 20, 801, 101));
        QFont font;
        font.setPointSize(35);
        ModeSettings->setFont(font);
        ModeSettings->setAlignment(Qt::AlignCenter);
        Right = new QPushButton(Mode405Form);
        Right->setObjectName(QStringLiteral("Right"));
        Right->setGeometry(QRect(690, 130, 100, 340));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon1);
        Right->setIconSize(QSize(100, 340));
        Save = new QPushButton(Mode405Form);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(340, 400, 120, 60));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon2);
        Save->setIconSize(QSize(120, 60));
        Left = new QPushButton(Mode405Form);
        Left->setObjectName(QStringLiteral("Left"));
        Left->setGeometry(QRect(10, 130, 100, 340));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon3);
        Left->setIconSize(QSize(100, 340));
        setMode = new QComboBox(Mode405Form);
        setMode->setObjectName(QStringLiteral("setMode"));
        setMode->setGeometry(QRect(280, 170, 281, 61));
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
        Mode405Form->setWindowTitle(QApplication::translate("Mode405Form", "Form", 0));
        Home->setText(QString());
        ModeSettings->setText(QApplication::translate("Mode405Form", "Mode Settings", 0));
        Right->setText(QString());
        Save->setText(QString());
        Left->setText(QString());
        setMode->clear();
        setMode->insertItems(0, QStringList()
         << QApplication::translate("Mode405Form", "Measurement Mode", 0)
         << QApplication::translate("Mode405Form", "NO", 0)
         << QApplication::translate("Mode405Form", "NO2", 0)
         << QApplication::translate("Mode405Form", "NO and NO2", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Mode405Form: public Ui_Mode405Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODE405FORM_H
