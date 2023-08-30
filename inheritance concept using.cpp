// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
class student
{
protected:
	int rolno;
	string name;
	float cgpa;
public:
	student()
	{
		rolno = 0;
		name = " ";
		cgpa = 0.0;
	}
	void input()
	{
		cout << "enter a name of student:\n";
		getline(cin,name);
		cout << "enter a roll number of student:\n";
		cin >> rolno;
		cout << "enter a cgpa of student:\n";
		cin >> cgpa;
	}
	void display()
	{
		cout << "Name= " << name << endl;
		cout << "roll number= " << rolno << endl;
		cout << "cgpa= " << cgpa << endl;
	}
	void show()
	{
		cout << "THIS IS A BASE CLASS" << endl;
	}
};
class proj_student :public student
{
private:
	int projid;
	string title;
public:
	void input()
	{
		cin.ignore();
		student::input();
		cout << "enter a project id:\n";
		cin >> projid;
		cout << "enter a project title:\n";
		cin >> title;
	}
	void display()
	{
		student::display();
		cout << "PROJECT ID= " << projid << endl;
		cout << "PROJECT TITLE=" << title << endl;
	}
	void s()
	{
		cout << "THIS IS A CHILD CLASS" << endl;
	}
};

int main()
{
	student s;
	proj_student s1;
	s.show();
	s.input();
	s.display();
//	s.s();
	s1.show();
	s1.input();
	s1.display();
	s1.s();
    return 0;
}


