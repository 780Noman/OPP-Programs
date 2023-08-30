#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class student
{
	
	static int x;
	public:
	int rolno;
	string name;
	float cgpa;
	student()
	{
		x++;
		rolno=x;
	}
	static void input();
	static void display();
	
};
int student::x=0;
void student::input()
{
	cout<<"Enter a name of student :\n";
	cin.ignore();
	cin>>name;
	cout<<"Enter a cgpa of student :\n";
	cin>>cgpa;
}
  void student::display()
{
	cout<<"Name="<<name<<endl;
	cout<<"CGPA="<<cgpa<<endl;
	cout<<"ROLL NUMBER="<<rolno<<endl;
}
int main ()
{
	student::input();
	student::display();
	return 0;
}
