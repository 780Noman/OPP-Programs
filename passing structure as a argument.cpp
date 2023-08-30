// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<iostream>
using namespace std;
struct distance
{
	int feet;
	float inches;
}dd;

int main()
{
void  engldisp( distance &);
	distance d1, d2;
	cout << "enter feet:\n";
	cin >> d1.feet;
	cout << "enter a inches:\n";
	cin >> d1.inches;
	cout << "enter feet:\n";
	cin >> d2.feet;
	cout << "enter a inches:\n";
	cin >> d2.inches;
	cout << "\n distance 1: ";
	engldisp(d1);
	cout << "\n distance 2:";
	engldisp(d2);
	cout << endl;
	return 0;
}
void engldisp(distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}


