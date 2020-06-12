/********************************************************************************
** Form generated from reading UI file 'adaptivefilterform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADAPTIVEFILTERFORM_H
#define UI_ADAPTIVEFILTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdaptiveFilterForm
{
public:
    QLabel *shortLabel;
    QLabel *name;
    QPushButton *percentMask;
    QPushButton *Next;
    QLabel *difference;
    QPushButton *shortMask;
    QPushButton *differnceMask;
    QPushButton *Previous;
    QLabel *percent;
    QPushButton *longMask;
    QLabel *longLabel;
    QPushButton *home;
    QPushButton *save;

    void setupUi(QWidget *AdaptiveFilterForm)
    {
        if (AdaptiveFilterForm->objectName().isEmpty())
            AdaptiveFilterForm->setObjectName(QStringLiteral("AdaptiveFilterForm"));
        AdaptiveFilterForm->resize(480, 277);
        AdaptiveFilterForm->setMinimumSize(QSize(480, 277));
        AdaptiveFilterForm->setMaximumSize(QSize(480, 277));
        shortLabel = new QLabel(AdaptiveFilterForm);
        shortLabel->setObjectName(QStringLiteral("shortLabel"));
        shortLabel->setGeometry(QRect(70, 100, 151, 41));
        QFont font;
        font.setPointSize(15);
        shortLabel->setFont(font);
        name = new QLabel(AdaptiveFilterForm);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(0, 10, 481, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        font1.setPointSize(30);
        name->setFont(font1);
        name->setAlignment(Qt::AlignCenter);
        percentMask = new QPushButton(AdaptiveFilterForm);
        percentMask->setObjectName(QStringLiteral("percentMask"));
        percentMask->setGeometry(QRect(60, 160, 181, 61));
        Next = new QPushButton(AdaptiveFilterForm);
        Next->setObjectName(QStringLiteral("Next"));
        Next->setGeometry(QRect(420, 80, 50, 175));
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/right_button_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Next->setIcon(icon);
        Next->setIconSize(QSize(50, 175));
        difference = new QLabel(AdaptiveFilterForm);
        difference->setObjectName(QStringLiteral("difference"));
        difference->setGeometry(QRect(240, 170, 161, 41));
        difference->setFont(font);
        shortMask = new QPushButton(AdaptiveFilterForm);
        shortMask->setObjectName(QStringLiteral("shortMask"));
        shortMask->setGeometry(QRect(60, 90, 181, 61));
        differnceMask = new QPushButton(AdaptiveFilterForm);
        differnceMask->setObjectName(QStringLiteral("differnceMask"));
        differnceMask->setGeometry(QRect(240, 160, 181, 61));
        Previous = new QPushButton(AdaptiveFilterForm);
        Previous->setObjectName(QStringLiteral("Previous"));
        Previous->setGeometry(QRect(10, 80, 50, 175));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/left_button_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Previous->setIcon(icon1);
        Previous->setIconSize(QSize(50, 175));
        percent = new QLabel(AdaptiveFilterForm);
        percent->setObjectName(QStringLiteral("percent"));
        percent->setGeometry(QRect(80, 170, 151, 41));
        percent->setFont(font);
        longMask = new QPushButton(AdaptiveFilterForm);
        longMask->setObjectName(QStringLiteral("longMask"));
        longMask->setGeometry(QRect(240, 90, 181, 61));
        longMask->setAutoRepeat(false);
        longLabel = new QLabel(AdaptiveFilterForm);
        longLabel->setObjectName(QStringLiteral("longLabel"));
        longLabel->setGeometry(QRect(240, 100, 171, 41));
        longLabel->setFont(font);
        home = new QPushButton(AdaptiveFilterForm);
        home->setObjectName(QStringLiteral("home"));
        home->setGeometry(QRect(420, 10, 50, 50));
        home->setMinimumSize(QSize(50, 50));
        home->setMaximumSize(QSize(50, 50));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/buttons/settings_home_button.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon2);
        home->setIconSize(QSize(50, 50));
        save = new QPushButton(AdaptiveFilterForm);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(190, 240, 100, 30));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/buttons/save_button_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon3);
        save->setIconSize(QSize(100, 30));
        percent->raise();
        longLabel->raise();
        shortLabel->raise();
        name->raise();
        percentMask->raise();
        Next->raise();
        difference->raise();
        shortMask->raise();
        differnceMask->raise();
        Previous->raise();
        longMask->raise();
        home->raise();
        save->raise();

        retranslateUi(AdaptiveFilterForm);

        QMetaObject::connectSlotsByName(AdaptiveFilterForm);
    } // setupUi

    void retranslateUi(QWidget *AdaptiveFilterForm)
    {
        AdaptiveFilterForm->setWindowTitle(QApplication::translate("AdaptiveFilterForm", "Form", 0));
        shortLabel->setText(QApplication::translate("AdaptiveFilterForm", "Short avg: 0", 0));
        name->setText(QApplication::translate("AdaptiveFilterForm", "Adaptive Filter", 0));
        percentMask->setText(QString());
        Next->setText(QString());
        difference->setText(QApplication::translate("AdaptiveFilterForm", "Min Diff: 0", 0));
        shortMask->setText(QString());
        differnceMask->setText(QString());
        Previous->setText(QString());
        percent->setText(QApplication::translate("AdaptiveFilterForm", "% Diff: 0", 0));
        longMask->setText(QString());
        longLabel->setText(QApplication::translate("AdaptiveFilterForm", "Long avg: 0", 0));
        home->setText(QString());
        save->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdaptiveFilterForm: public Ui_AdaptiveFilterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAPTIVEFILTERFORM_H
