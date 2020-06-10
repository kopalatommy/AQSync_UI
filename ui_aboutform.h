/********************************************************************************
** Form generated from reading UI file 'aboutform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTFORM_H
#define UI_ABOUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutForm
{
public:
    QPushButton *closeButton;
    QLabel *Title;
    QPushButton *moveRightButton;
    QPushButton *moveLeftButton;
    QLabel *buildLabel;
    QLabel *publishLabel;
    QLabel *supportLabel;

    void setupUi(QWidget *AboutForm)
    {
        if (AboutForm->objectName().isEmpty())
            AboutForm->setObjectName(QString::fromUtf8("AboutForm"));
        AboutForm->resize(800, 480);
        AboutForm->setMinimumSize(QSize(800, 480));
        AboutForm->setMaximumSize(QSize(800, 480));
        closeButton = new QPushButton(AboutForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font;
        font.setPointSize(15);
        closeButton->setFont(font);
        Title = new QLabel(AboutForm);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(0, 20, 801, 61));
        QFont font1;
        font1.setPointSize(20);
        Title->setFont(font1);
        Title->setAlignment(Qt::AlignCenter);
        moveRightButton = new QPushButton(AboutForm);
        moveRightButton->setObjectName(QString::fromUtf8("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        moveLeftButton = new QPushButton(AboutForm);
        moveLeftButton->setObjectName(QString::fromUtf8("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        buildLabel = new QLabel(AboutForm);
        buildLabel->setObjectName(QString::fromUtf8("buildLabel"));
        buildLabel->setGeometry(QRect(80, 120, 641, 41));
        buildLabel->setFont(font);
        buildLabel->setAlignment(Qt::AlignCenter);
        publishLabel = new QLabel(AboutForm);
        publishLabel->setObjectName(QString::fromUtf8("publishLabel"));
        publishLabel->setGeometry(QRect(80, 250, 641, 41));
        publishLabel->setFont(font);
        publishLabel->setAlignment(Qt::AlignCenter);
        supportLabel = new QLabel(AboutForm);
        supportLabel->setObjectName(QString::fromUtf8("supportLabel"));
        supportLabel->setGeometry(QRect(80, 180, 641, 41));
        supportLabel->setFont(font);
        supportLabel->setAlignment(Qt::AlignCenter);
        Title->raise();
        closeButton->raise();
        moveRightButton->raise();
        moveLeftButton->raise();
        buildLabel->raise();
        publishLabel->raise();
        supportLabel->raise();

        retranslateUi(AboutForm);

        QMetaObject::connectSlotsByName(AboutForm);
    } // setupUi

    void retranslateUi(QWidget *AboutForm)
    {
        AboutForm->setWindowTitle(QApplication::translate("AboutForm", "Form", nullptr));
        closeButton->setText(QApplication::translate("AboutForm", "Back", nullptr));
        Title->setText(QApplication::translate("AboutForm", "About", nullptr));
        moveRightButton->setText(QApplication::translate("AboutForm", "->", nullptr));
        moveLeftButton->setText(QApplication::translate("AboutForm", "<-", nullptr));
        buildLabel->setText(QApplication::translate("AboutForm", "Build number: 1", nullptr));
        publishLabel->setText(QApplication::translate("AboutForm", "Publish Date: 01/2020", nullptr));
        supportLabel->setText(QApplication::translate("AboutForm", "Support: https://twobtech.com/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutForm: public Ui_AboutForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTFORM_H
