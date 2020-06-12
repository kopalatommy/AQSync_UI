/****************************************************************************
** Meta object code from reading C++ file 'flowcalibration405form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/405Settings/flowcalibration405form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flowcalibration405form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FlowCalibration405Form_t {
    QByteArrayData data[13];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlowCalibration405Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlowCalibration405Form_t qt_meta_stringdata_FlowCalibration405Form = {
    {
QT_MOC_LITERAL(0, 0, 22), // "FlowCalibration405Form"
QT_MOC_LITERAL(1, 23, 16), // "NewCellFlowSlope"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 1), // "s"
QT_MOC_LITERAL(4, 43, 17), // "NewOzoneFlowSlope"
QT_MOC_LITERAL(5, 61, 13), // "UpdateLocalUI"
QT_MOC_LITERAL(6, 75, 14), // "GetNewSettings"
QT_MOC_LITERAL(7, 90, 19), // "on_Previous_clicked"
QT_MOC_LITERAL(8, 110, 15), // "on_Next_clicked"
QT_MOC_LITERAL(9, 126, 15), // "on_Home_clicked"
QT_MOC_LITERAL(10, 142, 24), // "on_CellSlopeMask_clicked"
QT_MOC_LITERAL(11, 167, 25), // "on_OzoneSlopeMask_clicked"
QT_MOC_LITERAL(12, 193, 15) // "on_Save_clicked"

    },
    "FlowCalibration405Form\0NewCellFlowSlope\0"
    "\0s\0NewOzoneFlowSlope\0UpdateLocalUI\0"
    "GetNewSettings\0on_Previous_clicked\0"
    "on_Next_clicked\0on_Home_clicked\0"
    "on_CellSlopeMask_clicked\0"
    "on_OzoneSlopeMask_clicked\0on_Save_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlowCalibration405Form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    1,   67,    2, 0x0a /* Public */,
       5,    0,   70,    2, 0x0a /* Public */,
       6,    0,   71,    2, 0x0a /* Public */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    0,   73,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
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

void FlowCalibration405Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FlowCalibration405Form *_t = static_cast<FlowCalibration405Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NewCellFlowSlope((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->NewOzoneFlowSlope((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->UpdateLocalUI(); break;
        case 3: _t->GetNewSettings(); break;
        case 4: _t->on_Previous_clicked(); break;
        case 5: _t->on_Next_clicked(); break;
        case 6: _t->on_Home_clicked(); break;
        case 7: _t->on_CellSlopeMask_clicked(); break;
        case 8: _t->on_OzoneSlopeMask_clicked(); break;
        case 9: _t->on_Save_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject FlowCalibration405Form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FlowCalibration405Form.data,
      qt_meta_data_FlowCalibration405Form,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FlowCalibration405Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlowCalibration405Form::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FlowCalibration405Form.stringdata0))
        return static_cast<void*>(const_cast< FlowCalibration405Form*>(this));
    return QWidget::qt_metacast(_clname);
}

int FlowCalibration405Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
