//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <math.h>
#include <iostream>
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
{   Edit1->Text=" 0,1";
    Edit2->Text="1,0 ";
    Edit3->Text=" 0,1";
    Edit4->Text="10,0 ";
    Memo1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{       double a, b, x, s, y, h, L,  n, k;
        x = a, s = 0;
        a=StrToFloat(Edit1->Text);
        b=StrToFloat(Edit2->Text);
        h=StrToFloat(Edit3->Text);
        n=StrToFloat(Edit4->Text);
        do{
         for( k = 1; k <= n; k++){
          s += (pow(-1.0, k+1.0) * pow(x, 2.0*k))/(2.0*k*(2.0*k - 1.0));
          }
          y=x * atan(x) - log(sqrt(1.0 + pow(x,2.0)));
          L=fabs(s-y);
          Memo1->Lines->Add("Сумма равна "+FloatToStrF(s,ffFixed,14,13)+
          "; фунция = "+FloatToStrF(y,ffFixed,14,13)+
          "; разность по модулю равна "+FloatToStrF(L,ffFixed,14,13)) ;
          x += h;
          s = 0;
          }

        while(x <= b);
}
//---------------------------------------------------------------------------
