/********************************************************************************
** Form generated from reading UI file 'tpcorrectionsform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPCORRECTIONSFORM_H
#define UI_TPCORRECTIONSFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tpcorrectionsform
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *checkBox;

    void setupUi(QDialog *tpcorrectionsform)
    {
        if (tpcorrectionsform->objectName().isEmpty())
            tpcorrectionsform->setObjectName(QString::fromUtf8("tpcorrectionsform"));
        tpcorrectionsform->resize(800, 480);
        pushButton = new QPushButton(tpcorrectionsform);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 120, 100, 340));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(100, 340));
        pushButton_2 = new QPushButton(tpcorrectionsform);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(650, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(100, 340));
        pushButton_3 = new QPushButton(tpcorrectionsform);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(650, 0, 100, 100));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Buttons/button_home.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(100, 100));
        pushButton_4 = new QPushButton(tpcorrectionsform);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(310, 380, 120, 60));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(120, 60));
        label = new QLabel(tpcorrectionsform);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 20, 301, 71));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label_2 = new QLabel(tpcorrectionsform);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 180, 231, 71));
        QFont font1;
        font1.setPointSize(20);
        label_2->setFont(font1);
        label_3 = new QLabel(tpcorrectionsform);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 270, 181, 51));
        label_3->setFont(font1);
        checkBox = new QCheckBox(tpcorrectionsform);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(300, 100, 131, 51));
        checkBox->setFont(font1);

        retranslateUi(tpcorrectionsform);

        QMetaObject::connectSlotsByName(tpcorrectionsform);
    } // setupUi

    void retranslateUi(QDialog *tpcorrectionsform)
    {
        tpcorrectionsform->setWindowTitle(QApplication::translate("tpcorrectionsform", "Dialog", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        label->setText(QApplication::translate("tpcorrectionsform", "T-P Corrections", nullptr));
        label_2->setText(QApplication::translate("tpcorrectionsform", "PSTD = ", nullptr));
        label_3->setText(QApplication::translate("tpcorrectionsform", "TSTD = ", nullptr));
        checkBox->setText(QApplication::translate("tpcorrectionsform", "Enabled", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tpcorrectionsform: public Ui_tpcorrectionsform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPCORRECTIONSFORM_H
