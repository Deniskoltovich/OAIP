//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <math.h>


#include "Unit1.h"
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

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        Edit1->Text="";
        Edit2->Text="";
        Edit3->Text="";
        Memo1->Clear();
        Memo1->Lines->Add("???????????? ?????? 2");
        RadioGroup1->ItemIndex = 0;




}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
double a, b, x, y, z, f;
b=StrToFloat(Edit1->Text);
a=StrToFloat(Edit2->Text);
z=StrToFloat(Edit3->Text);

  if (z < 1)  {
   x = 2 + z;
   Memo1->Lines->Add("x = 2 + z. x =  "+FloatToStrF(x,ffFixed,8,6));}

   else{ x = pow(sin(z), 2);
   Memo1->Lines->Add("x = sin^2(z). x =  "+FloatToStrF(x,ffFixed,8,6));
  }
     switch(RadioGroup1->ItemIndex)
     {
        case 0: f=2*x;
                Memo1->Lines->Add("f(x) = 2*x =  "+FloatToStrF(f,ffFixed,8,6));
        break;
        case 1: f=pow(x,2);
                Memo1->Lines->Add("f(x) = x^2 = "+FloatToStrF(f,ffFixed,8,6));
        break;
        case 2: f=x/3;
                Memo1->Lines->Add("f(x) = x/3 = "+FloatToStrF(f,ffFixed,8,6));
        break;
         }
  y =(2*a*f + b*cos(sqrt(fabs(x)))) / (pow(x,2) + 5);
  Memo1->Lines->Add("y = "+FloatToStrF(y,ffFixed,8,6));




}
//---------------------------------------------------------------------------

