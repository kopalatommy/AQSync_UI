/****************************************************************************
** Meta object code from reading C++ file 'modbusform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Modbus/modbusform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modbusform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModbusForm_t {
    QByteArrayData data[25];
    char stringdata0[427];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModbusForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModbusForm_t qt_meta_stringdata_ModbusForm = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ModbusForm"
QT_MOC_LITERAL(1, 11, 8), // "MoveLeft"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "MoveRight"
QT_MOC_LITERAL(4, 31, 10), // "CloseForms"
QT_MOC_LITERAL(5, 42, 21), // "on_testButton_clicked"
QT_MOC_LITERAL(6, 64, 11), // "OnGetIPExit"
QT_MOC_LITERAL(7, 76, 8), // "exitCode"
QT_MOC_LITERAL(8, 85, 21), // "on_ThisIPMask_clicked"
QT_MOC_LITERAL(9, 107, 23), // "on_ThisPortMask_clicked"
QT_MOC_LITERAL(10, 131, 13), // "NewDevicePort"
QT_MOC_LITERAL(11, 145, 3), // "val"
QT_MOC_LITERAL(12, 149, 21), // "on_ThisIDMask_clicked"
QT_MOC_LITERAL(13, 171, 11), // "NewDeviceID"
QT_MOC_LITERAL(14, 183, 23), // "on_RemoteIPMask_clicked"
QT_MOC_LITERAL(15, 207, 11), // "NewTargetIP"
QT_MOC_LITERAL(16, 219, 25), // "on_RemotePortMask_clicked"
QT_MOC_LITERAL(17, 245, 13), // "NewTargetPort"
QT_MOC_LITERAL(18, 259, 23), // "on_RemoteIDMask_clicked"
QT_MOC_LITERAL(19, 283, 11), // "NewTargetID"
QT_MOC_LITERAL(20, 295, 27), // "on_UpdateInfoButton_clicked"
QT_MOC_LITERAL(21, 323, 27), // "on_connectionButton_clicked"
QT_MOC_LITERAL(22, 351, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(23, 374, 26), // "on_moveRightButton_clicked"
QT_MOC_LITERAL(24, 401, 25) // "on_moveLeftButton_clicked"

    },
    "ModbusForm\0MoveLeft\0\0MoveRight\0"
    "CloseForms\0on_testButton_clicked\0"
    "OnGetIPExit\0exitCode\0on_ThisIPMask_clicked\0"
    "on_ThisPortMask_clicked\0NewDevicePort\0"
    "val\0on_ThisIDMask_clicked\0NewDeviceID\0"
    "on_RemoteIPMask_clicked\0NewTargetIP\0"
    "on_RemotePortMask_clicked\0NewTargetPort\0"
    "on_RemoteIDMask_clicked\0NewTargetID\0"
    "on_UpdateInfoButton_clicked\0"
    "on_connectionButton_clicked\0"
    "on_closeButton_clicked\0"
    "on_moveRightButton_clicked\0"
    "on_moveLeftButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModbusForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,
       3,    0,  120,    2, 0x06 /* Public */,
       4,    0,  121,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  122,    2, 0x08 /* Private */,
       6,    1,  123,    2, 0x08 /* Private */,
       8,    0,  126,    2, 0x08 /* Private */,
       9,    0,  127,    2, 0x08 /* Private */,
      10,    1,  128,    2, 0x08 /* Private */,
      12,    0,  131,    2, 0x08 /* Private */,
      13,    1,  132,    2, 0x08 /* Private */,
      14,    0,  135,    2, 0x08 /* Private */,
      15,    1,  136,    2, 0x08 /* Private */,
      16,    0,  139,    2, 0x08 /* Private */,
      17,    1,  140,    2, 0x08 /* Private */,
      18,    0,  143,    2, 0x08 /* Private */,
      19,    1,  144,    2, 0x08 /* Private */,
      20,    0,  147,    2, 0x08 /* Private */,
      21,    0,  148,    2, 0x08 /* Private */,
      22,    0,  149,    2, 0x08 /* Private */,
      23,    0,  150,    2, 0x08 /* Private */,
      24,    0,  151,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModbusForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModbusForm *_t = static_cast<ModbusForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MoveLeft(); break;
        case 1: _t->MoveRight(); break;
        case 2: _t->CloseForms(); break;
        case 3: _t->on_testButton_clicked(); break;
        case 4: _t->OnGetIPExit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_ThisIPMask_clicked(); break;
        case 6: _t->on_ThisPortMask_clicked(); break;
        case 7: _t->NewDevicePort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_ThisIDMask_clicked(); break;
        case 9: _t->NewDeviceID((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_RemoteIPMask_clicked(); break;
        case 11: _t->NewTargetIP((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->on_RemotePortMask_clicked(); break;
        case 13: _t->NewTargetPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_RemoteIDMask_clicked(); break;
        case 15: _t->NewTargetID((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_UpdateInfoButton_clicked(); break;
        case 17: _t->on_connectionButton_clicked(); break;
        case 18: _t->on_closeButton_clicked(); break;
        case 19: _t->on_moveRightButton_clicked(); break;
        case 20: _t->on_moveLeftButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModbusForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModbusForm::MoveLeft)) {
                *result = 0;
            }
        }
        {
            typedef void (ModbusForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModbusForm::MoveRight)) {
                *result = 1;
            }
        }
        {
            typedef void (ModbusForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModbusForm::CloseForms)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ModbusForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ModbusForm.data,
      qt_meta_data_ModbusForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModbusForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModbusForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModbusForm.stringdata0))
        return static_cast<void*>(const_cast< ModbusForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int ModbusForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void ModbusForm::MoveLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ModbusForm::MoveRight()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ModbusForm::CloseForms()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
