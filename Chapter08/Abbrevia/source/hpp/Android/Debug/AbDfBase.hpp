﻿// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbDfBase.pas' rev: 31.00 (Android)

#ifndef AbdfbaseHPP
#define AbdfbaseHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abdfbase
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbDeflateHelper;
class DELPHICLASS TAbLogger;
class DELPHICLASS TAbNodeManager;
class DELPHICLASS EAbAbortProgress;
class DELPHICLASS EAbPartSizedInflate;
class DELPHICLASS EAbInflatePasswordError;
class DELPHICLASS EAbInternalInflateError;
class DELPHICLASS EAbInflateError;
class DELPHICLASS EAbInternalDeflateError;
class DELPHICLASS EAbDeflateError;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<int, 536870911> TAbDfIntegerList;

typedef TAbDfIntegerList *PAbDfIntegerList;

typedef void __fastcall (__closure *TAbProgressStep)(int aPercentDone);

class PASCALIMPLEMENTATION TAbDeflateHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FAmpleLength;
	int FChainLength;
	System::UnicodeString FLogFile;
	int FMaxLazy;
	TAbProgressStep FOnProgressStep;
	int FOptions;
	__int64 FPartSize;
	__int64 FSizeCompressed;
	__int64 FSizeNormal;
	__int64 FStreamSize;
	int FWindowSize;
	System::WideChar FZipOption;
	
protected:
	void __fastcall dhSetAmpleLength(int aValue);
	void __fastcall dhSetChainLength(int aValue);
	void __fastcall dhSetLogFile(const System::UnicodeString aValue);
	void __fastcall dhSetMaxLazy(int aValue);
	void __fastcall dhSetOnProgressStep(TAbProgressStep aValue);
	void __fastcall dhSetOptions(int aValue);
	void __fastcall dhSetWindowSize(int aValue);
	void __fastcall dhSetZipOption(System::WideChar aValue);
	
public:
	__fastcall TAbDeflateHelper(void);
	void __fastcall Assign(TAbDeflateHelper* aHelper);
	__property int AmpleLength = {read=FAmpleLength, write=dhSetAmpleLength, nodefault};
	__property int ChainLength = {read=FChainLength, write=dhSetChainLength, nodefault};
	__property System::UnicodeString LogFile = {read=FLogFile, write=dhSetLogFile};
	__property int MaxLazyLength = {read=FMaxLazy, write=dhSetMaxLazy, nodefault};
	__property int Options = {read=FOptions, write=dhSetOptions, nodefault};
	__property __int64 PartialSize = {read=FPartSize, write=FPartSize};
	__property System::WideChar PKZipOption = {read=FZipOption, write=dhSetZipOption, nodefault};
	__property __int64 StreamSize = {read=FStreamSize, write=FStreamSize};
	__property int WindowSize = {read=FWindowSize, write=dhSetWindowSize, nodefault};
	__property __int64 CompressedSize = {read=FSizeCompressed, write=FSizeCompressed};
	__property __int64 NormalSize = {read=FSizeNormal, write=FSizeNormal};
	__property TAbProgressStep OnProgressStep = {read=FOnProgressStep, write=dhSetOnProgressStep};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAbDeflateHelper(void) { }
	
};


enum DECLSPEC_DENUM TAbLineDelimiter : unsigned char { ldCRLF, ldLF };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbLogger : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	System::Byte *FBuffer;
	System::Byte *FCurPos;
	TAbLineDelimiter FLineDelim;
	System::Classes::TFileStream* FStream;
	
protected:
	bool __fastcall logWriteBuffer(void);
	
public:
	__fastcall TAbLogger(const System::UnicodeString aLogName);
	__fastcall virtual ~TAbLogger(void);
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	void __fastcall WriteLine(const System::UnicodeString S);
	void __fastcall WriteStr(const System::UnicodeString S);
	__property TAbLineDelimiter LineDelimiter = {read=FLineDelim, write=FLineDelim, nodefault};
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::TArray__1<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbNodeManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *FFreeList;
	unsigned FNodeSize;
	unsigned FNodesPerPage;
	void *FPageHead;
	unsigned FPageSize;
	
protected:
	void * __fastcall nmAllocNewPage(void);
	
