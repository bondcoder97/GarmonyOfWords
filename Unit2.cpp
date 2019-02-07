//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit4.h"
#include "Unit3.h"
#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------














































void __fastcall TForm2::FormCreate(TObject *Sender)
{
ADOQuery1->SQL->Add("SELECT Название FROM Сборники");
ADOQuery1->Active=true;

}
//---------------------------------------------------------------------------





void __fastcall TForm2::N3Click(TObject *Sender)
{
Form3->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N2Click(TObject *Sender)
{
Form1->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
TLocateOptions SearchOptions;
SearchOptions.Clear();
SearchOptions<<loPartialKey;
if(ADOQuery2->Locate(ComboBox1->Text,Edit1->Text,SearchOptions));
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit1Click(TObject *Sender)
{
if(Edit1->Text=="Введите значение параметра")
Edit1->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::DBGrid1CellClick(TColumn *Column)
{
ADOTable1->RecNo=ADOQuery1->RecNo;
ADOQuery2->SQL->Clear();
ADOQuery2->SQL->Add("SELECT*FROM Стихи WHERE Сборник=" "'"+DBEdit1->Text+"'");
ADOQuery2->Active=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button2Click(TObject *Sender)
{
//приравнять  к теэйблу следующей формы
ADOTable2->Filter="";
ADOTable2->Filter="Сборник='"+DBEdit1->Text+"'";
ADOTable2->Filtered=true;
ADOTable2->RecNo=ADOQuery2->RecNo;
Form4->ADOTable1->RecNo=ADOTable2->RecNo;
Form4->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button3Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N4Click(TObject *Sender)
{
Form1->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N5Click(TObject *Sender)
{
Form3->ShowModal();
}
//---------------------------------------------------------------------------




void __fastcall TForm2::FormActivate(TObject *Sender)
{
ADOTable1->RecNo=ADOQuery1->RecNo;
ADOQuery2->SQL->Clear();
ADOQuery2->SQL->Add("SELECT*FROM Стихи WHERE Сборник=" "'"+DBEdit1->Text+"'");
ADOQuery2->Active=true;        
}
//---------------------------------------------------------------------------

