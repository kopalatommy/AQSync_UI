/********************************************************************************
** Form generated from reading UI file 'dataselection405form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASELECTION405FORM_H
#define UI_DATASELECTION405FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
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
            dataselection405form->setObjectName(QString::fromUtf8("dataselection405form"));
        dataselection405form->resize(800, 480);
        DataSelection = new QLabel(dataselection405form);
        DataSelection->setObjectName(QString::fromUtf8("DataSelection"));
        DataSelection->setGeometry(QRect(240, 10, 281, 91));
        QFont font;
        font.setPointSize(30);
        DataSelection->setFont(font);
        Back = new QPushButton(dataselection405form);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(670, 20, 100, 100));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Back->setIcon(icon);
        Back->setIconSize(QSize(100, 100));
        Save = new QPushButton(dataselection405form);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(290, 380, 120, 60));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon1);
        Save->setIconSize(QSize(120, 60));
        Parameter = new QComboBox(dataselection405form);
        Parameter->addItem(QString());
        Parameter->setObjectName(QString::fromUtf8("Parameter"));
        Parameter->setGeometry(QRect(300, 130, 110, 35));
        ColorSelect = new QComboBox(dataselection405form);
        ColorSelect->addItem(QString());
        ColorSelect->addItem(QString());
        ColorSelect->addItem(QString());
        ColorSelect->addItem(QString());
        ColorSelect->addItem(QString());
        ColorSelect->addItem(QString());
        ColorSelect->addItem(QString());
        ColorSelect->addItem(QString());
        ColorSelect->addItem(QString());
        ColorSelect->addItem(QString());
        ColorSelect->addItem(QString());
        ColorSelect->addItem(QString());
        ColorSelect->addItem(QString());
        ColorSelect->setObjectName(QString::fromUtf8("ColorSelect"));
        ColorSelect->setGeometry(QRect(300, 210, 110, 35));
        Display = new QCheckBox(dataselection405form);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(310, 290, 101, 51));
        QFont font1;
        font1.setPointSize(15);
        Display->setFont(font1);

        retranslateUi(dataselection405form);

        QMetaObject::connectSlotsByName(dataselection405form);
    } // setupUi

    void retranslateUi(QDialog *dataselection405form)
    {
        dataselection405form->setWindowTitle(QApplication::translate("dataselection405form", "Dialog", nullptr));
        DataSelection->setText(QApplication::translate("dataselection405form", "Data Selection", nullptr));
        Back->setText(QString());
        Save->setText(QString());
        Parameter->setItemText(0, QApplication::translate("dataselection405form", "Select Parameter", nullptr));

        ColorSelect->setItemText(0, QApplication::translate("dataselection405form", "Select Color", nullptr));
        ColorSelect->setItemText(1, QApplication::translate("dataselection405form", "Blue", nullptr));
        ColorSelect->setItemText(2, QApplication::translate("dataselection405form", "Dark Blue", nullptr));
        ColorSelect->setItemText(3, QApplication::translate("dataselection405form", "Red", nullptr));
        ColorSelect->setItemText(4, QApplication::translate("dataselection405form", "Dark Red", nullptr));
        ColorSelect->setItemText(5, QApplication::translate("dataselection405form", "Green", nullptr));
        ColorSelect->setItemText(6, QApplication::translate("dataselection405form", "Dark Green", nullptr));
        ColorSelect->setItemText(7, QApplication::translate("dataselection405form", "Yellow", nullptr));
        ColorSelect->setItemText(8, QApplication::translate("dataselection405form", "Dark Yellow", nullptr));
        ColorSelect->setItemText(9, QApplication::translate("dataselection405form", "Magenta", nullptr));
        ColorSelect->setItemText(10, QApplication::translate("dataselection405form", "Dark Magenta", nullptr));
        ColorSelect->setItemText(11, QApplication::translate("dataselection405form", "Gray", nullptr));
        ColorSelect->setItemText(12, QApplication::translate("dataselection405form", "Dark Gray", nullptr));

        Display->setText(QApplication::translate("dataselection405form", "Display", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dataselection405form: public Ui_dataselection405form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASELECTION405FORM_H
