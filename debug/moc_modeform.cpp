/****************************************************************************
** Meta object code from reading C++ file 'modeform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../405nmUI/Setting/modeform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modeform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModeForm_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModeForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModeForm_t qt_meta_stringdata_ModeForm = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ModeForm"
QT_MOC_LITERAL(1, 9, 15), // "on_home_clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "on_Next_clicked"
QT_MOC_LITERAL(4, 42, 19), // "on_Previous_clicked"
QT_MOC_LITERAL(5, 62, 15), // "on_save_clicked"
QT_MOC_LITERAL(6, 78, 10), // "NewSetting"
QT_MOC_LITERAL(7, 89, 6) // "OnExit"

    },
    "ModeForm\0on_home_clicked\0\0on_Next_clicked\0"
    "on_Previous_clicked\0on_save_clicked\0"
    "NewSetting\0OnExit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModeForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,

       0        // eod
};

void ModeForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModeForm *_t = static_cast<ModeForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_home_clicked(); break;
        case 1: _t->on_Next_clicked(); break;
        case 2: _t->on_Previous_clicked(); break;
        case 3: _t->on_save_clicked(); break;
        case 4: _t->NewSetting(); break;
        case 5: { int _r = _t->OnExit();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ModeForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ModeForm.data,
      qt_meta_data_ModeForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModeForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModeForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModeForm.stringdata0))
        return static_cast<void*>(const_cast< ModeForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int ModeForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
