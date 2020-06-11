/********************************************************************************
** Form generated from reading UI file 'numberpadform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMBERPADFORM_H
#define UI_NUMBERPADFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NumberPadForm
{
public:
    QTextEdit *text;
    QPushButton *save;
    QPushButton *two;
    QPushButton *cancel;
    QPushButton *six;
    QPushButton *three;
    QPushButton *plus;
    QPushButton *eight;
    QLabel *rangeLabel;
    QPushButton *seven;
    QPushButton *nine;
    QPushButton *four;
    QPushButton *dot;
    QPushButton *five;
    QPushButton *zero;
    QPushButton *back;
    QPushButton *clear;
    QPushButton *one;

    void setupUi(QWidget *NumberPadForm)
    {
        if (NumberPadForm->objectName().isEmpty())
            NumberPadForm->setObjectName(QStringLiteral("NumberPadForm"));
        NumberPadForm->resize(800, 480);
        text = new QTextEdit(NumberPadForm);
        text->setObjectName(QStringLiteral("text"));
        text->setGeometry(QRect(150, 100, 151, 41));
        text->setReadOnly(true);
        save = new QPushButton(NumberPadForm);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(380, 320, 100, 30));
        QFont font;
        font.setPointSize(12);
        save->setFont(font);
        save->setIconSize(QSize(100, 30));
        two = new QPushButton(NumberPadForm);
        two->setObjectName(QStringLiteral("two"));
        two->setGeometry(QRect(310, 160, 60, 60));
        QFont font1;
        font1.setPointSize(20);
        two->setFont(font1);
        two->setIconSize(QSize(60, 60));
        cancel = new QPushButton(NumberPadForm);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(280, 320, 100, 30));
        cancel->setFont(font);
        cancel->setIconSize(QSize(100, 30));
        six = new QPushButton(NumberPadForm);
        six->setObjectName(QStringLiteral("six"));
        six->setGeometry(QRect(240, 230, 60, 60));
        six->setFont(font1);
        six->setIconSize(QSize(60, 60));
        three = new QPushButton(NumberPadForm);
        three->setObjectName(QStringLiteral("three"));
        three->setGeometry(QRect(380, 160, 60, 60));
        three->setFont(font1);
        three->setIconSize(QSize(60, 60));
        plus = new QPushButton(NumberPadForm);
        plus->setObjectName(QStringLiteral("plus"));
        plus->setGeometry(QRect(520, 160, 60, 60));
        plus->setFont(font1);
        plus->setLayoutDirection(Qt::LeftToRight);
        plus->setIconSize(QSize(60, 60));
        plus->setCheckable(false);
        plus->setChecked(false);
        eight = new QPushButton(NumberPadForm);
        eight->setObjectName(QStringLiteral("eight"));
        eight->setGeometry(QRect(380, 230, 60, 60));
        eight->setFont(font1);
        eight->setIconSize(QSize(60, 60));
        rangeLabel = new QLabel(NumberPadForm);
        rangeLabel->setObjectName(QStringLiteral("rangeLabel"));
        rangeLabel->setGeometry(QRect(320, 110, 181, 31));
        rangeLabel->setFont(font);
        seven = new QPushButton(NumberPadForm);
        seven->setObjectName(QStringLiteral("seven"));
        seven->setGeometry(QRect(310, 230, 60, 60));
        seven->setFont(font1);
        seven->setIconSize(QSize(60, 60));
        nine = new QPushButton(NumberPadForm);
        nine->setObjectName(QStringLiteral("nine"));
        nine->setGeometry(QRect(450, 230, 60, 60));
        nine->setFont(font1);
        nine->setIconSize(QSize(60, 60));
        four = new QPushButton(NumberPadForm);
        four->setObjectName(QStringLiteral("four"));
        four->setGeometry(QRect(450, 160, 60, 60));
        four->setFont(font1);
        four->setIconSize(QSize(60, 60));
        dot = new QPushButton(NumberPadForm);
        dot->setObjectName(QStringLiteral("dot"));
        dot->setGeometry(QRect(520, 230, 60, 60));
        dot->setFont(font1);
        dot->setIconSize(QSize(60, 60));
        five = new QPushButton(NumberPadForm);
        five->setObjectName(QStringLiteral("five"));
        five->setGeometry(QRect(170, 230, 60, 60));
        five->setFont(font1);
        five->setIconSize(QSize(60, 60));
        zero = new QPushButton(NumberPadForm);
        zero->setObjectName(QStringLiteral("zero"));
        zero->setGeometry(QRect(170, 160, 60, 60));
        zero->setFont(font1);
        zero->setIconSize(QSize(60, 60));
        back = new QPushButton(NumberPadForm);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(520, 100, 40, 40));
        back->setIconSize(QSize(40, 40));
        clear = new QPushButton(NumberPadForm);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(570, 100, 40, 40));
        clear->setIconSize(QSize(40, 40));
        one = new QPushButton(NumberPadForm);
        one->setObjectName(QStringLiteral("one"));
        one->setGeometry(QRect(240, 160, 60, 60));
        one->setFont(font1);
        one->setIconSize(QSize(60, 60));
        one->setAutoRepeat(true);

        retranslateUi(NumberPadForm);

        QMetaObject::connectSlotsByName(NumberPadForm);
    } // setupUi

    void retranslateUi(QWidget *NumberPadForm)
    {
        NumberPadForm->setWindowTitle(QApplication::translate("NumberPadForm", "Form", 0));
        text->setHtml(QApplication::translate("NumberPadForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Current Text</span></p></body></html>", 0));
        save->setText(QApplication::translate("NumberPadForm", "Apply", 0));
        two->setText(QApplication::translate("NumberPadForm", "2", 0));
        cancel->setText(QApplication::translate("NumberPadForm", "Cancel", 0));
        six->setText(QApplication::translate("NumberPadForm", "6", 0));
        three->setText(QApplication::translate("NumberPadForm", "3", 0));
        plus->setText(QApplication::translate("NumberPadForm", "+/-", 0));
        eight->setText(QApplication::translate("NumberPadForm", "8", 0));
        rangeLabel->setText(QApplication::translate("NumberPadForm", "Range: 0 - 100", 0));
        seven->setText(QApplication::translate("NumberPadForm", "7", 0));
        nine->setText(QApplication::translate("NumberPadForm", "9", 0));
        four->setText(QApplication::translate("NumberPadForm", "4", 0));
        dot->setText(QApplication::translate("NumberPadForm", ".", 0));
        five->setText(QApplication::translate("NumberPadForm", "5", 0));
        zero->setText(QApplication::translate("NumberPadForm", "0", 0));
        back->setText(QApplication::translate("NumberPadForm", "Back", 0));
        clear->setText(QApplication::translate("NumberPadForm", "Clear", 0));
        one->setText(QApplication::translate("NumberPadForm", "1", 0));
    } // retranslateUi

};

namespace Ui {
    class NumberPadForm: public Ui_NumberPadForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMBERPADFORM_H
