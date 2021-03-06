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
    Communication/serialhandler405.cpp \
        DataFiles/datafilemenuform.cpp \
        DataFiles/filebrowserform.cpp \
    DataHandlers/bcpdata.cpp \
    DataHandlers/datahandler405.cpp \
    DataHandlers/settingshandler.cpp \
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
    Settings/405Settings/flowcalibration405form.cpp \
    Settings/405Settings/mode405form.cpp \
    Settings/405Settings/no2calibration405form.cpp \
    Settings/BCPSettings/adaptivefilterbcpform.cpp \
    Settings/BCPSettings/flowcalibrationbcpform.cpp \
        Settings/aboutform.cpp \
        Settings/avgsettingform.cpp \
        Settings/datafilesform.cpp \
        Settings/settingformshandler.cpp \
        Settings/settingsform.cpp \
        Settings/systemsettingsform.cpp \
        main.cpp \
        mainwindow.cpp \
        Communication/serialhandler.cpp \
        numberpadform.cpp \
        paramtersform.cpp \
        utilities.cpp \
    Settings/405Settings/settings405.cpp \
    Settings/BCPSettings/bcpsettings.cpp \
    Settings/BCPSettings/calibration880nm.cpp \
    Settings/BCPSettings/autozerobcp.cpp \
    Settings/BCPSettings/calibration405nm.cpp \
    Settings/BCPSettings/tpcorrectionsform.cpp \
    Settings/405Settings/nocalibration405form.cpp

HEADERS += \
        Communication/bcpserialhandler.h \
    Communication/serialhandler405.h \
    Communication/syncstatus.h \
        DataFiles/datafilemenuform.h \
        DataFiles/filebrowserform.h \
    DataHandlers/bcpdata.h \
    DataHandlers/datahandler405.h \
    DataHandlers/settingshandler.h \
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
    Settings/405Settings/flowcalibration405form.h \
    Settings/405Settings/mode405form.h \
    Settings/405Settings/no2calibration405form.h \
    Settings/BCPSettings/adaptivefilterbcpform.h \
    Settings/BCPSettings/flowcalibrationbcpform.h \
        Settings/aboutform.h \
        Settings/avgsettingform.h \
        Settings/datafilesform.h \
        Settings/settingformshandler.h \
        Settings/settingsform.h \
        Settings/systemsettingsform.h \
        mainwindow.h \
        Communication/serialhandler.h \
        numberpadform.h \
        paramtersform.h \
        utilities.h \
    Settings/405Settings/settings405.h \
    Settings/BCPSettings/bcpsettings.h \
    Settings/BCPSettings/calibration880nm.h \
    Settings/BCPSettings/autozerobcp.h \
    Settings/BCPSettings/calibration405nm.h \
    Settings/BCPSettings/tpcorrectionsform.h \
    Settings/405Settings/nocalibration405form.h

FORMS += \
        DataFiles/datafilemenuform.ui \
        DataFiles/filebrowserform.ui \
        Graphing/graphform.ui \
        Modbus/modbusform.ui \
        Modbus/modbustestform.ui \
        Modbus/staticipform.ui \
    Settings/405Settings/adaptivefilter405form.ui \
    Settings/405Settings/flowcalibration405form.ui \
    Settings/405Settings/mode405form.ui \
    Settings/405Settings/no2calibration405form.ui \
    Settings/BCPSettings/adaptivefilterbcpform.ui \
    Settings/BCPSettings/flowcalibrationbcpform.ui \
        Settings/aboutform.ui \
        Settings/avgsettingform.ui \
        Settings/datafilesform.ui \
        Settings/settingsform.ui \
        Settings/systemsettingsform.ui \
        mainwindow.ui \
        numberpadform.ui \
        paramtersform.ui \
    Settings/405Settings/settings405.ui \
    Settings/BCPSettings/bcpsettings.ui \
    Settings/BCPSettings/calibration880nm.ui \
    Settings/BCPSettings/autozerobcp.ui \
    Settings/BCPSettings/calibration405nm.ui \
    Settings/BCPSettings/tpcorrectionsform.ui \
    Settings/405Settings/nocalibration405form.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Buttons/settings_Home_button.qml \
    Buttons/settings_Home_Button.jpg \
    Settings/BlackCarbonSettings \
    ../../Downloads/button_graphs.jpg \
    ../../Downloads/button_parameters.jpg \
    ../../Downloads/button_settings.jpg

RESOURCES += \
    resources.qrc
