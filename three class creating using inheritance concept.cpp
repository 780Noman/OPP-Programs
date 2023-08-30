//#include "stdafx.h"
#include<iostream>
#include<string.h>
using namespace std;
class emp
{
protected:
	string name;
	long int num;
public:
	void setdata()
	{
		cout << "Enter a name:\n";
		cin.ignore();
		getline(cin,name);
		cout << "Enter a number:\n";
		cin >> num;
	}
	void putdata()
	{
		cout << "Name = " << name << endl;
		cout << "Number = " << num << endl;
	}
	
};
class manager :public emp
{
private:
	string title;
	float clubdues;
public:
	void setdata()
	{
		emp::setdata();
		cout << "Enter a Title:\n";
		cin >> title;
		cout << "Enter a clubdues:\n";
		cin >> clubdues;
	}
	void putdata()
	{
		emp::putdata();
		cout << "Title= " << title << endl;
		cout << "CLUB DUES =" << clubdues << endl;
	}
};
class scientist :public emp
{
private:
	int publication;
public:
	void setdata()
	{
		emp::setdata();
		cout << "Enter a publication number:\n";
		cin >> publication;
	}
	void putdata()
	{
		emp::putdata();
		cout << "PUBLICATION = " << publication << endl;
	}
};
class labour :public emp
{
	
};
int main()
{
	emp e;
	manager m;
	scientist s;
	labour l;
	int choice;
	cout << "Enter a choice you want to input and show data....\n";
		cout << "Press 1 to enter employees data:\n ";
		cout << "Press 2 to enter managers data:\n ";
		cout << "Press 3 to enter scintists data:\n ";
		cout << "Press 4 to enter labours data:\n ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout<<"Employee data:\n";
				e.setdata();
				e.putdata();
			break;
		case 2:
			cout<<"Manager data:\n";
			m.setdata();
			m.putdata();
			break;
		case 3:
			cout<<"Scientist data:\n";
			s.setdata();
			s.putdata();
			break;
		case 4:
			cout<<"Labour data:\n";
			l.setdata();
			l.putdata();
			break;
		default:
			cout << "Invanlid choice";
		}
	 
	

    return 0;
}


