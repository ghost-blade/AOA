/****************************************************************************
** Meta object code from reading C++ file 'callcontract.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/callcontract.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'callcontract.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CallContract_t {
    QByteArrayData data[11];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CallContract_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CallContract_t qt_meta_stringdata_CallContract = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CallContract"
QT_MOC_LITERAL(1, 13, 18), // "on_clearAllClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "on_callContractClicked"
QT_MOC_LITERAL(4, 56, 19), // "on_numBlocksChanged"
QT_MOC_LITERAL(5, 76, 27), // "on_updateCallContractButton"
QT_MOC_LITERAL(6, 104, 17), // "on_newContractABI"
QT_MOC_LITERAL(7, 122, 18), // "on_saveInfoClicked"
QT_MOC_LITERAL(8, 141, 18), // "on_loadInfoClicked"
QT_MOC_LITERAL(9, 160, 22), // "on_pasteAddressClicked"
QT_MOC_LITERAL(10, 183, 25) // "on_contractAddressChanged"

    },
    "CallContract\0on_clearAllClicked\0\0"
    "on_callContractClicked\0on_numBlocksChanged\0"
    "on_updateCallContractButton\0"
    "on_newContractABI\0on_saveInfoClicked\0"
    "on_loadInfoClicked\0on_pasteAddressClicked\0"
    "on_contractAddressChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CallContract[] = {

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
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

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

void CallContract::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CallContract *_t = static_cast<CallContract *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_clearAllClicked(); break;
        case 1: _t->on_callContractClicked(); break;
        case 2: _t->on_numBlocksChanged(); break;
        case 3: _t->on_updateCallContractButton(); break;
        case 4: _t->on_newContractABI(); break;
        case 5: _t->on_saveInfoClicked(); break;
        case 6: _t->on_loadInfoClicked(); break;
        case 7: _t->on_pasteAddressClicked(); break;
        case 8: _t->on_contractAddressChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CallContract::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CallContract.data,
      qt_meta_data_CallContract,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CallContract::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallContract::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CallContract.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CallContract::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
