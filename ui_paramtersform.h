/********************************************************************************
** Form generated from reading UI file 'paramtersform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMTERSFORM_H
#define UI_PARAMTERSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParamtersForm
{
public:
    QLabel *title;
    QFrame *line;
    QLabel *dataLabel_1;
    QLabel *dataLabel_4;
    QLabel *dataLabel_7;
    QLabel *dataLabel_10;
    QLabel *dataLabel_13;
    QLabel *dataLabel_16;
    QLabel *dataLabel_2;
    QLabel *dataLabel_5;
    QLabel *dataLabel_8;
    QLabel *dataLabel_11;
    QLabel *dataLabel_14;
    QLabel *dataLabel_17;
    QLabel *dataLabel_19;
    QLabel *dataLabel_3;
    QLabel *dataLabel_6;
    QLabel *dataLabel_9;
    QLabel *dataLabel_12;
    QLabel *dataLabel_15;
    QLabel *dataLabel_18;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QPushButton *closeButton;
    QPushButton *rightButton;
    QPushButton *leftButton;

    void setupUi(QWidget *ParamtersForm)
    {
        if (ParamtersForm->objectName().isEmpty())
            ParamtersForm->setObjectName(QStringLiteral("ParamtersForm"));
        ParamtersForm->resize(800, 480);
        title = new QLabel(ParamtersForm);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(10, 10, 781, 51));
        QFont font;
        font.setPointSize(25);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);
        line = new QFrame(ParamtersForm);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 60, 801, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        dataLabel_1 = new QLabel(ParamtersForm);
        dataLabel_1->setObjectName(QStringLiteral("dataLabel_1"));
        dataLabel_1->setGeometry(QRect(-1, 69, 261, 61));
        QFont font1;
        font1.setPointSize(15);
        dataLabel_1->setFont(font1);
        dataLabel_1->setAlignment(Qt::AlignCenter);
        dataLabel_4 = new QLabel(ParamtersForm);
        dataLabel_4->setObjectName(QStringLiteral("dataLabel_4"));
        dataLabel_4->setGeometry(QRect(-1, 130, 261, 50));
        dataLabel_4->setFont(font1);
        dataLabel_4->setAlignment(Qt::AlignCenter);
        dataLabel_7 = new QLabel(ParamtersForm);
        dataLabel_7->setObjectName(QStringLiteral("dataLabel_7"));
        dataLabel_7->setGeometry(QRect(10, 181, 250, 50));
        dataLabel_7->setFont(font1);
        dataLabel_7->setAlignment(Qt::AlignCenter);
        dataLabel_10 = new QLabel(ParamtersForm);
        dataLabel_10->setObjectName(QStringLiteral("dataLabel_10"));
        dataLabel_10->setGeometry(QRect(-1, 230, 261, 50));
        dataLabel_10->setFont(font1);
        dataLabel_10->setAlignment(Qt::AlignCenter);
        dataLabel_13 = new QLabel(ParamtersForm);
        dataLabel_13->setObjectName(QStringLiteral("dataLabel_13"));
        dataLabel_13->setGeometry(QRect(-1, 280, 261, 50));
        dataLabel_13->setFont(font1);
        dataLabel_13->setAlignment(Qt::AlignCenter);
        dataLabel_16 = new QLabel(ParamtersForm);
        dataLabel_16->setObjectName(QStringLiteral("dataLabel_16"));
        dataLabel_16->setGeometry(QRect(-1, 331, 261, 50));
        dataLabel_16->setFont(font1);
        dataLabel_16->setAlignment(Qt::AlignCenter);
        dataLabel_2 = new QLabel(ParamtersForm);
        dataLabel_2->setObjectName(QStringLiteral("dataLabel_2"));
        dataLabel_2->setGeometry(QRect(260, 69, 250, 61));
        dataLabel_2->setFont(font1);
        dataLabel_2->setAlignment(Qt::AlignCenter);
        dataLabel_5 = new QLabel(ParamtersForm);
        dataLabel_5->setObjectName(QStringLiteral("dataLabel_5"));
        dataLabel_5->setGeometry(QRect(260, 130, 250, 50));
        dataLabel_5->setFont(font1);
        dataLabel_5->setAlignment(Qt::AlignCenter);
        dataLabel_8 = new QLabel(ParamtersForm);
        dataLabel_8->setObjectName(QStringLiteral("dataLabel_8"));
        dataLabel_8->setGeometry(QRect(260, 180, 250, 50));
        dataLabel_8->setFont(font1);
        dataLabel_8->setAlignment(Qt::AlignCenter);
        dataLabel_11 = new QLabel(ParamtersForm);
        dataLabel_11->setObjectName(QStringLiteral("dataLabel_11"));
        dataLabel_11->setGeometry(QRect(260, 230, 250, 50));
        dataLabel_11->setFont(font1);
        dataLabel_11->setAlignment(Qt::AlignCenter);
        dataLabel_14 = new QLabel(ParamtersForm);
        dataLabel_14->setObjectName(QStringLiteral("dataLabel_14"));
        dataLabel_14->setGeometry(QRect(260, 281, 250, 50));
        dataLabel_14->setFont(font1);
        dataLabel_14->setAlignment(Qt::AlignCenter);
        dataLabel_17 = new QLabel(ParamtersForm);
        dataLabel_17->setObjectName(QStringLiteral("dataLabel_17"));
        dataLabel_17->setGeometry(QRect(260, 330, 250, 50));
        dataLabel_17->setFont(font1);
        dataLabel_17->setAlignment(Qt::AlignCenter);
        dataLabel_19 = new QLabel(ParamtersForm);
        dataLabel_19->setObjectName(QStringLiteral("dataLabel_19"));
        dataLabel_19->setGeometry(QRect(260, 380, 250, 50));
        dataLabel_19->setFont(font1);
        dataLabel_19->setAlignment(Qt::AlignCenter);
        dataLabel_3 = new QLabel(ParamtersForm);
        dataLabel_3->setObjectName(QStringLiteral("dataLabel_3"));
        dataLabel_3->setGeometry(QRect(510, 69, 291, 61));
        dataLabel_3->setFont(font1);
        dataLabel_3->setAlignment(Qt::AlignCenter);
        dataLabel_6 = new QLabel(ParamtersForm);
        dataLabel_6->setObjectName(QStringLiteral("dataLabel_6"));
        dataLabel_6->setGeometry(QRect(510, 130, 291, 50));
        dataLabel_6->setFont(font1);
        dataLabel_6->setAlignment(Qt::AlignCenter);
        dataLabel_9 = new QLabel(ParamtersForm);
        dataLabel_9->setObjectName(QStringLiteral("dataLabel_9"));
        dataLabel_9->setGeometry(QRect(510, 180, 291, 50));
        dataLabel_9->setFont(font1);
        dataLabel_9->setAlignment(Qt::AlignCenter);
        dataLabel_12 = new QLabel(ParamtersForm);
        dataLabel_12->setObjectName(QStringLiteral("dataLabel_12"));
        dataLabel_12->setGeometry(QRect(510, 230, 291, 50));
        dataLabel_12->setFont(font1);
        dataLabel_12->setAlignment(Qt::AlignCenter);
        dataLabel_15 = new QLabel(ParamtersForm);
        dataLabel_15->setObjectName(QStringLiteral("dataLabel_15"));
        dataLabel_15->setGeometry(QRect(510, 280, 291, 50));
        dataLabel_15->setFont(font1);
        dataLabel_15->setAlignment(Qt::AlignCenter);
        dataLabel_18 = new QLabel(ParamtersForm);
        dataLabel_18->setObjectName(QStringLiteral("dataLabel_18"));
        dataLabel_18->setGeometry(QRect(510, 330, 291, 50));
        dataLabel_18->setFont(font1);
        dataLabel_18->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(ParamtersForm);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(250, 70, 20, 411));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(ParamtersForm);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(500, 70, 20, 411));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(ParamtersForm);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(0, 120, 801, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(ParamtersForm);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(0, 170, 801, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(ParamtersForm);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(0, 220, 811, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(ParamtersForm);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(0, 270, 801, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(ParamtersForm);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(0, 320, 801, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(ParamtersForm);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(0, 370, 801, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        closeButton = new QPushButton(ParamtersForm);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(740, 10, 50, 50));
        rightButton = new QPushButton(ParamtersForm);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        rightButton->setGeometry(QRect(570, 10, 50, 50));
        leftButton = new QPushButton(ParamtersForm);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        leftButton->setGeometry(QRect(160, 10, 50, 50));

        retranslateUi(ParamtersForm);

        QMetaObject::connectSlotsByName(ParamtersForm);
    } // setupUi

    void retranslateUi(QWidget *ParamtersForm)
    {
        ParamtersForm->setWindowTitle(QApplication::translate("ParamtersForm", "Form", 0));
        title->setText(QApplication::translate("ParamtersForm", "Parameters", 0));
        dataLabel_1->setText(QApplication::translate("ParamtersForm", "Log Number: 10000", 0));
        dataLabel_4->setText(QApplication::translate("ParamtersForm", "Black Carbon: 100", 0));
        dataLabel_7->setText(QApplication::translate("ParamtersForm", "Particulate: 100", 0));
        dataLabel_10->setText(QApplication::translate("ParamtersForm", "Mass Ext 880: 100", 0));
        dataLabel_13->setText(QApplication::translate("ParamtersForm", "Mass Ext 405: 100", 0));
        dataLabel_16->setText(QApplication::translate("ParamtersForm", "NO: 100", 0));
        dataLabel_2->setText(QApplication::translate("ParamtersForm", "NOx: 100", 0));
        dataLabel_5->setText(QApplication::translate("ParamtersForm", "NO2: 100", 0));
        dataLabel_8->setText(QApplication::translate("ParamtersForm", "Cell Temp: 100", 0));
        dataLabel_11->setText(QApplication::translate("ParamtersForm", "Cell Press: 100", 0));
        dataLabel_14->setText(QApplication::translate("ParamtersForm", "Cell Flow: 100", 0));
        dataLabel_17->setText(QApplication::translate("ParamtersForm", "Ozone Flow: 100", 0));
        dataLabel_19->setText(QApplication::translate("ParamtersForm", "PDV1: 100", 0));
        dataLabel_3->setText(QApplication::translate("ParamtersForm", "PDV2: 100", 0));
        dataLabel_6->setText(QApplication::translate("ParamtersForm", "Scrubber Temp: 100", 0));
        dataLabel_9->setText(QApplication::translate("ParamtersForm", "Error Byte: 100", 0));
        dataLabel_12->setText(QApplication::translate("ParamtersForm", "Date: 100", 0));
        dataLabel_15->setText(QApplication::translate("ParamtersForm", "Time: 100", 0));
        dataLabel_18->setText(QApplication::translate("ParamtersForm", "Mode: 100", 0));
        closeButton->setText(QApplication::translate("ParamtersForm", "Close", 0));
        rightButton->setText(QApplication::translate("ParamtersForm", "->", 0));
        leftButton->setText(QApplication::translate("ParamtersForm", "<-", 0));
    } // retranslateUi

};

namespace Ui {
    class ParamtersForm: public Ui_ParamtersForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMTERSFORM_H
