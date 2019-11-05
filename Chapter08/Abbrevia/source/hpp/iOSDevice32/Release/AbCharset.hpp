﻿// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbCharset.pas' rev: 31.00 (iOS)

#ifndef AbcharsetHPP
#define AbcharsetHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abcharset
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAbCharSet : unsigned char { csASCII, csANSI, csUTF8 };

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TAbCharSet __fastcall AbDetectCharSet(const System::TArray__1<System::Byte> aValue);
extern DELPHI_PACKAGE bool __fastcall AbIsOEM(const System::TArray__1<System::Byte> aValue);
extern DELPHI_PACKAGE bool __fastcall AbSysCharSetIsUTF8(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall AbRawBytesToString(const System::TArray__1<System::Byte> aValue);
extern DELPHI_PACKAGE System::TArray__1<System::Byte> __fastcall AbStringToUnixBytes(const System::UnicodeString aValue);
}	/* namespace Abcharset */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABCHARSET)
using namespace Abcharset;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbcharsetHPP
