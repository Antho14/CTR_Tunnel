//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ScktComp.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm_KawaC : public TForm
{
__published:	// Composants gérés par l'EDI
  TGroupBox *GroupBox1;
  TLabel *Label1;
  TLabel *Label2;
  TLabel *Label3;
  TEdit *E_AdresseIP;
  TEdit *E_Port;
  TButton *B_Connecter;
  TButton *B_Deconnecter;
  TShape *Shape1;
  TTimer *Timer1;
  TGroupBox *GroupBox2;
  TEdit *E_Requete;
  TButton *B_SendRequest;
  TGroupBox *GroupBox3;
  TImage *Image1;
  TMemo *Memo_Answer;
  TImage *Image3;
  TImage *Image2;
  TImage *Image4;
  TImage *Image5;
    TClientSocket *TClientSocket1;
  void __fastcall B_ConnecterClick(TObject *Sender);
  void __fastcall B_DeconnecterClick(TObject *Sender);
  void __fastcall Timer1Timer(TObject *Sender);
  void __fastcall B_SendRequestClick(TObject *Sender);
    void __fastcall TClientSocket1Read(TObject *Sender,
          TCustomWinSocket *Socket);
private:	// Déclarations de l'utilisateur
public:		// Déclarations de l'utilisateur
  __fastcall TForm_KawaC(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm_KawaC *Form_KawaC;
//---------------------------------------------------------------------------
#endif
