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
    QPushButton *percentMask;
    QLabel *shortLabel;
    QPushButton *shortMask;
    QPushButton *Next;
    QLabel *diffLabel;
    QLabel *longLabel;
    QLabel *AdaptiveFilter;
    QPushButton *differenceMask;
    QPushButton *Save;
    QLabel *percentLabel;
    QPushButton *longMask;
    QPushButton *Previous;
    QPushButton *home;

    void setupUi(QWidget *AdaptiveFilter405Form)
    {
        if (AdaptiveFilter405Form->objectName().isEmpty())
            AdaptiveFilter405Form->setObjectName(QString::fromUtf8("AdaptiveFilter405Form"));
        AdaptiveFilter405Form->resize(800, 480);
        percentMask = new QPushButton(AdaptiveFilter405Form);
        percentMask->setObjectName(QString::fromUtf8("percentMask"));
        percentMask->setGeometry(QRect(430, 270, 241, 111));
        shortLabel = new QLabel(AdaptiveFilter405Form);
        shortLabel->setObjectName(QString::fromUtf8("shortLabel"));
        shortLabel->setGeometry(QRect(130, 120, 241, 111));
        QFont font;
        font.setPointSize(18);
        shortLabel->setFont(font);
        shortLabel->setAlignment(Qt::AlignCenter);
        shortMask = new QPushButton(AdaptiveFilter405Form);
        shortMask->setObjectName(QString::fromUtf8("shortMask"));
        shortMask->setGeometry(QRect(130, 120, 241, 111));
        Next = new QPushButton(AdaptiveFilter405Form);
        Next->setObjectName(QString::fromUtf8("Next"));
        Next->setGeometry(QRect(690, 120, 100, 351));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Next->setIcon(icon);
        Next->setIconSize(QSize(100, 340));
        diffLabel = new QLabel(AdaptiveFilter405Form);
        diffLabel->setObjectName(QString::fromUtf8("diffLabel"));
        diffLabel->setGeometry(QRect(134, 275, 231, 101));
        diffLabel->setFont(font);
        diffLabel->setAlignment(Qt::AlignCenter);
        longLabel = new QLabel(AdaptiveFilter405Form);
        longLabel->setObjectName(QString::fromUtf8("longLabel"));
        longLabel->setGeometry(QRect(430, 120, 241, 111));
        longLabel->setFont(font);
        longLabel->setAlignment(Qt::AlignCenter);
        AdaptiveFilter = new QLabel(AdaptiveFilter405Form);
        AdaptiveFilter->setObjectName(QString::fromUtf8("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(0, 20, 801, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(30);
        AdaptiveFilter->setFont(font1);
        AdaptiveFilter->setAlignment(Qt::AlignCenter);
        differenceMask = new QPushButton(AdaptiveFilter405Form);
        differenceMask->setObjectName(QString::fromUtf8("differenceMask"));
        differenceMask->setGeometry(QRect(130, 270, 241, 111));
        Save = new QPushButton(AdaptiveFilter405Form);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(330, 410, 120, 60));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon1);
        Save->setIconSize(QSize(120, 60));
        percentLabel = new QLabel(AdaptiveFilter405Form);
        percentLabel->setObjectName(QString::fromUtf8("percentLabel"));
        percentLabel->setGeometry(QRect(430, 270, 241, 111));
        percentLabel->setFont(font);
        percentLabel->setAlignment(Qt::AlignCenter);
        longMask = new QPushButton(AdaptiveFilter405Form);
        longMask->setObjectName(QString::fromUtf8("longMask"));
        longMask->setGeometry(QRect(430, 120, 241, 111));
        Previous = new QPushButton(AdaptiveFilter405Form);
        Previous->setObjectName(QString::fromUtf8("Previous"));
        Previous->setGeometry(QRect(10, 120, 100, 351));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Previous->setIcon(icon2);
        Previous->setIconSize(QSize(100, 340));
        home = new QPushButton(AdaptiveFilter405Form);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(690, 10, 100, 100));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon3);
        home->setIconSize(QSize(100, 100));
        AdaptiveFilter->raise();
        percentLabel->raise();
        percentMask->raise();
        shortLabel->raise();
        shortMask->raise();
        Next->raise();
        diffLabel->raise();
        longLabel->raise();
        differenceMask->raise();
        Save->raise();
        longMask->raise();
        Previous->raise();
        home->raise();

        retranslateUi(AdaptiveFilter405Form);

        QMetaObject::connectSlotsByName(AdaptiveFilter405Form);
    } // setupUi

    void retranslateUi(QWidget *AdaptiveFilter405Form)
    {
        AdaptiveFilter405Form->setWindowTitle(QApplication::translate("AdaptiveFilter405Form", "Form", nullptr));
        percentMask->setText(QString());
        shortLabel->setText(QApplication::translate("AdaptiveFilter405Form", "Short Length:\n"
"5", nullptr));
        shortMask->setText(QString());
        Next->setText(QString());
        diffLabel->setText(QApplication::translate("AdaptiveFilter405Form", "Difference:\n"
"10", nullptr));
        longLabel->setText(QApplication::translate("AdaptiveFilter405Form", "Long Length:\n"
"10", nullptr));
        AdaptiveFilter->setText(QApplication::translate("AdaptiveFilter405Form", "Adaptive Filter", nullptr));
        differenceMask->setText(QString());
        Save->setText(QString());
        percentLabel->setText(QApplication::translate("AdaptiveFilter405Form", "Percent:\n"
"10", nullptr));
        longMask->setText(QString());
        Previous->setText(QString());
        home->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdaptiveFilter405Form: public Ui_AdaptiveFilter405Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAPTIVEFILTER405FORM_H
