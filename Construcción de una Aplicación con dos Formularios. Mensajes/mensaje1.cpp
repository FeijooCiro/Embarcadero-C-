//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "mensaje1.h"
#include "saludo1.h"
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
	if (EditNombre->Text == "" || EditApellidos->Text == "" || EditClave->Text == "" ){
		ShowMessage ("Debe especificar todos los campos"); //mostrar mensaje
	}
	else if (EditClave->Text != "ofimega") {
		ShowMessage("Clave incorrecta");

	}
	else {
		SaludoBox->Label1->Caption = "Bienvenido, " + EditNombre->Text + " " +
		EditApellidos->Text + ". Su clave es: " + EditClave->Text;
		SaludoBox->ShowModal(); //muestra ventana en modo modal
		//prepara un nuevo usuario:
		EditNombre->Text = "";
		EditApellidos->Text = "";
		EditClave->Text = "";
		EditNombre->SetFocus();
	}
	MessageDlg("Clave incorrecta",mtError,mbAbortRetryIgnore,0);
}

//---------------------------------------------------------------------------
