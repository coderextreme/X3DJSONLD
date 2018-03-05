/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * $Id: X3djsonld_autoconf_config.hpp.in 834826 2009-11-11 10:03:53Z borisk $
 */

//
// There are two primary X3djsonld configuration header files:
//
//	X3djsonld_autoconf_config.hpp
//
//      For configuration of items that must be accessable
//	through public headers. This file has limited information
//	and carefully works to avoid collision of macro names, etc.
//
//	This file is included by X3djsonldDefs.h. In the event
//	of a non-configured platform, a similar header specific
//	to the platform will be included instead.
//
//	config.h
//
//      Generalized cmake-generated header file, with much more
//	information, used to supply configuration information
//	for use in implementation files.
//
// For CMake-based builds, this header is configured by cmake from the
// .cmake.in template file of the same name.


#ifndef X3DJSONLD_AUTOCONFIG_CONFIG_HPP
#define X3DJSONLD_AUTOCONFIG_CONFIG_HPP

// ---------------------------------------------------------------------------
//  These defines are set by cmake as appropriate for the platform.
// ---------------------------------------------------------------------------
#define X3DJSONLD_AUTOCONF 1
/* #undef X3DJSONLD_HAVE_SYS_TYPES_H */
/* #undef X3DJSONLD_HAVE_CSTDINT */
/* #undef X3DJSONLD_HAVE_STDINT_H */
/* #undef X3DJSONLD_HAVE_INTTYPES_H */
/* #undef X3DJSONLD_HAVE_INTRIN_H */
/* #undef X3DJSONLD_HAVE_EMMINTRIN_H */
/* #undef X3DJSONLD_INCLUDE_WCHAR_H */

#define X3DJSONLD_S16BIT_INT 
#define X3DJSONLD_S32BIT_INT 
#define X3DJSONLD_S64BIT_INT 
#define X3DJSONLD_U16BIT_INT 
#define X3DJSONLD_U32BIT_INT 
#define X3DJSONLD_U64BIT_INT 
#define X3DJSONLD_XMLCH_T 
#define X3DJSONLD_SIZE_T 
#define X3DJSONLD_SSIZE_T 

/* #undef X3DJSONLD_HAS_CPP_NAMESPACE */
/* #undef X3DJSONLD_STD_NAMESPACE */
/* #undef X3DJSONLD_NEW_IOSTREAMS */
/* #undef X3DJSONLD_NO_NATIVE_BOOL */
/* #undef X3DJSONLD_LSTRSUPPORT */

/* #undef X3DJSONLD_HAVE_CPUID_INTRINSIC */
/* #undef X3DJSONLD_HAVE_SSE2_INTRINSIC */
/* #undef X3DJSONLD_HAVE_GETCPUID */

/* #undef X3DJSONLD_NO_MATCHING_DELETE_OPERATOR */

/* #undef X3DJSONLD_DLL_EXPORT */
/* #undef X3DJSONLD_STATIC_LIBRARY */
#define X3DJSONLD_PLATFORM_EXPORT 
#define X3DJSONLD_PLATFORM_IMPORT 
#ifdef X3DJSONLD_DLL_EXPORT
#  define DLL_EXPORT
#endif

// ---------------------------------------------------------------------------
//  Include standard headers, if available, that we may rely on below.
// ---------------------------------------------------------------------------
#if defined(__cplusplus) && defined(HAVE_CSTDINT)
#  include <cstdint>
#endif
#if X3DJSONLD_HAVE_STDINT_H
#  include <stdint.h>
#endif
#if X3DJSONLD_HAVE_INTTYPES_H
#  include <inttypes.h>
#endif
#if X3DJSONLD_HAVE_SYS_TYPES_H
#  include <sys/types.h>
#endif
#if X3DJSONLD_INCLUDE_WCHAR_H
#  include <wchar.h>
#endif

// ---------------------------------------------------------------------------
//  XMLSize_t is the unsigned integral type.
// ---------------------------------------------------------------------------
typedef X3DJSONLD_SIZE_T				XMLSize_t;
typedef X3DJSONLD_SSIZE_T				XMLSSize_t;

#define X3DJSONLD_SIZE_MAX 
#define X3DJSONLD_SSIZE_MAX 

// ---------------------------------------------------------------------------
//  Define our version of the XML character
// ---------------------------------------------------------------------------
typedef X3DJSONLD_XMLCH_T				XMLCh;

// ---------------------------------------------------------------------------
//  Define unsigned 16, 32, and 64 bit integers
// ---------------------------------------------------------------------------
typedef X3DJSONLD_U16BIT_INT			XMLUInt16;
typedef X3DJSONLD_U32BIT_INT			XMLUInt32;
typedef X3DJSONLD_U64BIT_INT			XMLUInt64;

// ---------------------------------------------------------------------------
//  Define signed 16, 32, and 64 bit integers
// ---------------------------------------------------------------------------
typedef X3DJSONLD_S16BIT_INT			XMLInt16;
typedef X3DJSONLD_S32BIT_INT			XMLInt32;
typedef X3DJSONLD_S64BIT_INT			XMLInt64;

// ---------------------------------------------------------------------------
//  XMLFilePos is the type used to represent a file position.
// ---------------------------------------------------------------------------
typedef XMLUInt64			        XMLFilePos;

// ---------------------------------------------------------------------------
//  XMLFileLoc is the type used to represent a file location (line/column).
// ---------------------------------------------------------------------------
typedef XMLUInt64			        XMLFileLoc;

// ---------------------------------------------------------------------------
//  Force on the X3djsonld debug token if it is on in the build environment
// ---------------------------------------------------------------------------
#if defined(_DEBUG)
#define X3DJSONLD_DEBUG
#endif

#endif
