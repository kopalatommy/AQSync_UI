/****************************************************************************
** Meta object code from reading C++ file 'calibration880nm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/BCPSettings/calibration880nm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibration880nm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Calibration880nm_t {
    QByteArrayData data[18];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calibration880nm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calibration880nm_t qt_meta_stringdata_Calibration880nm = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Calibration880nm"
QT_MOC_LITERAL(1, 17, 15), // "on_Left_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "on_Right_clicked"
QT_MOC_LITERAL(4, 51, 15), // "on_Home_clicked"
QT_MOC_LITERAL(5, 67, 15), // "on_Save_clicked"
QT_MOC_LITERAL(6, 83, 20), // "on_slopeMask_clicked"
QT_MOC_LITERAL(7, 104, 19), // "on_zeroMask_clicked"
QT_MOC_LITERAL(8, 124, 22), // "on_MassExtMask_clicked"
QT_MOC_LITERAL(9, 147, 21), // "on_AnalogMask_clicked"
QT_MOC_LITERAL(10, 169, 8), // "newSlope"
QT_MOC_LITERAL(11, 178, 3), // "val"
QT_MOC_LITERAL(12, 182, 7), // "newZero"
QT_MOC_LITERAL(13, 190, 10), // "NewMassExt"
QT_MOC_LITERAL(14, 201, 9), // "newAnalog"
QT_MOC_LITERAL(15, 211, 13), // "updateLocalUI"
QT_MOC_LITERAL(16, 225, 14), // "GetNewSettings"
QT_MOC_LITERAL(17, 240, 22) // "on_massExtMask_clicked"

    },
    "Calibration880nm\0on_Left_clicked\0\0"
    "on_Right_clicked\0on_Home_clicked\0"
    "on_Save_clicked\0on_slopeMask_clicked\0"
    "on_zeroMask_clicked\0on_MassExtMask_clicked\0"
    "on_AnalogMask_clicked\0newSlope\0val\0"
    "newZero\0NewMassExt\0newAnalog\0updateLocalUI\0"
    "GetNewSettings\0on_massExtMask_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calibration880nm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    1,   97,    2, 0x08 /* Private */,
      12,    1,  100,    2, 0x08 /* Private */,
      13,    1,  103,    2, 0x08 /* Private */,
      14,    1,  106,    2, 0x08 /* Private */,
      15,    0,  109,    2, 0x08 /* Private */,
      16,    0,  110,    2, 0x08 /* Private */,
      17,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Calibration880nm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Calibration880nm *_t = static_cast<Calibration880nm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Left_clicked(); break;
        case 1: _t->on_Right_clicked(); break;
        case 2: _t->on_Home_clicked(); break;
        case 3: _t->on_Save_clicked(); break;
        case 4: _t->on_slopeMask_clicked(); break;
        case 5: _t->on_zeroMask_clicked(); break;
        case 6: _t->on_MassExtMask_clicked(); break;
        case 7: _t->on_AnalogMask_clicked(); break;
        case 8: _t->newSlope((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->newZero((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->NewMassExt((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->newAnalog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->updateLocalUI(); break;
        case 13: _t->GetNewSettings(); break;
        case 14: _t->on_MassExtMask_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Calibration880nm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Calibration880nm.data,
      qt_meta_data_Calibration880nm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Calibration880nm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calibration880nm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Calibration880nm.stringdata0))
        return static_cast<void*>(const_cast< Calibration880nm*>(this));
    return QDialog::qt_metacast(_clname);
}

int Calibration880nm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
