//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------





































void __fastcall TForm3::Button1Click(TObject *Sender)
{
ADOTable1->Insert();
ADOTable1->FieldByName("Автор")->AsString=Edit2->Text;
ADOTable1->FieldByName("Название")->AsString=Edit1->Text;
ADOTable1->FieldByName("Описание")->AsString=Memo1->Text;
ADOTable1->Post();
ShowMessage("Сборник успешно добавлен !") ;

}
//---------------------------------------------------------------------------









void __fastcall TForm3::FormCreate(TObject *Sender)
{
Memo1->Lines->Clear();
Edit1->Text="";
Edit2->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

