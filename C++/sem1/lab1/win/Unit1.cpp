//---------------------------------------------------------------------------
#include <math.h>
#include <vcl.h>
#pragma hdrstop
#include<iostream>
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
   Edit1->Text = "-4,5";
   Edit2->Text = "0,75e-4";
   Edit3->Text = "0,845e2";
   Memo1->Clear();
   Memo1->Lines->Add("???????????? ?????? ? 1");


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
 double x, y, z, a, b ,c,e, rez;
     x = StrToFloat(Edit1->Text);
     y = StrToFloat(Edit2->Text);
     z = StrToFloat(Edit3->Text);
     a = pow(8+pow(fabs(x-y),2)+1,1./3);
     e = pow(x,2)+pow(y,2)+2;
     b = exp(fabs(x-y));
     c = pow(pow(tan(z),2)+1,x);
     rez = a/e-b*c;
     Memo1->Lines->Add("??? ? = "+FloatToStrF(x,ffFixed,7,3)
         + "; y = "+FloatToStrF(y,ffFixed,3,7)+"; z = "+FloatToStrF(z,ffFixed,7,3));
     Memo1->Lines->Add("????????? = "+FloatToStr(rez));

}
//---------------------------------------------------------------------------

 