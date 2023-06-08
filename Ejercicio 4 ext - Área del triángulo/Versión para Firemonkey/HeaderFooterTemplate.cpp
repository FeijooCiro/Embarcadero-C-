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
