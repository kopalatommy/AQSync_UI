/****************************************************************************
** Meta object code from reading C++ file 'pmcalform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/pmcalform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pmcalform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PMCalForm_t {
    QByteArrayData data[18];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PMCalForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PMCalForm_t qt_meta_stringdata_PMCalForm = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PMCalForm"
QT_MOC_LITERAL(1, 10, 10), // "CloseForms"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "MoveLeft"
QT_MOC_LITERAL(4, 31, 9), // "MoveRight"
QT_MOC_LITERAL(5, 41, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(6, 64, 26), // "on_moveRightButton_clicked"
QT_MOC_LITERAL(7, 91, 25), // "on_moveLeftButton_clicked"
QT_MOC_LITERAL(8, 117, 20), // "on_slopeMask_clicked"
QT_MOC_LITERAL(9, 138, 8), // "NewSlope"
QT_MOC_LITERAL(10, 147, 3), // "val"
QT_MOC_LITERAL(11, 151, 19), // "on_zeroMask_clicked"
QT_MOC_LITERAL(12, 171, 7), // "NewZero"
QT_MOC_LITERAL(13, 179, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(14, 201, 22), // "on_massExtMask_clicked"
QT_MOC_LITERAL(15, 224, 10), // "NewMassExt"
QT_MOC_LITERAL(16, 235, 20), // "OnMessageBoxFinished"
QT_MOC_LITERAL(17, 256, 4) // "code"

    },
    "PMCalForm\0CloseForms\0\0MoveLeft\0MoveRight\0"
    "on_closeButton_clicked\0"
    "on_moveRightButton_clicked\0"
    "on_moveLeftButton_clicked\0"
    "on_slopeMask_clicked\0NewSlope\0val\0"
    "on_zeroMask_clicked\0NewZero\0"
    "on_saveButton_clicked\0on_massExtMask_clicked\0"
    "NewMassExt\0OnMessageBoxFinished\0code"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PMCalForm[] = {

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
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    1,   91,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    1,   95,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    1,  100,    2, 0x08 /* Private */,
      16,    1,  103,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void PMCalForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PMCalForm *_t = static_cast<PMCalForm *>(_o);
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
        case 11: _t->on_massExtMask_clicked(); break;
        case 12: _t->NewMassExt((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 13: _t->OnMessageBoxFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PMCalForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PMCalForm::CloseForms)) {
                *result = 0;
            }
        }
        {
            typedef void (PMCalForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PMCalForm::MoveLeft)) {
                *result = 1;
            }
        }
        {
            typedef void (PMCalForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PMCalForm::MoveRight)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject PMCalForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PMCalForm.data,
      qt_meta_data_PMCalForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PMCalForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PMCalForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PMCalForm.stringdata0))
        return static_cast<void*>(const_cast< PMCalForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int PMCalForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void PMCalForm::CloseForms()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void PMCalForm::MoveLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void PMCalForm::MoveRight()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
