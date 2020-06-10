/********************************************************************************
** Form generated from reading UI file 'flowcalibrationbcpform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWCALIBRATIONBCPFORM_H
#define UI_FLOWCALIBRATIONBCPFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_flowcalibrationBCPform
{
public:
    QLabel *FlowCalibration;
    QPushButton *cellSlopeMask;
    QPushButton *Right;
    QPushButton *Home;
    QPushButton *Save;
    QPushButton *zoneSlopeMask;
    QPushButton *Left;

    void setupUi(QDialog *flowcalibrationBCPform)
    {
        if (flowcalibrationBCPform->objectName().isEmpty())
            flowcalibrationBCPform->setObjectName(QString::fromUtf8("flowcalibrationBCPform"));
        flowcalibrationBCPform->resize(800, 480);
        FlowCalibration = new QLabel(flowcalibrationBCPform);
        FlowCalibration->setObjectName(QString::fromUtf8("FlowCalibration"));
        FlowCalibration->setGeometry(QRect(230, 10, 351, 71));
        QFont font;
        font.setPointSize(30);
        FlowCalibration->setFont(font);
        cellSlopeMask = new QPushButton(flowcalibrationBCPform);
        cellSlopeMask->setObjectName(QString::fromUtf8("cellSlopeMask"));
        cellSlopeMask->setGeometry(QRect(140, 110, 521, 121));
        Right = new QPushButton(flowcalibrationBCPform);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(680, 120, 100, 340));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon);
        Right->setIconSize(QSize(100, 340));
        Home = new QPushButton(flowcalibrationBCPform);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(680, 10, 100, 100));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon1);
        Home->setIconSize(QSize(100, 100));
        Save = new QPushButton(flowcalibrationBCPform);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(330, 390, 120, 60));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon2);
        Save->setIconSize(QSize(120, 60));
        zoneSlopeMask = new QPushButton(flowcalibrationBCPform);
        zoneSlopeMask->setObjectName(QString::fromUtf8("zoneSlopeMask"));
        zoneSlopeMask->setGeometry(QRect(140, 250, 521, 121));
        Left = new QPushButton(flowcalibrationBCPform);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(20, 120, 100, 340));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon3);
        Left->setIconSize(QSize(100, 340));

        retranslateUi(flowcalibrationBCPform);

        QMetaObject::connectSlotsByName(flowcalibrationBCPform);
    } // setupUi

    void retranslateUi(QDialog *flowcalibrationBCPform)
    {
        flowcalibrationBCPform->setWindowTitle(QApplication::translate("flowcalibrationBCPform", "Dialog", nullptr));
        FlowCalibration->setText(QApplication::translate("flowcalibrationBCPform", "Flow Calibration", nullptr));
        cellSlopeMask->setText(QApplication::translate("flowcalibrationBCPform", "PushButton", nullptr));
        Right->setText(QString());
        Home->setText(QString());
        Save->setText(QString());
        zoneSlopeMask->setText(QApplication::translate("flowcalibrationBCPform", "PushButton", nullptr));
        Left->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class flowcalibrationBCPform: public Ui_flowcalibrationBCPform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWCALIBRATIONBCPFORM_H
