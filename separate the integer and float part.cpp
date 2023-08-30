// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	void intfrac(float, float&, float&);
		float num, intpart, fracpart;
	do {
		cout << "enter a number :\n";
		cin >> num;
		intfrac(num, intpart, fracpart);
		cout << "Integer part is" << intpart << "Fraction part is " << fracpart << endl;
	}while(num!=0.0);
	 return 0;
}
void intfrac(float n, float& intp, float& fracp)
{
	long temp = static_cast<long>(n);
	intp = static_cast<float>(temp);
	fracp = n - intp;
}


