/****************************************************************************
** Meta object code from reading C++ file 'bcpserialhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Communication/bcpserialhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bcpserialhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BCPSerialHandler_t {
    QByteArrayData data[11];
    char stringdata0[168];
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
QT_MOC_LITERAL(3, 33, 18), // "ReceivedNewAvgTime"
QT_MOC_LITERAL(4, 52, 15), // "ReceivedNewDate"
QT_MOC_LITERAL(5, 68, 15), // "ReceivedNewTime"
QT_MOC_LITERAL(6, 84, 30), // "ReceivedNewAdFilterSettingsBCP"
QT_MOC_LITERAL(7, 115, 21), // "OnMessageTimerTimeout"
QT_MOC_LITERAL(8, 137, 12), // "OnAckTimeout"
QT_MOC_LITERAL(9, 150, 7), // "message"
QT_MOC_LITERAL(10, 158, 9) // "ReadyRead"

    },
    "BCPSerialHandler\0ParsedDataLine\0\0"
    "ReceivedNewAvgTime\0ReceivedNewDate\0"
    "ReceivedNewTime\0ReceivedNewAdFilterSettingsBCP\0"
    "OnMessageTimerTimeout\0OnAckTimeout\0"
    "message\0ReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BCPSerialHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void,

       0        // eod
};

void BCPSerialHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BCPSerialHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ParsedDataLine(); break;
        case 1: _t->ReceivedNewAvgTime(); break;
        case 2: _t->ReceivedNewDate(); break;
        case 3: _t->ReceivedNewTime(); break;
        case 4: _t->ReceivedNewAdFilterSettingsBCP(); break;
        case 5: _t->OnMessageTimerTimeout(); break;
        case 6: _t->OnAckTimeout((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->ReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BCPSerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BCPSerialHandler::ParsedDataLine)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BCPSerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BCPSerialHandler::ReceivedNewAvgTime)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BCPSerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BCPSerialHandler::ReceivedNewDate)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BCPSerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BCPSerialHandler::ReceivedNewTime)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BCPSerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BCPSerialHandler::ReceivedNewAdFilterSettingsBCP)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BCPSerialHandler::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_BCPSerialHandler.data,
    qt_meta_data_BCPSerialHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BCPSerialHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BCPSerialHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BCPSerialHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BCPSerialHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void BCPSerialHandler::ParsedDataLine()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BCPSerialHandler::ReceivedNewAvgTime()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BCPSerialHandler::ReceivedNewDate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BCPSerialHandler::ReceivedNewTime()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void BCPSerialHandler::ReceivedNewAdFilterSettingsBCP()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
