/****************************************************************************
** Meta object code from reading C++ file 'UserInterface.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "UserInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      29,   14,   14,   14, 0x05,
      42,   14,   14,   14, 0x05,
      62,   58,   14,   14, 0x05,
      88,   82,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     111,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UserInterface[] = {
    "UserInterface\0\0startMotors()\0stopMotors()\0"
    "detachFromCAN()\0ref\0setReference(float)\0"
    "logEn\0setLoggingEnable(bool)\0run()\0"
};

void UserInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UserInterface *_t = static_cast<UserInterface *>(_o);
        switch (_id) {
        case 0: _t->startMotors(); break;
        case 1: _t->stopMotors(); break;
        case 2: _t->detachFromCAN(); break;
        case 3: _t->setReference((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setLoggingEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->run(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UserInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UserInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UserInterface,
      qt_meta_data_UserInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserInterface))
        return static_cast<void*>(const_cast< UserInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int UserInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void UserInterface::startMotors()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UserInterface::stopMotors()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UserInterface::detachFromCAN()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UserInterface::setReference(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UserInterface::setLoggingEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
