/****************************************************************************
** Meta object code from reading C++ file 'datafilemenuform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DataFiles/datafilemenuform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datafilemenuform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataFileMenuForm_t {
    QByteArrayData data[9];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataFileMenuForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataFileMenuForm_t qt_meta_stringdata_DataFileMenuForm = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DataFileMenuForm"
QT_MOC_LITERAL(1, 17, 13), // "SelectCurrent"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "SelectAll"
QT_MOC_LITERAL(4, 42, 6), // "Browse"
QT_MOC_LITERAL(5, 49, 24), // "on_SelectCurrent_clicked"
QT_MOC_LITERAL(6, 74, 20), // "on_SelectAll_clicked"
QT_MOC_LITERAL(7, 95, 17), // "on_Browse_clicked"
QT_MOC_LITERAL(8, 113, 17) // "on_Cancel_clicked"

    },
    "DataFileMenuForm\0SelectCurrent\0\0"
    "SelectAll\0Browse\0on_SelectCurrent_clicked\0"
    "on_SelectAll_clicked\0on_Browse_clicked\0"
    "on_Cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataFileMenuForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DataFileMenuForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataFileMenuForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectCurrent(); break;
        case 1: _t->SelectAll(); break;
        case 2: _t->Browse(); break;
        case 3: _t->on_SelectCurrent_clicked(); break;
        case 4: _t->on_SelectAll_clicked(); break;
        case 5: _t->on_Browse_clicked(); break;
        case 6: _t->on_Cancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataFileMenuForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataFileMenuForm::SelectCurrent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataFileMenuForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataFileMenuForm::SelectAll)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataFileMenuForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataFileMenuForm::Browse)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DataFileMenuForm::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_DataFileMenuForm.data,
    qt_meta_data_DataFileMenuForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataFileMenuForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataFileMenuForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataFileMenuForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DataFileMenuForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DataFileMenuForm::SelectCurrent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DataFileMenuForm::SelectAll()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DataFileMenuForm::Browse()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
