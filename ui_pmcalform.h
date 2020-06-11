/********************************************************************************
** Form generated from reading UI file 'pmcalform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PMCALFORM_H
#define UI_PMCALFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PMCalForm
{
public:
    QPushButton *moveRightButton;
    QPushButton *closeButton;
    QLabel *label;
    QPushButton *moveLeftButton;
    QPushButton *zeroMask;
    QLabel *slope;
    QLabel *zero;
    QPushButton *slopeMask;
    QPushButton *saveButton;
    QLabel *massExt;
    QPushButton *massExtMask;

    void setupUi(QWidget *PMCalForm)
    {
        if (PMCalForm->objectName().isEmpty())
            PMCalForm->setObjectName(QStringLiteral("PMCalForm"));
        PMCalForm->resize(800, 480);
        PMCalForm->setMinimumSize(QSize(800, 480));
        PMCalForm->setMaximumSize(QSize(800, 480));
        moveRightButton = new QPushButton(PMCalForm);
        moveRightButton->setObjectName(QStringLiteral("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        closeButton = new QPushButton(PMCalForm);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font;
        font.setPointSize(15);
        closeButton->setFont(font);
        label = new QLabel(PMCalForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 20, 801, 61));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        moveLeftButton = new QPushButton(PMCalForm);
        moveLeftButton->setObjectName(QStringLiteral("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        zeroMask = new QPushButton(PMCalForm);
        zeroMask->setObjectName(QStringLiteral("zeroMask"));
        zeroMask->setGeometry(QRect(230, 180, 361, 51));
        slope = new QLabel(PMCalForm);
        slope->setObjectName(QStringLiteral("slope"));
        slope->setGeometry(QRect(170, 140, 481, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Calibri"));
        font2.setPointSize(15);
        slope->setFont(font2);
        slope->setAlignment(Qt::AlignCenter);
        zero = new QLabel(PMCalForm);
        zero->setObjectName(QStringLiteral("zero"));
        zero->setGeometry(QRect(170, 180, 481, 41));
        zero->setFont(font);
        zero->setAlignment(Qt::AlignCenter);
        slopeMask = new QPushButton(PMCalForm);
        slopeMask->setObjectName(QStringLiteral("slopeMask"));
        slopeMask->setGeometry(QRect(230, 130, 361, 51));
        saveButton = new QPushButton(PMCalForm);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(370, 320, 93, 28));
        massExt = new QLabel(PMCalForm);
        massExt->setObjectName(QStringLiteral("massExt"));
        massExt->setGeometry(QRect(170, 230, 481, 41));
        massExt->setFont(font);
        massExt->setAlignment(Qt::AlignCenter);
        massExtMask = new QPushButton(PMCalForm);
        massExtMask->setObjectName(QStringLiteral("massExtMask"));
        massExtMask->setGeometry(QRect(230, 230, 361, 51));
        label->raise();
        zero->raise();
        moveRightButton->raise();
        closeButton->raise();
        moveLeftButton->raise();
        zeroMask->raise();
        slope->raise();
        slopeMask->raise();
        saveButton->raise();
        massExt->raise();
        massExtMask->raise();

        retranslateUi(PMCalForm);

        QMetaObject::connectSlotsByName(PMCalForm);
    } // setupUi

    void retranslateUi(QWidget *PMCalForm)
    {
        PMCalForm->setWindowTitle(QApplication::translate("PMCalForm", "Form", 0));
        moveRightButton->setText(QApplication::translate("PMCalForm", "->", 0));
        closeButton->setText(QApplication::translate("PMCalForm", "Back", 0));
        label->setText(QApplication::translate("PMCalForm", "PM Cal Factors", 0));
        moveLeftButton->setText(QApplication::translate("PMCalForm", "<-", 0));
        zeroMask->setText(QString());
        slope->setText(QApplication::translate("PMCalForm", "Slope: 0", 0));
        zero->setText(QApplication::translate("PMCalForm", "Zero: 0", 0));
        slopeMask->setText(QString());
        saveButton->setText(QApplication::translate("PMCalForm", "Save", 0));
        massExt->setText(QApplication::translate("PMCalForm", "Zero: 0", 0));
        massExtMask->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PMCalForm: public Ui_PMCalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PMCALFORM_H
