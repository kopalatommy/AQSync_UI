/********************************************************************************
** Form generated from reading UI file 'adaptivefilter405form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADAPTIVEFILTER405FORM_H
#define UI_ADAPTIVEFILTER405FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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
            adaptivefilter405form->setObjectName(QStringLiteral("adaptivefilter405form"));
        adaptivefilter405form->resize(800, 480);
        AdaptiveFilter = new QLabel(adaptivefilter405form);
        AdaptiveFilter->setObjectName(QStringLiteral("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(110, 20, 481, 81));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(30);
        AdaptiveFilter->setFont(font);
        AdaptiveFilter->setAlignment(Qt::AlignCenter);
        Home = new QPushButton(adaptivefilter405form);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(670, 10, 100, 100));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        Left = new QPushButton(adaptivefilter405form);
        Left->setObjectName(QStringLiteral("Left"));
        Left->setGeometry(QRect(20, 120, 100, 340));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon1);
        Left->setIconSize(QSize(100, 340));
        Right = new QPushButton(adaptivefilter405form);
        Right->setObjectName(QStringLiteral("Right"));
        Right->setGeometry(QRect(670, 120, 100, 340));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon2);
        Right->setIconSize(QSize(100, 340));
        shortMask = new QPushButton(adaptivefilter405form);
        shortMask->setObjectName(QStringLiteral("shortMask"));
        shortMask->setGeometry(QRect(154, 140, 211, 111));
        percentMask = new QPushButton(adaptivefilter405form);
        percentMask->setObjectName(QStringLiteral("percentMask"));
        percentMask->setGeometry(QRect(150, 280, 211, 111));
        longMask = new QPushButton(adaptivefilter405form);
        longMask->setObjectName(QStringLiteral("longMask"));
        longMask->setGeometry(QRect(430, 140, 211, 111));
        differenceMask = new QPushButton(adaptivefilter405form);
        differenceMask->setObjectName(QStringLiteral("differenceMask"));
        differenceMask->setGeometry(QRect(430, 280, 211, 111));
        pushButton = new QPushButton(adaptivefilter405form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 410, 120, 60));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(120, 60));

        retranslateUi(adaptivefilter405form);

        QMetaObject::connectSlotsByName(adaptivefilter405form);
    } // setupUi

    void retranslateUi(QDialog *adaptivefilter405form)
    {
        adaptivefilter405form->setWindowTitle(QApplication::translate("adaptivefilter405form", "Dialog", 0));
        AdaptiveFilter->setText(QApplication::translate("adaptivefilter405form", "Adaptive Filter", 0));
        Home->setText(QString());
        Left->setText(QString());
        Right->setText(QString());
        shortMask->setText(QApplication::translate("adaptivefilter405form", "PushButton", 0));
        percentMask->setText(QApplication::translate("adaptivefilter405form", "PushButton", 0));
        longMask->setText(QApplication::translate("adaptivefilter405form", "PushButton", 0));
        differenceMask->setText(QApplication::translate("adaptivefilter405form", "PushButton", 0));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adaptivefilter405form: public Ui_adaptivefilter405form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAPTIVEFILTER405FORM_H
