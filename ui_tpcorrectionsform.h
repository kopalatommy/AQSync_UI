/********************************************************************************
** Form generated from reading UI file 'tpcorrectionsform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPCORRECTIONSFORM_H
#define UI_TPCORRECTIONSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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
            tpcorrectionsform->setObjectName(QStringLiteral("tpcorrectionsform"));
        tpcorrectionsform->resize(800, 480);
        Left = new QPushButton(tpcorrectionsform);
        Left->setObjectName(QStringLiteral("Left"));
        Left->setGeometry(QRect(30, 120, 100, 340));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon);
        Left->setIconSize(QSize(100, 340));
        Right = new QPushButton(tpcorrectionsform);
        Right->setObjectName(QStringLiteral("Right"));
        Right->setGeometry(QRect(650, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon1);
        Right->setIconSize(QSize(100, 340));
        Home = new QPushButton(tpcorrectionsform);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(650, 0, 100, 100));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon2);
        Home->setIconSize(QSize(100, 100));
        Save = new QPushButton(tpcorrectionsform);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(310, 380, 120, 60));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon3);
        Save->setIconSize(QSize(120, 60));
        TPCorections = new QLabel(tpcorrectionsform);
        TPCorections->setObjectName(QStringLiteral("TPCorections"));
        TPCorections->setGeometry(QRect(240, 20, 301, 71));
        QFont font;
        font.setPointSize(30);
        TPCorections->setFont(font);
        PSTD = new QLabel(tpcorrectionsform);
        PSTD->setObjectName(QStringLiteral("PSTD"));
        PSTD->setGeometry(QRect(300, 180, 231, 71));
        QFont font1;
        font1.setPointSize(20);
        PSTD->setFont(font1);
        TSTD = new QLabel(tpcorrectionsform);
        TSTD->setObjectName(QStringLiteral("TSTD"));
        TSTD->setGeometry(QRect(300, 270, 181, 51));
        TSTD->setFont(font1);
        Enabled = new QCheckBox(tpcorrectionsform);
        Enabled->setObjectName(QStringLiteral("Enabled"));
        Enabled->setGeometry(QRect(300, 100, 131, 51));
        Enabled->setFont(font1);

        retranslateUi(tpcorrectionsform);

        QMetaObject::connectSlotsByName(tpcorrectionsform);
    } // setupUi

    void retranslateUi(QDialog *tpcorrectionsform)
    {
        tpcorrectionsform->setWindowTitle(QApplication::translate("tpcorrectionsform", "Dialog", 0));
        Left->setText(QString());
        Right->setText(QString());
        Home->setText(QString());
        Save->setText(QString());
        TPCorections->setText(QApplication::translate("tpcorrectionsform", "T-P Corrections", 0));
        PSTD->setText(QApplication::translate("tpcorrectionsform", "PSTD = ", 0));
        TSTD->setText(QApplication::translate("tpcorrectionsform", "TSTD = ", 0));
        Enabled->setText(QApplication::translate("tpcorrectionsform", "Enabled", 0));
    } // retranslateUi

};

namespace Ui {
    class tpcorrectionsform: public Ui_tpcorrectionsform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPCORRECTIONSFORM_H
