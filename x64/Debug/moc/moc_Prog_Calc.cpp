/****************************************************************************
** Meta object code from reading C++ file 'Prog_Calc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Prog_Calc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Prog_Calc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Prog_Calc_t {
    QByteArrayData data[12];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Prog_Calc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Prog_Calc_t qt_meta_stringdata_Prog_Calc = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Prog_Calc"
QT_MOC_LITERAL(1, 10, 10), // "onBtnClick"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "clear"
QT_MOC_LITERAL(4, 28, 9), // "getResult"
QT_MOC_LITERAL(5, 38, 9), // "isOperand"
QT_MOC_LITERAL(6, 48, 4), // "elem"
QT_MOC_LITERAL(7, 53, 12), // "getOperPrior"
QT_MOC_LITERAL(8, 66, 4), // "oper"
QT_MOC_LITERAL(9, 71, 16), // "compareOperPrior"
QT_MOC_LITERAL(10, 88, 5), // "oper1"
QT_MOC_LITERAL(11, 94, 5) // "oper2"

    },
    "Prog_Calc\0onBtnClick\0\0clear\0getResult\0"
    "isOperand\0elem\0getOperPrior\0oper\0"
    "compareOperPrior\0oper1\0oper2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Prog_Calc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       9,    2,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QChar,    6,
    QMetaType::Int, QMetaType::QString,    8,
    QMetaType::Int, QMetaType::QString, QMetaType::QString,   10,   11,

       0        // eod
};

void Prog_Calc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Prog_Calc *_t = static_cast<Prog_Calc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onBtnClick(); break;
        case 1: _t->clear(); break;
        case 2: _t->getResult(); break;
        case 3: { bool _r = _t->isOperand((*reinterpret_cast< QChar(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->getOperPrior((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->compareOperPrior((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject Prog_Calc::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Prog_Calc.data,
      qt_meta_data_Prog_Calc,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Prog_Calc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Prog_Calc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Prog_Calc.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Prog_Calc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
