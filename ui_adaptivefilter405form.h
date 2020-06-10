/********************************************************************************
** Form generated from reading UI file 'adaptivefilter405form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADAPTIVEFILTER405FORM_H
#define UI_ADAPTIVEFILTER405FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adaptivefilter405form
{
public:
    QLabel *AdaptiveFilter;
    QPushButton *Home;
    QPushButton *Left;
    QPushButton *Right;
    QPushButton *shortMask;
    QPushButton *percentMask;
    QPushButton *longMask;
    QPushButton *differenceMask;
    QPushButton *pushButton;

    void setupUi(QDialog *adaptivefilter405form)
    {
        if (adaptivefilter405form->objectName().isEmpty())
            adaptivefilter405form->setObjectName(QString::fromUtf8("adaptivefilter405form"));
        adaptivefilter405form->resize(800, 480);
        AdaptiveFilter = new QLabel(adaptivefilter405form);
        AdaptiveFilter->setObjectName(QString::fromUtf8("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(110, 20, 481, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(30);
        AdaptiveFilter->setFont(font);
        AdaptiveFilter->setAlignment(Qt::AlignCenter);
        Home = new QPushButton(adaptivefilter405form);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(670, 10, 100, 100));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Buttons/button_home.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        Left = new QPushButton(adaptivefilter405form);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(20, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon1);
        Left->setIconSize(QSize(100, 340));
        Right = new QPushButton(adaptivefilter405form);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(670, 120, 100, 340));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon2);
        Right->setIconSize(QSize(100, 340));
        shortMask = new QPushButton(adaptivefilter405form);
        shortMask->setObjectName(QString::fromUtf8("shortMask"));
        shortMask->setGeometry(QRect(154, 140, 211, 111));
        percentMask = new QPushButton(adaptivefilter405form);
        percentMask->setObjectName(QString::fromUtf8("percentMask"));
        percentMask->setGeometry(QRect(150, 280, 211, 111));
        longMask = new QPushButton(adaptivefilter405form);
        longMask->setObjectName(QString::fromUtf8("longMask"));
        longMask->setGeometry(QRect(430, 140, 211, 111));
        differenceMask = new QPushButton(adaptivefilter405form);
        differenceMask->setObjectName(QString::fromUtf8("differenceMask"));
        differenceMask->setGeometry(QRect(430, 280, 211, 111));
        pushButton = new QPushButton(adaptivefilter405form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 410, 120, 60));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(120, 60));

        retranslateUi(adaptivefilter405form);

        QMetaObject::connectSlotsByName(adaptivefilter405form);
    } // setupUi

    void retranslateUi(QDialog *adaptivefilter405form)
    {
        adaptivefilter405form->setWindowTitle(QApplication::translate("adaptivefilter405form", "Dialog", nullptr));
        AdaptiveFilter->setText(QApplication::translate("adaptivefilter405form", "Adaptive Filter", nullptr));
        Home->setText(QString());
        Left->setText(QString());
        Right->setText(QString());
        shortMask->setText(QApplication::translate("adaptivefilter405form", "PushButton", nullptr));
        percentMask->setText(QApplication::translate("adaptivefilter405form", "PushButton", nullptr));
        longMask->setText(QApplication::translate("adaptivefilter405form", "PushButton", nullptr));
        differenceMask->setText(QApplication::translate("adaptivefilter405form", "PushButton", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adaptivefilter405form: public Ui_adaptivefilter405form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAPTIVEFILTER405FORM_H
