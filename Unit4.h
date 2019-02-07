//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
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
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TADOTable *ADOTable1;
        TADOConnection *ADOConnection1;
        TDataSource *DataSource1;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        TDBEdit *DBEdit5;
        TDBMemo *DBMemo1;
        TDBMemo *DBMemo2;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TDBEdit *DBEdit6;
        TLabel *Label7;
        TImage *Image1;
        void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
 