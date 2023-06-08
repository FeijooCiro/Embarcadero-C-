//---------------------------------------------------------------------------

#ifndef HeaderFooterTemplateH
#define HeaderFooterTemplateH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Grid.Style.hpp>
#include <FMX.ScrollBox.hpp>
#include <System.Rtti.hpp>
//---------------------------------------------------------------------------
class THeaderFooterForm : public TForm
{
__published:	// IDE-managed Components
	TToolBar *Header;
	TToolBar *Footer;
	TLabel *HeaderLabel;
	TLabel *Label1;
	TStringGrid *StringGrid1;
	TStringColumn *StringColumn1;
	TStringColumn *StringColumn2;
private:	// User declarations
public:		// User declarations
	__fastcall THeaderFooterForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THeaderFooterForm *HeaderFooterForm;
//---------------------------------------------------------------------------
#endif
