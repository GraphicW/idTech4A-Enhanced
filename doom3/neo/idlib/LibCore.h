/* Minimal core header extracted from Lib.h to reduce PCH size.
   Contains basic typedefs and lightweight declarations used widely.
   Keep this minimal to reduce compile-time impact when used in PCH.
*/

#ifndef __LIBCORE_H__
#define __LIBCORE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stddef.h>

/* Basic integer types */
typedef unsigned char            byte;   /* 8 bits */
typedef unsigned short           word;   /* 16 bits */
typedef unsigned int             dword;  /* 32 bits */
typedef unsigned int             uint;

/* Basic macros */
#ifndef NULL
#define NULL 0
#endif

#ifdef __cplusplus
}
#endif

/* Forward declarations and lightweight helpers for C++ code */
#ifdef __cplusplus

class idLib {
public:
	static class idSys *sys;
	static class idCommon *common;
	static class idCVarSystem *cvarSystem;
	static class idFileSystem *fileSystem;
	static int frameNumber;

	static void Init(void);
	static void ShutDown(void);

	static void Error(const char *fmt, ...);
	static void Warning(const char *fmt, ...);
};

#endif /* __cplusplus */

#endif /* __LIBCORE_H__ */
