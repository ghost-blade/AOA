/****************************************************************************
** Meta object code from reading C++ file 'modaloverlay.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/modaloverlay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modaloverlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModalOverlay_t {
    QByteArrayData data[15];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModalOverlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModalOverlay_t qt_meta_stringdata_ModalOverlay = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ModalOverlay"
QT_MOC_LITERAL(1, 13, 12), // "backupWallet"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "tipUpdate"
QT_MOC_LITERAL(4, 37, 5), // "count"
QT_MOC_LITERAL(5, 43, 9), // "blockDate"
QT_MOC_LITERAL(6, 53, 21), // "nVerificationProgress"
QT_MOC_LITERAL(7, 75, 18), // "setKnownBestHeight"
QT_MOC_LITERAL(8, 94, 16), // "toggleVisibility"
QT_MOC_LITERAL(9, 111, 8), // "showHide"
QT_MOC_LITERAL(10, 120, 4), // "hide"
QT_MOC_LITERAL(11, 125, 13), // "userRequested"
QT_MOC_LITERAL(12, 139, 12), // "closeClicked"
QT_MOC_LITERAL(13, 152, 19), // "backupWalletClicked"
QT_MOC_LITERAL(14, 172, 14) // "isLayerVisible"

    },
    "ModalOverlay\0backupWallet\0\0tipUpdate\0"
    "count\0blockDate\0nVerificationProgress\0"
    "setKnownBestHeight\0toggleVisibility\0"
    "showHide\0hide\0userRequested\0closeClicked\0"
    "backupWalletClicked\0isLayerVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModalOverlay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   65,    2, 0x0a /* Public */,
       7,    2,   72,    2, 0x0a /* Public */,
       8,    0,   77,    2, 0x0a /* Public */,
       9,    2,   78,    2, 0x0a /* Public */,
       9,    1,   83,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   86,    2, 0x2a /* Public | MethodCloned */,
      12,    0,   87,    2, 0x0a /* Public */,
      13,    0,   88,    2, 0x0a /* Public */,
      14,    0,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::Double,    4,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   10,   11,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void ModalOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModalOverlay *_t = static_cast<ModalOverlay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backupWallet(); break;
        case 1: _t->tipUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->setKnownBestHeight((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 3: _t->toggleVisibility(); break;
        case 4: _t->showHide((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->showHide((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showHide(); break;
        case 7: _t->closeClicked(); break;
        case 8: _t->backupWalletClicked(); break;
        case 9: { bool _r = _t->isLayerVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ModalOverlay::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModalOverlay::backupWallet)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModalOverlay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ModalOverlay.data,
      qt_meta_data_ModalOverlay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModalOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModalOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModalOverlay.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ModalOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ModalOverlay::backupWallet()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
