/****************************************************************************
** Meta object code from reading C++ file 'bcpsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/BCPSettings/bcpsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bcpsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BCPSettings_t {
    QByteArrayData data[11];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BCPSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BCPSettings_t qt_meta_stringdata_BCPSettings = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BCPSettings"
QT_MOC_LITERAL(1, 12, 25), // "on_AdaptiveFilter_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "on_cali880_clicked"
QT_MOC_LITERAL(4, 58, 26), // "on_FlowCalibration_clicked"
QT_MOC_LITERAL(5, 85, 20), // "on_Auto_Zero_clicked"
QT_MOC_LITERAL(6, 106, 18), // "on_cali405_clicked"
QT_MOC_LITERAL(7, 125, 13), // "on_TP_clicked"
QT_MOC_LITERAL(8, 139, 19), // "on_NextLeft_clicked"
QT_MOC_LITERAL(9, 159, 22), // "on_Home_Button_clicked"
QT_MOC_LITERAL(10, 182, 20) // "on_NextRight_clicked"

    },
    "BCPSettings\0on_AdaptiveFilter_clicked\0"
    "\0on_cali880_clicked\0on_FlowCalibration_clicked\0"
    "on_Auto_Zero_clicked\0on_cali405_clicked\0"
    "on_TP_clicked\0on_NextLeft_clicked\0"
    "on_Home_Button_clicked\0on_NextRight_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BCPSettings[] = {

 // content:
       7,       // revision
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
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
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

void BCPSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BCPSettings *_t = static_cast<BCPSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_AdaptiveFilter_clicked(); break;
        case 1: _t->on_cali880_clicked(); break;
        case 2: _t->on_FlowCalibration_clicked(); break;
        case 3: _t->on_Auto_Zero_clicked(); break;
        case 4: _t->on_cali405_clicked(); break;
        case 5: _t->on_TP_clicked(); break;
        case 6: _t->on_NextLeft_clicked(); break;
        case 7: _t->on_Home_Button_clicked(); break;
        case 8: _t->on_NextRight_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BCPSettings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BCPSettings.data,
      qt_meta_data_BCPSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BCPSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BCPSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BCPSettings.stringdata0))
        return static_cast<void*>(const_cast< BCPSettings*>(this));
    return QDialog::qt_metacast(_clname);
}

int BCPSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
