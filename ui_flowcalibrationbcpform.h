/********************************************************************************
** Form generated from reading UI file 'flowcalibrationbcpform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWCALIBRATIONBCPFORM_H
#define UI_FLOWCALIBRATIONBCPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlowCalibrationBCPForm
{
public:
    QPushButton *zoneSlopeMask;
    QPushButton *Left;
    QPushButton *Right;
    QPushButton *Save;
    QLabel *FlowCalibration;
    QPushButton *Home;
    QPushButton *cellSlopeMask;

    void setupUi(QWidget *FlowCalibrationBCPForm)
    {
        if (FlowCalibrationBCPForm->objectName().isEmpty())
            FlowCalibrationBCPForm->setObjectName(QStringLiteral("FlowCalibrationBCPForm"));
        FlowCalibrationBCPForm->resize(800, 480);
        zoneSlopeMask = new QPushButton(FlowCalibrationBCPForm);
        zoneSlopeMask->setObjectName(QStringLiteral("zoneSlopeMask"));
        zoneSlopeMask->setGeometry(QRect(130, 260, 541, 121));
        Left = new QPushButton(FlowCalibrationBCPForm);
        Left->setObjectName(QStringLiteral("Left"));
        Left->setGeometry(QRect(10, 119, 100, 351));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/Left_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon);
        Left->setIconSize(QSize(100, 340));
        Right = new QPushButton(FlowCalibrationBCPForm);
        Right->setObjectName(QStringLiteral("Right"));
        Right->setGeometry(QRect(690, 119, 100, 351));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/Right_Carrot.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon1);
        Right->setIconSize(QSize(100, 340));
        Save = new QPushButton(FlowCalibrationBCPForm);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(340, 400, 120, 60));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/button_save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon2);
        Save->setIconSize(QSize(120, 60));
        FlowCalibration = new QLabel(FlowCalibrationBCPForm);
        FlowCalibration->setObjectName(QStringLiteral("FlowCalibration"));
        FlowCalibration->setGeometry(QRect(0, 20, 801, 71));
        QFont font;
        font.setPointSize(30);
        FlowCalibration->setFont(font);
        FlowCalibration->setAlignment(Qt::AlignCenter);
        Home = new QPushButton(FlowCalibrationBCPForm);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(690, 10, 100, 100));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/button_back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon3);
        Home->setIconSize(QSize(100, 100));
        cellSlopeMask = new QPushButton(FlowCalibrationBCPForm);
        cellSlopeMask->setObjectName(QStringLiteral("cellSlopeMask"));
        cellSlopeMask->setGeometry(QRect(130, 120, 541, 121));
        FlowCalibration->raise();
        zoneSlopeMask->raise();
        Left->raise();
        Right->raise();
        Save->raise();
        Home->raise();
        cellSlopeMask->raise();

        retranslateUi(FlowCalibrationBCPForm);

        QMetaObject::connectSlotsByName(FlowCalibrationBCPForm);
    } // setupUi

    void retranslateUi(QWidget *FlowCalibrationBCPForm)
    {
        FlowCalibrationBCPForm->setWindowTitle(QApplication::translate("FlowCalibrationBCPForm", "Form", 0));
        zoneSlopeMask->setText(QApplication::translate("FlowCalibrationBCPForm", "PushButton", 0));
        Left->setText(QString());
        Right->setText(QString());
        Save->setText(QString());
        FlowCalibration->setText(QApplication::translate("FlowCalibrationBCPForm", "Flow Calibration", 0));
        Home->setText(QString());
        cellSlopeMask->setText(QApplication::translate("FlowCalibrationBCPForm", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class FlowCalibrationBCPForm: public Ui_FlowCalibrationBCPForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWCALIBRATIONBCPFORM_H
