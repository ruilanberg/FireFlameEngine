#ifndef FF_PLATFORM_PLATFORMCONFIG_H_
#define FF_PLATFORM_PLATFORMCONFIG_H_

#define FF_PLATFORM_UNKNOWN            0
#define FF_PLATFORM_WIN32              1
#define FF_PLATFORM_MAC                2
#define FF_PLATFORM_LINUX              3
#define FF_PLATFORM_IOS                4
#define FF_PLATFORM_ANDROID            5
#define FF_PLATFORM_EMSCRIPTEN         6

//////////////////////////////////////////////////////////////////////////
// Determine target platform by compile environment macro.
//////////////////////////////////////////////////////////////////////////

#define FF_TARGET_PLATFORM             FF_PLATFORM_UNKNOWN

// win32
#if defined(_WIN32) || defined(WIN32)
#undef  FF_TARGET_PLATFORM
#define FF_TARGET_PLATFORM             FF_PLATFORM_WIN32
#endif


//////////////////////////////////////////////////////////////////////////
// post configure
//////////////////////////////////////////////////////////////////////////

#if ((FF_TARGET_PLATFORM == FF_PLATFORM_ANDROID) || (FF_TARGET_PLATFORM == FF_PLATFORM_IOS))
#define CC_PLATFORM_MOBILE
#else
#define CC_PLATFORM_PC
#endif

#endif // !FF_PLATFORM_PLATFORMCONFIG_H_
