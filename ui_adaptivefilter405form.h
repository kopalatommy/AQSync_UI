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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdaptiveFilter405Form
{
public:
    QPushButton *longMask;
    QPushButton *differenceMask;
    QPushButton *Home;
    QPushButton *percentMask;
    QPushButton *Right;
    QPushButton *save;
    QLabel *AdaptiveFilter;
    QPushButton *shortMask;
    QPushButton *Left;
    QLabel *diffLabel;
    QLabel *shortLabel;
    QLabel *longLabel;
    QLabel *percentLabel;

    void setupUi(QWidget *AdaptiveFilter405Form)
    {
        if (AdaptiveFilter405Form->objectName().isEmpty())
            AdaptiveFilter405Form->setObjectName(QString::fromUtf8("AdaptiveFilter405Form"));
        AdaptiveFilter405Form->resize(800, 480);
        longMask = new QPushButton(AdaptiveFilter405Form);
        longMask->setObjectName(QString::fromUtf8("longMask"));
        longMask->setGeometry(QRect(430, 120, 241, 111));
        differenceMask = new QPushButton(AdaptiveFilter405Form);
        differenceMask->setObjectName(QString::fromUtf8("differenceMask"));
        differenceMask->setGeometry(QRect(430, 270, 241, 111));
        Home = new QPushButton(AdaptiveFilter405Form);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(690, 10, 100, 100));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        percentMask = new QPushButton(AdaptiveFilter405Form);
        percentMask->setObjectName(QString::fromUtf8("percentMask"));
        percentMask->setGeometry(QRect(130, 270, 241, 111));
        Right = new QPushButton(AdaptiveFilter405Form);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(690, 120, 100, 351));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon1);
        Right->setIconSize(QSize(100, 340));
        save = new QPushButton(AdaptiveFilter405Form);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(330, 410, 120, 60));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon2);
        save->setIconSize(QSize(120, 60));
        AdaptiveFilter = new QLabel(AdaptiveFilter405Form);
        AdaptiveFilter->setObjectName(QString::fromUtf8("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(130, 20, 481, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(30);
        AdaptiveFilter->setFont(font);
        AdaptiveFilter->setAlignment(Qt::AlignCenter);
        shortMask = new QPushButton(AdaptiveFilter405Form);
        shortMask->setObjectName(QString::fromUtf8("shortMask"));
        shortMask->setGeometry(QRect(130, 120, 241, 111));
        Left = new QPushButton(AdaptiveFilter405Form);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(10, 120, 100, 351));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon3);
        Left->setIconSize(QSize(100, 340));
        diffLabel = new QLabel(AdaptiveFilter405Form);
        diffLabel->setObjectName(QString::fromUtf8("diffLabel"));
        diffLabel->setGeometry(QRect(134, 275, 231, 101));
        QFont font1;
        font1.setPointSize(18);
        diffLabel->setFont(font1);
        diffLabel->setAlignment(Qt::AlignCenter);
        shortLabel = new QLabel(AdaptiveFilter405Form);
        shortLabel->setObjectName(QString::fromUtf8("shortLabel"));
        shortLabel->setGeometry(QRect(130, 120, 241, 111));
        shortLabel->setFont(font1);
        shortLabel->setAlignment(Qt::AlignCenter);
        longLabel = new QLabel(AdaptiveFilter405Form);
        longLabel->setObjectName(QString::fromUtf8("longLabel"));
        longLabel->setGeometry(QRect(430, 120, 241, 111));
        longLabel->setFont(font1);
        longLabel->setAlignment(Qt::AlignCenter);
        percentLabel = new QLabel(AdaptiveFilter405Form);
        percentLabel->setObjectName(QString::fromUtf8("percentLabel"));
        percentLabel->setGeometry(QRect(430, 270, 241, 111));
        percentLabel->setFont(font1);
        percentLabel->setAlignment(Qt::AlignCenter);
        percentLabel->raise();
        longLabel->raise();
        shortLabel->raise();
        diffLabel->raise();
        longMask->raise();
        differenceMask->raise();
        Home->raise();
        percentMask->raise();
        Right->raise();
        save->raise();
        AdaptiveFilter->raise();
        shortMask->raise();
        Left->raise();

        retranslateUi(AdaptiveFilter405Form);

        QMetaObject::connectSlotsByName(AdaptiveFilter405Form);
    } // setupUi

    void retranslateUi(QWidget *AdaptiveFilter405Form)
    {
        AdaptiveFilter405Form->setWindowTitle(QApplication::translate("AdaptiveFilter405Form", "Form", nullptr));
        longMask->setText(QString());
        differenceMask->setText(QString());
        Home->setText(QString());
        percentMask->setText(QString());
        Right->setText(QString());
        save->setText(QString());
        AdaptiveFilter->setText(QApplication::translate("AdaptiveFilter405Form", "Adaptive Filter", nullptr));
        shortMask->setText(QString());
        Left->setText(QString());
        diffLabel->setText(QApplication::translate("AdaptiveFilter405Form", "Difference:\n"
"10", nullptr));
        shortLabel->setText(QApplication::translate("AdaptiveFilter405Form", "Short Length:\n"
"5", nullptr));
        longLabel->setText(QApplication::translate("AdaptiveFilter405Form", "Long Length:\n"
"10", nullptr));
        percentLabel->setText(QApplication::translate("AdaptiveFilter405Form", "Percent:\n"
"10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdaptiveFilter405Form: public Ui_AdaptiveFilter405Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAPTIVEFILTER405FORM_H
