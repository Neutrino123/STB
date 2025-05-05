/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 6.8.3
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#ifdef _MSC_VER
// disable informational message "function ... selected for automatic inline expansion"
#pragma warning (disable: 4711)
#endif

static const unsigned char qt_resource_data[] = {
  // server.txt
  0x0,0x0,0x0,0xf,
  0x31,
  0x32,0x37,0x2e,0x30,0x2e,0x30,0x2e,0x31,0x20,0x31,0x32,0x33,0x34,0x35,
  
};

static const unsigned char qt_resource_name[] = {
  // serverText
  0x0,0xa,
  0xc,0xc8,0x95,0xd4,
  0x0,0x73,
  0x0,0x65,0x0,0x72,0x0,0x76,0x0,0x65,0x0,0x72,0x0,0x54,0x0,0x65,0x0,0x78,0x0,0x74,
    // server.txt
  0x0,0xa,
  0xc,0xca,0x62,0xd4,
  0x0,0x73,
  0x0,0x65,0x0,0x72,0x0,0x76,0x0,0x65,0x0,0x72,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/serverText
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/serverText/server.txt
  0x0,0x0,0x0,0x1a,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x96,0xa1,0xd1,0x3b,0xe0,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#if defined(QT_INLINE_NAMESPACE)
inline namespace QT_NAMESPACE {
#elif defined(QT_NAMESPACE)
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_fisiere_text)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_fisiere_text)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_fisiere_text)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_fisiere_text)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

#ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wexit-time-destructors"
#endif

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_fisiere_text)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_fisiere_text)(); }
   } dummy;
}

#ifdef __clang__
#   pragma clang diagnostic pop
#endif
