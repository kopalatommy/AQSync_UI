/********************************************************************************
** Form generated from reading UI file 'nocalform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOCALFORM_H
#define UI_NOCALFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NOCalForm
{
public:
    QPushButton *moveLeftButton;
    QPushButton *moveRightButton;
    QLabel *label;
    QPushButton *closeButton;
    QLabel *slope;
    QPushButton *zeroMask;
    QLabel *zero;
    QPushButton *slopeMask;
    QPushButton *saveButton;

    void setupUi(QWidget *NOCalForm)
    {
        if (NOCalForm->objectName().isEmpty())
            NOCalForm->setObjectName(QString::fromUtf8("NOCalForm"));
        NOCalForm->resize(800, 480);
        NOCalForm->setMinimumSize(QSize(800, 480));
        NOCalForm->setMaximumSize(QSize(800, 480));
        moveLeftButton = new QPushButton(NOCalForm);
        moveLeftButton->setObjectName(QString::fromUtf8("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        moveRightButton = new QPushButton(NOCalForm);
        moveRightButton->setObjectName(QString::fromUtf8("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        label = new QLabel(NOCalForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 781, 71));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        closeButton = new QPushButton(NOCalForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font1;
        font1.setPointSize(15);
        closeButton->setFont(font1);
        slope = new QLabel(NOCalForm);
        slope->setObjectName(QString::fromUtf8("slope"));
        slope->setGeometry(QRect(170, 190, 481, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(15);
        slope->setFont(font2);
        slope->setAlignment(Qt::AlignCenter);
        zeroMask = new QPushButton(NOCalForm);
        zeroMask->setObjectName(QString::fromUtf8("zeroMask"));
        zeroMask->setGeometry(QRect(230, 230, 361, 51));
        zero = new QLabel(NOCalForm);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(170, 230, 481, 41));
        zero->setFont(font1);
        zero->setAlignment(Qt::AlignCenter);
        slopeMask = new QPushButton(NOCalForm);
        slopeMask->setObjectName(QString::fromUtf8("slopeMask"));
        slopeMask->setGeometry(QRect(230, 180, 361, 51));
        saveButton = new QPushButton(NOCalForm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(370, 320, 93, 28));
        zero->raise();
        label->raise();
        moveLeftButton->raise();
        moveRightButton->raise();
        closeButton->raise();
        slope->raise();
        zeroMask->raise();
        slopeMask->raise();
        saveButton->raise();

        retranslateUi(NOCalForm);

        QMetaObject::connectSlotsByName(NOCalForm);
    } // setupUi

    void retranslateUi(QWidget *NOCalForm)
    {
        NOCalForm->setWindowTitle(QApplication::translate("NOCalForm", "Form", nullptr));
        moveLeftButton->setText(QApplication::translate("NOCalForm", "<-", nullptr));
        moveRightButton->setText(QApplication::translate("NOCalForm", "->", nullptr));
        label->setText(QApplication::translate("NOCalForm", "NO Calibration Factors", nullptr));
        closeButton->setText(QApplication::translate("NOCalForm", "Back", nullptr));
        slope->setText(QApplication::translate("NOCalForm", "Slope: 0", nullptr));
        zeroMask->setText(QString());
        zero->setText(QApplication::translate("NOCalForm", "Zero: 0", nullptr));
        slopeMask->setText(QString());
        saveButton->setText(QApplication::translate("NOCalForm", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NOCalForm: public Ui_NOCalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOCALFORM_H
