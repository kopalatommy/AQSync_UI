#-------------------------------------------------
#
# Project created by QtCreator 2019-12-31T15:36:09
#
#-------------------------------------------------

QT       += core gui serialport network printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AQSync_UI
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        Communication/bcpserialhandler.cpp \
        Communication/communicationhandler.cpp \
        DataFiles/datafilemenuform.cpp \
        DataFiles/filebrowserform.cpp \
        Graphing/graphform.cpp \
        Graphing/qcustomplot.cpp \
        Modbus/modbusdatatable.cpp \
        Modbus/modbusform.cpp \
        Modbus/modbushandler.cpp \
        Modbus/modbusmaster.cpp \
        Modbus/modbusslave.cpp \
        Modbus/modbustestform.cpp \
        Modbus/staticipform.cpp \
        Settings/405Settings/adaptivefilter405form.cpp \
        Settings/aboutform.cpp \
        Settings/adaptivefilterform.cpp \
        Settings/avgsettingform.cpp \
        Settings/bccalform.cpp \
        Settings/datafilesform.cpp \
        Settings/flowcalform.cpp \
        Settings/modeform.cpp \
        Settings/no2calform.cpp \
        Settings/nocalform.cpp \
        Settings/pmcalform.cpp \
        Settings/settingformshandler.cpp \
        Settings/settingsform.cpp \
        Settings/systemsettingsform.cpp \
        aqsyncdata.cpp \
        aqsyncsettings.cpp \
        main.cpp \
        mainwindow.cpp \
        Communication/serialhandler.cpp \
        numberpadform.cpp \
        paramtersform.cpp \
        utilities.cpp

HEADERS += \
        Communication/bcpserialhandler.h \
        Communication/communicationhandler.h \
        DataFiles/datafilemenuform.h \
        DataFiles/filebrowserform.h \
        Graphing/graphform.h \
        Graphing/qcustomplot.h \
        Modbus/modbusdatatable.h \
        Modbus/modbusform.h \
        Modbus/modbushandler.h \
        Modbus/modbusmaster.h \
        Modbus/modbusslave.h \
        Modbus/modbustestform.h \
        Modbus/staticipform.h \
        Settings/405Settings/adaptivefilter405form.h \
        Settings/aboutform.h \
        Settings/adaptivefilterform.h \
        Settings/avgsettingform.h \
        Settings/bccalform.h \
        Settings/datafilesform.h \
        Settings/flowcalform.h \
        Settings/modeform.h \
        Settings/no2calform.h \
        Settings/nocalform.h \
        Settings/pmcalform.h \
        Settings/settingformshandler.h \
        Settings/settingsform.h \
        Settings/systemsettingsform.h \
        aqsyncdata.h \
        aqsyncsettings.h \
        mainwindow.h \
        Communication/serialhandler.h \
        numberpadform.h \
        paramtersform.h \
        utilities.h

FORMS += \
        DataFiles/datafilemenuform.ui \
        DataFiles/filebrowserform.ui \
        Graphing/graphform.ui \
        Modbus/modbusform.ui \
        Modbus/modbustestform.ui \
        Modbus/staticipform.ui \
        Settings/405Settings/adaptivefilter405form.ui \
        Settings/aboutform.ui \
        Settings/adaptivefilterform.ui \
        Settings/avgsettingform.ui \
        Settings/bccalform.ui \
        Settings/datafilesform.ui \
        Settings/flowcalform.ui \
        Settings/modeform.ui \
        Settings/no2calform.ui \
        Settings/nocalform.ui \
        Settings/pmcalform.ui \
        Settings/settingsform.ui \
        Settings/systemsettingsform.ui \
        mainwindow.ui \
        numberpadform.ui \
        paramtersform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
