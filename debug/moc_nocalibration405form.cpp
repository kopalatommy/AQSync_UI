/****************************************************************************
** Meta object code from reading C++ file 'nocalibration405form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/405Settings/nocalibration405form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nocalibration405form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NOCalibration405form_t {
    QByteArrayData data[14];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NOCalibration405form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NOCalibration405form_t qt_meta_stringdata_NOCalibration405form = {
    {
QT_MOC_LITERAL(0, 0, 20), // "NOCalibration405form"
QT_MOC_LITERAL(1, 21, 15), // "on_Left_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "on_Right_clicked"
QT_MOC_LITERAL(4, 55, 15), // "on_Home_clicked"
QT_MOC_LITERAL(5, 71, 13), // "UpdateLocalUI"
QT_MOC_LITERAL(6, 85, 20), // "on_slopeMask_clicked"
QT_MOC_LITERAL(7, 106, 8), // "NewSlope"
QT_MOC_LITERAL(8, 115, 19), // "on_zeroMask_clicked"
QT_MOC_LITERAL(9, 135, 7), // "NewZero"
QT_MOC_LITERAL(10, 143, 21), // "on_AnalogMask_clicked"
QT_MOC_LITERAL(11, 165, 9), // "NewAnalog"
QT_MOC_LITERAL(12, 175, 15), // "on_Save_clicked"
QT_MOC_LITERAL(13, 191, 14) // "GetNewSettings"

    },
    "NOCalibration405form\0on_Left_clicked\0"
    "\0on_Right_clicked\0on_Home_clicked\0"
    "UpdateLocalUI\0on_slopeMask_clicked\0"
    "NewSlope\0on_zeroMask_clicked\0NewZero\0"
    "on_AnalogMask_clicked\0NewAnalog\0"
    "on_Save_clicked\0GetNewSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NOCalibration405form[] = {

 // content:
       8,       // revision
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

void NOCalibration405form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NOCalibration405form *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject NOCalibration405form::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_NOCalibration405form.data,
    qt_meta_data_NOCalibration405form,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NOCalibration405form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NOCalibration405form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NOCalibration405form.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NOCalibration405form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
