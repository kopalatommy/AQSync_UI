/****************************************************************************
** Meta object code from reading C++ file 'modbusslave.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Modbus/modbusslave.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modbusslave.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModbusSlave_t {
    QByteArrayData data[10];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModbusSlave_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModbusSlave_t qt_meta_stringdata_ModbusSlave = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ModbusSlave"
QT_MOC_LITERAL(1, 12, 19), // "ReceivedNewSettings"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 21), // "TriggerOutputFunction"
QT_MOC_LITERAL(4, 55, 3), // "val"
QT_MOC_LITERAL(5, 59, 9), // "WriteData"
QT_MOC_LITERAL(6, 69, 4), // "data"
QT_MOC_LITERAL(7, 74, 11), // "QTcpSocket*"
QT_MOC_LITERAL(8, 86, 6), // "socket"
QT_MOC_LITERAL(9, 93, 9) // "ParseData"

    },
    "ModbusSlave\0ReceivedNewSettings\0\0"
    "TriggerOutputFunction\0val\0WriteData\0"
    "data\0QTcpSocket*\0socket\0ParseData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModbusSlave[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       5,    2,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 7,    6,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 7,    6,    8,

       0        // eod
};

void ModbusSlave::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModbusSlave *_t = static_cast<ModbusSlave *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReceivedNewSettings(); break;
        case 1: _t->TriggerOutputFunction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->WriteData((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QTcpSocket*(*)>(_a[2]))); break;
        case 3: _t->ParseData((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QTcpSocket*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModbusSlave::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModbusSlave::ReceivedNewSettings)) {
                *result = 0;
            }
        }
        {
            typedef void (ModbusSlave::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModbusSlave::TriggerOutputFunction)) {
                *result = 1;
            }
        }
        {
            typedef void (ModbusSlave::*_t)(QByteArray , QTcpSocket * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModbusSlave::WriteData)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ModbusSlave::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModbusSlave.data,
      qt_meta_data_ModbusSlave,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModbusSlave::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModbusSlave::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModbusSlave.stringdata0))
        return static_cast<void*>(const_cast< ModbusSlave*>(this));
    return QObject::qt_metacast(_clname);
}

int ModbusSlave::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ModbusSlave::ReceivedNewSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ModbusSlave::TriggerOutputFunction(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ModbusSlave::WriteData(QByteArray _t1, QTcpSocket * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
