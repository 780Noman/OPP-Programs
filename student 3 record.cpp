#include<iostream>
using namespace std;
class student
{
    int roll_no;
    string name;
    float cgpa;
    public:
    void input()
    {
        cout<<"Enter NAME: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter ROLL NO: ";
        cin>>roll_no;
        cout<<"Enter CGPA: ";
        cin>>cgpa;
    }
    void display()
    {
        cout<<"NAME: "<<name<<endl;
        cout<<"ROLL NO: "<<roll_no<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};
int main()
{
	student s[3];
	cout<<"Enter a data of 3 student:\n";
	for (int i=0;i<3;i++)
	{
		cout<<"Enter a data of student "<<i+1<<endl;
		s[i].input();
	}
	cout<<"The data of student is :\n";
	for (int i=0;i<3;i++)
	{
		cout<<"The data of student "<<i+1<<"is ..."<<endl;
		s[i].display();
	}
	return 0;
}
