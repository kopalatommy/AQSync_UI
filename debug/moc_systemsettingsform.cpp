/****************************************************************************
** Meta object code from reading C++ file 'systemsettingsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/systemsettingsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemsettingsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SystemSettingsForm_t {
    QByteArrayData data[16];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemSettingsForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemSettingsForm_t qt_meta_stringdata_SystemSettingsForm = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SystemSettingsForm"
QT_MOC_LITERAL(1, 19, 10), // "CloseForms"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "MoveLeft"
QT_MOC_LITERAL(4, 40, 9), // "MoveRight"
QT_MOC_LITERAL(5, 50, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(6, 73, 26), // "on_moveRightButton_clicked"
QT_MOC_LITERAL(7, 100, 25), // "on_moveLeftButton_clicked"
QT_MOC_LITERAL(8, 126, 22), // "on_applyButton_clicked"
QT_MOC_LITERAL(9, 149, 20), // "on_cleanLogs_clicked"
QT_MOC_LITERAL(10, 170, 11), // "OnCleanExit"
QT_MOC_LITERAL(11, 182, 4), // "code"
QT_MOC_LITERAL(12, 187, 18), // "OnGetUsedSpaceExit"
QT_MOC_LITERAL(13, 206, 18), // "OnGetRemoteVerExit"
QT_MOC_LITERAL(14, 225, 12), // "OnUpdateExit"
QT_MOC_LITERAL(15, 238, 20) // "OnMessageBoxFinished"

    },
    "SystemSettingsForm\0CloseForms\0\0MoveLeft\0"
    "MoveRight\0on_closeButton_clicked\0"
    "on_moveRightButton_clicked\0"
    "on_moveLeftButton_clicked\0"
    "on_applyButton_clicked\0on_cleanLogs_clicked\0"
    "OnCleanExit\0code\0OnGetUsedSpaceExit\0"
    "OnGetRemoteVerExit\0OnUpdateExit\0"
    "OnMessageBoxFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemSettingsForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    1,   87,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      14,    1,   96,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void SystemSettingsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SystemSettingsForm *_t = static_cast<SystemSettingsForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseForms(); break;
        case 1: _t->MoveLeft(); break;
        case 2: _t->MoveRight(); break;
        case 3: _t->on_closeButton_clicked(); break;
        case 4: _t->on_moveRightButton_clicked(); break;
        case 5: _t->on_moveLeftButton_clicked(); break;
        case 6: _t->on_applyButton_clicked(); break;
        case 7: _t->on_cleanLogs_clicked(); break;
        case 8: _t->OnCleanExit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->OnGetUsedSpaceExit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->OnGetRemoteVerExit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->OnUpdateExit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->OnMessageBoxFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SystemSettingsForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SystemSettingsForm::CloseForms)) {
                *result = 0;
            }
        }
        {
            typedef void (SystemSettingsForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SystemSettingsForm::MoveLeft)) {
                *result = 1;
            }
        }
        {
            typedef void (SystemSettingsForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SystemSettingsForm::MoveRight)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject SystemSettingsForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SystemSettingsForm.data,
      qt_meta_data_SystemSettingsForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SystemSettingsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemSettingsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SystemSettingsForm.stringdata0))
        return static_cast<void*>(const_cast< SystemSettingsForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int SystemSettingsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void SystemSettingsForm::CloseForms()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SystemSettingsForm::MoveLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SystemSettingsForm::MoveRight()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
