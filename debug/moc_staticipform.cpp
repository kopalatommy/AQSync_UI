/****************************************************************************
** Meta object code from reading C++ file 'staticipform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Modbus/staticipform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'staticipform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StaticIPForm_t {
    QByteArrayData data[20];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StaticIPForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StaticIPForm_t qt_meta_stringdata_StaticIPForm = {
    {
QT_MOC_LITERAL(0, 0, 12), // "StaticIPForm"
QT_MOC_LITERAL(1, 13, 10), // "CloseForms"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "MoveLeft"
QT_MOC_LITERAL(4, 34, 9), // "MoveRight"
QT_MOC_LITERAL(5, 44, 17), // "on_IPMask_clicked"
QT_MOC_LITERAL(6, 62, 5), // "NewIP"
QT_MOC_LITERAL(7, 68, 5), // "newIP"
QT_MOC_LITERAL(8, 74, 22), // "on_GatewayMask_clicked"
QT_MOC_LITERAL(9, 97, 10), // "NewGateway"
QT_MOC_LITERAL(10, 108, 10), // "newGateway"
QT_MOC_LITERAL(11, 119, 21), // "on_SubnetMask_clicked"
QT_MOC_LITERAL(12, 141, 9), // "NewSubnet"
QT_MOC_LITERAL(13, 151, 9), // "newSubnet"
QT_MOC_LITERAL(14, 161, 22), // "on_applyButton_clicked"
QT_MOC_LITERAL(15, 184, 17), // "OnProcessFinished"
QT_MOC_LITERAL(16, 202, 8), // "exitCode"
QT_MOC_LITERAL(17, 211, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(18, 234, 26), // "on_moveRightButton_clicked"
QT_MOC_LITERAL(19, 261, 25) // "on_moveLeftButton_clicked"

    },
    "StaticIPForm\0CloseForms\0\0MoveLeft\0"
    "MoveRight\0on_IPMask_clicked\0NewIP\0"
    "newIP\0on_GatewayMask_clicked\0NewGateway\0"
    "newGateway\0on_SubnetMask_clicked\0"
    "NewSubnet\0newSubnet\0on_applyButton_clicked\0"
    "OnProcessFinished\0exitCode\0"
    "on_closeButton_clicked\0"
    "on_moveRightButton_clicked\0"
    "on_moveLeftButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StaticIPForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    1,   92,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    1,   96,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    1,  100,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x08 /* Private */,
      19,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StaticIPForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StaticIPForm *_t = static_cast<StaticIPForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseForms(); break;
        case 1: _t->MoveLeft(); break;
        case 2: _t->MoveRight(); break;
        case 3: _t->on_IPMask_clicked(); break;
        case 4: _t->NewIP((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_GatewayMask_clicked(); break;
        case 6: _t->NewGateway((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->on_SubnetMask_clicked(); break;
        case 8: _t->NewSubnet((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->on_applyButton_clicked(); break;
        case 10: _t->OnProcessFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_closeButton_clicked(); break;
        case 12: _t->on_moveRightButton_clicked(); break;
        case 13: _t->on_moveLeftButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StaticIPForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StaticIPForm::CloseForms)) {
                *result = 0;
            }
        }
        {
            typedef void (StaticIPForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StaticIPForm::MoveLeft)) {
                *result = 1;
            }
        }
        {
            typedef void (StaticIPForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StaticIPForm::MoveRight)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject StaticIPForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StaticIPForm.data,
      qt_meta_data_StaticIPForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StaticIPForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StaticIPForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StaticIPForm.stringdata0))
        return static_cast<void*>(const_cast< StaticIPForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int StaticIPForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void StaticIPForm::CloseForms()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void StaticIPForm::MoveLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void StaticIPForm::MoveRight()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
