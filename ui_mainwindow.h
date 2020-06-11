/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *line;
    QPushButton *graphButton;
    QPushButton *parametersButton;
    QPushButton *settingsButton;
    QPushButton *modbusTestButton;
    QLabel *dateTimeLabel;
    QFrame *line_2;
    QLabel *statusLabel;
    QLabel *loggingLabel;
    QLabel *errorLabel;
    QLabel *massExtLabel;
    QLabel *noLabel;
    QLabel *no2Label;
    QLabel *noxLabel;
    QLabel *massExt880Label;
    QLabel *pmLabel;
    QLabel *bcLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setMinimumSize(QSize(800, 480));
        MainWindow->setMaximumSize(QSize(800, 480));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-3, 390, 811, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        graphButton = new QPushButton(centralWidget);
        graphButton->setObjectName(QString::fromUtf8("graphButton"));
        graphButton->setGeometry(QRect(610, 410, 190, 70));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Buttons/button_graphs.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        graphButton->setIcon(icon);
        graphButton->setIconSize(QSize(190, 70));
        parametersButton = new QPushButton(centralWidget);
        parametersButton->setObjectName(QString::fromUtf8("parametersButton"));
        parametersButton->setGeometry(QRect(300, 410, 190, 70));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Buttons/parameters.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        parametersButton->setIcon(icon1);
        parametersButton->setIconSize(QSize(190, 70));
        settingsButton = new QPushButton(centralWidget);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        settingsButton->setGeometry(QRect(2, 407, 190, 70));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Buttons/bigger_settings.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        settingsButton->setIcon(icon2);
        settingsButton->setIconSize(QSize(190, 70));
        modbusTestButton = new QPushButton(centralWidget);
        modbusTestButton->setObjectName(QString::fromUtf8("modbusTestButton"));
        modbusTestButton->setGeometry(QRect(20, 280, 100, 100));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Buttons/button_modbus-test.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        modbusTestButton->setIcon(icon3);
        modbusTestButton->setIconSize(QSize(100, 100));
        dateTimeLabel = new QLabel(centralWidget);
        dateTimeLabel->setObjectName(QString::fromUtf8("dateTimeLabel"));
        dateTimeLabel->setGeometry(QRect(150, 340, 641, 51));
        QFont font;
        font.setPointSize(15);
        dateTimeLabel->setFont(font);
        dateTimeLabel->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(130, 0, 20, 401));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(10, 10, 121, 41));
        statusLabel->setFont(font);
        statusLabel->setAlignment(Qt::AlignCenter);
        loggingLabel = new QLabel(centralWidget);
        loggingLabel->setObjectName(QString::fromUtf8("loggingLabel"));
        loggingLabel->setGeometry(QRect(4, 55, 131, 61));
        QFont font1;
        font1.setPointSize(12);
        loggingLabel->setFont(font1);
        loggingLabel->setAlignment(Qt::AlignCenter);
        errorLabel = new QLabel(centralWidget);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setGeometry(QRect(10, 130, 121, 61));
        errorLabel->setFont(font1);
        errorLabel->setAlignment(Qt::AlignCenter);
        massExtLabel = new QLabel(centralWidget);
        massExtLabel->setObjectName(QString::fromUtf8("massExtLabel"));
        massExtLabel->setGeometry(QRect(150, 140, 641, 51));
        massExtLabel->setFont(font);
        massExtLabel->setAlignment(Qt::AlignCenter);
        noLabel = new QLabel(centralWidget);
        noLabel->setObjectName(QString::fromUtf8("noLabel"));
        noLabel->setGeometry(QRect(150, 180, 641, 51));
        noLabel->setFont(font);
        noLabel->setAlignment(Qt::AlignCenter);
        no2Label = new QLabel(centralWidget);
        no2Label->setObjectName(QString::fromUtf8("no2Label"));
        no2Label->setGeometry(QRect(150, 220, 641, 51));
        no2Label->setFont(font);
        no2Label->setAlignment(Qt::AlignCenter);
        noxLabel = new QLabel(centralWidget);
        noxLabel->setObjectName(QString::fromUtf8("noxLabel"));
        noxLabel->setGeometry(QRect(150, 260, 641, 51));
        noxLabel->setFont(font);
        noxLabel->setAlignment(Qt::AlignCenter);
        massExt880Label = new QLabel(centralWidget);
        massExt880Label->setObjectName(QString::fromUtf8("massExt880Label"));
        massExt880Label->setGeometry(QRect(150, 100, 641, 51));
        massExt880Label->setFont(font);
        massExt880Label->setAlignment(Qt::AlignCenter);
        pmLabel = new QLabel(centralWidget);
        pmLabel->setObjectName(QString::fromUtf8("pmLabel"));
        pmLabel->setGeometry(QRect(150, 60, 641, 51));
        pmLabel->setFont(font);
        pmLabel->setAlignment(Qt::AlignCenter);
        bcLabel = new QLabel(centralWidget);
        bcLabel->setObjectName(QString::fromUtf8("bcLabel"));
        bcLabel->setGeometry(QRect(150, 20, 641, 51));
        bcLabel->setFont(font);
        bcLabel->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        graphButton->setText(QString());
        parametersButton->setText(QString());
        settingsButton->setText(QString());
        modbusTestButton->setText(QString());
        dateTimeLabel->setText(QApplication::translate("MainWindow", "Date / Time", nullptr));
        statusLabel->setText(QApplication::translate("MainWindow", "Status", nullptr));
        loggingLabel->setText(QApplication::translate("MainWindow", "Logging:\n"
"123456", nullptr));
        errorLabel->setText(QApplication::translate("MainWindow", "No Error", nullptr));
        massExtLabel->setText(QApplication::translate("MainWindow", "Mass Ext 405: 0 ppb", nullptr));
        noLabel->setText(QApplication::translate("MainWindow", "NO: 0 ppb", nullptr));
        no2Label->setText(QApplication::translate("MainWindow", "NO2: 0 ppb", nullptr));
        noxLabel->setText(QApplication::translate("MainWindow", "NOx: 0 ppb", nullptr));
        massExt880Label->setText(QApplication::translate("MainWindow", "Mass Ext 880: 0 ppb", nullptr));
        pmLabel->setText(QApplication::translate("MainWindow", "PM: 0 ppb", nullptr));
        bcLabel->setText(QApplication::translate("MainWindow", "BC: 0 ppb", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
