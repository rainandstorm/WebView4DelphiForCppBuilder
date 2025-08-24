//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "uWVBrowser.hpp"
#include "uWVBrowserBase.hpp"
#include "uWVWinControl.hpp"
#include "uWVWindowParent.hpp"
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TWVBrowser *WVBrowser1;
	TWVWindowParent *WVWindowParent1;
	void __fastcall WVBrowser1AfterCreated(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall WVBrowser1WebMessageReceived(TObject *Sender, ICoreWebView2 * const aWebView,
          ICoreWebView2WebMessageReceivedEventArgs * const aArgs);






private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
