/****************************************************************************
** Meta object code from reading C++ file 'no2calibration405form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/405Settings/no2calibration405form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'no2calibration405form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NO2Calibration405Form_t {
    QByteArrayData data[14];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NO2Calibration405Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NO2Calibration405Form_t qt_meta_stringdata_NO2Calibration405Form = {
    {
QT_MOC_LITERAL(0, 0, 21), // "NO2Calibration405Form"
QT_MOC_LITERAL(1, 22, 15), // "on_Left_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 16), // "on_Right_clicked"
QT_MOC_LITERAL(4, 56, 15), // "on_Home_clicked"
QT_MOC_LITERAL(5, 72, 13), // "UpdateLocalUI"
QT_MOC_LITERAL(6, 86, 20), // "on_slopeMask_clicked"
QT_MOC_LITERAL(7, 107, 8), // "NewSlope"
QT_MOC_LITERAL(8, 116, 19), // "on_zeroMask_clicked"
QT_MOC_LITERAL(9, 136, 7), // "NewZero"
QT_MOC_LITERAL(10, 144, 21), // "on_AnalogMask_clicked"
QT_MOC_LITERAL(11, 166, 9), // "NewAnalog"
QT_MOC_LITERAL(12, 176, 15), // "on_Save_clicked"
QT_MOC_LITERAL(13, 192, 14) // "GetNewSettings"

    },
    "NO2Calibration405Form\0on_Left_clicked\0"
    "\0on_Right_clicked\0on_Home_clicked\0"
    "UpdateLocalUI\0on_slopeMask_clicked\0"
    "NewSlope\0on_zeroMask_clicked\0NewZero\0"
    "on_AnalogMask_clicked\0NewAnalog\0"
    "on_Save_clicked\0GetNewSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NO2Calibration405Form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    1,   83,    2, 0x08 /* Private */,
      10,    0,   86,    2, 0x08 /* Private */,
      11,    1,   87,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NO2Calibration405Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NO2Calibration405Form *_t = static_cast<NO2Calibration405Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Left_clicked(); break;
        case 1: _t->on_Right_clicked(); break;
        case 2: _t->on_Home_clicked(); break;
        case 3: _t->UpdateLocalUI(); break;
        case 4: _t->on_slopeMask_clicked(); break;
        case 5: _t->NewSlope((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->on_zeroMask_clicked(); break;
        case 7: _t->NewZero((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->on_AnalogMask_clicked(); break;
        case 9: _t->NewAnalog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_Save_clicked(); break;
        case 11: _t->GetNewSettings(); break;
        default: ;
        }
    }
}

const QMetaObject NO2Calibration405Form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NO2Calibration405Form.data,
      qt_meta_data_NO2Calibration405Form,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NO2Calibration405Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NO2Calibration405Form::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NO2Calibration405Form.stringdata0))
        return static_cast<void*>(const_cast< NO2Calibration405Form*>(this));
    return QWidget::qt_metacast(_clname);
}

int NO2Calibration405Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
