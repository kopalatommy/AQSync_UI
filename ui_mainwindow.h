/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setMinimumSize(QSize(800, 480));
        MainWindow->setMaximumSize(QSize(800, 480));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-3, 390, 811, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        graphButton = new QPushButton(centralWidget);
        graphButton->setObjectName(QStringLiteral("graphButton"));
        graphButton->setGeometry(QRect(610, 410, 190, 70));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/button_graphs.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        graphButton->setIcon(icon);
        graphButton->setIconSize(QSize(190, 70));
        parametersButton = new QPushButton(centralWidget);
        parametersButton->setObjectName(QStringLiteral("parametersButton"));
        parametersButton->setGeometry(QRect(300, 410, 190, 70));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/parameters.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        parametersButton->setIcon(icon1);
        parametersButton->setIconSize(QSize(190, 70));
        settingsButton = new QPushButton(centralWidget);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));
        settingsButton->setGeometry(QRect(2, 407, 190, 70));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/bigger_settings.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        settingsButton->setIcon(icon2);
        settingsButton->setIconSize(QSize(190, 70));
        modbusTestButton = new QPushButton(centralWidget);
        modbusTestButton->setObjectName(QStringLiteral("modbusTestButton"));
        modbusTestButton->setGeometry(QRect(20, 280, 100, 100));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/button_modbus-test.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        modbusTestButton->setIcon(icon3);
        modbusTestButton->setIconSize(QSize(100, 100));
        dateTimeLabel = new QLabel(centralWidget);
        dateTimeLabel->setObjectName(QStringLiteral("dateTimeLabel"));
        dateTimeLabel->setGeometry(QRect(150, 340, 641, 51));
        QFont font;
        font.setPointSize(15);
        dateTimeLabel->setFont(font);
        dateTimeLabel->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(130, 0, 20, 401));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setGeometry(QRect(10, 10, 121, 41));
        statusLabel->setFont(font);
        statusLabel->setAlignment(Qt::AlignCenter);
        loggingLabel = new QLabel(centralWidget);
        loggingLabel->setObjectName(QStringLiteral("loggingLabel"));
        loggingLabel->setGeometry(QRect(4, 55, 131, 61));
        QFont font1;
        font1.setPointSize(12);
        loggingLabel->setFont(font1);
        loggingLabel->setAlignment(Qt::AlignCenter);
        errorLabel = new QLabel(centralWidget);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(10, 130, 121, 61));
        errorLabel->setFont(font1);
        errorLabel->setAlignment(Qt::AlignCenter);
        massExtLabel = new QLabel(centralWidget);
        massExtLabel->setObjectName(QStringLiteral("massExtLabel"));
        massExtLabel->setGeometry(QRect(150, 140, 641, 51));
        massExtLabel->setFont(font);
        massExtLabel->setAlignment(Qt::AlignCenter);
        noLabel = new QLabel(centralWidget);
        noLabel->setObjectName(QStringLiteral("noLabel"));
        noLabel->setGeometry(QRect(150, 180, 641, 51));
        noLabel->setFont(font);
        noLabel->setAlignment(Qt::AlignCenter);
        no2Label = new QLabel(centralWidget);
        no2Label->setObjectName(QStringLiteral("no2Label"));
        no2Label->setGeometry(QRect(150, 220, 641, 51));
        no2Label->setFont(font);
        no2Label->setAlignment(Qt::AlignCenter);
        noxLabel = new QLabel(centralWidget);
        noxLabel->setObjectName(QStringLiteral("noxLabel"));
        noxLabel->setGeometry(QRect(150, 260, 641, 51));
        noxLabel->setFont(font);
        noxLabel->setAlignment(Qt::AlignCenter);
        massExt880Label = new QLabel(centralWidget);
        massExt880Label->setObjectName(QStringLiteral("massExt880Label"));
        massExt880Label->setGeometry(QRect(150, 100, 641, 51));
        massExt880Label->setFont(font);
        massExt880Label->setAlignment(Qt::AlignCenter);
        pmLabel = new QLabel(centralWidget);
        pmLabel->setObjectName(QStringLiteral("pmLabel"));
        pmLabel->setGeometry(QRect(150, 60, 641, 51));
        pmLabel->setFont(font);
        pmLabel->setAlignment(Qt::AlignCenter);
        bcLabel = new QLabel(centralWidget);
        bcLabel->setObjectName(QStringLiteral("bcLabel"));
        bcLabel->setGeometry(QRect(150, 20, 641, 51));
        bcLabel->setFont(font);
        bcLabel->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        graphButton->setText(QString());
        parametersButton->setText(QString());
        settingsButton->setText(QString());
        modbusTestButton->setText(QString());
        dateTimeLabel->setText(QApplication::translate("MainWindow", "Date / Time", 0));
        statusLabel->setText(QApplication::translate("MainWindow", "Status", 0));
        loggingLabel->setText(QApplication::translate("MainWindow", "Logging:\n"
"123456", 0));
        errorLabel->setText(QApplication::translate("MainWindow", "No Error", 0));
        massExtLabel->setText(QApplication::translate("MainWindow", "Mass Ext 405: 0 ppb", 0));
        noLabel->setText(QApplication::translate("MainWindow", "NO: 0 ppb", 0));
        no2Label->setText(QApplication::translate("MainWindow", "NO2: 0 ppb", 0));
        noxLabel->setText(QApplication::translate("MainWindow", "NOx: 0 ppb", 0));
        massExt880Label->setText(QApplication::translate("MainWindow", "Mass Ext 880: 0 ppb", 0));
        pmLabel->setText(QApplication::translate("MainWindow", "PM: 0 ppb", 0));
        bcLabel->setText(QApplication::translate("MainWindow", "BC: 0 ppb", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
