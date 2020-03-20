/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "txtToVector"
QT_MOC_LITERAL(2, 23, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(3, 48, 0), // ""
QT_MOC_LITERAL(4, 49, 11), // "std::string"
QT_MOC_LITERAL(5, 61, 8), // "filename"
QT_MOC_LITERAL(6, 70, 11), // "checkExists"
QT_MOC_LITERAL(7, 82, 13), // "checkDatabase"
QT_MOC_LITERAL(8, 96, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 118, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(10, 142, 11), // "setOperator"
QT_MOC_LITERAL(11, 154, 4), // "role"
QT_MOC_LITERAL(12, 159, 12), // "manageLayout"
QT_MOC_LITERAL(13, 172, 6), // "option"
QT_MOC_LITERAL(14, 179, 33), // "on_actionCheck_database_trigg..."
QT_MOC_LITERAL(15, 213, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(16, 237, 23) // "on_pushButton_4_clicked"

    },
    "MainWindow\0txtToVector\0std::vector<std::string>\0"
    "\0std::string\0filename\0checkExists\0"
    "checkDatabase\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0setOperator\0"
    "role\0manageLayout\0option\0"
    "on_actionCheck_database_triggered\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       1,    1,   64,    3, 0x08 /* Private */,
       6,    1,   67,    3, 0x08 /* Private */,
       7,    0,   70,    3, 0x08 /* Private */,
       8,    0,   71,    3, 0x08 /* Private */,
       9,    0,   72,    3, 0x08 /* Private */,
      10,    1,   73,    3, 0x08 /* Private */,
      12,    1,   76,    3, 0x08 /* Private */,
      14,    0,   79,    3, 0x08 /* Private */,
      15,    0,   80,    3, 0x08 /* Private */,
      16,    0,   81,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Bool, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,   11,
    QMetaType::Void, 0x80000000 | 4,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { std::vector<std::string> _r = _t->txtToVector((*reinterpret_cast< std::string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::vector<std::string>*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->checkExists((*reinterpret_cast< std::string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->checkDatabase(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->setOperator((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 6: _t->manageLayout((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 7: _t->on_actionCheck_database_triggered(); break;
        case 8: _t->on_pushButton_3_clicked(); break;
        case 9: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
