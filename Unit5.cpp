//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------











void __fastcall TForm5::Button3Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------



void __fastcall TForm5::Button1Click(TObject *Sender)
{
Form2->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm5::Button4Click(TObject *Sender)
{
Form7->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button2Click(TObject *Sender)
{
Form6->ShowModal();
}
//---------------------------------------------------------------------------



