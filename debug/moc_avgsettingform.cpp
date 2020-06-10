/****************************************************************************
** Meta object code from reading C++ file 'avgsettingform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/avgsettingform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avgsettingform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AvgSettingForm_t {
    QByteArrayData data[11];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvgSettingForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvgSettingForm_t qt_meta_stringdata_AvgSettingForm = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AvgSettingForm"
QT_MOC_LITERAL(1, 15, 10), // "CloseForms"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "MoveLeft"
QT_MOC_LITERAL(4, 36, 9), // "MoveRight"
QT_MOC_LITERAL(5, 46, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(6, 69, 26), // "on_moveRightButton_clicked"
QT_MOC_LITERAL(7, 96, 25), // "on_moveLeftButton_clicked"
QT_MOC_LITERAL(8, 122, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(9, 144, 18), // "OnMessageBoxFinish"
QT_MOC_LITERAL(10, 163, 4) // "code"

    },
    "AvgSettingForm\0CloseForms\0\0MoveLeft\0"
    "MoveRight\0on_closeButton_clicked\0"
    "on_moveRightButton_clicked\0"
    "on_moveLeftButton_clicked\0"
    "on_saveButton_clicked\0OnMessageBoxFinish\0"
    "code"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvgSettingForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void AvgSettingForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AvgSettingForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseForms(); break;
        case 1: _t->MoveLeft(); break;
        case 2: _t->MoveRight(); break;
        case 3: _t->on_closeButton_clicked(); break;
        case 4: _t->on_moveRightButton_clicked(); break;
        case 5: _t->on_moveLeftButton_clicked(); break;
        case 6: _t->on_saveButton_clicked(); break;
        case 7: _t->OnMessageBoxFinish((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AvgSettingForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvgSettingForm::CloseForms)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AvgSettingForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvgSettingForm::MoveLeft)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AvgSettingForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvgSettingForm::MoveRight)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AvgSettingForm::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_AvgSettingForm.data,
    qt_meta_data_AvgSettingForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AvgSettingForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvgSettingForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvgSettingForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AvgSettingForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AvgSettingForm::CloseForms()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AvgSettingForm::MoveLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AvgSettingForm::MoveRight()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
