﻿// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbCrtl.pas' rev: 31.00 (Windows)

#ifndef AbcrtlHPP
#define AbcrtlHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abcrtl
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef NativeInt size_t;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __turboFloat;
extern DELPHI_PACKAGE int _fltused;
extern "C" void __cdecl abs(void);
extern DELPHI_PACKAGE void __cdecl _llshl(void);
extern DELPHI_PACKAGE void __cdecl _llushr(void);
extern "C" int __cdecl memcmp(void * s1, void * s2, unsigned numBytes);
extern "C" System::WideChar * __cdecl wcscpy(System::WideChar * strDestination, System::WideChar * strSource);
extern DELPHI_PACKAGE void __cdecl ___cpuid(System::PInteger CPUInfo, int InfoType);
extern DELPHI_PACKAGE void __cdecl __C_specific_handler(void);
extern DELPHI_PACKAGE int __cdecl isdigit(int ch);
extern DELPHI_PACKAGE void * __cdecl memcpy(void * Dest, void * Src, NativeInt Count);
extern DELPHI_PACKAGE void * __cdecl memmove(void * Dest, void * Src, NativeInt Count);
extern DELPHI_PACKAGE void * __cdecl memset(void * Dest, System::Byte Value, NativeInt Count);
extern DELPHI_PACKAGE int __cdecl strlen(char * P);
extern DELPHI_PACKAGE char * __cdecl strcpy(char * Des, char * Src);
extern DELPHI_PACKAGE char * __cdecl strncpy(char * Des, char * Src, int MaxLen);
extern DELPHI_PACKAGE void * __cdecl malloc(int Size);
extern DELPHI_PACKAGE void __cdecl free(void * Ptr);
extern DELPHI_PACKAGE void * __cdecl realloc(void * Ptr, int Size);
extern DELPHI_PACKAGE NativeUInt __cdecl _beginthreadex(void * security, unsigned stack_size, void * start_address, void * arglist, unsigned initflag, unsigned &thrdaddr);
extern DELPHI_PACKAGE int __cdecl _ftol(const double AValue);
extern DELPHI_PACKAGE int __cdecl sprintf(System::WideChar * S, const System::WideChar * Format);
}	/* namespace Abcrtl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABCRTL)
using namespace Abcrtl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbcrtlHPP
