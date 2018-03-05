/* config.h.cmake.in.  Not generated, but originated from autoheader.  */
/* This file must be kept up-to-date with needed substitutions from config.h.in. */

/* Define to 1 if you have the <cstdint> header file. */
/* #undef HAVE_CSTDINT */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

#if defined(__cplusplus) && defined(HAVE_CSTDINT)
#include <cstdint>
#elif HAVE_STDINT_H
#include <stdint.h>
#elif HAVE_INTTYPES_H
#include <inttypes.h>
#endif

/* Define to specify no threading is used */
/* #undef APP_NO_THREADS */

/* Define to 1 if you have the <arpa/inet.h> header file. */
/* #undef HAVE_ARPA_INET_H */

/* Define to 1 if you have the <arpa/nameser_compat.h> header file. */
/* #undef HAVE_ARPA_NAMESER_COMPAT_H */

/* define if bool is a built-in type */
/* #undef HAVE_BOOL */

/* Define to 1 if you have the `catclose' function. */
/* #undef HAVE_CATCLOSE */

/* Define to 1 if you have the `catgets' function. */
/* #undef HAVE_CATGETS */

/* Define to 1 if you have the `catopen' function. */
/* #undef HAVE_CATOPEN */

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if you have the <CoreServices/CoreServices.h> header file. */
/* #undef HAVE_CORESERVICES_CORESERVICES_H */

/* Define to 1 if you have cpuid.h */
/* #undef HAVE_CPUID_H */

/* Define to 1 if you have the <ctype.h> header file. */
/* #undef HAVE_CTYPE_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the <endian.h> header file. */
/* #undef HAVE_ENDIAN_H */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
/* #undef HAVE_FCNTL_H */

/* Define to 1 if you have the <float.h> header file. */
/* #undef HAVE_FLOAT_H */

/* Define to 1 if you have the `ftime' function. */
/* #undef HAVE_FTIME */

/* Define to 1 if you have the `getaddrinfo' function. */
/* #undef HAVE_GETADDRINFO */

/* Define to 1 if you have the `getcwd' function. */
/* #undef HAVE_GETCWD */

/* Define to 1 if you have the `gethostbyaddr' function. */
/* #undef HAVE_GETHOSTBYADDR */

/* Define to 1 if you have the `gethostbyname' function. */
/* #undef HAVE_GETHOSTBYNAME */

/* Define to 1 if you have the `gettimeofday' function. */
/* #undef HAVE_GETTIMEOFDAY */

/* Define to 1 if you have the `gmtime_r' function. */
/* #undef HAVE_GMTIME_R */

/* Define to 1 if you have the `iconv' function. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the `iconv_close' function. */
/* #undef HAVE_ICONV_CLOSE */

/* Define to 1 if you have the <iconv.h> header file. */
/* #undef HAVE_ICONV_H */

/* Define to 1 if you have the `iconv_open' function. */
/* #undef HAVE_ICONV_OPEN */

/* Define to 1 if you have the <inttypes.h> header file. */
/* #undef HAVE_INTTYPES_H */

/* Define to 1 if you have the <langinfo.h> header file. */
/* #undef HAVE_LANGINFO_H */

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the <limits.h> header file. */
/* #undef HAVE_LIMITS_H */

/* Define to 1 if you have the `localeconv' function. */
/* #undef HAVE_LOCALECONV */

/* Define to 1 if you have the <locale.h> header file. */
/* #undef HAVE_LOCALE_H */

/* define if the compiler implements L"widestring" */
/* #undef HAVE_LSTRING */

/* Define to 1 if you have the <machine/endian.h> header file. */
/* #undef HAVE_MACHINE_ENDIAN_H */

/* Define to 1 if you have the `mblen' function. */
/* #undef HAVE_MBLEN */

/* Define to 1 if you have the `mbrlen' function. */
/* #undef HAVE_MBRLEN */

/* Define to 1 if you have the `mbsrtowcs' function. */
/* #undef HAVE_MBSRTOWCS */

/* Define to 1 if you have the `mbstowcs' function. */
/* #undef HAVE_MBSTOWCS */

/* Define to 1 if you have the `memmove' function. */
/* #undef HAVE_MEMMOVE */

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have the `memset' function. */
/* #undef HAVE_MEMSET */

/* define if the compiler implements namespaces */
/* #undef HAVE_NAMESPACES */

/* Define to 1 if you have the <netdb.h> header file. */
/* #undef HAVE_NETDB_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
/* #undef HAVE_NETINET_IN_H */

/* Define to 1 if you have the `nl_langinfo' function. */
/* #undef HAVE_NL_LANGINFO */

