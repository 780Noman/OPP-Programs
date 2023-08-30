#include<iostream>
using namespace std;
class student
{
	int rolno;
	string name;
	float gpa;
	public:
	void input()
	{
		cout<<"enter a roll number ="<<endl;
		cin>>rolno;
		cout<<"enter a name ="<<endl;
		cin>>name;
		cout<<"enter a gpa ="<<endl;
		cin>>gpa;
	}
	void display()
	{
		cout<<"roll number ="<<rolno<<endl;
		cout<<"name ="<<name<<endl;
		cout<<"gpa ="<<gpa<<endl;
	}
};
int main()
{
	student s1,s2;//object
	s1.input();
	s2.input();
	s1.display();
	s2.display();
}
