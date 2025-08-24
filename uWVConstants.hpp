// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'uWVConstants.pas' rev: 36.00 (Windows)

#ifndef UwvconstantsHPP
#define UwvconstantsHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Uwvconstants
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
static _DELPHI_CONST System::Int8 WEBVIEW2LOADERLIB_VERSION_MAJOR = System::Int8(0x1);
static _DELPHI_CONST System::Int8 WEBVIEW2LOADERLIB_VERSION_MINOR = System::Int8(0x0);
static _DELPHI_CONST System::Word WEBVIEW2LOADERLIB_VERSION_RELEASE = System::Word(0xd4d);
static _DELPHI_CONST System::Int8 WEBVIEW2LOADERLIB_VERSION_BUILD = System::Int8(0x4e);
static _DELPHI_CONST System::Byte CHROMIUM_VERSION_MAJOR = System::Byte(0x8b);
static _DELPHI_CONST System::Int8 CHROMIUM_VERSION_MINOR = System::Int8(0x0);
static _DELPHI_CONST System::Word CHROMIUM_VERSION_RELEASE = System::Word(0xd4d);
static _DELPHI_CONST System::Int8 CHROMIUM_VERSION_BUILD = System::Int8(0x4e);
#define CRLF L"\r\n"

static _DELPHI_CONST System::Word WV2_IMAGE_FILE_MACHINE_I386 = System::Word(0x14c);
static _DELPHI_CONST System::Word WV2_IMAGE_FILE_MACHINE_AMD64 = System::Word(0x8664);
static _DELPHI_CONST System::Int8 ZOOM_STEP_25 = System::Int8(0x0);
static _DELPHI_CONST System::Int8 ZOOM_STEP_33 = System::Int8(0x1);
static _DELPHI_CONST System::Int8 ZOOM_STEP_50 = System::Int8(0x2);
static _DELPHI_CONST System::Int8 ZOOM_STEP_67 = System::Int8(0x3);
static _DELPHI_CONST System::Int8 ZOOM_STEP_75 = System::Int8(0x4);
static _DELPHI_CONST System::Int8 ZOOM_STEP_90 = System::Int8(0x5);
static _DELPHI_CONST System::Int8 ZOOM_STEP_100 = System::Int8(0x6);
static _DELPHI_CONST System::Int8 ZOOM_STEP_110 = System::Int8(0x7);
static _DELPHI_CONST System::Int8 ZOOM_STEP_125 = System::Int8(0x8);
static _DELPHI_CONST System::Int8 ZOOM_STEP_150 = System::Int8(0x9);
static _DELPHI_CONST System::Int8 ZOOM_STEP_175 = System::Int8(0xa);
static _DELPHI_CONST System::Int8 ZOOM_STEP_200 = System::Int8(0xb);
static _DELPHI_CONST System::Int8 ZOOM_STEP_250 = System::Int8(0xc);
static _DELPHI_CONST System::Int8 ZOOM_STEP_300 = System::Int8(0xd);
static _DELPHI_CONST System::Int8 ZOOM_STEP_400 = System::Int8(0xe);
static _DELPHI_CONST System::Int8 ZOOM_STEP_500 = System::Int8(0xf);
static _DELPHI_CONST System::Int8 ZOOM_STEP_UNK = System::Int8(0x10);
static _DELPHI_CONST System::Int8 ZOOM_STEP_MIN = System::Int8(0x0);
static _DELPHI_CONST System::Int8 ZOOM_STEP_MAX = System::Int8(0xf);
static _DELPHI_CONST System::Int8 ZOOM_STEP_DEF = System::Int8(0x6);
static _DELPHI_CONST System::Int8 ZOOM_PCT_DELTA = System::Int8(0x5);
extern DELPHI_PACKAGE System::StaticArray<int, 16> ZoomStepValues;
#define URI_ABOUTBLANK L"about:blank"
static _DELPHI_CONST System::Word WEBVIEW4DELPHI_JS_FIRST_ID = System::Word(0x2710);
static _DELPHI_CONST System::Word WEBVIEW4DELPHI_JS_RETRIEVEHTMLJOB_ID = System::Word(0x2710);
static _DELPHI_CONST System::Word WEBVIEW4DELPHI_JS_RETRIEVETEXTJOB_ID = System::Word(0x2711);
static _DELPHI_CONST System::Word WEBVIEW4DELPHI_JS_LAST_ID = System::Word(0x2774);
static _DELPHI_CONST System::Word WEBVIEW4DELPHI_DEVTOOLS_FIRST_ID = System::Word(0x2710);
static _DELPHI_CONST System::Word WEBVIEW4DELPHI_DEVTOOLS_RETRIEVEMHTML_ID = System::Word(0x2710);
static _DELPHI_CONST System::Word WEBVIEW4DELPHI_DEVTOOLS_CLEARBROWSERCACHE_ID = System::Word(0x2711);
static _DELPHI_CONST System::Word WEBVIEW4DELPHI_DEVTOOLS_CLEARDATAFORORIGIN_ID = System::Word(0x2712);
static _DELPHI_CONST System::Word WEBVIEW4DELPHI_DEVTOOLS_EMULATENETWORKCONDITIONS_ID = System::Word(0x2713);
static _DELPHI_CONST System::Word WEBVIEW4DELPHI_DEVTOOLS_SETIGNORECERTIFICATEERRORS_ID = System::Word(0x2714);
static _DELPHI_CONST System::Word WEBVIEW4DELPHI_DEVTOOLS_SIMULATEKEYEVENT_ID = System::Word(0x2715);
static _DELPHI_CONST System::Word WEBVIEW4DELPHI_DEVTOOLS_REFRESH_ID = System::Word(0x2716);
static _DELPHI_CONST System::Word WEBVIEW4DELPHI_DEVTOOLS_LAST_ID = System::Word(0x2774);
static _DELPHI_CONST System::Int8 WEBVIEW4DELPHI_PRINT_PAGESPERSIDE_1 = System::Int8(0x1);
static _DELPHI_CONST System::Int8 WEBVIEW4DELPHI_PRINT_PAGESPERSIDE_2 = System::Int8(0x2);
static _DELPHI_CONST System::Int8 WEBVIEW4DELPHI_PRINT_PAGESPERSIDE_4 = System::Int8(0x4);
static _DELPHI_CONST System::Int8 WEBVIEW4DELPHI_PRINT_PAGESPERSIDE_6 = System::Int8(0x6);
static _DELPHI_CONST System::Int8 WEBVIEW4DELPHI_PRINT_PAGESPERSIDE_9 = System::Int8(0x9);
static _DELPHI_CONST System::Int8 WEBVIEW4DELPHI_PRINT_PAGESPERSIDE_16 = System::Int8(0x10);
static _DELPHI_CONST System::Int8 WEBVIEW4DELPHI_PRINT_PAGESPERSIDE_DEFAULT = System::Int8(0x1);
#define WEBVIEW4DELPHI_PRINT_PAGESPERSIDE_VALID (System::Set<System::Byte, 0, 255>() << 0x1 << 0x2 << 0x4 << 0x6 << 0x9 << 0x10 )
static _DELPHI_CONST System::Int8 WEBVIEW4DELPHI_PRINT_COPIES_DEFAULT = System::Int8(0x1);
static _DELPHI_CONST System::Int8 WEBVIEW4DELPHI_INVALID_FRAMEID = System::Int8(0x0);



// 修复 Delphi 转换的常量定义

#ifndef USER_DEFAULT_SCREEN_DPI
const int USER_DEFAULT_SCREEN_DPI = 96;
#endif

#ifndef HWND_MESSAGE
const System::THandle HWND_MESSAGE = -3;
#endif



#define WV_URLS_URL L"edge://edge-urls"
#define WV_FLAGS_URL L"edge://flags"
#define WV_DOWNLOADS_URL L"edge://downloads"
#define WV_EXTENSIONS_URL L"edge://extensions"
#define WV_CRASHES_URL L"edge://crashes"
}	/* namespace Uwvconstants */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UWVCONSTANTS)
using namespace Uwvconstants;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UwvconstantsHPP
