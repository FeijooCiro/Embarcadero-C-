//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "HeaderFooterTemplate.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
THeaderFooterForm *HeaderFooterForm;
//---------------------------------------------------------------------------
__fastcall THeaderFooterForm::THeaderFooterForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall THeaderFooterForm::FormShow(TObject *Sender)
{
	StringGrid1->Cells[0][0]="Hidrógeno";
	StringGrid1->Cells[1][0]="1"; //columna 1 fila 0
	StringGrid1->Cells[0][1]="Helio"; //columna 0 fila 1
	StringGrid1->Cells[1][1]="2"; //columna 1 fila 1
}
//---------------------------------------------------------------------------
void __fastcall THeaderFooterForm::StringGrid1SelectCell(TObject *Sender, const int ACol, const int ARow, bool &CanSelect)
{
	int fila; //-> creo la variable entera fila
	fila=ARow; //recojo el valor devuelto por ARow y lo pongo en mi variable fila
	Label1->Text=StringGrid1->Cells[0][fila] + " = "+ StringGrid1->Cells[1][fila];
}
