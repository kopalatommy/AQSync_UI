#include "mainwindow.h"
#include <QApplication>
#include "Settings/405Settings/settings405.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qDebug() << "Started application";

    MainWindow w;
    w.show();

    return a.exec();
}
