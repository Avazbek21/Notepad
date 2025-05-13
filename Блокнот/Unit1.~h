//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TNotepad : public TForm
{
__published:	// IDE-managed Components
    TMemo *Memo1;
    TMainMenu *MainMenu1;
    TMenuItem *BFile;
    TMenuItem *BCorrection;
    TMenuItem *BFormat;
    TMenuItem *BHelp;
    TMenuItem *BCreate;
    TMenuItem *BOpen;
    TMenuItem *BSave;
    TMenuItem *BSaveas;
    TMenuItem *BExit;
    TMenuItem *BFont;
    TOpenDialog *OpenDialog1;
    TSaveDialog *SaveDialog1;
    TFontDialog *FontDialog1;
    TMenuItem *BNow;
    TMenuItem *BAboutprogram;
    TMenuItem *BWordwrap;
    TPanel *StringState;
    TComboBox *CSizeFont;
    TComboBox *CNameFont;
    TMenuItem *N4;
    TLabel *CapStrings;
    TLabel *CountString;
    TLabel *CapSimbols;
    TLabel *CountSimbols;
    TLabel *CapWords;
    TLabel *CountWords;
    TMenuItem *BView;
    TMenuItem *BStringstate;
    TTimer *Timer1;
    TTimer *Timer2;
    TMenuItem *BSettinghotkeys;
    TMenuItem *N1;
    TSpeedButton *SpeedCreate;
    TSpeedButton *SpeedOpen;
    TSpeedButton *SpeedSave;
    TSpeedButton *SpeedSaveas;
    TMenuItem *BFixstate;
    void __fastcall BExitClick(TObject *Sender);
    void __fastcall BNowClick(TObject *Sender);
    void __fastcall BFontClick(TObject *Sender);
    void __fastcall BCreateClick(TObject *Sender);
    void __fastcall BAboutprogramClick(TObject *Sender);
    void __fastcall BWordwrapClick(TObject *Sender);
    void __fastcall BOpenClick(TObject *Sender);
    void __fastcall BSaveClick(TObject *Sender);
    void __fastcall BSaveasClick(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall CSizeFontClick(TObject *Sender);
    void __fastcall FormResize(TObject *Sender);
    void __fastcall CNameFontClick(TObject *Sender);
    void __fastcall Memo1Change(TObject *Sender);
    void __fastcall BStringstateClick(TObject *Sender);
    void __fastcall BSettinghotkeysClick(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall BFixstateClick(TObject *Sender);
    void __fastcall StringStateMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
    void __fastcall StringStateMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
    void __fastcall StringStateMouseUp(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
    void __fastcall SpeedCreateClick(TObject *Sender);
    void __fastcall SpeedSaveClick(TObject *Sender);
    void __fastcall SpeedOpenClick(TObject *Sender);
    void __fastcall SpeedSaveasClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TNotepad(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TNotepad *Notepad;
//---------------------------------------------------------------------------
#endif
