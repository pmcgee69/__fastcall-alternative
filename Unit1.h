//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>

#define ? __fastcall
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
   __published:	  // IDE-managed Components
	 private:	  // User declarations
	 public:	  // User declarations
     ?  TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
