/****************************************************************************
** Meta object code from reading C++ file 'communicationhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../405nmUI/communicationhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'communicationhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CommunicationHandler_t {
    QByteArrayData data[24];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommunicationHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommunicationHandler_t qt_meta_stringdata_CommunicationHandler = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CommunicationHandler"
QT_MOC_LITERAL(1, 21, 10), // "SetNewDate"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "SetNewTime"
QT_MOC_LITERAL(4, 44, 13), // "ForceDateTime"
QT_MOC_LITERAL(5, 58, 10), // "HandledLog"
QT_MOC_LITERAL(6, 69, 11), // "UpdateGraph"
QT_MOC_LITERAL(7, 81, 20), // "ModbusSlaveConnected"
QT_MOC_LITERAL(8, 102, 23), // "ModbusSlaveDisconnected"
QT_MOC_LITERAL(9, 126, 21), // "ModbusMasterConnected"
QT_MOC_LITERAL(10, 148, 24), // "ModbusMasterDisconnected"
QT_MOC_LITERAL(11, 173, 16), // "UpdateSettingsUI"
QT_MOC_LITERAL(12, 190, 10), // "SyncStatus"
QT_MOC_LITERAL(13, 201, 17), // "ReceiveNewSetting"
QT_MOC_LITERAL(14, 219, 6), // "marker"
QT_MOC_LITERAL(15, 226, 3), // "val"
QT_MOC_LITERAL(16, 230, 15), // "registerAddress"
QT_MOC_LITERAL(17, 246, 9), // "HandleLog"
QT_MOC_LITERAL(18, 256, 12), // "QList<short>"
QT_MOC_LITERAL(19, 269, 22), // "CreateModbusConnection"
QT_MOC_LITERAL(20, 292, 9), // "IPAddress"
QT_MOC_LITERAL(21, 302, 4), // "port"
QT_MOC_LITERAL(22, 307, 2), // "id"
QT_MOC_LITERAL(23, 310, 16) // "HandleNewSetting"

    },
    "CommunicationHandler\0SetNewDate\0\0"
    "SetNewTime\0ForceDateTime\0HandledLog\0"
    "UpdateGraph\0ModbusSlaveConnected\0"
    "ModbusSlaveDisconnected\0ModbusMasterConnected\0"
    "ModbusMasterDisconnected\0UpdateSettingsUI\0"
    "SyncStatus\0ReceiveNewSetting\0marker\0"
    "val\0registerAddress\0HandleLog\0"
    "QList<short>\0CreateModbusConnection\0"
    "IPAddress\0port\0id\0HandleNewSetting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommunicationHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,
       6,    0,  103,    2, 0x06 /* Public */,
       7,    0,  104,    2, 0x06 /* Public */,
       8,    0,  105,    2, 0x06 /* Public */,
       9,    0,  106,    2, 0x06 /* Public */,
      10,    0,  107,    2, 0x06 /* Public */,
      11,    0,  108,    2, 0x06 /* Public */,
      12,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    3,  112,    2, 0x0a /* Public */,
      13,    3,  119,    2, 0x0a /* Public */,
      13,    3,  126,    2, 0x0a /* Public */,
      17,    1,  133,    2, 0x0a /* Public */,
      19,    3,  136,    2, 0x0a /* Public */,
      23,    0,  143,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Char, QMetaType::UChar, QMetaType::Int,   14,   15,   16,
    QMetaType::Void, QMetaType::Char, QMetaType::Int, QMetaType::Int,   14,   15,   16,
    QMetaType::Void, QMetaType::Char, QMetaType::Float, QMetaType::Int,   14,   15,   16,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   20,   21,   22,
    QMetaType::Void,

       0        // eod
};

void CommunicationHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CommunicationHandler *_t = static_cast<CommunicationHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetNewDate(); break;
        case 1: _t->SetNewTime(); break;
        case 2: _t->ForceDateTime(); break;
        case 3: _t->HandledLog(); break;
        case 4: _t->UpdateGraph(); break;
        case 5: _t->ModbusSlaveConnected(); break;
        case 6: _t->ModbusSlaveDisconnected(); break;
        case 7: _t->ModbusMasterConnected(); break;
        case 8: _t->ModbusMasterDisconnected(); break;
        case 9: _t->UpdateSettingsUI(); break;
        case 10: _t->SyncStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->ReceiveNewSetting((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->ReceiveNewSetting((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->ReceiveNewSetting((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->HandleLog((*reinterpret_cast< QList<short>(*)>(_a[1]))); break;
        case 15: _t->CreateModbusConnection((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->HandleNewSetting(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<short> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CommunicationHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommunicationHandler::SetNewDate)) {
                *result = 0;
            }
        }
        {
            typedef void (CommunicationHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommunicationHandler::SetNewTime)) {
                *result = 1;
            }
        }
        {
            typedef void (CommunicationHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommunicationHandler::ForceDateTime)) {
                *result = 2;
            }
        }
        {
            typedef void (CommunicationHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommunicationHandler::HandledLog)) {
                *result = 3;
            }
        }
        {
            typedef void (CommunicationHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommunicationHandler::UpdateGraph)) {
                *result = 4;
            }
        }
        {
            typedef void (CommunicationHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommunicationHandler::ModbusSlaveConnected)) {
                *result = 5;
            }
        }
        {
            typedef void (CommunicationHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommunicationHandler::ModbusSlaveDisconnected)) {
                *result = 6;
            }
        }
        {
            typedef void (CommunicationHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommunicationHandler::ModbusMasterConnected)) {
                *result = 7;
            }
        }
        {
            typedef void (CommunicationHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommunicationHandler::ModbusMasterDisconnected)) {
                *result = 8;
            }
        }
        {
            typedef void (CommunicationHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommunicationHandler::UpdateSettingsUI)) {
                *result = 9;
            }
        }
        {
            typedef void (CommunicationHandler::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommunicationHandler::SyncStatus)) {
                *result = 10;
            }
        }
    }
}

const QMetaObject CommunicationHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CommunicationHandler.data,
      qt_meta_data_CommunicationHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CommunicationHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommunicationHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CommunicationHandler.stringdata0))
        return static_cast<void*>(const_cast< CommunicationHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int CommunicationHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void CommunicationHandler::SetNewDate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CommunicationHandler::SetNewTime()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void CommunicationHandler::ForceDateTime()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void CommunicationHandler::HandledLog()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void CommunicationHandler::UpdateGraph()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void CommunicationHandler::ModbusSlaveConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void CommunicationHandler::ModbusSlaveDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void CommunicationHandler::ModbusMasterConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void CommunicationHandler::ModbusMasterDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void CommunicationHandler::UpdateSettingsUI()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void CommunicationHandler::SyncStatus(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
