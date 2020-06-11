/****************************************************************************
** Meta object code from reading C++ file 'serialhandler405.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Communication/serialhandler405.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialhandler405.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SerialHandler405_t {
    QByteArrayData data[12];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialHandler405_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialHandler405_t qt_meta_stringdata_SerialHandler405 = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SerialHandler405"
QT_MOC_LITERAL(1, 17, 14), // "ParsedDataLine"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "NewAdFilterSettings405"
QT_MOC_LITERAL(4, 56, 18), // "NewModeSettings405"
QT_MOC_LITERAL(5, 75, 18), // "NewNOCalSetting405"
QT_MOC_LITERAL(6, 94, 20), // "NewNo2CalSettings405"
QT_MOC_LITERAL(7, 115, 21), // "NewFlowCalSettings405"
QT_MOC_LITERAL(8, 137, 21), // "OnMessageTimerTimeout"
QT_MOC_LITERAL(9, 159, 12), // "OnAckTimeout"
QT_MOC_LITERAL(10, 172, 7), // "message"
QT_MOC_LITERAL(11, 180, 9) // "ReadyRead"

    },
    "SerialHandler405\0ParsedDataLine\0\0"
    "NewAdFilterSettings405\0NewModeSettings405\0"
    "NewNOCalSetting405\0NewNo2CalSettings405\0"
    "NewFlowCalSettings405\0OnMessageTimerTimeout\0"
    "OnAckTimeout\0message\0ReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialHandler405[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   10,
    QMetaType::Void,

       0        // eod
};

void SerialHandler405::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialHandler405 *_t = static_cast<SerialHandler405 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ParsedDataLine(); break;
        case 1: _t->NewAdFilterSettings405(); break;
        case 2: _t->NewModeSettings405(); break;
        case 3: _t->NewNOCalSetting405(); break;
        case 4: _t->NewNo2CalSettings405(); break;
        case 5: _t->NewFlowCalSettings405(); break;
        case 6: _t->OnMessageTimerTimeout(); break;
        case 7: _t->OnAckTimeout((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 8: _t->ReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SerialHandler405::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialHandler405::ParsedDataLine)) {
                *result = 0;
            }
        }
        {
            typedef void (SerialHandler405::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialHandler405::NewAdFilterSettings405)) {
                *result = 1;
            }
        }
        {
            typedef void (SerialHandler405::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialHandler405::NewModeSettings405)) {
                *result = 2;
            }
        }
        {
            typedef void (SerialHandler405::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialHandler405::NewNOCalSetting405)) {
                *result = 3;
            }
        }
        {
            typedef void (SerialHandler405::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialHandler405::NewNo2CalSettings405)) {
                *result = 4;
            }
        }
        {
            typedef void (SerialHandler405::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialHandler405::NewFlowCalSettings405)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject SerialHandler405::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SerialHandler405.data,
      qt_meta_data_SerialHandler405,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SerialHandler405::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialHandler405::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SerialHandler405.stringdata0))
        return static_cast<void*>(const_cast< SerialHandler405*>(this));
    return QObject::qt_metacast(_clname);
}

int SerialHandler405::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SerialHandler405::ParsedDataLine()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SerialHandler405::NewAdFilterSettings405()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SerialHandler405::NewModeSettings405()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void SerialHandler405::NewNOCalSetting405()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void SerialHandler405::NewNo2CalSettings405()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void SerialHandler405::NewFlowCalSettings405()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
