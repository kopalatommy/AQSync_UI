/********************************************************************************
** Form generated from reading UI file 'adaptivefilterform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADAPTIVEFILTERFORM_H
#define UI_ADAPTIVEFILTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdaptiveFilterForm
{
public:
    QPushButton *moveRightButton;
    QLabel *label;
    QPushButton *moveLeftButton;
    QPushButton *closeButton;
    QLabel *longLabel;
    QLabel *percent;
    QLabel *shortLabel;
    QPushButton *shortMask;
    QLabel *difference;
    QPushButton *differenceMask;
    QPushButton *longMask;
    QPushButton *percentMask;
    QPushButton *saveButton;

    void setupUi(QWidget *AdaptiveFilterForm)
    {
        if (AdaptiveFilterForm->objectName().isEmpty())
            AdaptiveFilterForm->setObjectName(QString::fromUtf8("AdaptiveFilterForm"));
        AdaptiveFilterForm->resize(800, 480);
        AdaptiveFilterForm->setMinimumSize(QSize(800, 480));
        AdaptiveFilterForm->setMaximumSize(QSize(800, 480));
        moveRightButton = new QPushButton(AdaptiveFilterForm);
        moveRightButton->setObjectName(QString::fromUtf8("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        label = new QLabel(AdaptiveFilterForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 781, 71));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        moveLeftButton = new QPushButton(AdaptiveFilterForm);
        moveLeftButton->setObjectName(QString::fromUtf8("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        closeButton = new QPushButton(AdaptiveFilterForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font1;
        font1.setPointSize(15);
        closeButton->setFont(font1);
        longLabel = new QLabel(AdaptiveFilterForm);
        longLabel->setObjectName(QString::fromUtf8("longLabel"));
        longLabel->setGeometry(QRect(380, 180, 171, 41));
        longLabel->setFont(font1);
        percent = new QLabel(AdaptiveFilterForm);
        percent->setObjectName(QString::fromUtf8("percent"));
        percent->setGeometry(QRect(220, 250, 151, 41));
        percent->setFont(font1);
        shortLabel = new QLabel(AdaptiveFilterForm);
        shortLabel->setObjectName(QString::fromUtf8("shortLabel"));
        shortLabel->setGeometry(QRect(210, 180, 151, 41));
        shortLabel->setFont(font1);
        shortMask = new QPushButton(AdaptiveFilterForm);
        shortMask->setObjectName(QString::fromUtf8("shortMask"));
        shortMask->setGeometry(QRect(200, 170, 181, 61));
        difference = new QLabel(AdaptiveFilterForm);
        difference->setObjectName(QString::fromUtf8("difference"));
        difference->setGeometry(QRect(380, 250, 161, 41));
        difference->setFont(font1);
        differenceMask = new QPushButton(AdaptiveFilterForm);
        differenceMask->setObjectName(QString::fromUtf8("differenceMask"));
        differenceMask->setGeometry(QRect(380, 240, 181, 61));
        longMask = new QPushButton(AdaptiveFilterForm);
        longMask->setObjectName(QString::fromUtf8("longMask"));
        longMask->setGeometry(QRect(380, 170, 181, 61));
        longMask->setAutoRepeat(false);
        percentMask = new QPushButton(AdaptiveFilterForm);
        percentMask->setObjectName(QString::fromUtf8("percentMask"));
        percentMask->setGeometry(QRect(200, 240, 181, 61));
        saveButton = new QPushButton(AdaptiveFilterForm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(350, 340, 93, 28));
        label->raise();
        moveRightButton->raise();
        moveLeftButton->raise();
        closeButton->raise();
        longLabel->raise();
        percent->raise();
        shortLabel->raise();
        shortMask->raise();
        difference->raise();
        differenceMask->raise();
        longMask->raise();
        percentMask->raise();
        saveButton->raise();

        retranslateUi(AdaptiveFilterForm);

        QMetaObject::connectSlotsByName(AdaptiveFilterForm);
    } // setupUi

    void retranslateUi(QWidget *AdaptiveFilterForm)
    {
        AdaptiveFilterForm->setWindowTitle(QApplication::translate("AdaptiveFilterForm", "Form", nullptr));
        moveRightButton->setText(QApplication::translate("AdaptiveFilterForm", "->", nullptr));
        label->setText(QApplication::translate("AdaptiveFilterForm", "Adaptive Filter Form", nullptr));
        moveLeftButton->setText(QApplication::translate("AdaptiveFilterForm", "<-", nullptr));
        closeButton->setText(QApplication::translate("AdaptiveFilterForm", "Back", nullptr));
        longLabel->setText(QApplication::translate("AdaptiveFilterForm", "Long avg: 0", nullptr));
        percent->setText(QApplication::translate("AdaptiveFilterForm", "% Diff: 0", nullptr));
        shortLabel->setText(QApplication::translate("AdaptiveFilterForm", "Short avg: 0", nullptr));
        shortMask->setText(QString());
        difference->setText(QApplication::translate("AdaptiveFilterForm", "Min Diff: 0", nullptr));
        differenceMask->setText(QString());
        longMask->setText(QString());
        percentMask->setText(QString());
        saveButton->setText(QApplication::translate("AdaptiveFilterForm", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdaptiveFilterForm: public Ui_AdaptiveFilterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAPTIVEFILTERFORM_H
