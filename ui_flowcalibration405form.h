/********************************************************************************
** Form generated from reading UI file 'flowcalibration405form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWCALIBRATION405FORM_H
#define UI_FLOWCALIBRATION405FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_flowcalibration405form
{
public:
    QPushButton *OzoneSlopeMask;
    QPushButton *Home;
    QLabel *FlowCalibration;
    QPushButton *Save;
    QPushButton *Previous;
    QPushButton *CellSlopeMask;
    QPushButton *Next;
    QLabel *cellFlowLabel;
    QLabel *ozoneFlowLabel;

    void setupUi(QDialog *flowcalibration405form)
    {
        if (flowcalibration405form->objectName().isEmpty())
            flowcalibration405form->setObjectName(QStringLiteral("flowcalibration405form"));
        flowcalibration405form->resize(800, 480);
        OzoneSlopeMask = new QPushButton(flowcalibration405form);
        OzoneSlopeMask->setObjectName(QStringLiteral("OzoneSlopeMask"));
        OzoneSlopeMask->setGeometry(QRect(140, 250, 521, 121));
        Home = new QPushButton(flowcalibration405form);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(680, 10, 100, 100));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        FlowCalibration = new QLabel(flowcalibration405form);
        FlowCalibration->setObjectName(QStringLiteral("FlowCalibration"));
        FlowCalibration->setGeometry(QRect(230, 10, 351, 71));
        QFont font;
        font.setPointSize(30);
        FlowCalibration->setFont(font);
        Save = new QPushButton(flowcalibration405form);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(330, 390, 120, 60));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon1);
        Save->setIconSize(QSize(120, 60));
        Previous = new QPushButton(flowcalibration405form);
        Previous->setObjectName(QStringLiteral("Previous"));
        Previous->setGeometry(QRect(20, 80, 100, 340));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Previous->setIcon(icon2);
        Previous->setIconSize(QSize(100, 340));
        CellSlopeMask = new QPushButton(flowcalibration405form);
        CellSlopeMask->setObjectName(QStringLiteral("CellSlopeMask"));
        CellSlopeMask->setGeometry(QRect(140, 110, 521, 121));
        Next = new QPushButton(flowcalibration405form);
        Next->setObjectName(QStringLiteral("Next"));
        Next->setGeometry(QRect(680, 120, 100, 340));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Next->setIcon(icon3);
        Next->setIconSize(QSize(100, 340));
        cellFlowLabel = new QLabel(flowcalibration405form);
        cellFlowLabel->setObjectName(QStringLiteral("cellFlowLabel"));
        cellFlowLabel->setGeometry(QRect(140, 110, 521, 121));
        ozoneFlowLabel = new QLabel(flowcalibration405form);
        ozoneFlowLabel->setObjectName(QStringLiteral("ozoneFlowLabel"));
        ozoneFlowLabel->setGeometry(QRect(146, 249, 511, 121));

        retranslateUi(flowcalibration405form);

        QMetaObject::connectSlotsByName(flowcalibration405form);
    } // setupUi

    void retranslateUi(QDialog *flowcalibration405form)
    {
        flowcalibration405form->setWindowTitle(QApplication::translate("flowcalibration405form", "Dialog", 0));
        OzoneSlopeMask->setText(QApplication::translate("flowcalibration405form", "PushButton", 0));
        Home->setText(QString());
        FlowCalibration->setText(QApplication::translate("flowcalibration405form", "Flow Calibration", 0));
        Save->setText(QString());
        Previous->setText(QString());
        CellSlopeMask->setText(QApplication::translate("flowcalibration405form", "PushButton", 0));
        Next->setText(QString());
        cellFlowLabel->setText(QString());
        ozoneFlowLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class flowcalibration405form: public Ui_flowcalibration405form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWCALIBRATION405FORM_H
