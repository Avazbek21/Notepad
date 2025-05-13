//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include <IniFiles.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
bool j;
TIniFile *Ini=new TIniFile("D:/HotKeys/HotKeys.ini");
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm3::FormShow(TObject *Sender)
{                  //берутся значение горячих клавиш кнопок:
 HotKey1->HotKey=Notepad->BCreate->ShortCut;         // "Создать"
 HotKey2->HotKey=Notepad->BOpen->ShortCut;           // "Открыть"
 HotKey3->HotKey=Notepad->BSave->ShortCut;           // "Сохранить"
 HotKey4->HotKey=Notepad->BSaveas->ShortCut;         // "Сохранить как..."
 HotKey5->HotKey=Notepad->BSettinghotkeys->ShortCut; // "Настройка горячих клавиш"
 HotKey6->HotKey=Notepad->BExit->ShortCut;           // "Выход"
 HotKey7->HotKey=Notepad->BNow->ShortCut;            // "Время и дата"
 HotKey8->HotKey=Notepad->BWordwrap->ShortCut;       // "Перенос по словам"
 HotKey9->HotKey=Notepad->BFont->ShortCut;           // "Шрифт"
 HotKey10->HotKey=Notepad->BStringstate->ShortCut;   // "Строка состояния"
 HotKey11->HotKey=Notepad->BAboutprogram->ShortCut;  // "О программе"
                  // для изменения.
}
//---------------------------------------------------------------------------

