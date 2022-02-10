#include<math.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	system("chcp 1251");
	double a =0.1, b = 1, h = 0.1, x, r, S, Y;
	int n = 10, k;
	x = a;
	
	do
	{
		for (k = 1; k <= n; k++)
		{
			r = S = x;
			r = -r * x * x / 2 * k * (2 * k - 1);
			
		}
		S += r;
		x += h;
		cout << S << " ";
		} while (x <= b);
	return 0;
}