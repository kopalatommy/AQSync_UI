/****************************************************************************
** Meta object code from reading C++ file 'no2calform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/no2calform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'no2calform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NO2CalForm_t {
    QByteArrayData data[16];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NO2CalForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NO2CalForm_t qt_meta_stringdata_NO2CalForm = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NO2CalForm"
QT_MOC_LITERAL(1, 11, 10), // "CloseForms"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "MoveLeft"
QT_MOC_LITERAL(4, 32, 9), // "MoveRight"
QT_MOC_LITERAL(5, 42, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(6, 65, 26), // "on_moveRightButton_clicked"
QT_MOC_LITERAL(7, 92, 25), // "on_moveLeftButton_clicked"
QT_MOC_LITERAL(8, 118, 20), // "on_slopeMask_clicked"
QT_MOC_LITERAL(9, 139, 8), // "NewSlope"
QT_MOC_LITERAL(10, 148, 3), // "val"
QT_MOC_LITERAL(11, 152, 19), // "on_zeroMask_clicked"
QT_MOC_LITERAL(12, 172, 7), // "NewZero"
QT_MOC_LITERAL(13, 180, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(14, 202, 18), // "OnMessageBoxExited"
QT_MOC_LITERAL(15, 221, 4) // "code"

    },
    "NO2CalForm\0CloseForms\0\0MoveLeft\0"
    "MoveRight\0on_closeButton_clicked\0"
    "on_moveRightButton_clicked\0"
    "on_moveLeftButton_clicked\0"
    "on_slopeMask_clicked\0NewSlope\0val\0"
    "on_zeroMask_clicked\0NewZero\0"
    "on_saveButton_clicked\0OnMessageBoxExited\0"
    "code"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NO2CalForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    1,   85,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    1,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void NO2CalForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NO2CalForm *_t = static_cast<NO2CalForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseForms(); break;
        case 1: _t->MoveLeft(); break;
        case 2: _t->MoveRight(); break;
        case 3: _t->on_closeButton_clicked(); break;
        case 4: _t->on_moveRightButton_clicked(); break;
        case 5: _t->on_moveLeftButton_clicked(); break;
        case 6: _t->on_slopeMask_clicked(); break;
        case 7: _t->NewSlope((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->on_zeroMask_clicked(); break;
        case 9: _t->NewZero((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->on_saveButton_clicked(); break;
        case 11: _t->OnMessageBoxExited((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NO2CalForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NO2CalForm::CloseForms)) {
                *result = 0;
            }
        }
        {
            typedef void (NO2CalForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NO2CalForm::MoveLeft)) {
                *result = 1;
            }
        }
        {
            typedef void (NO2CalForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NO2CalForm::MoveRight)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject NO2CalForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NO2CalForm.data,
      qt_meta_data_NO2CalForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NO2CalForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NO2CalForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NO2CalForm.stringdata0))
        return static_cast<void*>(const_cast< NO2CalForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int NO2CalForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void NO2CalForm::CloseForms()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void NO2CalForm::MoveLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void NO2CalForm::MoveRight()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
