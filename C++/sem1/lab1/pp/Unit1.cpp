//---------------------------------------------------------------------------
 #include <iostream.h>
 #include "conio.h"
 #include "math.h"
#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
 double a, b ,c,e, rez, x= -4.5, y= 0.000075, z= 84.5;

     a = pow(8+pow(fabs(x-y),2)+1,1./3);
     e = pow(x,2)+pow(y,2)+2;
     b = exp(fabs(x-y));
     c = pow(pow(tan(z),2)+1,x);
     rez= a/e-b*c;
     cout<<"rez = "<<rez;
     getch();
     return 0 ;
}
//---------------------------------------------------------------------------
 