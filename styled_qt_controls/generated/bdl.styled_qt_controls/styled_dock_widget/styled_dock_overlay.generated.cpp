/****************************************************************************
** Meta object code from reading C++ file 'styled_dock_overlay.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "bdl.styled_qt_controls\styled_dock_widget\styled_dock_overlay.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'styled_dock_overlay.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bdl__styled_qt_controls__styled_dock_overlay_t {
    QByteArrayData data[1];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__styled_dock_overlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__styled_dock_overlay_t qt_meta_stringdata_bdl__styled_qt_controls__styled_dock_overlay = {
    {
QT_MOC_LITERAL(0, 0, 44) // "bdl::styled_qt_controls::styl..."

    },
    "bdl::styled_qt_controls::styled_dock_overlay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__styled_dock_overlay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void bdl::styled_qt_controls::styled_dock_overlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject bdl::styled_qt_controls::styled_dock_overlay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__styled_dock_overlay.data,
      qt_meta_data_bdl__styled_qt_controls__styled_dock_overlay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *bdl::styled_qt_controls::styled_dock_overlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::styled_dock_overlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__styled_dock_overlay.stringdata0))
        return static_cast<void*>(const_cast< styled_dock_overlay*>(this));
    return QWidget::qt_metacast(_clname);
}

int bdl::styled_qt_controls::styled_dock_overlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
