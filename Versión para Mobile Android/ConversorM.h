//---------------------------------------------------------------------------

#ifndef ConversorMH
#define ConversorMH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.EditBox.hpp>
#include <FMX.SpinBox.hpp>
//---------------------------------------------------------------------------
class THeaderFooterForm : public TForm
{
__published:	// IDE-managed Components
	TToolBar *Header;
	TToolBar *Footer;
	TLabel *HeaderLabel;
	TLabel *Label1;
	TLabel *Label2;
	TButton *ButtonCm;
	TButton *ButtonPulga;
	TSpinBox *SpinBox1;
	TSpinBox *SpinBox2;
	void __fastcall ButtonCmClick(TObject *Sender);
	void __fastcall ButtonPulgaClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall THeaderFooterForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THeaderFooterForm *HeaderFooterForm;
//---------------------------------------------------------------------------
#endif
