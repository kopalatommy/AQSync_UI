/****************************************************************************
** Meta object code from reading C++ file 'datafilesform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Settings/datafilesform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datafilesform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DataFilesForm_t {
    QByteArrayData data[24];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataFilesForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataFilesForm_t qt_meta_stringdata_DataFilesForm = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DataFilesForm"
QT_MOC_LITERAL(1, 14, 10), // "CloseForms"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "MoveLeft"
QT_MOC_LITERAL(4, 35, 9), // "MoveRight"
QT_MOC_LITERAL(5, 45, 9), // "StartSave"
QT_MOC_LITERAL(6, 55, 7), // "fileLoc"
QT_MOC_LITERAL(7, 63, 15), // "fileDestination"
QT_MOC_LITERAL(8, 79, 7), // "SaveAll"
QT_MOC_LITERAL(9, 87, 9), // "sourceDir"
QT_MOC_LITERAL(10, 97, 5), // "files"
QT_MOC_LITERAL(11, 103, 7), // "destDir"
QT_MOC_LITERAL(12, 111, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(13, 134, 26), // "on_moveRightButton_clicked"
QT_MOC_LITERAL(14, 161, 25), // "on_moveLeftButton_clicked"
QT_MOC_LITERAL(15, 187, 24), // "on_refreshButton_clicked"
QT_MOC_LITERAL(16, 212, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(17, 236, 23), // "on_selectButton_clicked"
QT_MOC_LITERAL(18, 260, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(19, 282, 9), // "SelectAll"
QT_MOC_LITERAL(20, 292, 13), // "SelectCurrent"
QT_MOC_LITERAL(21, 306, 6), // "Browse"
QT_MOC_LITERAL(22, 313, 12), // "SelectedFile"
QT_MOC_LITERAL(23, 326, 8) // "fileName"

    },
    "DataFilesForm\0CloseForms\0\0MoveLeft\0"
    "MoveRight\0StartSave\0fileLoc\0fileDestination\0"
    "SaveAll\0sourceDir\0files\0destDir\0"
    "on_closeButton_clicked\0"
    "on_moveRightButton_clicked\0"
    "on_moveLeftButton_clicked\0"
    "on_refreshButton_clicked\0"
    "on_deleteButton_clicked\0on_selectButton_clicked\0"
    "on_saveButton_clicked\0SelectAll\0"
    "SelectCurrent\0Browse\0SelectedFile\0"
    "fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataFilesForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    2,   97,    2, 0x06 /* Public */,
       8,    3,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,
      19,    0,  116,    2, 0x08 /* Private */,
      20,    0,  117,    2, 0x08 /* Private */,
      21,    0,  118,    2, 0x08 /* Private */,
      22,    1,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::QString,    9,   10,   11,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   23,

       0        // eod
};

void DataFilesForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataFilesForm *_t = static_cast<DataFilesForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseForms(); break;
        case 1: _t->MoveLeft(); break;
        case 2: _t->MoveRight(); break;
        case 3: _t->StartSave((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->SaveAll((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->on_closeButton_clicked(); break;
        case 6: _t->on_moveRightButton_clicked(); break;
        case 7: _t->on_moveLeftButton_clicked(); break;
        case 8: _t->on_refreshButton_clicked(); break;
        case 9: _t->on_deleteButton_clicked(); break;
        case 10: _t->on_selectButton_clicked(); break;
        case 11: _t->on_saveButton_clicked(); break;
        case 12: _t->SelectAll(); break;
        case 13: _t->SelectCurrent(); break;
        case 14: _t->Browse(); break;
        case 15: _t->SelectedFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DataFilesForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataFilesForm::CloseForms)) {
                *result = 0;
            }
        }
        {
            typedef void (DataFilesForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataFilesForm::MoveLeft)) {
                *result = 1;
            }
        }
        {
            typedef void (DataFilesForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataFilesForm::MoveRight)) {
                *result = 2;
            }
        }
        {
            typedef void (DataFilesForm::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataFilesForm::StartSave)) {
                *result = 3;
            }
        }
        {
            typedef void (DataFilesForm::*_t)(QString , QStringList , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataFilesForm::SaveAll)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject DataFilesForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DataFilesForm.data,
      qt_meta_data_DataFilesForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DataFilesForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataFilesForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DataFilesForm.stringdata0))
        return static_cast<void*>(const_cast< DataFilesForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int DataFilesForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DataFilesForm::CloseForms()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DataFilesForm::MoveLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DataFilesForm::MoveRight()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DataFilesForm::StartSave(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DataFilesForm::SaveAll(QString _t1, QStringList _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
