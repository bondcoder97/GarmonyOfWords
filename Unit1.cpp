//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
#include "Unit2.h"
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

void __fastcall TForm1::FormCreate(TObject *Sender)
{
RichEdit1->Lines->Clear();
Memo1->Lines->Clear();
Edit1->Text="";
Edit2->Text="";
Edit3->Text="";
Edit4->Text="";
Edit5->Text="";
Edit6->Text="";
Edit6->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
ADOTable1->Insert();
ADOTable1->FieldByName("������������")->AsString=Edit1->Text;
ADOTable1->FieldByName("�������")->AsString=Edit2->Text;
ADOTable1->FieldByName("�����")->AsString=Edit3->Text;
ADOTable1->FieldByName("��������")->AsString=Edit4->Text;
ADOTable1->FieldByName("����")->AsString=Edit5->Text;
ADOTable1->FieldByName("���� ���������")->AsString=MaskEdit1->Text;
ADOTable1->FieldByName("�������������")->AsString=RichEdit1->Text;
ADOTable1->FieldByName("�����������")->AsString=Memo1->Text;
ADOTable1->Post();

if(Edit6->Text=="")
{
ADOTable2->Insert();
ADOTable2->FieldByName("��������")->AsString=Edit2->Text;
ADOTable2->FieldByName("�����")->AsString=Edit3->Text;
ADOTable2->Post();
}









}
//---------------------------------------------------------------------------




void __fastcall TForm1::Edit2Change(TObject *Sender)
{
Edit6->Text="";
TLocateOptions SearchOptions;
SearchOptions.Clear();
SearchOptions<<loPartialKey;
if(ADOTable2->Locate("��������",Edit2->Text,SearchOptions));
Edit6->Text=ADOTable2->FieldByName("��������")->AsString;
if(ADOTable2->FieldByName("��������")->AsString!=Edit2->Text)
Edit6->Text="";
else
Edit6->Text=Edit2->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
Edit1->Text="";
Edit2->Text="";
Edit3->Text="";
Edit4->Text="";
Edit5->Text="";
Edit6->Text="";
MaskEdit1->Text="";
RichEdit1->Lines->Clear();
Memo1->Lines->Clear();
}
//---------------------------------------------------------------------------


