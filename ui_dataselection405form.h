/********************************************************************************
** Form generated from reading UI file 'dataselection405form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASELECTION405FORM_H
#define UI_DATASELECTION405FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dataselection405form
{
public:
    QLabel *DataSelection;
    QPushButton *Back;
    QPushButton *Save;
    QComboBox *Parameter;
    QComboBox *ColorSelect;
    QCheckBox *Display;

    void setupUi(QDialog *dataselection405form)
    {
        if (dataselection405form->objectName().isEmpty())
            dataselection405form->setObjectName(QStringLiteral("dataselection405form"));
        dataselection405form->resize(800, 480);
        DataSelection = new QLabel(dataselection405form);
        DataSelection->setObjectName(QStringLiteral("DataSelection"));
        DataSelection->setGeometry(QRect(240, 10, 281, 91));
        QFont font;
        font.setPointSize(30);
        DataSelection->setFont(font);
        Back = new QPushButton(dataselection405form);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setGeometry(QRect(670, 20, 100, 100));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Back->setIcon(icon);
        Back->setIconSize(QSize(100, 100));
        Save = new QPushButton(dataselection405form);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(290, 380, 120, 60));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon1);
        Save->setIconSize(QSize(120, 60));
        Parameter = new QComboBox(dataselection405form);
        Parameter->setObjectName(QStringLiteral("Parameter"));
        Parameter->setGeometry(QRect(300, 130, 110, 35));
        ColorSelect = new QComboBox(dataselection405form);
        ColorSelect->setObjectName(QStringLiteral("ColorSelect"));
        ColorSelect->setGeometry(QRect(300, 210, 110, 35));
        Display = new QCheckBox(dataselection405form);
        Display->setObjectName(QStringLiteral("Display"));
        Display->setGeometry(QRect(310, 290, 101, 51));
        QFont font1;
        font1.setPointSize(15);
        Display->setFont(font1);

        retranslateUi(dataselection405form);

        QMetaObject::connectSlotsByName(dataselection405form);
    } // setupUi

    void retranslateUi(QDialog *dataselection405form)
    {
        dataselection405form->setWindowTitle(QApplication::translate("dataselection405form", "Dialog", 0));
        DataSelection->setText(QApplication::translate("dataselection405form", "Data Selection", 0));
        Back->setText(QString());
        Save->setText(QString());
        Parameter->clear();
        Parameter->insertItems(0, QStringList()
         << QApplication::translate("dataselection405form", "Select Parameter", 0)
        );
        ColorSelect->clear();
        ColorSelect->insertItems(0, QStringList()
         << QApplication::translate("dataselection405form", "Select Color", 0)
         << QApplication::translate("dataselection405form", "Blue", 0)
         << QApplication::translate("dataselection405form", "Dark Blue", 0)
         << QApplication::translate("dataselection405form", "Red", 0)
         << QApplication::translate("dataselection405form", "Dark Red", 0)
         << QApplication::translate("dataselection405form", "Green", 0)
         << QApplication::translate("dataselection405form", "Dark Green", 0)
         << QApplication::translate("dataselection405form", "Yellow", 0)
         << QApplication::translate("dataselection405form", "Dark Yellow", 0)
         << QApplication::translate("dataselection405form", "Magenta", 0)
         << QApplication::translate("dataselection405form", "Dark Magenta", 0)
         << QApplication::translate("dataselection405form", "Gray", 0)
         << QApplication::translate("dataselection405form", "Dark Gray", 0)
        );
        Display->setText(QApplication::translate("dataselection405form", "Display", 0));
    } // retranslateUi

};

namespace Ui {
    class dataselection405form: public Ui_dataselection405form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASELECTION405FORM_H
