// ConsoleApplication19.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<iostream>
using namespace std;
class sdistance
{
public:
	int feet;
	float inches;
public:
	sdistance()
	{
		feet = 0;
		inches = 0.0
			;
	}
	void input()
	{
		cout << "enter a feet:\n" << endl;
		cin >> feet;
		cout << "enter a inches:\n" << endl;
		cin >> inches;
	}
	void display()
	{
		cout << "Feet: " << feet << endl;
		cout << "Inches: " << inches << endl;
	}
	void show()
	{
		cout << "Base class";
	}
	

};
class area_sdistance :public sdistance
{
	public:
	void area(sdistance d2)
	{
		int a = feet * 12 + inches;
		int b=d2.feet*12+ d2.inches;
		float area = float(a*b);
		cout << "Area= " << float(area);
		
	}
};

int main()
{
	area_sdistance d1,d2;
	d1.input();
	d1.display();
	d2.input();
	d2.display();
	d1.area(d2);
	

    return 0;
}


