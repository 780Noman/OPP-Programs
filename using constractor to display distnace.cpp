//// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
class distances
{
	int feet;
	float inches;
public:
	distances()//default copy constructor
	{
		feet = 0;
		inches = 0;
	}
	distances(int x,float y)//with argument consturctor
	{
		feet=x;
		inches=y;
	}
	void input()
	{
		cout << "Enter a feet:\n";
		cin >> feet;
		cout << "Enter a inches:\n";
		cin >> inches;
	}
	void display()
	{
		cout << "feet  " << feet << "' inches  " << inches<<"\"";
		cout<< endl;
	}
	void add(distances x)
	{
		distances result;
		result.feet = feet + x.feet;
		result.inches = inches + x.inches;
		result.display();
	}
	void add(distances y, distances z)
	{
		feet = y.feet + z.feet;
		inches = y.inches + z.inches;
	}
};
int main()
{
	distances d1;
	d1.input();
	d1.display();
	distances d2(2, 4.5);
	d2.display();
	d2.add(d1);
//	d2.display();
	distances d3;
	d3.add(d1, d2);
	d3.display();
    return 0;
}


