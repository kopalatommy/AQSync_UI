/********************************************************************************
** Form generated from reading UI file 'aboutform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTFORM_H
#define UI_ABOUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            AboutForm->setObjectName(QStringLiteral("AboutForm"));
        AboutForm->resize(800, 480);
        AboutForm->setMinimumSize(QSize(800, 480));
        AboutForm->setMaximumSize(QSize(800, 480));
        closeButton = new QPushButton(AboutForm);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(720, 10, 70, 70));
        QFont font;
        font.setPointSize(15);
        closeButton->setFont(font);
        Title = new QLabel(AboutForm);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(0, 20, 801, 61));
        QFont font1;
        font1.setPointSize(20);
        Title->setFont(font1);
        Title->setAlignment(Qt::AlignCenter);
        moveRightButton = new QPushButton(AboutForm);
        moveRightButton->setObjectName(QStringLiteral("moveRightButton"));
        moveRightButton->setGeometry(QRect(720, 90, 70, 380));
        moveLeftButton = new QPushButton(AboutForm);
        moveLeftButton->setObjectName(QStringLiteral("moveLeftButton"));
        moveLeftButton->setGeometry(QRect(10, 90, 70, 380));
        buildLabel = new QLabel(AboutForm);
        buildLabel->setObjectName(QStringLiteral("buildLabel"));
        buildLabel->setGeometry(QRect(80, 120, 641, 41));
        buildLabel->setFont(font);
        buildLabel->setAlignment(Qt::AlignCenter);
        publishLabel = new QLabel(AboutForm);
        publishLabel->setObjectName(QStringLiteral("publishLabel"));
        publishLabel->setGeometry(QRect(80, 250, 641, 41));
        publishLabel->setFont(font);
        publishLabel->setAlignment(Qt::AlignCenter);
        supportLabel = new QLabel(AboutForm);
        supportLabel->setObjectName(QStringLiteral("supportLabel"));
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
        AboutForm->setWindowTitle(QApplication::translate("AboutForm", "Form", 0));
        closeButton->setText(QApplication::translate("AboutForm", "Back", 0));
        Title->setText(QApplication::translate("AboutForm", "About", 0));
        moveRightButton->setText(QApplication::translate("AboutForm", "->", 0));
        moveLeftButton->setText(QApplication::translate("AboutForm", "<-", 0));
        buildLabel->setText(QApplication::translate("AboutForm", "Build number: 1", 0));
        publishLabel->setText(QApplication::translate("AboutForm", "Publish Date: 01/2020", 0));
        supportLabel->setText(QApplication::translate("AboutForm", "Support: https://twobtech.com/", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutForm: public Ui_AboutForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTFORM_H
