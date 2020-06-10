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
    QByteArrayData data[7];
    char stringdata0[86];
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
QT_MOC_LITERAL(3, 33, 21), // "OnMessageTimerTimeout"
QT_MOC_LITERAL(4, 55, 12), // "OnAckTimeout"
QT_MOC_LITERAL(5, 68, 7), // "message"
QT_MOC_LITERAL(6, 76, 9) // "ReadyRead"

    },
    "BCPSerialHandler\0ParsedDataLine\0\0"
    "OnMessageTimerTimeout\0OnAckTimeout\0"
    "message\0ReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BCPSerialHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
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
        case 1: _t->OnMessageTimerTimeout(); break;
        case 2: _t->OnAckTimeout((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->ReadyRead(); break;
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
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void BCPSerialHandler::ParsedDataLine()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
