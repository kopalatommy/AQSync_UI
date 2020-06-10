/****************************************************************************
** Meta object code from reading C++ file 'modbushandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Modbus/modbushandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modbushandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModbusHandler_t {
    QByteArrayData data[40];
    char stringdata0[509];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModbusHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModbusHandler_t qt_meta_stringdata_ModbusHandler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ModbusHandler"
QT_MOC_LITERAL(1, 14, 17), // "ConnectedAsMaster"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "MasterDisconnect"
QT_MOC_LITERAL(4, 50, 16), // "ConnectedAsSlave"
QT_MOC_LITERAL(5, 67, 17), // "SlaveDisconnected"
QT_MOC_LITERAL(6, 85, 11), // "NewDataLine"
QT_MOC_LITERAL(7, 97, 11), // "NewSettings"
QT_MOC_LITERAL(8, 109, 21), // "TriggerOutputFunction"
QT_MOC_LITERAL(9, 131, 3), // "val"
QT_MOC_LITERAL(10, 135, 15), // "OnMasterConnect"
QT_MOC_LITERAL(11, 151, 18), // "OnMasterDisconnect"
QT_MOC_LITERAL(12, 170, 12), // "ReadAsMaster"
QT_MOC_LITERAL(13, 183, 13), // "WriteAsMaster"
QT_MOC_LITERAL(14, 197, 9), // "PingSlave"
QT_MOC_LITERAL(15, 207, 19), // "DisconnectFromSlave"
QT_MOC_LITERAL(16, 227, 14), // "OnSlaveConnect"
QT_MOC_LITERAL(17, 242, 17), // "OnSlaveDisconnect"
QT_MOC_LITERAL(18, 260, 13), // "NewConnection"
QT_MOC_LITERAL(19, 274, 9), // "SlaveRead"
QT_MOC_LITERAL(20, 284, 17), // "WriteNewSlaveData"
QT_MOC_LITERAL(21, 302, 11), // "QTcpSocket*"
QT_MOC_LITERAL(22, 314, 7), // "SetCoil"
QT_MOC_LITERAL(23, 322, 7), // "address"
QT_MOC_LITERAL(24, 330, 5), // "value"
QT_MOC_LITERAL(25, 336, 18), // "SetSettingRegister"
QT_MOC_LITERAL(26, 355, 12), // "startAddress"
QT_MOC_LITERAL(27, 368, 7), // "int16_t"
QT_MOC_LITERAL(28, 376, 2), // "b1"
QT_MOC_LITERAL(29, 379, 2), // "b2"
QT_MOC_LITERAL(30, 382, 20), // "SetDateTimeRegisters"
QT_MOC_LITERAL(31, 403, 11), // "const char*"
QT_MOC_LITERAL(32, 415, 6), // "values"
QT_MOC_LITERAL(33, 422, 11), // "SetRegister"
QT_MOC_LITERAL(34, 434, 20), // "SetMultipleRegisters"
QT_MOC_LITERAL(35, 455, 2), // "r1"
QT_MOC_LITERAL(36, 458, 2), // "r2"
QT_MOC_LITERAL(37, 461, 12), // "QList<short>"
QT_MOC_LITERAL(38, 474, 17), // "SetFloatRegisters"
QT_MOC_LITERAL(39, 492, 16) // "SetLongRegisters"

    },
    "ModbusHandler\0ConnectedAsMaster\0\0"
    "MasterDisconnect\0ConnectedAsSlave\0"
    "SlaveDisconnected\0NewDataLine\0NewSettings\0"
    "TriggerOutputFunction\0val\0OnMasterConnect\0"
    "OnMasterDisconnect\0ReadAsMaster\0"
    "WriteAsMaster\0PingSlave\0DisconnectFromSlave\0"
    "OnSlaveConnect\0OnSlaveDisconnect\0"
    "NewConnection\0SlaveRead\0WriteNewSlaveData\0"
    "QTcpSocket*\0SetCoil\0address\0value\0"
    "SetSettingRegister\0startAddress\0int16_t\0"
    "b1\0b2\0SetDateTimeRegisters\0const char*\0"
    "values\0SetRegister\0SetMultipleRegisters\0"
    "r1\0r2\0QList<short>\0SetFloatRegisters\0"
    "SetLongRegisters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModbusHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x06 /* Public */,
       3,    0,  145,    2, 0x06 /* Public */,
       4,    0,  146,    2, 0x06 /* Public */,
       5,    0,  147,    2, 0x06 /* Public */,
       6,    0,  148,    2, 0x06 /* Public */,
       7,    0,  149,    2, 0x06 /* Public */,
       8,    1,  150,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  153,    2, 0x0a /* Public */,
      11,    0,  154,    2, 0x0a /* Public */,
      12,    0,  155,    2, 0x0a /* Public */,
      13,    1,  156,    2, 0x0a /* Public */,
      14,    0,  159,    2, 0x0a /* Public */,
      15,    0,  160,    2, 0x0a /* Public */,
      16,    0,  161,    2, 0x0a /* Public */,
      17,    0,  162,    2, 0x0a /* Public */,
      18,    0,  163,    2, 0x0a /* Public */,
      19,    0,  164,    2, 0x0a /* Public */,
      20,    2,  165,    2, 0x0a /* Public */,
      22,    2,  170,    2, 0x0a /* Public */,
      25,    3,  175,    2, 0x0a /* Public */,
      30,    2,  182,    2, 0x0a /* Public */,
      33,    2,  187,    2, 0x0a /* Public */,
      34,    3,  192,    2, 0x0a /* Public */,
      34,    2,  199,    2, 0x0a /* Public */,
      38,    2,  204,    2, 0x0a /* Public */,
      39,    2,  209,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 21,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   23,   24,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 27, 0x80000000 | 27,   26,   28,   29,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 31,   23,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Short,   23,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::Short, QMetaType::Short,   23,   35,   36,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 37,   23,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   23,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Long,   23,    9,

       0        // eod
};

void ModbusHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModbusHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ConnectedAsMaster(); break;
        case 1: _t->MasterDisconnect(); break;
        case 2: _t->ConnectedAsSlave(); break;
        case 3: _t->SlaveDisconnected(); break;
        case 4: _t->NewDataLine(); break;
        case 5: _t->NewSettings(); break;
        case 6: _t->TriggerOutputFunction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->OnMasterConnect(); break;
        case 8: _t->OnMasterDisconnect(); break;
        case 9: _t->ReadAsMaster(); break;
        case 10: _t->WriteAsMaster((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 11: _t->PingSlave(); break;
        case 12: _t->DisconnectFromSlave(); break;
        case 13: _t->OnSlaveConnect(); break;
        case 14: _t->OnSlaveDisconnect(); break;
        case 15: _t->NewConnection(); break;
        case 16: _t->SlaveRead(); break;
        case 17: _t->WriteNewSlaveData((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QTcpSocket*(*)>(_a[2]))); break;
        case 18: _t->SetCoil((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->SetSettingRegister((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int16_t(*)>(_a[2])),(*reinterpret_cast< int16_t(*)>(_a[3]))); break;
        case 20: _t->SetDateTimeRegisters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 21: _t->SetRegister((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2]))); break;
        case 22: _t->SetMultipleRegisters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2])),(*reinterpret_cast< short(*)>(_a[3]))); break;
        case 23: _t->SetMultipleRegisters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<short>(*)>(_a[2]))); break;
        case 24: _t->SetFloatRegisters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 25: _t->SetLongRegisters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<short> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModbusHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModbusHandler::ConnectedAsMaster)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModbusHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModbusHandler::MasterDisconnect)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ModbusHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModbusHandler::ConnectedAsSlave)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ModbusHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModbusHandler::SlaveDisconnected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ModbusHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModbusHandler::NewDataLine)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ModbusHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModbusHandler::NewSettings)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ModbusHandler::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModbusHandler::TriggerOutputFunction)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModbusHandler::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ModbusHandler.data,
    qt_meta_data_ModbusHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ModbusHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModbusHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModbusHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ModbusHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void ModbusHandler::ConnectedAsMaster()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ModbusHandler::MasterDisconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ModbusHandler::ConnectedAsSlave()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ModbusHandler::SlaveDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ModbusHandler::NewDataLine()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ModbusHandler::NewSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ModbusHandler::TriggerOutputFunction(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