/* Define to 1 if you have the <nl_types.h> header file. */
/* #undef HAVE_NL_TYPES_H */

/* Define to 1 if you have the `pathconf' function. */
/* #undef HAVE_PATHCONF */

/* Define to 1 if you have the PATH_MAX macro. */
/* #undef HAVE_PATH_MAX */

/* Define if you have POSIX threads libraries and header files. */
/* #undef HAVE_PTHREAD */

/* Define to 1 if you have the `realpath' function. */
/* #undef HAVE_REALPATH */

/* Define to 1 if you have the `setlocale' function. */
/* #undef HAVE_SETLOCALE */

/* Define to 1 if you have the `snprintf' function. */
/* #undef HAVE_SNPRINTF */

/* Define to 1 if you have the `socket' function. */
/* #undef HAVE_SOCKET */

/* Define to 1 if stdbool.h conforms to C99. */
/* #undef HAVE_STDBOOL_H */

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* define if the compiler supports ISO C++ standard library */
/* #undef HAVE_STD_LIBS */

/* define if the compiler supports the std namespace */
/* #undef HAVE_STD_NAMESPACE */

/* Define to 1 if you have the `strcasecmp' function. */
/* #undef HAVE_STRCASECMP */

/* Define to 1 if you have the `strchr' function. */
/* #undef HAVE_STRCHR */

/* Define to 1 if you have the `strdup' function. */
/* #undef HAVE_STRDUP */

/* Define to 1 if you have the `stricmp' function. */
/* #undef HAVE_STRICMP */

/* Define to 1 if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncasecmp' function. */
/* #undef HAVE_STRNCASECMP */

/* Define to 1 if you have the `strnicmp' function. */
/* #undef HAVE_STRNICMP */

/* Define to 1 if you have the `strrchr' function. */
/* #undef HAVE_STRRCHR */

/* Define to 1 if you have the `strstr' function. */
/* #undef HAVE_STRSTR */

/* Define to 1 if you have the `strtol' function. */
/* #undef HAVE_STRTOL */

/* Define to 1 if you have the `strtoul' function. */
/* #undef HAVE_STRTOUL */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
/* #undef HAVE_SYS_STAT_H */

/* Define to 1 if you have the <sys/timeb.h> header file. */
/* #undef HAVE_SYS_TIMEB_H */

/* Define to 1 if you have the <sys/time.h> header file. */
/* #undef HAVE_SYS_TIME_H */

/* Define to 1 if you have the <sys/types.h> header file. */
/* #undef HAVE_SYS_TYPES_H */

/* Define to 1 if you have the `timegm' function. */
/* #undef HAVE_TIMEGM */

/* Define to 1 if you have the `towlower' function. */
/* #undef HAVE_TOWLOWER */

/* Define to 1 if you have the `towupper' function. */
/* #undef HAVE_TOWUPPER */

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* Define to 1 if you have the <wchar.h> header file. */
/* #undef HAVE_WCHAR_H */

/* Define to 1 if you have the `wcsicmp' function. */
/* #undef HAVE_WCSICMP */

/* Define to 1 if you have the `wcslwr' function. */
/* #undef HAVE_WCSLWR */

/* Define to 1 if you have the `wcsnicmp' function. */
/* #undef HAVE_WCSNICMP */

/* Define to 1 if you have the `wcsrtombs' function. */
/* #undef HAVE_WCSRTOMBS */

/* Define to 1 if you have the `wcstombs' function. */
/* #undef HAVE_WCSTOMBS */

/* Define to 1 if you have the `wcsupr' function. */
/* #undef HAVE_WCSUPR */

/* Define to 1 if you have the <wctype.h> header file. */
/* #undef HAVE_WCTYPE_H */

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define to 1 if you have to use const char* with iconv, to 0 if you must use
   char*. */
#define ICONV_USES_CONST_POINTER 

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */


/* #undef X3DJSONLD_USE */

/* Name of package */
#define PACKAGE "x3djsonld"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "yottzumm@gmail.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "x3djsonld"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "x3djsonld 1.0.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "x3djsonld"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://github.com/X3DJSONLD/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.0.0"

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 

/* The size of `wchar_t', as computed by sizeof. */
#define SIZEOF_WCHAR_T 

/* The size of `__int64', as computed by sizeof. */
#define SIZEOF___INT64 

/* Version number of package */
#define VERSION "1.0.0"

/* Define to empty if `const' does not conform to ANSI C. */
#if !
#define const
#endif

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#if !
#if 
#define inline 
#else
#define inline
#endif
#endif
#endif

/* Define to empty if the keyword `volatile' does not work. Warning: valid
code using `volatile' can become incorrect without. Disable with care. */
#if !
#define volatile
#endif
