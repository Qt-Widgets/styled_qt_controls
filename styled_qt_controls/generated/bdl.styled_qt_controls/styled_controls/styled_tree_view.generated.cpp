/****************************************************************************
** Meta object code from reading C++ file 'styled_tree_view.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "bdl.styled_qt_controls\styled_controls\styled_tree_view.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'styled_tree_view.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bdl__styled_qt_controls__styled_tree_view_t {
    QByteArrayData data[13];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__styled_tree_view_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__styled_tree_view_t qt_meta_stringdata_bdl__styled_qt_controls__styled_tree_view = {
    {
QT_MOC_LITERAL(0, 0, 41), // "bdl::styled_qt_controls::styl..."
QT_MOC_LITERAL(1, 42, 15), // "current_changed"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 5), // "index"
QT_MOC_LITERAL(4, 65, 13), // "this_expanded"
QT_MOC_LITERAL(5, 79, 14), // "this_collapsed"
QT_MOC_LITERAL(6, 94, 29), // "selectionmodel_currentchanged"
QT_MOC_LITERAL(7, 124, 7), // "current"
QT_MOC_LITERAL(8, 132, 8), // "previous"
QT_MOC_LITERAL(9, 141, 19), // "selected_background"
QT_MOC_LITERAL(10, 161, 27), // "selected_background_nofocus"
QT_MOC_LITERAL(11, 189, 15), // "selected_border"
QT_MOC_LITERAL(12, 205, 23) // "selected_border_nofocus"

    },
    "bdl::styled_qt_controls::styled_tree_view\0"
    "current_changed\0\0index\0this_expanded\0"
    "this_collapsed\0selectionmodel_currentchanged\0"
    "current\0previous\0selected_background\0"
    "selected_background_nofocus\0selected_border\0"
    "selected_border_nofocus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__styled_tree_view[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    2,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    7,    8,

 // properties: name, type, flags
       9, QMetaType::QColor, 0x00095003,
      10, QMetaType::QColor, 0x00095003,
      11, QMetaType::QColor, 0x00095003,
      12, QMetaType::QColor, 0x00095003,

       0        // eod
};

void bdl::styled_qt_controls::styled_tree_view::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        styled_tree_view *_t = static_cast<styled_tree_view *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->current_changed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->this_expanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->this_collapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->selectionmodel_currentchanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (styled_tree_view::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_tree_view::current_changed)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        styled_tree_view *_t = static_cast<styled_tree_view *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->m_selected_background; break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->m_selected_background_nofocus; break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->m_selected_border; break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->m_selected_border_nofocus; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        styled_tree_view *_t = static_cast<styled_tree_view *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_selected_background != *reinterpret_cast< QColor*>(_v)) {
                _t->m_selected_background = *reinterpret_cast< QColor*>(_v);
            }
            break;
        case 1:
            if (_t->m_selected_background_nofocus != *reinterpret_cast< QColor*>(_v)) {
                _t->m_selected_background_nofocus = *reinterpret_cast< QColor*>(_v);
            }
            break;
        case 2:
            if (_t->m_selected_border != *reinterpret_cast< QColor*>(_v)) {
                _t->m_selected_border = *reinterpret_cast< QColor*>(_v);
            }
            break;
        case 3:
            if (_t->m_selected_border_nofocus != *reinterpret_cast< QColor*>(_v)) {
                _t->m_selected_border_nofocus = *reinterpret_cast< QColor*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject bdl::styled_qt_controls::styled_tree_view::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__styled_tree_view.data,
      qt_meta_data_bdl__styled_qt_controls__styled_tree_view,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *bdl::styled_qt_controls::styled_tree_view::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::styled_tree_view::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__styled_tree_view.stringdata0))
        return static_cast<void*>(const_cast< styled_tree_view*>(this));
    return QTreeView::qt_metacast(_clname);
}

int bdl::styled_qt_controls::styled_tree_view::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void bdl::styled_qt_controls::styled_tree_view::current_changed(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
