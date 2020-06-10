/********************************************************************************
** Form generated from reading UI file 'flowcalibration405form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWCALIBRATION405FORM_H
#define UI_FLOWCALIBRATION405FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_flowcalibration405form
{
public:
    QPushButton *zoneSlopeMask;
    QPushButton *Home;
    QLabel *FlowCalibration;
    QPushButton *Save;
    QPushButton *Left;
    QPushButton *cellSlopeMask;
    QPushButton *Right;

    void setupUi(QDialog *flowcalibration405form)
    {
        if (flowcalibration405form->objectName().isEmpty())
            flowcalibration405form->setObjectName(QString::fromUtf8("flowcalibration405form"));
        flowcalibration405form->resize(800, 480);
        zoneSlopeMask = new QPushButton(flowcalibration405form);
        zoneSlopeMask->setObjectName(QString::fromUtf8("zoneSlopeMask"));
        zoneSlopeMask->setGeometry(QRect(140, 250, 521, 121));
        Home = new QPushButton(flowcalibration405form);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(680, 10, 100, 100));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Buttons/button_home.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon);
        Home->setIconSize(QSize(100, 100));
        FlowCalibration = new QLabel(flowcalibration405form);
        FlowCalibration->setObjectName(QString::fromUtf8("FlowCalibration"));
        FlowCalibration->setGeometry(QRect(230, 10, 351, 71));
        QFont font;
        font.setPointSize(30);
        FlowCalibration->setFont(font);
        Save = new QPushButton(flowcalibration405form);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(330, 390, 120, 60));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon1);
        Save->setIconSize(QSize(120, 60));
        Left = new QPushButton(flowcalibration405form);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(20, 120, 100, 340));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon2);
        Left->setIconSize(QSize(100, 340));
        cellSlopeMask = new QPushButton(flowcalibration405form);
        cellSlopeMask->setObjectName(QString::fromUtf8("cellSlopeMask"));
        cellSlopeMask->setGeometry(QRect(140, 110, 521, 121));
        Right = new QPushButton(flowcalibration405form);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(680, 120, 100, 340));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon3);
        Right->setIconSize(QSize(100, 340));

        retranslateUi(flowcalibration405form);

        QMetaObject::connectSlotsByName(flowcalibration405form);
    } // setupUi

    void retranslateUi(QDialog *flowcalibration405form)
    {
        flowcalibration405form->setWindowTitle(QApplication::translate("flowcalibration405form", "Dialog", nullptr));
        zoneSlopeMask->setText(QApplication::translate("flowcalibration405form", "PushButton", nullptr));
        Home->setText(QString());
        FlowCalibration->setText(QApplication::translate("flowcalibration405form", "Flow Calibration", nullptr));
        Save->setText(QString());
        Left->setText(QString());
        cellSlopeMask->setText(QApplication::translate("flowcalibration405form", "PushButton", nullptr));
        Right->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class flowcalibration405form: public Ui_flowcalibration405form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWCALIBRATION405FORM_H