public:
	__fastcall TAbNodeManager(unsigned aNodeSize);
	__fastcall virtual ~TAbNodeManager(void);
	void * __fastcall AllocNode(void);
	void * __fastcall AllocNodeClear(void);
	void __fastcall FreeNode(void * aNode);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbAbortProgress : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbAbortProgress(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbAbortProgress(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbAbortProgress(System::PResStringRec ResStringRec) : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbAbortProgress(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbAbortProgress(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbAbortProgress(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbAbortProgress(System::PResStringRec ResStringRec, int AHelpContext) : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbAbortProgress(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbAbortProgress(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbPartSizedInflate : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbPartSizedInflate(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbPartSizedInflate(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbPartSizedInflate(System::PResStringRec ResStringRec) : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbPartSizedInflate(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbPartSizedInflate(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbPartSizedInflate(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbPartSizedInflate(System::PResStringRec ResStringRec, int AHelpContext) : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbPartSizedInflate(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbPartSizedInflate(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbInflatePasswordError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbInflatePasswordError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbInflatePasswordError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbInflatePasswordError(System::PResStringRec ResStringRec) : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInflatePasswordError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbInflatePasswordError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbInflatePasswordError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInflatePasswordError(System::PResStringRec ResStringRec, int AHelpContext) : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInflatePasswordError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbInflatePasswordError(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbInternalInflateError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbInternalInflateError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbInternalInflateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbInternalInflateError(System::PResStringRec ResStringRec) : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInternalInflateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbInternalInflateError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbInternalInflateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInternalInflateError(System::PResStringRec ResStringRec, int AHelpContext) : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInternalInflateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbInternalInflateError(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbInflateError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	__fastcall EAbInflateError(const System::UnicodeString aMsg);
	__fastcall EAbInflateError(const System::UnicodeString aMsg, const System::UnicodeString aErrorMsg);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbInflateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbInflateError(System::PResStringRec ResStringRec) : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInflateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbInflateError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbInflateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInflateError(System::PResStringRec ResStringRec, int AHelpContext) : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInflateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbInflateError(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbInternalDeflateError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbInternalDeflateError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbInternalDeflateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbInternalDeflateError(System::PResStringRec ResStringRec) : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInternalDeflateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbInternalDeflateError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbInternalDeflateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInternalDeflateError(System::PResStringRec ResStringRec, int AHelpContext) : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInternalDeflateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbInternalDeflateError(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbDeflateError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	__fastcall EAbDeflateError(const System::UnicodeString aMsg);
	__fastcall EAbDeflateError(const System::UnicodeString aMsg, const System::UnicodeString aErrorMsg);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbDeflateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbDeflateError(System::PResStringRec ResStringRec) : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbDeflateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbDeflateError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbDeflateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbDeflateError(System::PResStringRec ResStringRec, int AHelpContext) : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbDeflateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbDeflateError(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static constexpr System::Int8 dfc_CodeLenCodeLength = System::Int8(0x7);
static constexpr System::Int8 dfc_LitDistCodeLength = System::Int8(0xf);
static constexpr System::Int8 dfc_MaxCodeLength = System::Int8(0xf);
static constexpr System::Word dfc_MaxMatchLen = System::Word(0x102);
static constexpr int dfc_MaxMatchLen64 = int(0x10000);
static constexpr System::Word dfc_LitExtraOffset = System::Word(0x101);
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 31> dfc_LitExtraBits;
static constexpr System::Int8 dfc_DistExtraOffset = System::Int8(0x0);
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 32> dfc_DistExtraBits;
extern DELPHI_PACKAGE System::StaticArray<System::Word, 29> dfc_LengthBase;
extern DELPHI_PACKAGE System::StaticArray<System::Word, 32> dfc_DistanceBase;
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 19> dfc_CodeLengthIndex;
static constexpr System::Int8 dfc_CanUseStored = System::Int8(0x1);
static constexpr System::Int8 dfc_CanUseStatic = System::Int8(0x2);
static constexpr System::Int8 dfc_CanUseDynamic = System::Int8(0x4);
static constexpr System::Int8 dfc_UseLazyMatch = System::Int8(0x8);
static constexpr System::Int8 dfc_UseDeflate64 = System::Int8(0x10);
static constexpr System::Int8 dfc_UseAdler32 = System::Int8(0x20);
static constexpr System::Int8 dfc_CanUseHuffman = System::Int8(0x6);
static constexpr int dfc_TestOnly = int(0x40000000);
extern DELPHI_PACKAGE void __fastcall AbUpdateAdlerBuffer(int &aAdler, void *aBuffer, int aCount);
extern DELPHI_PACKAGE void __fastcall AbUpdateCRCBuffer(int &aCRC, void *aBuffer, int aCount);
extern DELPHI_PACKAGE void __fastcall AbortProgress(void);
}	/* namespace Abdfbase */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABDFBASE)
using namespace Abdfbase;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbdfbaseHPP
