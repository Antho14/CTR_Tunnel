//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm_KawaC *Form_KawaC;
//---------------------------------------------------------------------------
__fastcall TForm_KawaC::TForm_KawaC(TComponent* Owner)
  : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm_KawaC::B_ConnecterClick(TObject *Sender)
{
    TClientSocket1->Open(); // a completer

}
//---------------------------------------------------------------------------

void __fastcall TForm_KawaC::B_DeconnecterClick(TObject *Sender)
{
        TClientSocket1->Close() ;
      
}
//---------------------------------------------------------------------------
void __fastcall TForm_KawaC::Timer1Timer(TObject *Sender)
{
// le timer ne sert qu'à l'affichage régulier de l'état de la connexion
// (vert ou rouge) exmple : Shape1->Brush->Color = clGreen;


        if(TClientSocket1->Active==true)
    {
        Shape1->Brush->Color = clGreen;
    }
       else
    {
        TClientSocket1->Active==false;
        Shape1->Brush->Color = clRed;
    }

}
//---------------------------------------------------------------------------
void __fastcall TForm_KawaC::B_SendRequestClick(TObject *Sender)
{
    String message;
    message=E_Requete->Text;
    TClientSocket1->Socket->SendText(message);

}
//---------------------------------------------------------------------------




void __fastcall TForm_KawaC::TClientSocket1Read(TObject *Sender,
      TCustomWinSocket *Socket)
{
    AnsiString rep;
    rep  = TClientSocket1->Socket->ReceiveText();
    Memo_Answer->Text=rep;

}
//---------------------------------------------------------------------------

