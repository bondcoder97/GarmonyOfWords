//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Mask.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        TDBGrid *DBGrid2;
        TDBEdit *DBEdit1;
        TLabel *Label1;
        TLabel *Label2;
        TMainMenu *MainMenu1;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        TButton *Button1;
        TEdit *Edit1;
        TComboBox *ComboBox1;
        TADOConnection *ADOConnection1;
        TADOQuery *ADOQuery1;
        TDataSource *DataSource1;
        TDataSource *DataSource2;
        TADOTable *ADOTable1;
        TDataSource *DataSource3;
        TADOQuery *ADOQuery2;
        TImage *Image1;
        TButton *Button2;
        TDataSource *DataSource4;
        TADOTable *ADOTable2;
        TButton *Button3;
        TDBNavigator *DBNavigator1;
        TMenuItem *Elfk1;
        TMenuItem *N4;
        TMenuItem *N5;
        TDBMemo *DBMemo1;
        TLabel *Label3;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Edit1Click(TObject *Sender);
        void __fastcall DBGrid1CellClick(TColumn *Column);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
 