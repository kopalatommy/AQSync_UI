/****************************************************************************
** Meta object code from reading C++ file 'flowcalform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/flowcalform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flowcalform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlowCalForm_t {
    QByteArrayData data[21];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlowCalForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlowCalForm_t qt_meta_stringdata_FlowCalForm = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FlowCalForm"
QT_MOC_LITERAL(1, 12, 10), // "CloseForms"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "MoveLeft"
QT_MOC_LITERAL(4, 33, 9), // "MoveRight"
QT_MOC_LITERAL(5, 43, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(6, 66, 26), // "on_moveRightButton_clicked"
QT_MOC_LITERAL(7, 93, 25), // "on_moveLeftButton_clicked"
QT_MOC_LITERAL(8, 119, 20), // "on_slopeMask_clicked"
QT_MOC_LITERAL(9, 140, 8), // "NewSlope"
QT_MOC_LITERAL(10, 149, 3), // "val"
QT_MOC_LITERAL(11, 153, 19), // "on_zeroMask_clicked"
QT_MOC_LITERAL(12, 173, 7), // "NewZero"
QT_MOC_LITERAL(13, 181, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(14, 203, 20), // "OnMessageBoxFinished"
QT_MOC_LITERAL(15, 224, 4), // "code"
QT_MOC_LITERAL(16, 229, 23), // "on_cellFlowMask_clicked"
QT_MOC_LITERAL(17, 253, 11), // "NewCellFlow"
QT_MOC_LITERAL(18, 265, 4), // "valS"
QT_MOC_LITERAL(19, 270, 24), // "on_ozoneFlowMask_clicked"
QT_MOC_LITERAL(20, 295, 12) // "NewOzoneFlow"

    },
    "FlowCalForm\0CloseForms\0\0MoveLeft\0"
    "MoveRight\0on_closeButton_clicked\0"
    "on_moveRightButton_clicked\0"
    "on_moveLeftButton_clicked\0"
    "on_slopeMask_clicked\0NewSlope\0val\0"
    "on_zeroMask_clicked\0NewZero\0"
    "on_saveButton_clicked\0OnMessageBoxFinished\0"
    "code\0on_cellFlowMask_clicked\0NewCellFlow\0"
    "valS\0on_ozoneFlowMask_clicked\0"
    "NewOzoneFlow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlowCalForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    1,  101,    2, 0x08 /* Private */,
      11,    0,  104,    2, 0x08 /* Private */,
      12,    1,  105,    2, 0x08 /* Private */,
      13,    0,  108,    2, 0x08 /* Private */,
      14,    1,  109,    2, 0x08 /* Private */,
      16,    0,  112,    2, 0x08 /* Private */,
      17,    1,  113,    2, 0x08 /* Private */,
      19,    0,  116,    2, 0x08 /* Private */,
      20,    1,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   10,

       0        // eod
};

void FlowCalForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlowCalForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseForms(); break;
        case 1: _t->MoveLeft(); break;
        case 2: _t->MoveRight(); break;
        case 3: _t->on_closeButton_clicked(); break;
        case 4: _t->on_moveRightButton_clicked(); break;
        case 5: _t->on_moveLeftButton_clicked(); break;
        case 6: _t->on_slopeMask_clicked(); break;
        case 7: _t->NewSlope((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->on_zeroMask_clicked(); break;
        case 9: _t->NewZero((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->on_saveButton_clicked(); break;
        case 11: _t->OnMessageBoxFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_cellFlowMask_clicked(); break;
        case 13: _t->NewCellFlow((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->on_ozoneFlowMask_clicked(); break;
        case 15: _t->NewOzoneFlow((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlowCalForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowCalForm::CloseForms)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlowCalForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowCalForm::MoveLeft)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FlowCalForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowCalForm::MoveRight)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FlowCalForm::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_FlowCalForm.data,
    qt_meta_data_FlowCalForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlowCalForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlowCalForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlowCalForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FlowCalForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void FlowCalForm::CloseForms()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FlowCalForm::MoveLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FlowCalForm::MoveRight()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
