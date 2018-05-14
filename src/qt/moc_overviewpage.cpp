/****************************************************************************
** Meta object code from reading C++ file 'overviewpage.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/overviewpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OverviewPage_t {
    QByteArrayData data[25];
    char stringdata0[401];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverviewPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverviewPage_t qt_meta_stringdata_OverviewPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OverviewPage"
QT_MOC_LITERAL(1, 13, 15), // "showMoreClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 23), // "outOfSyncWarningClicked"
QT_MOC_LITERAL(4, 54, 15), // "addTokenClicked"
QT_MOC_LITERAL(5, 70, 10), // "setBalance"
QT_MOC_LITERAL(6, 81, 7), // "CAmount"
QT_MOC_LITERAL(7, 89, 7), // "balance"
QT_MOC_LITERAL(8, 97, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(9, 116, 15), // "immatureBalance"
QT_MOC_LITERAL(10, 132, 5), // "stake"
QT_MOC_LITERAL(11, 138, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(12, 155, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(13, 174, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(14, 195, 14), // "watchOnlyStake"
QT_MOC_LITERAL(15, 210, 21), // "checkForInvalidTokens"
QT_MOC_LITERAL(16, 232, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(17, 250, 12), // "updateAlerts"
QT_MOC_LITERAL(18, 263, 8), // "warnings"
QT_MOC_LITERAL(19, 272, 21), // "updateWatchOnlyLabels"
QT_MOC_LITERAL(20, 294, 13), // "showWatchOnly"
QT_MOC_LITERAL(21, 308, 28), // "handleOutOfSyncWarningClicks"
QT_MOC_LITERAL(22, 337, 25), // "on_buttonAddToken_clicked"
QT_MOC_LITERAL(23, 363, 25), // "on_showMoreButton_clicked"
QT_MOC_LITERAL(24, 389, 11) // "showDetails"

    },
    "OverviewPage\0showMoreClicked\0\0"
    "outOfSyncWarningClicked\0addTokenClicked\0"
    "setBalance\0CAmount\0balance\0"
    "unconfirmedBalance\0immatureBalance\0"
    "stake\0watchOnlyBalance\0watchUnconfBalance\0"
    "watchImmatureBalance\0watchOnlyStake\0"
    "checkForInvalidTokens\0updateDisplayUnit\0"
    "updateAlerts\0warnings\0updateWatchOnlyLabels\0"
    "showWatchOnly\0handleOutOfSyncWarningClicks\0"
    "on_buttonAddToken_clicked\0"
    "on_showMoreButton_clicked\0showDetails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverviewPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    8,   77,    2, 0x0a /* Public */,
      15,    0,   94,    2, 0x0a /* Public */,
      16,    0,   95,    2, 0x08 /* Private */,
      17,    1,   96,    2, 0x08 /* Private */,
      19,    1,   99,    2, 0x08 /* Private */,
      21,    0,  102,    2, 0x08 /* Private */,
      22,    0,  103,    2, 0x08 /* Private */,
      23,    0,  104,    2, 0x08 /* Private */,
      24,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,    7,    8,    9,   10,   11,   12,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OverviewPage *_t = static_cast<OverviewPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMoreClicked(); break;
        case 1: _t->outOfSyncWarningClicked(); break;
        case 2: _t->addTokenClicked(); break;
        case 3: _t->setBalance((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6])),(*reinterpret_cast< const CAmount(*)>(_a[7])),(*reinterpret_cast< const CAmount(*)>(_a[8]))); break;
        case 4: _t->checkForInvalidTokens(); break;
        case 5: _t->updateDisplayUnit(); break;
        case 6: _t->updateAlerts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updateWatchOnlyLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->handleOutOfSyncWarningClicks(); break;
        case 9: _t->on_buttonAddToken_clicked(); break;
        case 10: _t->on_showMoreButton_clicked(); break;
        case 11: _t->showDetails(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OverviewPage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewPage::showMoreClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OverviewPage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewPage::outOfSyncWarningClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OverviewPage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewPage::addTokenClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OverviewPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OverviewPage.data,
      qt_meta_data_OverviewPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void OverviewPage::showMoreClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OverviewPage::outOfSyncWarningClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OverviewPage::addTokenClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
