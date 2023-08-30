// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<iostream>
using namespace std;
class sdistance
{
	int feet;
	float inches;
	public:
	sdistance()
	{
		feet = 0;
		inches = 0.0;
	}
	sdistance(int x,float y)
	{
		feet = x;
		inches = y;
	}
	void input()
	{
		cout << "enter a feet:\n";
		cin >> feet;
		cout << "enter a inches :\n";
		cin >> inches;
	}
	void display()
	{
		cout << "FEET  =" << feet << endl;
		cout << "INCHES =" << inches << endl;
	}
};
int main()
{
	sdistance d1;
	d1.display();
	d1.input();
   sdistance d2(2,2.5);
	d1.display();
	d2.display();
    return 0;
}


