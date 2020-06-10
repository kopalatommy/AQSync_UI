/********************************************************************************
** Form generated from reading UI file 'flowcalform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWCALFORM_H
#define UI_FLOWCALFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlowCalForm
{
public:
    QLabel *slope;
    QPushButton *closeButton;
    QPushButton *saveButton;
    QLabel *label;
    QPushButton *zeroMask;
    QPushButton *moveLeftButton;
    QPushButton *slopeMask;
    QPushButton *moveRightButton;
    QLabel *zero;
    QPushButton *cellFlowMask;
    QLabel *cellFlow;
    QLabel *ozoneFlow;
    QPushButton *ozoneFlowMask;

    void setupUi(QWidget *FlowCalForm)
    {
        if (FlowCalForm->objectName().isEmpty())
            FlowCalForm->setObjectName(QString::fromUtf8("FlowCalForm"));
        FlowCalForm->resize(800, 480);
        FlowCalForm->setMinimumSize(QSize(800, 480));
        FlowCalForm->setMaximumSize(QSize(800, 480));
        slope = new QLabel(FlowCalForm);
        slope->setObjectName(QString::fromUtf8("slope"));
        slope->setGeometry(QRect(150, 90, 481, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(15);
        slope->setFont(font);
        slope->setAlignment(Qt::AlignCenter);
        closeButton = new QPushButton(FlowCalForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font1;
        font1.setPointSize(15);
        closeButton->setFont(font1);
        saveButton = new QPushButton(FlowCalForm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(370, 320, 93, 28));
        label = new QLabel(FlowCalForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 781, 71));
        QFont font2;
        font2.setPointSize(30);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        zeroMask = new QPushButton(FlowCalForm);
        zeroMask->setObjectName(QString::fromUtf8("zeroMask"));
        zeroMask->setGeometry(QRect(210, 130, 361, 51));
        moveLeftButton = new QPushButton(FlowCalForm);
        moveLeftButton->setObjectName(QString::fromUtf8("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        slopeMask = new QPushButton(FlowCalForm);
        slopeMask->setObjectName(QString::fromUtf8("slopeMask"));
        slopeMask->setGeometry(QRect(210, 80, 361, 51));
        moveRightButton = new QPushButton(FlowCalForm);
        moveRightButton->setObjectName(QString::fromUtf8("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        zero = new QLabel(FlowCalForm);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(150, 130, 481, 41));
        zero->setFont(font1);
        zero->setAlignment(Qt::AlignCenter);
        cellFlowMask = new QPushButton(FlowCalForm);
        cellFlowMask->setObjectName(QString::fromUtf8("cellFlowMask"));
        cellFlowMask->setGeometry(QRect(210, 180, 361, 51));
        cellFlow = new QLabel(FlowCalForm);
        cellFlow->setObjectName(QString::fromUtf8("cellFlow"));
        cellFlow->setGeometry(QRect(150, 190, 481, 41));
        cellFlow->setFont(font);
        cellFlow->setAlignment(Qt::AlignCenter);
        ozoneFlow = new QLabel(FlowCalForm);
        ozoneFlow->setObjectName(QString::fromUtf8("ozoneFlow"));
        ozoneFlow->setGeometry(QRect(150, 230, 481, 41));
        ozoneFlow->setFont(font1);
        ozoneFlow->setAlignment(Qt::AlignCenter);
        ozoneFlowMask = new QPushButton(FlowCalForm);
        ozoneFlowMask->setObjectName(QString::fromUtf8("ozoneFlowMask"));
        ozoneFlowMask->setGeometry(QRect(210, 230, 361, 51));
        cellFlow->raise();
        zero->raise();
        label->raise();
        slope->raise();
        closeButton->raise();
        saveButton->raise();
        zeroMask->raise();
        moveLeftButton->raise();
        slopeMask->raise();
        moveRightButton->raise();
        cellFlowMask->raise();
        ozoneFlow->raise();
        ozoneFlowMask->raise();

        retranslateUi(FlowCalForm);

        QMetaObject::connectSlotsByName(FlowCalForm);
    } // setupUi

    void retranslateUi(QWidget *FlowCalForm)
    {
        FlowCalForm->setWindowTitle(QApplication::translate("FlowCalForm", "Form", nullptr));
        slope->setText(QApplication::translate("FlowCalForm", "Slope: 0", nullptr));
        closeButton->setText(QApplication::translate("FlowCalForm", "Back", nullptr));
        saveButton->setText(QApplication::translate("FlowCalForm", "Save", nullptr));
        label->setText(QApplication::translate("FlowCalForm", "Flow Calibration Factors", nullptr));
        zeroMask->setText(QString());
        moveLeftButton->setText(QApplication::translate("FlowCalForm", "<-", nullptr));
        slopeMask->setText(QString());
        moveRightButton->setText(QApplication::translate("FlowCalForm", "->", nullptr));
        zero->setText(QApplication::translate("FlowCalForm", "Zero: 0", nullptr));
        cellFlowMask->setText(QString());
        cellFlow->setText(QApplication::translate("FlowCalForm", "Cell Flow Slope: 0", nullptr));
        ozoneFlow->setText(QApplication::translate("FlowCalForm", "Zero: 0", nullptr));
        ozoneFlowMask->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FlowCalForm: public Ui_FlowCalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWCALFORM_H
