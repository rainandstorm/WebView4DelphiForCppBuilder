//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include <System.IOUtils.hpp>
#include <process.h>
#include <thread>
#include <chrono>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "uWVBrowser"
#pragma link "uWVBrowserBase"
#pragma link "uWVWinControl"
#pragma link "uWVWindowParent"
#pragma resource "*.dfm"
TForm3* Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------

void __fastcall TForm3::WVBrowser1AfterCreated(TObject* Sender)
{
    WVWindowParent1->UpdateSize();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormShow(TObject* Sender)
{
    if (GlobalWebView2Loader->Initialized)
        WVBrowser1->CreateBrowser(
            (Winapi::Windows::THandle)WVWindowParent1->Handle);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormCreate(TObject* Sender)
{
    // Initialize WebView4Delphi loader

	GlobalWebView2Loader = new TWVLoader(NULL);
	GlobalWebView2Loader->LoaderDllPath =
		ExtractFileDir(Application->ExeName) + "\\WebView2Loader.dll";
    GlobalWebView2Loader->UserDataFolder =
        ExtractFileDir(Application->ExeName) + "\\CustomCache";
    GlobalWebView2Loader->RemoteDebuggingPort = 9999;
	GlobalWebView2Loader->RemoteAllowOrigins = "*";

	// 开启扩展支持
	GlobalWebView2Loader->AreBrowserExtensionsEnabled = true;

    GlobalWebView2Loader->ProxySettings->Server = L"http://127.0.0.1:10809";
    GlobalWebView2Loader->ProxySettings->NoProxyServer = false;
    GlobalWebView2Loader->ProxySettings->AutoDetect = false;

	GlobalWebView2Loader->StartWebView2();

	String extensionPath =
	   ExtractFileDir(Application->ExeName) + "\\edgeextensions\\ophjlpahpchlmihnnnihgmmeilfjmjjc\\3.7.1_0";
    if (TDirectory::Exists(extensionPath)) {
		WVBrowser1->AddBrowserExtension(extensionPath);
		WVBrowser1->DefaultURL =
			"chrome-extension://ophjlpahpchlmihnnnihgmmeilfjmjjc/index.html";
	}

	WVBrowser1->DefaultURL =
			"file:///D:\\Documents\\cppbuilder\\test2\\Win64\\Release\\index.html";

}
//---------------------------------------------------------------------------

void __fastcall TForm3::WVBrowser1WebMessageReceived(TObject *Sender, ICoreWebView2 * const aWebView,
          ICoreWebView2WebMessageReceivedEventArgs * const aArgs)

{


	System::WideChar *jsonStr = nullptr;
	aArgs->TryGetWebMessageAsString(jsonStr);
	String msg=jsonStr ;

	ShowMessage("收到网页消息: " + msg);
}
//---------------------------------------------------------------------------

