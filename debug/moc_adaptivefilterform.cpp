/****************************************************************************
** Meta object code from reading C++ file 'adaptivefilterform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../405nmUI/Setting/adaptivefilterform.h"
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
    QByteArrayData data[16];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdaptiveFilterForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdaptiveFilterForm_t qt_meta_stringdata_AdaptiveFilterForm = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AdaptiveFilterForm"
QT_MOC_LITERAL(1, 19, 15), // "on_home_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "on_Next_clicked"
QT_MOC_LITERAL(4, 52, 19), // "on_Previous_clicked"
QT_MOC_LITERAL(5, 72, 20), // "on_shortMask_clicked"
QT_MOC_LITERAL(6, 93, 8), // "NewShort"
QT_MOC_LITERAL(7, 102, 19), // "on_longMask_clicked"
QT_MOC_LITERAL(8, 122, 7), // "NewLong"
QT_MOC_LITERAL(9, 130, 22), // "on_percentMask_clicked"
QT_MOC_LITERAL(10, 153, 10), // "NewPercent"
QT_MOC_LITERAL(11, 164, 24), // "on_differnceMask_clicked"
QT_MOC_LITERAL(12, 189, 13), // "NewDifference"
QT_MOC_LITERAL(13, 203, 15), // "on_save_clicked"
QT_MOC_LITERAL(14, 219, 13), // "UpdateLocalUI"
QT_MOC_LITERAL(15, 233, 14) // "GetNewSettings"

    },
    "AdaptiveFilterForm\0on_home_clicked\0\0"
    "on_Next_clicked\0on_Previous_clicked\0"
    "on_shortMask_clicked\0NewShort\0"
    "on_longMask_clicked\0NewLong\0"
    "on_percentMask_clicked\0NewPercent\0"
    "on_differnceMask_clicked\0NewDifference\0"
    "on_save_clicked\0UpdateLocalUI\0"
    "GetNewSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdaptiveFilterForm[] = {

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
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       7,    0,   91,    2, 0x08 /* Private */,
       8,    1,   92,    2, 0x08 /* Private */,
       9,    0,   95,    2, 0x08 /* Private */,
      10,    1,   96,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    1,  100,    2, 0x08 /* Private */,
      13,    0,  103,    2, 0x08 /* Private */,
      14,    0,  104,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdaptiveFilterForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdaptiveFilterForm *_t = static_cast<AdaptiveFilterForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_home_clicked(); break;
        case 1: _t->on_Next_clicked(); break;
        case 2: _t->on_Previous_clicked(); break;
        case 3: _t->on_shortMask_clicked(); break;
        case 4: _t->NewShort((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 5: _t->on_longMask_clicked(); break;
        case 6: _t->NewLong((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 7: _t->on_percentMask_clicked(); break;
        case 8: _t->NewPercent((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 9: _t->on_differnceMask_clicked(); break;
        case 10: _t->NewDifference((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 11: _t->on_save_clicked(); break;
        case 12: _t->UpdateLocalUI(); break;
        case 13: _t->GetNewSettings(); break;
        default: ;
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
