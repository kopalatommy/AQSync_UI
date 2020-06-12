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
    QPushButton *Previous;
    QLabel *ModeLabel;
    QLabel *name;
    QPushButton *Next;
    QComboBox *ModeSetting;
    QPushButton *home;
    QPushButton *save;

    void setupUi(QWidget *ModeForm)
    {
        if (ModeForm->objectName().isEmpty())
            ModeForm->setObjectName(QStringLiteral("ModeForm"));
        ModeForm->resize(480, 277);
        ModeForm->setMinimumSize(QSize(480, 277));
        ModeForm->setMaximumSize(QSize(480, 277));
        Previous = new QPushButton(ModeForm);
        Previous->setObjectName(QStringLiteral("Previous"));
        Previous->setGeometry(QRect(10, 80, 50, 175));
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/left_button_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Previous->setIcon(icon);
        Previous->setIconSize(QSize(50, 175));
        ModeLabel = new QLabel(ModeForm);
        ModeLabel->setObjectName(QStringLiteral("ModeLabel"));
        ModeLabel->setGeometry(QRect(0, 90, 481, 21));
        ModeLabel->setAlignment(Qt::AlignCenter);
        name = new QLabel(ModeForm);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(0, 10, 481, 51));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(30);
        name->setFont(font);
        name->setAlignment(Qt::AlignCenter);
        Next = new QPushButton(ModeForm);
        Next->setObjectName(QStringLiteral("Next"));
        Next->setGeometry(QRect(420, 80, 50, 175));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/right_button_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Next->setIcon(icon1);
        Next->setIconSize(QSize(50, 175));
        ModeSetting = new QComboBox(ModeForm);
        ModeSetting->setObjectName(QStringLiteral("ModeSetting"));
        ModeSetting->setGeometry(QRect(170, 120, 150, 21));
        home = new QPushButton(ModeForm);
        home->setObjectName(QStringLiteral("home"));
        home->setGeometry(QRect(420, 10, 50, 50));
        home->setMinimumSize(QSize(50, 50));
        home->setMaximumSize(QSize(50, 50));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/buttons/GraphHome.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon2);
        home->setIconSize(QSize(50, 50));
        save = new QPushButton(ModeForm);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(190, 240, 100, 30));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/buttons/save_button_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon3);
        save->setIconSize(QSize(100, 30));
        ModeLabel->raise();
        Previous->raise();
        name->raise();
        Next->raise();
        ModeSetting->raise();
        home->raise();
        save->raise();

        retranslateUi(ModeForm);

        QMetaObject::connectSlotsByName(ModeForm);
    } // setupUi

    void retranslateUi(QWidget *ModeForm)
    {
        ModeForm->setWindowTitle(QApplication::translate("ModeForm", "Form", 0));
        Previous->setText(QString());
        ModeLabel->setText(QApplication::translate("ModeForm", "Mode", 0));
        name->setText(QApplication::translate("ModeForm", "Mode", 0));
        Next->setText(QString());
        ModeSetting->clear();
        ModeSetting->insertItems(0, QStringList()
         << QApplication::translate("ModeForm", "Measurement Mode", 0)
         << QApplication::translate("ModeForm", "NO", 0)
         << QApplication::translate("ModeForm", "NO2", 0)
         << QApplication::translate("ModeForm", "NO and NO2", 0)
        );
        home->setText(QString());
        save->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ModeForm: public Ui_ModeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODEFORM_H
