/********************************************************************************
** Form generated from reading UI file 'bccalform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BCCALFORM_H
#define UI_BCCALFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BCCalForm
{
public:
    QPushButton *closeButton;
    QLabel *zero;
    QPushButton *moveLeftButton;
    QPushButton *moveRightButton;
    QPushButton *slopeMask;
    QPushButton *saveButton;
    QLabel *label;
    QPushButton *zeroMask;
    QLabel *slope;
    QLabel *massExt;
    QPushButton *massExtMask;

    void setupUi(QWidget *BCCalForm)
    {
        if (BCCalForm->objectName().isEmpty())
            BCCalForm->setObjectName(QString::fromUtf8("BCCalForm"));
        BCCalForm->resize(800, 480);
        BCCalForm->setMinimumSize(QSize(800, 480));
        BCCalForm->setMaximumSize(QSize(800, 480));
        closeButton = new QPushButton(BCCalForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font;
        font.setPointSize(15);
        closeButton->setFont(font);
        zero = new QLabel(BCCalForm);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(170, 190, 481, 41));
        zero->setFont(font);
        zero->setAlignment(Qt::AlignCenter);
        moveLeftButton = new QPushButton(BCCalForm);
        moveLeftButton->setObjectName(QString::fromUtf8("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        moveRightButton = new QPushButton(BCCalForm);
        moveRightButton->setObjectName(QString::fromUtf8("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        slopeMask = new QPushButton(BCCalForm);
        slopeMask->setObjectName(QString::fromUtf8("slopeMask"));
        slopeMask->setGeometry(QRect(230, 140, 361, 51));
        saveButton = new QPushButton(BCCalForm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(370, 320, 93, 28));
        label = new QLabel(BCCalForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 781, 71));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        zeroMask = new QPushButton(BCCalForm);
        zeroMask->setObjectName(QString::fromUtf8("zeroMask"));
        zeroMask->setGeometry(QRect(230, 190, 361, 51));
        slope = new QLabel(BCCalForm);
        slope->setObjectName(QString::fromUtf8("slope"));
        slope->setGeometry(QRect(170, 150, 481, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(15);
        slope->setFont(font2);
        slope->setAlignment(Qt::AlignCenter);
        massExt = new QLabel(BCCalForm);
        massExt->setObjectName(QString::fromUtf8("massExt"));
        massExt->setGeometry(QRect(170, 240, 481, 41));
        massExt->setFont(font);
        massExt->setAlignment(Qt::AlignCenter);
        massExtMask = new QPushButton(BCCalForm);
        massExtMask->setObjectName(QString::fromUtf8("massExtMask"));
        massExtMask->setGeometry(QRect(230, 240, 361, 51));
        label->raise();
        slope->raise();
        closeButton->raise();
        zero->raise();
        moveLeftButton->raise();
        moveRightButton->raise();
        slopeMask->raise();
        saveButton->raise();
        zeroMask->raise();
        massExt->raise();
        massExtMask->raise();

        retranslateUi(BCCalForm);

        QMetaObject::connectSlotsByName(BCCalForm);
    } // setupUi

    void retranslateUi(QWidget *BCCalForm)
    {
        BCCalForm->setWindowTitle(QApplication::translate("BCCalForm", "Form", nullptr));
        closeButton->setText(QApplication::translate("BCCalForm", "Back", nullptr));
        zero->setText(QApplication::translate("BCCalForm", "Zero: 0", nullptr));
        moveLeftButton->setText(QApplication::translate("BCCalForm", "<-", nullptr));
        moveRightButton->setText(QApplication::translate("BCCalForm", "->", nullptr));
        slopeMask->setText(QString());
        saveButton->setText(QApplication::translate("BCCalForm", "Save", nullptr));
        label->setText(QApplication::translate("BCCalForm", "BC Calibration Factors", nullptr));
        zeroMask->setText(QString());
        slope->setText(QApplication::translate("BCCalForm", "Slope: 0", nullptr));
        massExt->setText(QApplication::translate("BCCalForm", "Zero: 0", nullptr));
        massExtMask->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BCCalForm: public Ui_BCCalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BCCALFORM_H
