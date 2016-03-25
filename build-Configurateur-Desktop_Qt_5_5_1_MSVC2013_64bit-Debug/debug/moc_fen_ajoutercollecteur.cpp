/****************************************************************************
** Meta object code from reading C++ file 'fen_ajoutercollecteur.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Configurateur/fen_ajoutercollecteur.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fen_ajoutercollecteur.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FEN_AjouterCollecteur_t {
    QByteArrayData data[3];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FEN_AjouterCollecteur_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FEN_AjouterCollecteur_t qt_meta_stringdata_FEN_AjouterCollecteur = {
    {
QT_MOC_LITERAL(0, 0, 21), // "FEN_AjouterCollecteur"
QT_MOC_LITERAL(1, 22, 22), // "on_DBB_dialog_accepted"
QT_MOC_LITERAL(2, 45, 0) // ""

    },
    "FEN_AjouterCollecteur\0on_DBB_dialog_accepted\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FEN_AjouterCollecteur[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void FEN_AjouterCollecteur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FEN_AjouterCollecteur *_t = static_cast<FEN_AjouterCollecteur *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_DBB_dialog_accepted(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FEN_AjouterCollecteur::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FEN_AjouterCollecteur.data,
      qt_meta_data_FEN_AjouterCollecteur,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FEN_AjouterCollecteur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FEN_AjouterCollecteur::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FEN_AjouterCollecteur.stringdata0))
        return static_cast<void*>(const_cast< FEN_AjouterCollecteur*>(this));
    return QDialog::qt_metacast(_clname);
}

int FEN_AjouterCollecteur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
