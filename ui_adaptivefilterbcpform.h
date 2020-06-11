/********************************************************************************
** Form generated from reading UI file 'adaptivefilterbcpform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADAPTIVEFILTERBCPFORM_H
#define UI_ADAPTIVEFILTERBCPFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdaptiveFilterBCPForm
{
public:
    QLabel *percentLabel;
    QPushButton *shortMask;
    QPushButton *Previous;
    QPushButton *longMask;
    QLabel *longLabel;
    QLabel *AdaptiveFilter;
    QLabel *diffLabel;
    QPushButton *Save;
    QLabel *shortLabel;
    QPushButton *differenceMask;
    QPushButton *home;
    QPushButton *Next;
    QPushButton *percentMask;

    void setupUi(QWidget *AdaptiveFilterBCPForm)
    {
        if (AdaptiveFilterBCPForm->objectName().isEmpty())
            AdaptiveFilterBCPForm->setObjectName(QString::fromUtf8("AdaptiveFilterBCPForm"));
        AdaptiveFilterBCPForm->resize(800, 480);
        percentLabel = new QLabel(AdaptiveFilterBCPForm);
        percentLabel->setObjectName(QString::fromUtf8("percentLabel"));
        percentLabel->setGeometry(QRect(430, 270, 241, 111));
        QFont font;
        font.setPointSize(18);
        percentLabel->setFont(font);
        percentLabel->setAlignment(Qt::AlignCenter);
        shortMask = new QPushButton(AdaptiveFilterBCPForm);
        shortMask->setObjectName(QString::fromUtf8("shortMask"));
        shortMask->setGeometry(QRect(130, 120, 241, 111));
        Previous = new QPushButton(AdaptiveFilterBCPForm);
        Previous->setObjectName(QString::fromUtf8("Previous"));
        Previous->setGeometry(QRect(10, 120, 100, 351));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Previous->setIcon(icon);
        Previous->setIconSize(QSize(100, 340));
        longMask = new QPushButton(AdaptiveFilterBCPForm);
        longMask->setObjectName(QString::fromUtf8("longMask"));
        longMask->setGeometry(QRect(430, 120, 241, 111));
        longLabel = new QLabel(AdaptiveFilterBCPForm);
        longLabel->setObjectName(QString::fromUtf8("longLabel"));
        longLabel->setGeometry(QRect(430, 120, 241, 111));
        longLabel->setFont(font);
        longLabel->setAlignment(Qt::AlignCenter);
        AdaptiveFilter = new QLabel(AdaptiveFilterBCPForm);
        AdaptiveFilter->setObjectName(QString::fromUtf8("AdaptiveFilter"));
        AdaptiveFilter->setGeometry(QRect(0, 20, 801, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(30);
        AdaptiveFilter->setFont(font1);
        AdaptiveFilter->setAlignment(Qt::AlignCenter);
        diffLabel = new QLabel(AdaptiveFilterBCPForm);
        diffLabel->setObjectName(QString::fromUtf8("diffLabel"));
        diffLabel->setGeometry(QRect(134, 275, 231, 101));
        diffLabel->setFont(font);
        diffLabel->setAlignment(Qt::AlignCenter);
        Save = new QPushButton(AdaptiveFilterBCPForm);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(330, 410, 120, 60));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon1);
        Save->setIconSize(QSize(120, 60));
        shortLabel = new QLabel(AdaptiveFilterBCPForm);
        shortLabel->setObjectName(QString::fromUtf8("shortLabel"));
        shortLabel->setGeometry(QRect(130, 120, 241, 111));
        shortLabel->setFont(font);
        shortLabel->setAlignment(Qt::AlignCenter);
        differenceMask = new QPushButton(AdaptiveFilterBCPForm);
        differenceMask->setObjectName(QString::fromUtf8("differenceMask"));
        differenceMask->setGeometry(QRect(430, 270, 241, 111));
        home = new QPushButton(AdaptiveFilterBCPForm);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(690, 10, 100, 100));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon2);
        home->setIconSize(QSize(100, 100));
        Next = new QPushButton(AdaptiveFilterBCPForm);
        Next->setObjectName(QString::fromUtf8("Next"));
        Next->setGeometry(QRect(690, 120, 100, 351));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Next->setIcon(icon3);
        Next->setIconSize(QSize(100, 340));
        percentMask = new QPushButton(AdaptiveFilterBCPForm);
        percentMask->setObjectName(QString::fromUtf8("percentMask"));
        percentMask->setGeometry(QRect(130, 270, 241, 111));
        longLabel->raise();
        shortLabel->raise();
        AdaptiveFilter->raise();
        percentLabel->raise();
        shortMask->raise();
        Previous->raise();
        longMask->raise();
        diffLabel->raise();
        Save->raise();
        differenceMask->raise();
        home->raise();
        Next->raise();
        percentMask->raise();

        retranslateUi(AdaptiveFilterBCPForm);

        QMetaObject::connectSlotsByName(AdaptiveFilterBCPForm);
    } // setupUi

    void retranslateUi(QWidget *AdaptiveFilterBCPForm)
    {
        AdaptiveFilterBCPForm->setWindowTitle(QApplication::translate("AdaptiveFilterBCPForm", "Form", nullptr));
        percentLabel->setText(QApplication::translate("AdaptiveFilterBCPForm", "Percent:\n"
"10", nullptr));
        shortMask->setText(QString());
        Previous->setText(QString());
        longMask->setText(QString());
        longLabel->setText(QApplication::translate("AdaptiveFilterBCPForm", "Long Length:\n"
"10", nullptr));
        AdaptiveFilter->setText(QApplication::translate("AdaptiveFilterBCPForm", "Adaptive Filter", nullptr));
        diffLabel->setText(QApplication::translate("AdaptiveFilterBCPForm", "Difference:\n"
"10", nullptr));
        Save->setText(QString());
        shortLabel->setText(QApplication::translate("AdaptiveFilterBCPForm", "Short Length:\n"
"5", nullptr));
        differenceMask->setText(QString());
        home->setText(QString());
        Next->setText(QString());
        percentMask->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdaptiveFilterBCPForm: public Ui_AdaptiveFilterBCPForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAPTIVEFILTERBCPFORM_H
