// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
class student
{
	static int x;
	int rolno;
	string name;
	float cgpa;
	public:
	student()
	{
		x++;
		rolno = x;
	}
	void input()
{
	cout << "Enter a name:\n";
	cin >> name;
	cout << "Enter a cgpa:\n";
	cin >> cgpa;
}
	void display()const
	{
		cout << "NAME=" << name << endl;
		cout << "CGPA=" << cgpa << endl;
		cout << "ROLL NUMBER=" << rolno << endl;
	}
	void setvalue(string s,float g=0)
	{
		name=s;
		cgpa=g;	
	}
};
int student::x = 0;
int main()
{
	student s1, s2;
	s1.input();
	s1.display();
	s2.input();
	s2.display();
	student s3;
	s3.setvalue("Ahmed");
	cout<<"after seting name:\n";
	s3.display();
    return 0;
}


