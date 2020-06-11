/****************************************************************************
** Meta object code from reading C++ file 'bcpserialhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Communication/bcpserialhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bcpserialhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BCPSerialHandler_t {
    QByteArrayData data[16];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BCPSerialHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BCPSerialHandler_t qt_meta_stringdata_BCPSerialHandler = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BCPSerialHandler"
QT_MOC_LITERAL(1, 17, 14), // "ParsedDataLine"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "NewAvgTime"
QT_MOC_LITERAL(4, 44, 14), // "NewDateSetting"
QT_MOC_LITERAL(5, 59, 13), // "NewTimeStting"
QT_MOC_LITERAL(6, 73, 22), // "NewAdFilterSettingsBCP"
QT_MOC_LITERAL(7, 96, 21), // "NewAutoZeroSettingBCP"
QT_MOC_LITERAL(8, 118, 20), // "New880CalSettingsBCP"
QT_MOC_LITERAL(9, 139, 20), // "New405CalSettingsBCP"
QT_MOC_LITERAL(10, 160, 21), // "NewFlowCalSettingsBCP"
QT_MOC_LITERAL(11, 182, 20), // "NewTPCorrSettingsBCP"
QT_MOC_LITERAL(12, 203, 21), // "OnMessageTimerTimeout"
QT_MOC_LITERAL(13, 225, 12), // "OnAckTimeout"
QT_MOC_LITERAL(14, 238, 7), // "message"
QT_MOC_LITERAL(15, 246, 9) // "ReadyRead"

    },
    "BCPSerialHandler\0ParsedDataLine\0\0"
    "NewAvgTime\0NewDateSetting\0NewTimeStting\0"
    "NewAdFilterSettingsBCP\0NewAutoZeroSettingBCP\0"
    "New880CalSettingsBCP\0New405CalSettingsBCP\0"
    "NewFlowCalSettingsBCP\0NewTPCorrSettingsBCP\0"
    "OnMessageTimerTimeout\0OnAckTimeout\0"
    "message\0ReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BCPSerialHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    0,   84,    2, 0x06 /* Public */,
       8,    0,   85,    2, 0x06 /* Public */,
       9,    0,   86,    2, 0x06 /* Public */,
      10,    0,   87,    2, 0x06 /* Public */,
      11,    0,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   89,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

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

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   14,
    QMetaType::Void,

       0        // eod
};

void BCPSerialHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BCPSerialHandler *_t = static_cast<BCPSerialHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ParsedDataLine(); break;
        case 1: _t->NewAvgTime(); break;
        case 2: _t->NewDateSetting(); break;
        case 3: _t->NewTimeStting(); break;
        case 4: _t->NewAdFilterSettingsBCP(); break;
        case 5: _t->NewAutoZeroSettingBCP(); break;
        case 6: _t->New880CalSettingsBCP(); break;
        case 7: _t->New405CalSettingsBCP(); break;
        case 8: _t->NewFlowCalSettingsBCP(); break;
        case 9: _t->NewTPCorrSettingsBCP(); break;
        case 10: _t->OnMessageTimerTimeout(); break;
        case 11: _t->OnAckTimeout((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 12: _t->ReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BCPSerialHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BCPSerialHandler::ParsedDataLine)) {
                *result = 0;
            }
        }
        {
            typedef void (BCPSerialHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BCPSerialHandler::NewAvgTime)) {
                *result = 1;
            }
        }
        {
            typedef void (BCPSerialHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BCPSerialHandler::NewDateSetting)) {
                *result = 2;
            }
        }
        {
            typedef void (BCPSerialHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BCPSerialHandler::NewTimeStting)) {
                *result = 3;
            }
        }
        {
            typedef void (BCPSerialHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BCPSerialHandler::NewAdFilterSettingsBCP)) {
                *result = 4;
            }
        }
        {
            typedef void (BCPSerialHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BCPSerialHandler::NewAutoZeroSettingBCP)) {
                *result = 5;
            }
        }
        {
            typedef void (BCPSerialHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BCPSerialHandler::New880CalSettingsBCP)) {
                *result = 6;
            }
        }
        {
            typedef void (BCPSerialHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BCPSerialHandler::New405CalSettingsBCP)) {
                *result = 7;
            }
        }
        {
            typedef void (BCPSerialHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BCPSerialHandler::NewFlowCalSettingsBCP)) {
                *result = 8;
            }
        }
        {
            typedef void (BCPSerialHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BCPSerialHandler::NewTPCorrSettingsBCP)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject BCPSerialHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BCPSerialHandler.data,
      qt_meta_data_BCPSerialHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BCPSerialHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BCPSerialHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BCPSerialHandler.stringdata0))
        return static_cast<void*>(const_cast< BCPSerialHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int BCPSerialHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void BCPSerialHandler::ParsedDataLine()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BCPSerialHandler::NewAvgTime()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void BCPSerialHandler::NewDateSetting()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void BCPSerialHandler::NewTimeStting()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void BCPSerialHandler::NewAdFilterSettingsBCP()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void BCPSerialHandler::NewAutoZeroSettingBCP()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void BCPSerialHandler::New880CalSettingsBCP()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void BCPSerialHandler::New405CalSettingsBCP()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void BCPSerialHandler::NewFlowCalSettingsBCP()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void BCPSerialHandler::NewTPCorrSettingsBCP()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
