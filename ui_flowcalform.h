/********************************************************************************
** Form generated from reading UI file 'flowcalform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWCALFORM_H
#define UI_FLOWCALFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            FlowCalForm->setObjectName(QStringLiteral("FlowCalForm"));
        FlowCalForm->resize(800, 480);
        FlowCalForm->setMinimumSize(QSize(800, 480));
        FlowCalForm->setMaximumSize(QSize(800, 480));
        slope = new QLabel(FlowCalForm);
        slope->setObjectName(QStringLiteral("slope"));
        slope->setGeometry(QRect(150, 90, 481, 41));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(15);
        slope->setFont(font);
        slope->setAlignment(Qt::AlignCenter);
        closeButton = new QPushButton(FlowCalForm);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font1;
        font1.setPointSize(15);
        closeButton->setFont(font1);
        saveButton = new QPushButton(FlowCalForm);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(370, 320, 93, 28));
        label = new QLabel(FlowCalForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 781, 71));
        QFont font2;
        font2.setPointSize(30);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        zeroMask = new QPushButton(FlowCalForm);
        zeroMask->setObjectName(QStringLiteral("zeroMask"));
        zeroMask->setGeometry(QRect(210, 130, 361, 51));
        moveLeftButton = new QPushButton(FlowCalForm);
        moveLeftButton->setObjectName(QStringLiteral("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        slopeMask = new QPushButton(FlowCalForm);
        slopeMask->setObjectName(QStringLiteral("slopeMask"));
        slopeMask->setGeometry(QRect(210, 80, 361, 51));
        moveRightButton = new QPushButton(FlowCalForm);
        moveRightButton->setObjectName(QStringLiteral("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        zero = new QLabel(FlowCalForm);
        zero->setObjectName(QStringLiteral("zero"));
        zero->setGeometry(QRect(150, 130, 481, 41));
        zero->setFont(font1);
        zero->setAlignment(Qt::AlignCenter);
        cellFlowMask = new QPushButton(FlowCalForm);
        cellFlowMask->setObjectName(QStringLiteral("cellFlowMask"));
        cellFlowMask->setGeometry(QRect(210, 180, 361, 51));
        cellFlow = new QLabel(FlowCalForm);
        cellFlow->setObjectName(QStringLiteral("cellFlow"));
        cellFlow->setGeometry(QRect(150, 190, 481, 41));
        cellFlow->setFont(font);
        cellFlow->setAlignment(Qt::AlignCenter);
        ozoneFlow = new QLabel(FlowCalForm);
        ozoneFlow->setObjectName(QStringLiteral("ozoneFlow"));
        ozoneFlow->setGeometry(QRect(150, 230, 481, 41));
        ozoneFlow->setFont(font1);
        ozoneFlow->setAlignment(Qt::AlignCenter);
        ozoneFlowMask = new QPushButton(FlowCalForm);
        ozoneFlowMask->setObjectName(QStringLiteral("ozoneFlowMask"));
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
        FlowCalForm->setWindowTitle(QApplication::translate("FlowCalForm", "Form", 0));
        slope->setText(QApplication::translate("FlowCalForm", "Slope: 0", 0));
        closeButton->setText(QApplication::translate("FlowCalForm", "Back", 0));
        saveButton->setText(QApplication::translate("FlowCalForm", "Save", 0));
        label->setText(QApplication::translate("FlowCalForm", "Flow Calibration Factors", 0));
        zeroMask->setText(QString());
        moveLeftButton->setText(QApplication::translate("FlowCalForm", "<-", 0));
        slopeMask->setText(QString());
        moveRightButton->setText(QApplication::translate("FlowCalForm", "->", 0));
        zero->setText(QApplication::translate("FlowCalForm", "Zero: 0", 0));
        cellFlowMask->setText(QString());
        cellFlow->setText(QApplication::translate("FlowCalForm", "Cell Flow Slope: 0", 0));
        ozoneFlow->setText(QApplication::translate("FlowCalForm", "Zero: 0", 0));
        ozoneFlowMask->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FlowCalForm: public Ui_FlowCalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWCALFORM_H
