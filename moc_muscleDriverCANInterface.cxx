/****************************************************************************
** Meta object code from reading C++ file 'muscleDriverCANInterface.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "muscleDriverCANInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'muscleDriverCANInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MuscleDriverCANInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      34,   25,   25,   25, 0x0a,
      41,   25,   25,   25, 0x0a,
      57,   53,   25,   25, 0x0a,
      85,   77,   25,   25, 0x0a,
     105,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MuscleDriverCANInterface[] = {
    "MuscleDriverCANInterface\0\0start()\0"
    "stop()\0detachCAN()\0ref\0getReference(float)\0"
    "enabled\0enableLogging(bool)\0"
    "cyclicProcessor()\0"
};

void MuscleDriverCANInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MuscleDriverCANInterface *_t = static_cast<MuscleDriverCANInterface *>(_o);
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->stop(); break;
        case 2: _t->detachCAN(); break;
        case 3: _t->getReference((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->enableLogging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->cyclicProcessor(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MuscleDriverCANInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MuscleDriverCANInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MuscleDriverCANInterface,
      qt_meta_data_MuscleDriverCANInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MuscleDriverCANInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MuscleDriverCANInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MuscleDriverCANInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MuscleDriverCANInterface))
        return static_cast<void*>(const_cast< MuscleDriverCANInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int MuscleDriverCANInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
