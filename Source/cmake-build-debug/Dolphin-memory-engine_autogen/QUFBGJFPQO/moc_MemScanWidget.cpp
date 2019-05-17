/****************************************************************************
** Meta object code from reading C++ file 'MemScanWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../GUI/MemScanner/MemScanWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MemScanWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MemScanWidget_t {
    QByteArrayData data[15];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MemScanWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MemScanWidget_t qt_meta_stringdata_MemScanWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MemScanWidget"
QT_MOC_LITERAL(1, 14, 20), // "requestAddWatchEntry"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 3), // "u32"
QT_MOC_LITERAL(4, 40, 7), // "address"
QT_MOC_LITERAL(5, 48, 15), // "Common::MemType"
QT_MOC_LITERAL(6, 64, 4), // "type"
QT_MOC_LITERAL(7, 69, 6), // "size_t"
QT_MOC_LITERAL(8, 76, 6), // "length"
QT_MOC_LITERAL(9, 83, 10), // "isUnsigned"
QT_MOC_LITERAL(10, 94, 15), // "Common::MemBase"
QT_MOC_LITERAL(11, 110, 4), // "base"
QT_MOC_LITERAL(12, 115, 36), // "requestAddSelectedResultsToWa..."
QT_MOC_LITERAL(13, 152, 31), // "requestAddAllResultsToWatchList"
QT_MOC_LITERAL(14, 184, 10) // "mustUnhook"

    },
    "MemScanWidget\0requestAddWatchEntry\0\0"
    "u32\0address\0Common::MemType\0type\0"
    "size_t\0length\0isUnsigned\0Common::MemBase\0"
    "base\0requestAddSelectedResultsToWatchList\0"
    "requestAddAllResultsToWatchList\0"
    "mustUnhook"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MemScanWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   34,    2, 0x06 /* Public */,
      12,    4,   45,    2, 0x06 /* Public */,
      13,    4,   54,    2, 0x06 /* Public */,
      14,    0,   63,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, QMetaType::Bool, 0x80000000 | 10,    4,    6,    8,    9,   11,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, QMetaType::Bool, 0x80000000 | 10,    6,    8,    9,   11,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, QMetaType::Bool, 0x80000000 | 10,    6,    8,    9,   11,
    QMetaType::Void,

       0        // eod
};

void MemScanWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MemScanWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestAddWatchEntry((*reinterpret_cast< u32(*)>(_a[1])),(*reinterpret_cast< Common::MemType(*)>(_a[2])),(*reinterpret_cast< size_t(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< Common::MemBase(*)>(_a[5]))); break;
        case 1: _t->requestAddSelectedResultsToWatchList((*reinterpret_cast< Common::MemType(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< Common::MemBase(*)>(_a[4]))); break;
        case 2: _t->requestAddAllResultsToWatchList((*reinterpret_cast< Common::MemType(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< Common::MemBase(*)>(_a[4]))); break;
        case 3: _t->mustUnhook(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MemScanWidget::*)(u32 , Common::MemType , size_t , bool , Common::MemBase );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemScanWidget::requestAddWatchEntry)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MemScanWidget::*)(Common::MemType , size_t , bool , Common::MemBase );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemScanWidget::requestAddSelectedResultsToWatchList)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MemScanWidget::*)(Common::MemType , size_t , bool , Common::MemBase );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemScanWidget::requestAddAllResultsToWatchList)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MemScanWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemScanWidget::mustUnhook)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MemScanWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_MemScanWidget.data,
    qt_meta_data_MemScanWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MemScanWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MemScanWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MemScanWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MemScanWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void MemScanWidget::requestAddWatchEntry(u32 _t1, Common::MemType _t2, size_t _t3, bool _t4, Common::MemBase _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MemScanWidget::requestAddSelectedResultsToWatchList(Common::MemType _t1, size_t _t2, bool _t3, Common::MemBase _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MemScanWidget::requestAddAllResultsToWatchList(Common::MemType _t1, size_t _t2, bool _t3, Common::MemBase _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MemScanWidget::mustUnhook()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
