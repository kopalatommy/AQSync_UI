/****************************************************************************
** Meta object code from reading C++ file 'autozerobcp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/BCPSettings/autozerobcp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autozerobcp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoZeroBCP_t {
    QByteArrayData data[12];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoZeroBCP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoZeroBCP_t qt_meta_stringdata_AutoZeroBCP = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AutoZeroBCP"
QT_MOC_LITERAL(1, 12, 15), // "on_Left_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "on_Right_clicked"
QT_MOC_LITERAL(4, 46, 15), // "on_Home_clicked"
QT_MOC_LITERAL(5, 62, 15), // "on_Save_clicked"
QT_MOC_LITERAL(6, 78, 31), // "on_zeroingFrequenctMask_clicked"
QT_MOC_LITERAL(7, 110, 25), // "on_zeroPeriodMask_clicked"
QT_MOC_LITERAL(8, 136, 12), // "newFrequency"
QT_MOC_LITERAL(9, 149, 3), // "val"
QT_MOC_LITERAL(10, 153, 9), // "newPeriod"
QT_MOC_LITERAL(11, 163, 14) // "GetNewSettings"

    },
    "AutoZeroBCP\0on_Left_clicked\0\0"
    "on_Right_clicked\0on_Home_clicked\0"
    "on_Save_clicked\0on_zeroingFrequenctMask_clicked\0"
    "on_zeroPeriodMask_clicked\0newFrequency\0"
    "val\0newPeriod\0GetNewSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoZeroBCP[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::UChar,    9,
    QMetaType::Void,

       0        // eod
};

void AutoZeroBCP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutoZeroBCP *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Left_clicked(); break;
        case 1: _t->on_Right_clicked(); break;
        case 2: _t->on_Home_clicked(); break;
        case 3: _t->on_Save_clicked(); break;
        case 4: _t->on_zeroingFrequenctMask_clicked(); break;
        case 5: _t->on_zeroPeriodMask_clicked(); break;
        case 6: _t->newFrequency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->newPeriod((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 8: _t->GetNewSettings(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AutoZeroBCP::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_AutoZeroBCP.data,
    qt_meta_data_AutoZeroBCP,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoZeroBCP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoZeroBCP::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoZeroBCP.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AutoZeroBCP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
