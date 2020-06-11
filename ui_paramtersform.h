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
    QLabel *logNumber;
    QLabel *blackCarbon;
    QLabel *pm;
    QLabel *massExt880;
    QLabel *massExt405;
    QLabel *no;
    QLabel *no2;
    QLabel *nox;
    QLabel *cellTemp;
    QLabel *cellPress;
    QLabel *cellFlow;
    QLabel *ozoneFlow;
    QLabel *pdv1;
    QLabel *pdv2;
    QLabel *scrubberTemp;
    QLabel *errorByte;
    QLabel *data;
    QLabel *time;
    QLabel *mode;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QPushButton *closeButton;
    QPushButton *closeButton_2;
    QPushButton *closeButton_3;

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
        logNumber = new QLabel(ParamtersForm);
        logNumber->setObjectName(QStringLiteral("logNumber"));
        logNumber->setGeometry(QRect(10, 80, 250, 50));
        QFont font1;
        font1.setPointSize(15);
        logNumber->setFont(font1);
        logNumber->setAlignment(Qt::AlignCenter);
        blackCarbon = new QLabel(ParamtersForm);
        blackCarbon->setObjectName(QStringLiteral("blackCarbon"));
        blackCarbon->setGeometry(QRect(10, 130, 250, 50));
        blackCarbon->setFont(font1);
        blackCarbon->setAlignment(Qt::AlignCenter);
        pm = new QLabel(ParamtersForm);
        pm->setObjectName(QStringLiteral("pm"));
        pm->setGeometry(QRect(10, 181, 250, 50));
        pm->setFont(font1);
        pm->setAlignment(Qt::AlignCenter);
        massExt880 = new QLabel(ParamtersForm);
        massExt880->setObjectName(QStringLiteral("massExt880"));
        massExt880->setGeometry(QRect(10, 230, 250, 50));
        massExt880->setFont(font1);
        massExt880->setAlignment(Qt::AlignCenter);
        massExt405 = new QLabel(ParamtersForm);
        massExt405->setObjectName(QStringLiteral("massExt405"));
        massExt405->setGeometry(QRect(10, 280, 250, 50));
        massExt405->setFont(font1);
        massExt405->setAlignment(Qt::AlignCenter);
        no = new QLabel(ParamtersForm);
        no->setObjectName(QStringLiteral("no"));
        no->setGeometry(QRect(10, 331, 250, 50));
        no->setFont(font1);
        no->setAlignment(Qt::AlignCenter);
        no2 = new QLabel(ParamtersForm);
        no2->setObjectName(QStringLiteral("no2"));
        no2->setGeometry(QRect(260, 80, 250, 50));
        no2->setFont(font1);
        no2->setAlignment(Qt::AlignCenter);
        nox = new QLabel(ParamtersForm);
        nox->setObjectName(QStringLiteral("nox"));
        nox->setGeometry(QRect(260, 130, 250, 50));
        nox->setFont(font1);
        nox->setAlignment(Qt::AlignCenter);
        cellTemp = new QLabel(ParamtersForm);
        cellTemp->setObjectName(QStringLiteral("cellTemp"));
        cellTemp->setGeometry(QRect(260, 180, 250, 50));
        cellTemp->setFont(font1);
        cellTemp->setAlignment(Qt::AlignCenter);
        cellPress = new QLabel(ParamtersForm);
        cellPress->setObjectName(QStringLiteral("cellPress"));
        cellPress->setGeometry(QRect(260, 230, 250, 50));
        cellPress->setFont(font1);
        cellPress->setAlignment(Qt::AlignCenter);
        cellFlow = new QLabel(ParamtersForm);
        cellFlow->setObjectName(QStringLiteral("cellFlow"));
        cellFlow->setGeometry(QRect(260, 281, 250, 50));
        cellFlow->setFont(font1);
        cellFlow->setAlignment(Qt::AlignCenter);
        ozoneFlow = new QLabel(ParamtersForm);
        ozoneFlow->setObjectName(QStringLiteral("ozoneFlow"));
        ozoneFlow->setGeometry(QRect(260, 330, 250, 50));
        ozoneFlow->setFont(font1);
        ozoneFlow->setAlignment(Qt::AlignCenter);
        pdv1 = new QLabel(ParamtersForm);
        pdv1->setObjectName(QStringLiteral("pdv1"));
        pdv1->setGeometry(QRect(260, 380, 250, 50));
        pdv1->setFont(font1);
        pdv1->setAlignment(Qt::AlignCenter);
        pdv2 = new QLabel(ParamtersForm);
        pdv2->setObjectName(QStringLiteral("pdv2"));
        pdv2->setGeometry(QRect(510, 80, 250, 50));
        pdv2->setFont(font1);
        pdv2->setAlignment(Qt::AlignCenter);
        scrubberTemp = new QLabel(ParamtersForm);
        scrubberTemp->setObjectName(QStringLiteral("scrubberTemp"));
        scrubberTemp->setGeometry(QRect(510, 130, 250, 50));
        scrubberTemp->setFont(font1);
        scrubberTemp->setAlignment(Qt::AlignCenter);
        errorByte = new QLabel(ParamtersForm);
        errorByte->setObjectName(QStringLiteral("errorByte"));
        errorByte->setGeometry(QRect(510, 180, 250, 50));
        errorByte->setFont(font1);
        errorByte->setAlignment(Qt::AlignCenter);
        data = new QLabel(ParamtersForm);
        data->setObjectName(QStringLiteral("data"));
        data->setGeometry(QRect(510, 230, 250, 50));
        data->setFont(font1);
        data->setAlignment(Qt::AlignCenter);
        time = new QLabel(ParamtersForm);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(510, 280, 250, 50));
        time->setFont(font1);
        time->setAlignment(Qt::AlignCenter);
        mode = new QLabel(ParamtersForm);
        mode->setObjectName(QStringLiteral("mode"));
        mode->setGeometry(QRect(510, 330, 250, 50));
        mode->setFont(font1);
        mode->setAlignment(Qt::AlignCenter);
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
        line_6->setGeometry(QRect(10, 220, 801, 20));
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
        closeButton_2 = new QPushButton(ParamtersForm);
        closeButton_2->setObjectName(QStringLiteral("closeButton_2"));
        closeButton_2->setGeometry(QRect(570, 10, 50, 50));
        closeButton_3 = new QPushButton(ParamtersForm);
        closeButton_3->setObjectName(QStringLiteral("closeButton_3"));
        closeButton_3->setGeometry(QRect(160, 10, 50, 50));

        retranslateUi(ParamtersForm);

        QMetaObject::connectSlotsByName(ParamtersForm);
    } // setupUi

    void retranslateUi(QWidget *ParamtersForm)
    {
        ParamtersForm->setWindowTitle(QApplication::translate("ParamtersForm", "Form", 0));
        title->setText(QApplication::translate("ParamtersForm", "Parameters", 0));
        logNumber->setText(QApplication::translate("ParamtersForm", "Log Number: 10000", 0));
        blackCarbon->setText(QApplication::translate("ParamtersForm", "Black Carbon: 100", 0));
        pm->setText(QApplication::translate("ParamtersForm", "Particulate: 100", 0));
        massExt880->setText(QApplication::translate("ParamtersForm", "Mass Ext 880: 100", 0));
        massExt405->setText(QApplication::translate("ParamtersForm", "Mass Ext 405: 100", 0));
        no->setText(QApplication::translate("ParamtersForm", "NO: 100", 0));
        no2->setText(QApplication::translate("ParamtersForm", "NOx: 100", 0));
        nox->setText(QApplication::translate("ParamtersForm", "NO2: 100", 0));
        cellTemp->setText(QApplication::translate("ParamtersForm", "Cell Temp: 100", 0));
        cellPress->setText(QApplication::translate("ParamtersForm", "Cell Press: 100", 0));
        cellFlow->setText(QApplication::translate("ParamtersForm", "Cell Flow: 100", 0));
        ozoneFlow->setText(QApplication::translate("ParamtersForm", "Ozone Flow: 100", 0));
        pdv1->setText(QApplication::translate("ParamtersForm", "PDV1: 100", 0));
        pdv2->setText(QApplication::translate("ParamtersForm", "PDV2: 100", 0));
        scrubberTemp->setText(QApplication::translate("ParamtersForm", "Scrubber Temp: 100", 0));
        errorByte->setText(QApplication::translate("ParamtersForm", "Error Byte: 100", 0));
        data->setText(QApplication::translate("ParamtersForm", "Date: 100", 0));
        time->setText(QApplication::translate("ParamtersForm", "Time: 100", 0));
        mode->setText(QApplication::translate("ParamtersForm", "Mode: 100", 0));
        closeButton->setText(QApplication::translate("ParamtersForm", "Close", 0));
        closeButton_2->setText(QApplication::translate("ParamtersForm", "->", 0));
        closeButton_3->setText(QApplication::translate("ParamtersForm", "<-", 0));
    } // retranslateUi

};

namespace Ui {
    class ParamtersForm: public Ui_ParamtersForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMTERSFORM_H