void __fastcall TForm3::HotKey1Change(TObject *Sender)
{
 if(HotKey1->HotKey==HotKey2->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey2->HotKey=NULL;
     else
         HotKey1->HotKey=NULL;
 }else if(HotKey1->HotKey==HotKey3->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey3->HotKey=NULL;
     else
         HotKey1->HotKey=NULL;
 }else if(HotKey1->HotKey==HotKey4->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey4->HotKey=NULL;
     else
         HotKey1->HotKey=NULL;
 }else if(HotKey1->HotKey==HotKey5->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey5->HotKey=NULL;
     else
         HotKey1->HotKey=NULL;
 }else if(HotKey1->HotKey==HotKey6->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey6->HotKey=NULL;
     else
         HotKey1->HotKey=NULL;
 }else if(HotKey1->HotKey==HotKey7->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey7->HotKey=NULL;
     else
         HotKey1->HotKey=NULL;
 }else if(HotKey1->HotKey==HotKey8->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey8->HotKey=NULL;
     else
         HotKey1->HotKey=NULL;
 }else if(HotKey1->HotKey==HotKey9->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey9->HotKey=NULL;
     else
         HotKey1->HotKey=NULL;
 }else if(HotKey1->HotKey==HotKey10->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey10->HotKey=NULL;
     else
         HotKey1->HotKey=NULL;
 }else if(HotKey1->HotKey==HotKey11->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey11->HotKey=NULL;
     else
         HotKey1->HotKey=NULL;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm3::HotKey2Change(TObject *Sender)
{
 if(HotKey2->HotKey==HotKey1->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey1->HotKey=NULL;
     else
         HotKey2->HotKey=NULL;
 }else if(HotKey1->HotKey==HotKey3->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey3->HotKey=NULL;
     else
         HotKey2->HotKey=NULL;
 }else if(HotKey2->HotKey==HotKey4->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey4->HotKey=NULL;
     else
         HotKey2->HotKey=NULL;
 }else if(HotKey2->HotKey==HotKey5->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey5->HotKey=NULL;
     else
         HotKey2->HotKey=NULL;
 }else if(HotKey2->HotKey==HotKey6->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey6->HotKey=NULL;
     else
         HotKey2->HotKey=NULL;
 }else if(HotKey2->HotKey==HotKey7->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey7->HotKey=NULL;
     else
         HotKey2->HotKey=NULL;
 }else if(HotKey2->HotKey==HotKey8->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey8->HotKey=NULL;
     else
         HotKey2->HotKey=NULL;
 }else if(HotKey2->HotKey==HotKey9->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey9->HotKey=NULL;
     else
         HotKey2->HotKey=NULL;
 }else if(HotKey2->HotKey==HotKey10->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey10->HotKey=NULL;
     else
         HotKey2->HotKey=NULL;
 }else if(HotKey2->HotKey==HotKey11->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey11->HotKey=NULL;
     else
         HotKey2->HotKey=NULL;
 }    
}
//---------------------------------------------------------------------------

void __fastcall TForm3::HotKey3Change(TObject *Sender)
{
 if(HotKey3->HotKey==HotKey1->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey1->HotKey=NULL;
     else
         HotKey3->HotKey=NULL;
 }else if(HotKey3->HotKey==HotKey2->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey2->HotKey=NULL;
     else
         HotKey3->HotKey=NULL;
 }else if(HotKey3->HotKey==HotKey4->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey4->HotKey=NULL;
     else
         HotKey3->HotKey=NULL;
 }else if(HotKey3->HotKey==HotKey5->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey5->HotKey=NULL;
     else
         HotKey3->HotKey=NULL;
 }else if(HotKey3->HotKey==HotKey6->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey6->HotKey=NULL;
     else
         HotKey3->HotKey=NULL;
 }else if(HotKey3->HotKey==HotKey7->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey7->HotKey=NULL;
     else
         HotKey3->HotKey=NULL;
 }else if(HotKey3->HotKey==HotKey8->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey8->HotKey=NULL;
     else
         HotKey3->HotKey=NULL;
 }else if(HotKey3->HotKey==HotKey9->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey9->HotKey=NULL;
     else
         HotKey3->HotKey=NULL;
 }else if(HotKey3->HotKey==HotKey10->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey10->HotKey=NULL;
     else
         HotKey3->HotKey=NULL;
 }else if(HotKey3->HotKey==HotKey11->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey11->HotKey=NULL;
     else
         HotKey3->HotKey=NULL;
 }    
}
//---------------------------------------------------------------------------

void __fastcall TForm3::HotKey4Change(TObject *Sender)
{
 if(HotKey4->HotKey==HotKey1->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey1->HotKey=NULL;
     else
         HotKey4->HotKey=NULL;
 }else if(HotKey4->HotKey==HotKey2->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey2->HotKey=NULL;
     else
         HotKey4->HotKey=NULL;
 }else if(HotKey4->HotKey==HotKey3->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey3->HotKey=NULL;
     else
         HotKey4->HotKey=NULL;
 }else if(HotKey4->HotKey==HotKey5->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey5->HotKey=NULL;
     else
         HotKey4->HotKey=NULL;
 }else if(HotKey4->HotKey==HotKey6->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey6->HotKey=NULL;
     else
         HotKey4->HotKey=NULL;
 }else if(HotKey4->HotKey==HotKey7->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey7->HotKey=NULL;
     else
         HotKey4->HotKey=NULL;
 }else if(HotKey4->HotKey==HotKey8->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey8->HotKey=NULL;
     else
         HotKey4->HotKey=NULL;
 }else if(HotKey4->HotKey==HotKey9->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey9->HotKey=NULL;
     else
         HotKey4->HotKey=NULL;
 }else if(HotKey4->HotKey==HotKey10->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey10->HotKey=NULL;
     else
         HotKey4->HotKey=NULL;
 }else if(HotKey4->HotKey==HotKey11->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey11->HotKey=NULL;
     else
         HotKey4->HotKey=NULL;
 }    
}
//---------------------------------------------------------------------------

void __fastcall TForm3::HotKey5Change(TObject *Sender)
{
 if(HotKey5->HotKey==HotKey1->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey1->HotKey=NULL;
     else
         HotKey5->HotKey=NULL;
 }else if(HotKey5->HotKey==HotKey2->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey2->HotKey=NULL;
     else
         HotKey5->HotKey=NULL;
 }else if(HotKey5->HotKey==HotKey3->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey3->HotKey=NULL;
     else
         HotKey5->HotKey=NULL;
 }else if(HotKey5->HotKey==HotKey4->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey4->HotKey=NULL;
     else
         HotKey5->HotKey=NULL;
 }else if(HotKey5->HotKey==HotKey6->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey6->HotKey=NULL;
     else
         HotKey5->HotKey=NULL;
 }else if(HotKey5->HotKey==HotKey7->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey7->HotKey=NULL;
     else
         HotKey5->HotKey=NULL;
 }else if(HotKey5->HotKey==HotKey8->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey8->HotKey=NULL;
     else
         HotKey5->HotKey=NULL;
 }else if(HotKey5->HotKey==HotKey9->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey9->HotKey=NULL;
     else
         HotKey5->HotKey=NULL;
 }else if(HotKey5->HotKey==HotKey10->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey10->HotKey=NULL;
     else
         HotKey5->HotKey=NULL;
 }else if(HotKey5->HotKey==HotKey11->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey11->HotKey=NULL;
     else
         HotKey5->HotKey=NULL;
 }    
}
//---------------------------------------------------------------------------

void __fastcall TForm3::HotKey6Change(TObject *Sender)
{
 if(HotKey6->HotKey==HotKey1->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey1->HotKey=NULL;
     else
         HotKey1->HotKey=NULL;
 }else if(HotKey1->HotKey==HotKey2->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey2->HotKey=NULL;
     else
         HotKey1->HotKey=NULL;
 }else if(HotKey1->HotKey==HotKey3->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey3->HotKey=NULL;
     else
         HotKey6->HotKey=NULL;
 }else if(HotKey6->HotKey==HotKey4->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey4->HotKey=NULL;
     else
         HotKey6->HotKey=NULL;
 }else if(HotKey6->HotKey==HotKey5->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey5->HotKey=NULL;
     else
         HotKey6->HotKey=NULL;
 }else if(HotKey6->HotKey==HotKey7->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey7->HotKey=NULL;
     else
         HotKey6->HotKey=NULL;
 }else if(HotKey6->HotKey==HotKey8->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey8->HotKey=NULL;
     else
         HotKey6->HotKey=NULL;
 }else if(HotKey6->HotKey==HotKey9->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey9->HotKey=NULL;
     else
         HotKey6->HotKey=NULL;
 }else if(HotKey6->HotKey==HotKey10->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey10->HotKey=NULL;
     else
         HotKey6->HotKey=NULL;
 }else if(HotKey6->HotKey==HotKey11->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey11->HotKey=NULL;
     else
         HotKey6->HotKey=NULL;
 }    
}
//---------------------------------------------------------------------------

void __fastcall TForm3::HotKey7Change(TObject *Sender)
{
 if(HotKey7->HotKey==HotKey1->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey1->HotKey=NULL;
     else
         HotKey7->HotKey=NULL;
 }else if(HotKey7->HotKey==HotKey2->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey2->HotKey=NULL;
     else
         HotKey7->HotKey=NULL;
 }else if(HotKey7->HotKey==HotKey3->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey3->HotKey=NULL;
     else
         HotKey7->HotKey=NULL;
 }else if(HotKey7->HotKey==HotKey4->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey4->HotKey=NULL;
     else
         HotKey7->HotKey=NULL;
 }else if(HotKey7->HotKey==HotKey5->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey5->HotKey=NULL;
     else
         HotKey7->HotKey=NULL;
 }else if(HotKey7->HotKey==HotKey6->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey6->HotKey=NULL;
     else
         HotKey7->HotKey=NULL;
 }else if(HotKey7->HotKey==HotKey8->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey8->HotKey=NULL;
     else
         HotKey7->HotKey=NULL;
 }else if(HotKey7->HotKey==HotKey9->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey9->HotKey=NULL;
     else
         HotKey7->HotKey=NULL;
 }else if(HotKey7->HotKey==HotKey10->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey10->HotKey=NULL;
     else
         HotKey7->HotKey=NULL;
 }else if(HotKey7->HotKey==HotKey11->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey11->HotKey=NULL;
     else
         HotKey7->HotKey=NULL;
 }    
}
//---------------------------------------------------------------------------

void __fastcall TForm3::HotKey8Change(TObject *Sender)
{
 if(HotKey8->HotKey==HotKey1->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey1->HotKey=NULL;
     else
         HotKey8->HotKey=NULL;
 }else if(HotKey8->HotKey==HotKey2->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey2->HotKey=NULL;
     else
         HotKey8->HotKey=NULL;
 }else if(HotKey8->HotKey==HotKey3->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey3->HotKey=NULL;
     else
         HotKey8->HotKey=NULL;
 }else if(HotKey8->HotKey==HotKey4->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey4->HotKey=NULL;
     else
         HotKey8->HotKey=NULL;
 }else if(HotKey8->HotKey==HotKey5->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey5->HotKey=NULL;
     else
         HotKey8->HotKey=NULL;
 }else if(HotKey8->HotKey==HotKey6->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey6->HotKey=NULL;
     else
         HotKey8->HotKey=NULL;
 }else if(HotKey8->HotKey==HotKey7->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey7->HotKey=NULL;
     else
         HotKey8->HotKey=NULL;
 }else if(HotKey8->HotKey==HotKey9->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey9->HotKey=NULL;
     else
         HotKey8->HotKey=NULL;
 }else if(HotKey8->HotKey==HotKey10->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey10->HotKey=NULL;
     else
         HotKey8->HotKey=NULL;
 }else if(HotKey8->HotKey==HotKey11->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey11->HotKey=NULL;
     else
         HotKey8->HotKey=NULL;
 }    
}
//---------------------------------------------------------------------------

void __fastcall TForm3::HotKey9Change(TObject *Sender)
{
 if(HotKey9->HotKey==HotKey1->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey1->HotKey=NULL;
     else
         HotKey9->HotKey=NULL;
 }else if(HotKey9->HotKey==HotKey2->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey2->HotKey=NULL;
     else
         HotKey9->HotKey=NULL;
 }else if(HotKey9->HotKey==HotKey3->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey3->HotKey=NULL;
     else
         HotKey9->HotKey=NULL;
 }else if(HotKey9->HotKey==HotKey4->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey4->HotKey=NULL;
     else
         HotKey9->HotKey=NULL;
 }else if(HotKey9->HotKey==HotKey5->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey5->HotKey=NULL;
     else
         HotKey9->HotKey=NULL;
 }else if(HotKey9->HotKey==HotKey6->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey6->HotKey=NULL;
     else
         HotKey9->HotKey=NULL;
 }else if(HotKey9->HotKey==HotKey7->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey7->HotKey=NULL;
     else
         HotKey9->HotKey=NULL;
 }else if(HotKey9->HotKey==HotKey8->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey8->HotKey=NULL;
     else
         HotKey9->HotKey=NULL;
 }else if(HotKey9->HotKey==HotKey10->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey10->HotKey=NULL;
     else
         HotKey9->HotKey=NULL;
 }else if(HotKey9->HotKey==HotKey11->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey11->HotKey=NULL;
     else
         HotKey9->HotKey=NULL;
 }    
}
//---------------------------------------------------------------------------

void __fastcall TForm3::HotKey10Change(TObject *Sender)
{
 if(HotKey10->HotKey==HotKey1->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey1->HotKey=NULL;
     else
         HotKey10->HotKey=NULL;
 }else if(HotKey10->HotKey==HotKey2->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey2->HotKey=NULL;
     else
         HotKey10->HotKey=NULL;
 }else if(HotKey10->HotKey==HotKey3->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey3->HotKey=NULL;
     else
         HotKey10->HotKey=NULL;
 }else if(HotKey10->HotKey==HotKey4->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey4->HotKey=NULL;
     else
         HotKey10->HotKey=NULL;
 }else if(HotKey10->HotKey==HotKey5->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey5->HotKey=NULL;
     else
         HotKey10->HotKey=NULL;
 }else if(HotKey10->HotKey==HotKey6->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey6->HotKey=NULL;
     else
         HotKey10->HotKey=NULL;
 }else if(HotKey10->HotKey==HotKey7->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey7->HotKey=NULL;
     else
         HotKey10->HotKey=NULL;
 }else if(HotKey10->HotKey==HotKey8->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey8->HotKey=NULL;
     else
         HotKey10->HotKey=NULL;
 }else if(HotKey10->HotKey==HotKey9->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey9->HotKey=NULL;
     else
         HotKey10->HotKey=NULL;
 }else if(HotKey10->HotKey==HotKey11->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey11->HotKey=NULL;
     else
         HotKey10->HotKey=NULL;
 }    
}
//---------------------------------------------------------------------------

void __fastcall TForm3::HotKey11Change(TObject *Sender)
{
 if(HotKey11->HotKey==HotKey1->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey1->HotKey=NULL;
     else
         HotKey11->HotKey=NULL;
 }else if(HotKey11->HotKey==HotKey2->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey2->HotKey=NULL;
     else
         HotKey11->HotKey=NULL;
 }else if(HotKey11->HotKey==HotKey3->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey3->HotKey=NULL;
     else
         HotKey11->HotKey=NULL;
 }else if(HotKey11->HotKey==HotKey4->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey4->HotKey=NULL;
     else
         HotKey11->HotKey=NULL;
 }else if(HotKey11->HotKey==HotKey5->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey5->HotKey=NULL;
     else
         HotKey11->HotKey=NULL;
 }else if(HotKey11->HotKey==HotKey6->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey6->HotKey=NULL;
     else
         HotKey11->HotKey=NULL;
 }else if(HotKey11->HotKey==HotKey7->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey7->HotKey=NULL;
     else
         HotKey11->HotKey=NULL;
 }else if(HotKey11->HotKey==HotKey8->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey8->HotKey=NULL;
     else
         HotKey11->HotKey=NULL;
 }else if(HotKey11->HotKey==HotKey9->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey9->HotKey=NULL;
     else
         HotKey11->HotKey=NULL;
 }else if(HotKey11->HotKey==HotKey10->HotKey) {
     if(MessageBoxA(0,"Уже существует такой горячий клавиш","Окно удаления горячих клавиш", MB_YESNO|MB_ICONQUESTION)==IDYES)
         HotKey10->HotKey=NULL;
     else
         HotKey11->HotKey=NULL;
 }    
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn1Click(TObject *Sender)
{
 j=true; Timer1->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn2Click(TObject *Sender)
{
 j=false; Timer1->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Timer1Timer(TObject *Sender)
{
 Ini->WriteInteger("Hot Keys","Create",HotKey1->HotKey);
 Ini->WriteInteger("Hot Keys","Open",HotKey2->HotKey);
 Ini->WriteInteger("Hot Keys","Save",HotKey3->HotKey);
 Ini->WriteInteger("Hot Keys","Save As",HotKey4->HotKey);
 Ini->WriteInteger("Hot Keys","ShortCut",HotKey5->HotKey);
 Ini->WriteInteger("Hot Keys","Exit",HotKey6->HotKey);
 Ini->WriteInteger("Hot Keys","Time and Date",HotKey7->HotKey);
 Ini->WriteInteger("Hot Keys","Word wrap",HotKey8->HotKey);
 Ini->WriteInteger("Hot Keys","Font",HotKey9->HotKey);
 Ini->WriteInteger("Hot Keys","String state",HotKey10->HotKey);
 Ini->WriteInteger("Hot Keys","About program",HotKey11->HotKey);
 Notepad->BCreate->ShortCut=HotKey1->HotKey;
 Notepad->BOpen->ShortCut=HotKey2->HotKey;
 Notepad->BSave->ShortCut=HotKey3->HotKey;
 Notepad->BSaveas->ShortCut=HotKey4->HotKey;
 Notepad->BSettinghotkeys->ShortCut=HotKey5->HotKey;
 Notepad->BExit->ShortCut=HotKey6->HotKey;
 Notepad->BNow->ShortCut=HotKey7->HotKey;
 Notepad->BWordwrap->ShortCut=HotKey8->HotKey;
 Notepad->BFont->ShortCut=HotKey9->HotKey;
 Notepad->BStringstate->ShortCut=HotKey10->HotKey;
 Notepad->BAboutprogram->ShortCut=HotKey11->HotKey;
 if(j==true) Close();
}
//---------------------------------------------------------------------------

