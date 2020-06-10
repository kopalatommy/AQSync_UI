/********************************************************************************
** Form generated from reading UI file 'no2calform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NO2CALFORM_H
#define UI_NO2CALFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NO2CalForm
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

    void setupUi(QWidget *NO2CalForm)
    {
        if (NO2CalForm->objectName().isEmpty())
            NO2CalForm->setObjectName(QString::fromUtf8("NO2CalForm"));
        NO2CalForm->resize(800, 480);
        NO2CalForm->setMinimumSize(QSize(800, 480));
        NO2CalForm->setMaximumSize(QSize(800, 480));
        closeButton = new QPushButton(NO2CalForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font;
        font.setPointSize(15);
        closeButton->setFont(font);
        zero = new QLabel(NO2CalForm);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(170, 230, 481, 41));
        zero->setFont(font);
        zero->setAlignment(Qt::AlignCenter);
        moveLeftButton = new QPushButton(NO2CalForm);
        moveLeftButton->setObjectName(QString::fromUtf8("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        moveRightButton = new QPushButton(NO2CalForm);
        moveRightButton->setObjectName(QString::fromUtf8("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        slopeMask = new QPushButton(NO2CalForm);
        slopeMask->setObjectName(QString::fromUtf8("slopeMask"));
        slopeMask->setGeometry(QRect(230, 180, 361, 51));
        saveButton = new QPushButton(NO2CalForm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(370, 320, 93, 28));
        label = new QLabel(NO2CalForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 781, 71));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        zeroMask = new QPushButton(NO2CalForm);
        zeroMask->setObjectName(QString::fromUtf8("zeroMask"));
        zeroMask->setGeometry(QRect(230, 230, 361, 51));
        slope = new QLabel(NO2CalForm);
        slope->setObjectName(QString::fromUtf8("slope"));
        slope->setGeometry(QRect(170, 190, 481, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(15);
        slope->setFont(font2);
        slope->setAlignment(Qt::AlignCenter);
        slope->raise();
        label->raise();
        closeButton->raise();
        zero->raise();
        moveLeftButton->raise();
        moveRightButton->raise();
        slopeMask->raise();
        saveButton->raise();
        zeroMask->raise();

        retranslateUi(NO2CalForm);

        QMetaObject::connectSlotsByName(NO2CalForm);
    } // setupUi

    void retranslateUi(QWidget *NO2CalForm)
    {
        NO2CalForm->setWindowTitle(QApplication::translate("NO2CalForm", "Form", nullptr));
        closeButton->setText(QApplication::translate("NO2CalForm", "Back", nullptr));
        zero->setText(QApplication::translate("NO2CalForm", "Zero: 0", nullptr));
        moveLeftButton->setText(QApplication::translate("NO2CalForm", "<-", nullptr));
        moveRightButton->setText(QApplication::translate("NO2CalForm", "->", nullptr));
        slopeMask->setText(QString());
        saveButton->setText(QApplication::translate("NO2CalForm", "Save", nullptr));
        label->setText(QApplication::translate("NO2CalForm", "NO2 Calibration Factors", nullptr));
        zeroMask->setText(QString());
        slope->setText(QApplication::translate("NO2CalForm", "Slope: 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NO2CalForm: public Ui_NO2CalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NO2CALFORM_H
