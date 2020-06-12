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
    QPushButton *Left;
    QPushButton *Right;
    QPushButton *Home;
    QPushButton *Save;
    QLabel *TPCorections;
    QLabel *PSTD;
    QLabel *TSTD;
    QCheckBox *Enabled;

    void setupUi(QDialog *tpcorrectionsform)
    {
        if (tpcorrectionsform->objectName().isEmpty())
            tpcorrectionsform->setObjectName(QString::fromUtf8("tpcorrectionsform"));
        tpcorrectionsform->resize(800, 480);
        Left = new QPushButton(tpcorrectionsform);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(10, 119, 100, 351));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon);
        Left->setIconSize(QSize(100, 340));
        Right = new QPushButton(tpcorrectionsform);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(690, 119, 100, 351));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon1);
        Right->setIconSize(QSize(100, 340));
        Home = new QPushButton(tpcorrectionsform);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(690, 10, 100, 100));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon2);
        Home->setIconSize(QSize(100, 100));
        Save = new QPushButton(tpcorrectionsform);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(310, 380, 120, 60));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon3);
        Save->setIconSize(QSize(120, 60));
        TPCorections = new QLabel(tpcorrectionsform);
        TPCorections->setObjectName(QString::fromUtf8("TPCorections"));
        TPCorections->setGeometry(QRect(0, 20, 801, 81));
        QFont font;
        font.setPointSize(30);
        TPCorections->setFont(font);
        TPCorections->setAlignment(Qt::AlignCenter);
        PSTD = new QLabel(tpcorrectionsform);
        PSTD->setObjectName(QString::fromUtf8("PSTD"));
        PSTD->setGeometry(QRect(110, 180, 581, 71));
        QFont font1;
        font1.setPointSize(20);
        PSTD->setFont(font1);
        PSTD->setAlignment(Qt::AlignCenter);
        TSTD = new QLabel(tpcorrectionsform);
        TSTD->setObjectName(QString::fromUtf8("TSTD"));
        TSTD->setGeometry(QRect(110, 270, 581, 51));
        TSTD->setFont(font1);
        TSTD->setAlignment(Qt::AlignCenter);
        Enabled = new QCheckBox(tpcorrectionsform);
        Enabled->setObjectName(QString::fromUtf8("Enabled"));
        Enabled->setGeometry(QRect(300, 100, 201, 51));
        Enabled->setFont(font1);
        TPCorections->raise();
        Left->raise();
        Right->raise();
        Home->raise();
        Save->raise();
        PSTD->raise();
        TSTD->raise();
        Enabled->raise();

        retranslateUi(tpcorrectionsform);

        QMetaObject::connectSlotsByName(tpcorrectionsform);
    } // setupUi

    void retranslateUi(QDialog *tpcorrectionsform)
    {
        tpcorrectionsform->setWindowTitle(QApplication::translate("tpcorrectionsform", "Dialog", nullptr));
        Left->setText(QString());
        Right->setText(QString());
        Home->setText(QString());
        Save->setText(QString());
        TPCorections->setText(QApplication::translate("tpcorrectionsform", "T-P Corrections", nullptr));
        PSTD->setText(QApplication::translate("tpcorrectionsform", "PSTD = ", nullptr));
        TSTD->setText(QApplication::translate("tpcorrectionsform", "TSTD = ", nullptr));
        Enabled->setText(QApplication::translate("tpcorrectionsform", "Enabled", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tpcorrectionsform: public Ui_tpcorrectionsform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPCORRECTIONSFORM_H
