/********************************************************************************
** Form generated from reading UI file 'graphform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHFORM_H
#define UI_GRAPHFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphForm
{
public:
    QPushButton *zoomIn;
    QPushButton *Left;
    QPushButton *Settings;
    QPushButton *Up;
    QWidget *BothOpen;
    QPushButton *Gasses;
    QPushButton *Down;
    QPushButton *Right;
    QPushButton *home;
    QPushButton *zoomOut;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *bottomOpen;
    QWidget *bothClosed;
    QWidget *legendOpen;

    void setupUi(QWidget *GraphForm)
    {
        if (GraphForm->objectName().isEmpty())
            GraphForm->setObjectName(QString::fromUtf8("GraphForm"));
        GraphForm->resize(800, 480);
        zoomIn = new QPushButton(GraphForm);
        zoomIn->setObjectName(QString::fromUtf8("zoomIn"));
        zoomIn->setGeometry(QRect(325, 410, 60, 60));
        zoomIn->setIconSize(QSize(60, 60));
        Left = new QPushButton(GraphForm);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(780, 220, 21, 21));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/GraphLeft.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon);
        Settings = new QPushButton(GraphForm);
        Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->setGeometry(QRect(225, 410, 60, 60));
        Settings->setIconSize(QSize(60, 60));
        Up = new QPushButton(GraphForm);
        Up->setObjectName(QString::fromUtf8("Up"));
        Up->setGeometry(QRect(400, 450, 21, 21));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/GrpahUp.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Up->setIcon(icon1);
        BothOpen = new QWidget(GraphForm);
        BothOpen->setObjectName(QString::fromUtf8("BothOpen"));
        BothOpen->setGeometry(QRect(10, 10, 671, 371));
        Gasses = new QPushButton(GraphForm);
        Gasses->setObjectName(QString::fromUtf8("Gasses"));
        Gasses->setGeometry(QRect(125, 410, 60, 60));
        Gasses->setIconSize(QSize(60, 60));
        Down = new QPushButton(GraphForm);
        Down->setObjectName(QString::fromUtf8("Down"));
        Down->setGeometry(QRect(400, 375, 21, 21));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/GraphDown.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Down->setIcon(icon2);
        Right = new QPushButton(GraphForm);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(675, 220, 21, 21));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/GraphRight.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon3);
        home = new QPushButton(GraphForm);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(35, 410, 60, 60));
        home->setIconSize(QSize(60, 60));
        zoomOut = new QPushButton(GraphForm);
        zoomOut->setObjectName(QString::fromUtf8("zoomOut"));
        zoomOut->setGeometry(QRect(425, 410, 60, 60));
        zoomOut->setIconSize(QSize(60, 60));
        label = new QLabel(GraphForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(700, 0, 101, 31));
        label_2 = new QLabel(GraphForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(700, 30, 101, 31));
        label_3 = new QLabel(GraphForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(700, 60, 101, 31));
        label_4 = new QLabel(GraphForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(700, 90, 101, 31));
        label_5 = new QLabel(GraphForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(700, 120, 101, 31));
        label_6 = new QLabel(GraphForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(700, 150, 101, 31));
        label_7 = new QLabel(GraphForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(700, 180, 101, 31));
        label_8 = new QLabel(GraphForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(700, 210, 101, 31));
        label_9 = new QLabel(GraphForm);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(700, 240, 101, 31));
        label_10 = new QLabel(GraphForm);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(700, 270, 101, 31));
        label_11 = new QLabel(GraphForm);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(700, 300, 101, 31));
        label_12 = new QLabel(GraphForm);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(700, 330, 101, 31));
        label_13 = new QLabel(GraphForm);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(700, 360, 101, 31));
        label_14 = new QLabel(GraphForm);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(700, 390, 101, 31));
        label_15 = new QLabel(GraphForm);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(700, 420, 101, 31));
        bottomOpen = new QWidget(GraphForm);
        bottomOpen->setObjectName(QString::fromUtf8("bottomOpen"));
        bottomOpen->setGeometry(QRect(10, 10, 781, 371));
        bothClosed = new QWidget(GraphForm);
        bothClosed->setObjectName(QString::fromUtf8("bothClosed"));
        bothClosed->setGeometry(QRect(10, 0, 781, 471));
        legendOpen = new QWidget(GraphForm);
        legendOpen->setObjectName(QString::fromUtf8("legendOpen"));
        legendOpen->setGeometry(QRect(20, 10, 661, 461));
        label_8->raise();
        bottomOpen->raise();
        bothClosed->raise();
        legendOpen->raise();
        BothOpen->raise();
        zoomIn->raise();
        Left->raise();
        Settings->raise();
        Gasses->raise();
        Down->raise();
        Right->raise();
        home->raise();
        zoomOut->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        Up->raise();

        retranslateUi(GraphForm);

        QMetaObject::connectSlotsByName(GraphForm);
    } // setupUi

    void retranslateUi(QWidget *GraphForm)
    {
        GraphForm->setWindowTitle(QApplication::translate("GraphForm", "Form", nullptr));
        zoomIn->setText(QApplication::translate("GraphForm", "Zoom In", nullptr));
        Left->setText(QString());
        Settings->setText(QApplication::translate("GraphForm", "Range", nullptr));
        Up->setText(QString());
        Gasses->setText(QApplication::translate("GraphForm", "Select", nullptr));
        Down->setText(QString());
        Right->setText(QString());
        home->setText(QApplication::translate("GraphForm", "Home", nullptr));
        zoomOut->setText(QApplication::translate("GraphForm", "Zoom Out", nullptr));
        label->setText(QApplication::translate("GraphForm", "Value 1", nullptr));
        label_2->setText(QApplication::translate("GraphForm", "Value 2", nullptr));
        label_3->setText(QApplication::translate("GraphForm", "Value 3", nullptr));
        label_4->setText(QApplication::translate("GraphForm", "Value 4", nullptr));
        label_5->setText(QApplication::translate("GraphForm", "Value 5", nullptr));
        label_6->setText(QApplication::translate("GraphForm", "Value 6", nullptr));
        label_7->setText(QApplication::translate("GraphForm", "Value 7", nullptr));
        label_8->setText(QApplication::translate("GraphForm", "Value 8", nullptr));
        label_9->setText(QApplication::translate("GraphForm", "Value 9", nullptr));
        label_10->setText(QApplication::translate("GraphForm", "Value 10", nullptr));
        label_11->setText(QApplication::translate("GraphForm", "Value 11", nullptr));
        label_12->setText(QApplication::translate("GraphForm", "Value 12", nullptr));
        label_13->setText(QApplication::translate("GraphForm", "Value 13", nullptr));
        label_14->setText(QApplication::translate("GraphForm", "Value 14", nullptr));
        label_15->setText(QApplication::translate("GraphForm", "Value 15", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphForm: public Ui_GraphForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHFORM_H
