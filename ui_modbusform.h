/********************************************************************************
** Form generated from reading UI file 'modbusform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODBUSFORM_H
#define UI_MODBUSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModbusForm
{
public:
    QLabel *RemoteIPAddress;
    QLabel *ThisPort;
    QLabel *thisLabel;
    QLabel *RemoteID;
    QPushButton *connectionButton;
    QPushButton *UpdateInfoButton;
    QPushButton *ThisIPMask;
    QLabel *Title;
    QPushButton *testButton;
    QPushButton *RemoteIPMask;
    QFrame *line_2;
    QLabel *MIPAddress;
    QPushButton *RemoteIDMask;
    QLabel *ThisID;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_7;
    QFrame *line_3;
    QPushButton *ThisIDMask;
    QPushButton *ThisPortMask;
    QFrame *line_6;
    QFrame *line_9;
    QLabel *remoteLabel;
    QLabel *RemotePort;
    QFrame *line_8;
    QPushButton *RemotePortMask;
    QLabel *Statuslabel;
    QPushButton *closeButton;
    QPushButton *moveLeftButton;
    QPushButton *moveRightButton;

    void setupUi(QWidget *ModbusForm)
    {
        if (ModbusForm->objectName().isEmpty())
            ModbusForm->setObjectName(QString::fromUtf8("ModbusForm"));
        ModbusForm->resize(800, 480);
        RemoteIPAddress = new QLabel(ModbusForm);
        RemoteIPAddress->setObjectName(QString::fromUtf8("RemoteIPAddress"));
        RemoteIPAddress->setGeometry(QRect(430, 120, 141, 51));
        QFont font;
        font.setPointSize(12);
        RemoteIPAddress->setFont(font);
        ThisPort = new QLabel(ModbusForm);
        ThisPort->setObjectName(QString::fromUtf8("ThisPort"));
        ThisPort->setGeometry(QRect(250, 180, 141, 31));
        ThisPort->setFont(font);
        thisLabel = new QLabel(ModbusForm);
        thisLabel->setObjectName(QString::fromUtf8("thisLabel"));
        thisLabel->setGeometry(QRect(240, 100, 55, 16));
        RemoteID = new QLabel(ModbusForm);
        RemoteID->setObjectName(QString::fromUtf8("RemoteID"));
        RemoteID->setGeometry(QRect(430, 210, 141, 31));
        RemoteID->setFont(font);
        connectionButton = new QPushButton(ModbusForm);
        connectionButton->setObjectName(QString::fromUtf8("connectionButton"));
        connectionButton->setGeometry(QRect(420, 260, 161, 28));
        UpdateInfoButton = new QPushButton(ModbusForm);
        UpdateInfoButton->setObjectName(QString::fromUtf8("UpdateInfoButton"));
        UpdateInfoButton->setGeometry(QRect(240, 260, 161, 28));
        ThisIPMask = new QPushButton(ModbusForm);
        ThisIPMask->setObjectName(QString::fromUtf8("ThisIPMask"));
        ThisIPMask->setGeometry(QRect(240, 120, 161, 51));
        Title = new QLabel(ModbusForm);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(174, 25, 471, 41));
        QFont font1;
        font1.setPointSize(20);
        Title->setFont(font1);
        Title->setAlignment(Qt::AlignCenter);
        testButton = new QPushButton(ModbusForm);
        testButton->setObjectName(QString::fromUtf8("testButton"));
        testButton->setGeometry(QRect(370, 350, 93, 28));
        RemoteIPMask = new QPushButton(ModbusForm);
        RemoteIPMask->setObjectName(QString::fromUtf8("RemoteIPMask"));
        RemoteIPMask->setGeometry(QRect(420, 120, 161, 51));
        line_2 = new QFrame(ModbusForm);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(420, 240, 161, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        MIPAddress = new QLabel(ModbusForm);
        MIPAddress->setObjectName(QString::fromUtf8("MIPAddress"));
        MIPAddress->setGeometry(QRect(250, 120, 141, 51));
        MIPAddress->setFont(font);
        RemoteIDMask = new QPushButton(ModbusForm);
        RemoteIDMask->setObjectName(QString::fromUtf8("RemoteIDMask"));
        RemoteIDMask->setGeometry(QRect(420, 210, 161, 41));
        ThisID = new QLabel(ModbusForm);
        ThisID->setObjectName(QString::fromUtf8("ThisID"));
        ThisID->setGeometry(QRect(250, 210, 141, 31));
        ThisID->setFont(font);
        line_4 = new QFrame(ModbusForm);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(570, 110, 20, 141));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(ModbusForm);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(470, 100, 111, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(ModbusForm);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(270, 100, 131, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(ModbusForm);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(410, 110, 20, 141));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        ThisIDMask = new QPushButton(ModbusForm);
        ThisIDMask->setObjectName(QString::fromUtf8("ThisIDMask"));
        ThisIDMask->setGeometry(QRect(240, 210, 161, 41));
        ThisPortMask = new QPushButton(ModbusForm);
        ThisPortMask->setObjectName(QString::fromUtf8("ThisPortMask"));
        ThisPortMask->setGeometry(QRect(240, 170, 161, 41));
        line_6 = new QFrame(ModbusForm);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(230, 110, 20, 141));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(ModbusForm);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(240, 240, 161, 16));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        remoteLabel = new QLabel(ModbusForm);
        remoteLabel->setObjectName(QString::fromUtf8("remoteLabel"));
        remoteLabel->setGeometry(QRect(420, 100, 71, 16));
        RemotePort = new QLabel(ModbusForm);
        RemotePort->setObjectName(QString::fromUtf8("RemotePort"));
        RemotePort->setGeometry(QRect(430, 180, 141, 31));
        RemotePort->setFont(font);
        line_8 = new QFrame(ModbusForm);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(390, 110, 20, 141));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        RemotePortMask = new QPushButton(ModbusForm);
        RemotePortMask->setObjectName(QString::fromUtf8("RemotePortMask"));
        RemotePortMask->setGeometry(QRect(420, 170, 161, 41));
        Statuslabel = new QLabel(ModbusForm);
        Statuslabel->setObjectName(QString::fromUtf8("Statuslabel"));
        Statuslabel->setGeometry(QRect(420, 80, 141, 21));
        closeButton = new QPushButton(ModbusForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font2;
        font2.setPointSize(15);
        closeButton->setFont(font2);
        moveLeftButton = new QPushButton(ModbusForm);
        moveLeftButton->setObjectName(QString::fromUtf8("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        moveRightButton = new QPushButton(ModbusForm);
        moveRightButton->setObjectName(QString::fromUtf8("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        Title->raise();
        MIPAddress->raise();
        RemoteIPAddress->raise();
        ThisPort->raise();
        thisLabel->raise();
        RemoteID->raise();
        connectionButton->raise();
        UpdateInfoButton->raise();
        ThisIPMask->raise();
        testButton->raise();
        RemoteIPMask->raise();
        line_2->raise();
        RemoteIDMask->raise();
        ThisID->raise();
        line_4->raise();
        line_5->raise();
        line_7->raise();
        line_3->raise();
        ThisIDMask->raise();
        ThisPortMask->raise();
        line_6->raise();
        line_9->raise();
        remoteLabel->raise();
        RemotePort->raise();
        line_8->raise();
        RemotePortMask->raise();
        Statuslabel->raise();
        closeButton->raise();
        moveLeftButton->raise();
        moveRightButton->raise();

        retranslateUi(ModbusForm);

        QMetaObject::connectSlotsByName(ModbusForm);
    } // setupUi

    void retranslateUi(QWidget *ModbusForm)
    {
        ModbusForm->setWindowTitle(QApplication::translate("ModbusForm", "Form", nullptr));
        RemoteIPAddress->setText(QApplication::translate("ModbusForm", "IP Address:\n"
"172.22.0.28", nullptr));
        ThisPort->setText(QApplication::translate("ModbusForm", "Port: 50200", nullptr));
        thisLabel->setText(QApplication::translate("ModbusForm", "This", nullptr));
        RemoteID->setText(QApplication::translate("ModbusForm", "Unit ID: 0", nullptr));
        connectionButton->setText(QApplication::translate("ModbusForm", "Connect to remote", nullptr));
        UpdateInfoButton->setText(QApplication::translate("ModbusForm", "Update Information", nullptr));
        ThisIPMask->setText(QString());
        Title->setText(QApplication::translate("ModbusForm", "Modbus Form", nullptr));
        testButton->setText(QApplication::translate("ModbusForm", "Test", nullptr));
        RemoteIPMask->setText(QString());
        MIPAddress->setText(QApplication::translate("ModbusForm", "IP Address:\n"
"172.22.0.28", nullptr));
        RemoteIDMask->setText(QString());
        ThisID->setText(QApplication::translate("ModbusForm", "Unit ID: 0", nullptr));
        ThisIDMask->setText(QString());
        ThisPortMask->setText(QString());
        remoteLabel->setText(QApplication::translate("ModbusForm", "Remote", nullptr));
        RemotePort->setText(QApplication::translate("ModbusForm", "Port: 50200", nullptr));
        RemotePortMask->setText(QString());
        Statuslabel->setText(QApplication::translate("ModbusForm", "Status: Disconnected", nullptr));
        closeButton->setText(QApplication::translate("ModbusForm", "Back", nullptr));
        moveLeftButton->setText(QApplication::translate("ModbusForm", "<-", nullptr));
        moveRightButton->setText(QApplication::translate("ModbusForm", "->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModbusForm: public Ui_ModbusForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODBUSFORM_H
