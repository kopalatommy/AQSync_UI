/****************************************************************************
** Meta object code from reading C++ file 'paramtersform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../paramtersform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paramtersform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ParamtersForm_t {
    QByteArrayData data[6];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParamtersForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParamtersForm_t qt_meta_stringdata_ParamtersForm = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ParamtersForm"
QT_MOC_LITERAL(1, 14, 8), // "UpdateUI"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(4, 47, 21), // "on_leftButton_clicked"
QT_MOC_LITERAL(5, 69, 22) // "on_rightButton_clicked"

    },
    "ParamtersForm\0UpdateUI\0\0on_closeButton_clicked\0"
    "on_leftButton_clicked\0on_rightButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParamtersForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ParamtersForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParamtersForm *_t = static_cast<ParamtersForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateUI(); break;
        case 1: _t->on_closeButton_clicked(); break;
        case 2: _t->on_leftButton_clicked(); break;
        case 3: _t->on_rightButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ParamtersForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ParamtersForm.data,
      qt_meta_data_ParamtersForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ParamtersForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParamtersForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ParamtersForm.stringdata0))
        return static_cast<void*>(const_cast< ParamtersForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int ParamtersForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
