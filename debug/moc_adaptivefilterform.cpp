/****************************************************************************
** Meta object code from reading C++ file 'adaptivefilterform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/adaptivefilterform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adaptivefilterform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdaptiveFilterForm_t {
    QByteArrayData data[20];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdaptiveFilterForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdaptiveFilterForm_t qt_meta_stringdata_AdaptiveFilterForm = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AdaptiveFilterForm"
QT_MOC_LITERAL(1, 19, 10), // "CloseForms"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "MoveRight"
QT_MOC_LITERAL(4, 41, 8), // "MoveLeft"
QT_MOC_LITERAL(5, 50, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(6, 73, 26), // "on_moveRightButton_clicked"
QT_MOC_LITERAL(7, 100, 25), // "on_moveLeftButton_clicked"
QT_MOC_LITERAL(8, 126, 20), // "on_shortMask_clicked"
QT_MOC_LITERAL(9, 147, 8), // "NewShort"
QT_MOC_LITERAL(10, 156, 3), // "val"
QT_MOC_LITERAL(11, 160, 19), // "on_longMask_clicked"
QT_MOC_LITERAL(12, 180, 7), // "NewLong"
QT_MOC_LITERAL(13, 188, 22), // "on_percentMask_clicked"
QT_MOC_LITERAL(14, 211, 10), // "NewPercent"
QT_MOC_LITERAL(15, 222, 25), // "on_differenceMask_clicked"
QT_MOC_LITERAL(16, 248, 7), // "NewDiff"
QT_MOC_LITERAL(17, 256, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(18, 278, 16), // "OnMessageBoxExit"
QT_MOC_LITERAL(19, 295, 4) // "code"

    },
    "AdaptiveFilterForm\0CloseForms\0\0MoveRight\0"
    "MoveLeft\0on_closeButton_clicked\0"
    "on_moveRightButton_clicked\0"
    "on_moveLeftButton_clicked\0"
    "on_shortMask_clicked\0NewShort\0val\0"
    "on_longMask_clicked\0NewLong\0"
    "on_percentMask_clicked\0NewPercent\0"
    "on_differenceMask_clicked\0NewDiff\0"
    "on_saveButton_clicked\0OnMessageBoxExit\0"
    "code"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdaptiveFilterForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    1,  101,    2, 0x08 /* Private */,
      11,    0,  104,    2, 0x08 /* Private */,
      12,    1,  105,    2, 0x08 /* Private */,
      13,    0,  108,    2, 0x08 /* Private */,
      14,    1,  109,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    1,  113,    2, 0x08 /* Private */,
      17,    0,  116,    2, 0x08 /* Private */,
      18,    1,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void AdaptiveFilterForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdaptiveFilterForm *_t = static_cast<AdaptiveFilterForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseForms(); break;
        case 1: _t->MoveRight(); break;
        case 2: _t->MoveLeft(); break;
        case 3: _t->on_closeButton_clicked(); break;
        case 4: _t->on_moveRightButton_clicked(); break;
        case 5: _t->on_moveLeftButton_clicked(); break;
        case 6: _t->on_shortMask_clicked(); break;
        case 7: _t->NewShort((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 8: _t->on_longMask_clicked(); break;
        case 9: _t->NewLong((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 10: _t->on_percentMask_clicked(); break;
        case 11: _t->NewPercent((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 12: _t->on_differenceMask_clicked(); break;
        case 13: _t->NewDiff((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 14: _t->on_saveButton_clicked(); break;
        case 15: _t->OnMessageBoxExit((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AdaptiveFilterForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdaptiveFilterForm::CloseForms)) {
                *result = 0;
            }
        }
        {
            typedef void (AdaptiveFilterForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdaptiveFilterForm::MoveRight)) {
                *result = 1;
            }
        }
        {
            typedef void (AdaptiveFilterForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdaptiveFilterForm::MoveLeft)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject AdaptiveFilterForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdaptiveFilterForm.data,
      qt_meta_data_AdaptiveFilterForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdaptiveFilterForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdaptiveFilterForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdaptiveFilterForm.stringdata0))
        return static_cast<void*>(const_cast< AdaptiveFilterForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdaptiveFilterForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void AdaptiveFilterForm::CloseForms()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AdaptiveFilterForm::MoveRight()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void AdaptiveFilterForm::MoveLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
