//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{

TSearchRec Rec;
AnsiString Path = "*.*";
if (FindFirst(Path + "\*.*", faAnyFile, Rec));
while (FindNext(Rec) == 0)
{
 ListBox1->Items->Add(Rec.Name);
}
FindClose(Rec);
}
