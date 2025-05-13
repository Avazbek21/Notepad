//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
    TPageControl *AA;
    TTabSheet *TabSheet1;
    TTabSheet *TabSheet2;
    TTabSheet *TabSheet3;
    TTabSheet *TabSheet4;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    TTabSheet *TabSheet5;
    TLabel *Label6;
    TLabel *Label8;
    TLabel *Label7;
    TLabel *Label9;
    TLabel *Label10;
    TLabel *Label11;
    THotKey *HotKey1;
    THotKey *HotKey2;
    THotKey *HotKey3;
    THotKey *HotKey4;
    THotKey *HotKey5;
    THotKey *HotKey6;
    THotKey *HotKey7;
    THotKey *HotKey8;
    THotKey *HotKey9;
    THotKey *HotKey10;
    THotKey *HotKey11;
    TBitBtn *BitBtn2;
    TBitBtn *BitBtn1;
    TTimer *Timer1;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall HotKey1Change(TObject *Sender);
    void __fastcall HotKey2Change(TObject *Sender);
    void __fastcall HotKey3Change(TObject *Sender);
    void __fastcall HotKey4Change(TObject *Sender);
    void __fastcall HotKey5Change(TObject *Sender);
    void __fastcall HotKey6Change(TObject *Sender);
    void __fastcall HotKey7Change(TObject *Sender);
    void __fastcall HotKey8Change(TObject *Sender);
    void __fastcall HotKey9Change(TObject *Sender);
    void __fastcall HotKey10Change(TObject *Sender);
    void __fastcall HotKey11Change(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
