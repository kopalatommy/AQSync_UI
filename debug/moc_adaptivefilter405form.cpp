/****************************************************************************
** Meta object code from reading C++ file 'adaptivefilter405form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/405Settings/adaptivefilter405form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adaptivefilter405form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdaptiveFilter405Form_t {
    QByteArrayData data[17];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdaptiveFilter405Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdaptiveFilter405Form_t qt_meta_stringdata_AdaptiveFilter405Form = {
    {
QT_MOC_LITERAL(0, 0, 21), // "AdaptiveFilter405Form"
QT_MOC_LITERAL(1, 22, 20), // "on_shortMask_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8), // "NewShort"
QT_MOC_LITERAL(4, 53, 3), // "val"
QT_MOC_LITERAL(5, 57, 19), // "on_longMask_clicked"
QT_MOC_LITERAL(6, 77, 7), // "NewLong"
QT_MOC_LITERAL(7, 85, 22), // "on_percentMask_clicked"
QT_MOC_LITERAL(8, 108, 10), // "NewPercent"
QT_MOC_LITERAL(9, 119, 25), // "on_differenceMask_clicked"
QT_MOC_LITERAL(10, 145, 13), // "NewDifference"
QT_MOC_LITERAL(11, 159, 13), // "UpdateLocalUI"
QT_MOC_LITERAL(12, 173, 14), // "GetNewSettings"
QT_MOC_LITERAL(13, 188, 15), // "on_home_clicked"
QT_MOC_LITERAL(14, 204, 15), // "on_Next_clicked"
QT_MOC_LITERAL(15, 220, 19), // "on_Previous_clicked"
QT_MOC_LITERAL(16, 240, 15) // "on_Save_clicked"

    },
    "AdaptiveFilter405Form\0on_shortMask_clicked\0"
    "\0NewShort\0val\0on_longMask_clicked\0"
    "NewLong\0on_percentMask_clicked\0"
    "NewPercent\0on_differenceMask_clicked\0"
    "NewDifference\0UpdateLocalUI\0GetNewSettings\0"
    "on_home_clicked\0on_Next_clicked\0"
    "on_Previous_clicked\0on_Save_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdaptiveFilter405Form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    1,   85,    2, 0x08 /* Private */,
       5,    0,   88,    2, 0x08 /* Private */,
       6,    1,   89,    2, 0x08 /* Private */,
       7,    0,   92,    2, 0x08 /* Private */,
       8,    1,   93,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    1,   97,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdaptiveFilter405Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdaptiveFilter405Form *_t = static_cast<AdaptiveFilter405Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_shortMask_clicked(); break;
        case 1: _t->NewShort((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 2: _t->on_longMask_clicked(); break;
        case 3: _t->NewLong((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 4: _t->on_percentMask_clicked(); break;
        case 5: _t->NewPercent((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 6: _t->on_differenceMask_clicked(); break;
        case 7: _t->NewDifference((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 8: _t->UpdateLocalUI(); break;
        case 9: _t->GetNewSettings(); break;
        case 10: _t->on_home_clicked(); break;
        case 11: _t->on_Next_clicked(); break;
        case 12: _t->on_Previous_clicked(); break;
        case 13: _t->on_Save_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject AdaptiveFilter405Form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdaptiveFilter405Form.data,
      qt_meta_data_AdaptiveFilter405Form,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdaptiveFilter405Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdaptiveFilter405Form::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdaptiveFilter405Form.stringdata0))
        return static_cast<void*>(const_cast< AdaptiveFilter405Form*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdaptiveFilter405Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
