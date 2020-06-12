/****************************************************************************
** Meta object code from reading C++ file 'settings405.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/405Settings/settings405.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings405.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_settings405_t {
    QByteArrayData data[10];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_settings405_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_settings405_t qt_meta_stringdata_settings405 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "settings405"
QT_MOC_LITERAL(1, 12, 17), // "on_Mode_2_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 25), // "on_AdaptiveFilter_clicked"
QT_MOC_LITERAL(4, 57, 24), // "on_NOCalibration_clicked"
QT_MOC_LITERAL(5, 82, 26), // "on_FlowCalibration_clicked"
QT_MOC_LITERAL(6, 109, 25), // "on_NO2Calibration_clicked"
QT_MOC_LITERAL(7, 135, 22), // "on_Home_Button_clicked"
QT_MOC_LITERAL(8, 158, 19), // "on_NextLeft_clicked"
QT_MOC_LITERAL(9, 178, 20) // "on_NextRight_clicked"

    },
    "settings405\0on_Mode_2_clicked\0\0"
    "on_AdaptiveFilter_clicked\0"
    "on_NOCalibration_clicked\0"
    "on_FlowCalibration_clicked\0"
    "on_NO2Calibration_clicked\0"
    "on_Home_Button_clicked\0on_NextLeft_clicked\0"
    "on_NextRight_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_settings405[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void settings405::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<settings405 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Mode_2_clicked(); break;
        case 1: _t->on_AdaptiveFilter_clicked(); break;
        case 2: _t->on_NOCalibration_clicked(); break;
        case 3: _t->on_FlowCalibration_clicked(); break;
        case 4: _t->on_NO2Calibration_clicked(); break;
        case 5: _t->on_Home_Button_clicked(); break;
        case 6: _t->on_NextLeft_clicked(); break;
        case 7: _t->on_NextRight_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject settings405::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_settings405.data,
    qt_meta_data_settings405,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *settings405::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *settings405::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_settings405.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int settings405::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
