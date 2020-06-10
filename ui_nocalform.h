/********************************************************************************
** Form generated from reading UI file 'nocalform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOCALFORM_H
#define UI_NOCALFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            NOCalForm->setObjectName(QStringLiteral("NOCalForm"));
        NOCalForm->resize(800, 480);
        NOCalForm->setMinimumSize(QSize(800, 480));
        NOCalForm->setMaximumSize(QSize(800, 480));
        moveLeftButton = new QPushButton(NOCalForm);
        moveLeftButton->setObjectName(QStringLiteral("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        moveRightButton = new QPushButton(NOCalForm);
        moveRightButton->setObjectName(QStringLiteral("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        label = new QLabel(NOCalForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 781, 71));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        closeButton = new QPushButton(NOCalForm);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font1;
        font1.setPointSize(15);
        closeButton->setFont(font1);
        slope = new QLabel(NOCalForm);
        slope->setObjectName(QStringLiteral("slope"));
        slope->setGeometry(QRect(170, 190, 481, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Calibri"));
        font2.setPointSize(15);
        slope->setFont(font2);
        slope->setAlignment(Qt::AlignCenter);
        zeroMask = new QPushButton(NOCalForm);
        zeroMask->setObjectName(QStringLiteral("zeroMask"));
        zeroMask->setGeometry(QRect(230, 230, 361, 51));
        zero = new QLabel(NOCalForm);
        zero->setObjectName(QStringLiteral("zero"));
        zero->setGeometry(QRect(170, 230, 481, 41));
        zero->setFont(font1);
        zero->setAlignment(Qt::AlignCenter);
        slopeMask = new QPushButton(NOCalForm);
        slopeMask->setObjectName(QStringLiteral("slopeMask"));
        slopeMask->setGeometry(QRect(230, 180, 361, 51));
        saveButton = new QPushButton(NOCalForm);
        saveButton->setObjectName(QStringLiteral("saveButton"));
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
        NOCalForm->setWindowTitle(QApplication::translate("NOCalForm", "Form", 0));
        moveLeftButton->setText(QApplication::translate("NOCalForm", "<-", 0));
        moveRightButton->setText(QApplication::translate("NOCalForm", "->", 0));
        label->setText(QApplication::translate("NOCalForm", "NO Calibration Factors", 0));
        closeButton->setText(QApplication::translate("NOCalForm", "Back", 0));
        slope->setText(QApplication::translate("NOCalForm", "Slope: 0", 0));
        zeroMask->setText(QString());
        zero->setText(QApplication::translate("NOCalForm", "Zero: 0", 0));
        slopeMask->setText(QString());
        saveButton->setText(QApplication::translate("NOCalForm", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class NOCalForm: public Ui_NOCalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOCALFORM_H
