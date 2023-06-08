//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "ConversorM.h"
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


void __fastcall THeaderFooterForm::ButtonCmClick(TObject *Sender)
{
    SpinBox2->Value=SpinBox1->Value*2.54;
}
//---------------------------------------------------------------------------

void __fastcall THeaderFooterForm::ButtonPulgaClick(TObject *Sender)
{
    SpinBox1->Value=SpinBox2->Value/2.54;
}
//---------------------------------------------------------------------------

