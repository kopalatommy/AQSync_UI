/****************************************************************************
** Meta object code from reading C++ file 'modbusmaster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Modbus/modbusmaster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modbusmaster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModbusMaster_t {
    QByteArrayData data[30];
    char stringdata0[439];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModbusMaster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModbusMaster_t qt_meta_stringdata_ModbusMaster = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ModbusMaster"
QT_MOC_LITERAL(1, 13, 15), // "FinishedRequest"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "SetErrorBit"
QT_MOC_LITERAL(4, 42, 8), // "bitIndex"
QT_MOC_LITERAL(5, 51, 6), // "status"
QT_MOC_LITERAL(6, 58, 19), // "ReceivedNewSettings"
QT_MOC_LITERAL(7, 78, 19), // "ReceivedNewDataLine"
QT_MOC_LITERAL(8, 98, 9), // "ReadCoils"
QT_MOC_LITERAL(9, 108, 12), // "startAddress"
QT_MOC_LITERAL(10, 121, 14), // "_numberOfCoils"
QT_MOC_LITERAL(11, 136, 18), // "ReadDiscreteInputs"
QT_MOC_LITERAL(12, 155, 15), // "_numberOfInputs"
QT_MOC_LITERAL(13, 171, 21), // "ReadMultipleRegisters"
QT_MOC_LITERAL(14, 193, 18), // "_numberOfRegisters"
QT_MOC_LITERAL(15, 212, 18), // "ReadInputRegisters"
QT_MOC_LITERAL(16, 231, 15), // "WriteSingleCoil"
QT_MOC_LITERAL(17, 247, 19), // "WriteSingleRegister"
QT_MOC_LITERAL(18, 267, 5), // "value"
QT_MOC_LITERAL(19, 273, 18), // "WriteMultipleCoils"
QT_MOC_LITERAL(20, 292, 11), // "QList<char>"
QT_MOC_LITERAL(21, 304, 6), // "values"
QT_MOC_LITERAL(22, 311, 27), // "WriteMultipleWholeRegisters"
QT_MOC_LITERAL(23, 339, 12), // "QList<short>"
QT_MOC_LITERAL(24, 352, 22), // "WriteMultipleRegisters"
QT_MOC_LITERAL(25, 375, 7), // "address"
QT_MOC_LITERAL(26, 383, 9), // "ParseData"
QT_MOC_LITERAL(27, 393, 12), // "receivedData"
QT_MOC_LITERAL(28, 406, 9), // "PingSlave"
QT_MOC_LITERAL(29, 416, 22) // "WriteSettingsRegisters"

    },
    "ModbusMaster\0FinishedRequest\0\0SetErrorBit\0"
    "bitIndex\0status\0ReceivedNewSettings\0"
    "ReceivedNewDataLine\0ReadCoils\0"
    "startAddress\0_numberOfCoils\0"
    "ReadDiscreteInputs\0_numberOfInputs\0"
    "ReadMultipleRegisters\0_numberOfRegisters\0"
    "ReadInputRegisters\0WriteSingleCoil\0"
    "WriteSingleRegister\0value\0WriteMultipleCoils\0"
    "QList<char>\0values\0WriteMultipleWholeRegisters\0"
    "QList<short>\0WriteMultipleRegisters\0"
    "address\0ParseData\0receivedData\0PingSlave\0"
    "WriteSettingsRegisters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModbusMaster[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    2,   97,    2, 0x06 /* Public */,
       6,    0,  102,    2, 0x06 /* Public */,
       7,    0,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,  104,    2, 0x0a /* Public */,
      11,    2,  109,    2, 0x0a /* Public */,
      13,    2,  114,    2, 0x0a /* Public */,
      15,    2,  119,    2, 0x0a /* Public */,
      16,    2,  124,    2, 0x0a /* Public */,
      17,    2,  129,    2, 0x0a /* Public */,
      19,    2,  134,    2, 0x0a /* Public */,
      22,    2,  139,    2, 0x0a /* Public */,
      24,    2,  144,    2, 0x0a /* Public */,
      26,    1,  149,    2, 0x0a /* Public */,
      28,    0,  152,    2, 0x0a /* Public */,
      29,    0,  153,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Short,    9,   18,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20,    9,   21,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 23,    9,   21,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20,   25,   21,
    QMetaType::Void, QMetaType::QByteArray,   27,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModbusMaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModbusMaster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FinishedRequest((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->SetErrorBit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->ReceivedNewSettings(); break;
        case 3: _t->ReceivedNewDataLine(); break;
        case 4: _t->ReadCoils((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->ReadDiscreteInputs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->ReadMultipleRegisters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->ReadInputRegisters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->WriteSingleCoil((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->WriteSingleRegister((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2]))); break;
        case 10: _t->WriteMultipleCoils((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<char>(*)>(_a[2]))); break;
        case 11: _t->WriteMultipleWholeRegisters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<short>(*)>(_a[2]))); break;
        case 12: _t->WriteMultipleRegisters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<char>(*)>(_a[2]))); break;
        case 13: _t->ParseData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 14: _t->PingSlave(); break;
        case 15: _t->WriteSettingsRegisters(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<char> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<short> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<char> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModbusMaster::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModbusMaster::FinishedRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModbusMaster::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModbusMaster::SetErrorBit)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ModbusMaster::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModbusMaster::ReceivedNewSettings)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ModbusMaster::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModbusMaster::ReceivedNewDataLine)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModbusMaster::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ModbusMaster.data,
    qt_meta_data_ModbusMaster,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ModbusMaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModbusMaster::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModbusMaster.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ModbusMaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void ModbusMaster::FinishedRequest(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ModbusMaster::SetErrorBit(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ModbusMaster::ReceivedNewSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ModbusMaster::ReceivedNewDataLine()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
