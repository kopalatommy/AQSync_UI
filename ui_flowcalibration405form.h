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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlowCalibration405Form
{
public:
    QPushButton *OzoneSlopeMask;
    QPushButton *Home;
    QPushButton *Save;
    QLabel *cellFlowLabel;
    QPushButton *Next;
    QPushButton *Previous;
    QLabel *ozoneFlowLabel;
    QPushButton *CellSlopeMask;
    QLabel *FlowCalibration;

    void setupUi(QWidget *FlowCalibration405Form)
    {
        if (FlowCalibration405Form->objectName().isEmpty())
            FlowCalibration405Form->setObjectName(QStringLiteral("FlowCalibration405Form"));
        FlowCalibration405Form->resize(800, 480);
        OzoneSlopeMask = new QPushButton(FlowCalibration405Form);
        OzoneSlopeMask->setObjectName(QStringLiteral("OzoneSlopeMask"));
        OzoneSlopeMask->setGeometry(QRect(150, 260, 521, 121));
        Home = new QPushButton(FlowCalibration405Form);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(690, 10, 100, 100));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        Save = new QPushButton(FlowCalibration405Form);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(340, 400, 120, 60));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon1);
        Save->setIconSize(QSize(120, 60));
        cellFlowLabel = new QLabel(FlowCalibration405Form);
        cellFlowLabel->setObjectName(QStringLiteral("cellFlowLabel"));
        cellFlowLabel->setGeometry(QRect(150, 120, 521, 121));
        Next = new QPushButton(FlowCalibration405Form);
        Next->setObjectName(QStringLiteral("Next"));
        Next->setGeometry(QRect(690, 119, 100, 351));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Next->setIcon(icon2);
        Next->setIconSize(QSize(100, 340));
        Previous = new QPushButton(FlowCalibration405Form);
        Previous->setObjectName(QStringLiteral("Previous"));
        Previous->setGeometry(QRect(10, 119, 100, 351));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Previous->setIcon(icon3);
        Previous->setIconSize(QSize(100, 340));
        ozoneFlowLabel = new QLabel(FlowCalibration405Form);
        ozoneFlowLabel->setObjectName(QStringLiteral("ozoneFlowLabel"));
        ozoneFlowLabel->setGeometry(QRect(156, 259, 511, 121));
        CellSlopeMask = new QPushButton(FlowCalibration405Form);
        CellSlopeMask->setObjectName(QStringLiteral("CellSlopeMask"));
        CellSlopeMask->setGeometry(QRect(150, 120, 521, 121));
        FlowCalibration = new QLabel(FlowCalibration405Form);
        FlowCalibration->setObjectName(QStringLiteral("FlowCalibration"));
        FlowCalibration->setGeometry(QRect(0, 20, 801, 71));
        QFont font;
        font.setPointSize(30);
        FlowCalibration->setFont(font);
        FlowCalibration->setAlignment(Qt::AlignCenter);
        FlowCalibration->raise();
        OzoneSlopeMask->raise();
        Home->raise();
        Save->raise();
        cellFlowLabel->raise();
        Next->raise();
        Previous->raise();
        ozoneFlowLabel->raise();
        CellSlopeMask->raise();

        retranslateUi(FlowCalibration405Form);

        QMetaObject::connectSlotsByName(FlowCalibration405Form);
    } // setupUi

    void retranslateUi(QWidget *FlowCalibration405Form)
    {
        FlowCalibration405Form->setWindowTitle(QApplication::translate("FlowCalibration405Form", "Form", 0));
        OzoneSlopeMask->setText(QApplication::translate("FlowCalibration405Form", "PushButton", 0));
        Home->setText(QString());
        Save->setText(QString());
        cellFlowLabel->setText(QString());
        Next->setText(QString());
        Previous->setText(QString());
        ozoneFlowLabel->setText(QString());
        CellSlopeMask->setText(QApplication::translate("FlowCalibration405Form", "PushButton", 0));
        FlowCalibration->setText(QApplication::translate("FlowCalibration405Form", "Flow Calibration", 0));
    } // retranslateUi

};

namespace Ui {
    class FlowCalibration405Form: public Ui_FlowCalibration405Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWCALIBRATION405FORM_H
