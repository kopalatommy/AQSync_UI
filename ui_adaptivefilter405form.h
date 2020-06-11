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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdaptiveFilter405Form
{
public:
    QPushButton *longMask;
    QPushButton *differenceMask;
    QPushButton *home;
    QPushButton *percentMask;
    QPushButton *Next;
    QPushButton *Save;
    QLabel *AdaptiveFilter;
    QPushButton *shortMask;
    QPushButton *Previous;
    QLabel *diffLabel;
    QLabel *shortLabel;
    QLabel *longLabel;
    QLabel *percentLabel;

    void setupUi(QWidget *AdaptiveFilter405Form)
    {
        if (AdaptiveFilter405Form->objectName().isEmpty())
            AdaptiveFilter405Form->setObjectName(QStringLiteral("AdaptiveFilter405Form"));
        AdaptiveFilter405Form->resize(800, 480);
        longMask = new QPushButton(AdaptiveFilter405Form);
        longMask->setObjectName(QStringLiteral("longMask"));
        longMask->setGeometry(QRect(430, 120, 241, 111));
        differenceMask = new QPushButton(AdaptiveFilter405Form);
        differenceMask->setObjectName(QStringLiteral("differenceMask"));
        differenceMask->setGeometry(QRect(430, 270, 241, 111));
        home = new QPushButton(AdaptiveFilter405Form);
        home->setObjectName(QStringLiteral("home"));
        home->setGeometry(QRect(690, 10, 100, 100));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon);
        home->setIconSize(QSize(100, 100));
        percentMask = new QPushButton(AdaptiveFilter405Form);
        percentMask->setObjectName(QStringLiteral("percentMask"));
        percentMask->setGeometry(QRect(130, 270, 241, 111));
        Next = new QPushButton(AdaptiveFilter405Form);
        Next->setObjectName(QStringLiteral("Next"));
        Next->setGeometry(QRect(690, 120, 100, 351));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Next->setIcon(icon1);
        Next->setIconSize(QSize(100, 340));
        Save = new QPushButton(AdaptiveFilter405Form);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(330, 410, 120, 60));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon2);
        Save->setIconSize(QSize(120, 60));
        AdaptiveFilter = new QLabel(AdaptiveFilter405Form);
        AdaptiveFilter->setObjectName(QStringLiteral("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(130, 20, 481, 81));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(30);
        AdaptiveFilter->setFont(font);
        AdaptiveFilter->setAlignment(Qt::AlignCenter);
        shortMask = new QPushButton(AdaptiveFilter405Form);
        shortMask->setObjectName(QStringLiteral("shortMask"));
        shortMask->setGeometry(QRect(130, 120, 241, 111));
        Previous = new QPushButton(AdaptiveFilter405Form);
        Previous->setObjectName(QStringLiteral("Previous"));
        Previous->setGeometry(QRect(10, 120, 100, 351));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Previous->setIcon(icon3);
        Previous->setIconSize(QSize(100, 340));
        diffLabel = new QLabel(AdaptiveFilter405Form);
        diffLabel->setObjectName(QStringLiteral("diffLabel"));
        diffLabel->setGeometry(QRect(134, 275, 231, 101));
        QFont font1;
        font1.setPointSize(18);
        diffLabel->setFont(font1);
        diffLabel->setAlignment(Qt::AlignCenter);
        shortLabel = new QLabel(AdaptiveFilter405Form);
        shortLabel->setObjectName(QStringLiteral("shortLabel"));
        shortLabel->setGeometry(QRect(130, 120, 241, 111));
        shortLabel->setFont(font1);
        shortLabel->setAlignment(Qt::AlignCenter);
        longLabel = new QLabel(AdaptiveFilter405Form);
        longLabel->setObjectName(QStringLiteral("longLabel"));
        longLabel->setGeometry(QRect(430, 120, 241, 111));
        longLabel->setFont(font1);
        longLabel->setAlignment(Qt::AlignCenter);
        percentLabel = new QLabel(AdaptiveFilter405Form);
        percentLabel->setObjectName(QStringLiteral("percentLabel"));
        percentLabel->setGeometry(QRect(430, 270, 241, 111));
        percentLabel->setFont(font1);
        percentLabel->setAlignment(Qt::AlignCenter);
        percentLabel->raise();
        longLabel->raise();
        shortLabel->raise();
        diffLabel->raise();
        longMask->raise();
        differenceMask->raise();
        home->raise();
        percentMask->raise();
        Next->raise();
        Save->raise();
        AdaptiveFilter->raise();
        shortMask->raise();
        Previous->raise();

        retranslateUi(AdaptiveFilter405Form);

        QMetaObject::connectSlotsByName(AdaptiveFilter405Form);
    } // setupUi

    void retranslateUi(QWidget *AdaptiveFilter405Form)
    {
        AdaptiveFilter405Form->setWindowTitle(QApplication::translate("AdaptiveFilter405Form", "Form", 0));
        longMask->setText(QString());
        differenceMask->setText(QString());
        home->setText(QString());
        percentMask->setText(QString());
        Next->setText(QString());
        Save->setText(QString());
        AdaptiveFilter->setText(QApplication::translate("AdaptiveFilter405Form", "Adaptive Filter", 0));
        shortMask->setText(QString());
        Previous->setText(QString());
        diffLabel->setText(QApplication::translate("AdaptiveFilter405Form", "Difference:\n"
"10", 0));
        shortLabel->setText(QApplication::translate("AdaptiveFilter405Form", "Short Length:\n"
"5", 0));
        longLabel->setText(QApplication::translate("AdaptiveFilter405Form", "Long Length:\n"
"10", 0));
        percentLabel->setText(QApplication::translate("AdaptiveFilter405Form", "Percent:\n"
"10", 0));
    } // retranslateUi

};

namespace Ui {
    class AdaptiveFilter405Form: public Ui_AdaptiveFilter405Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAPTIVEFILTER405FORM_H
