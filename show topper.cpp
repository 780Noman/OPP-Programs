#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		int rolno;
		string name;
		float gpa;
		public:
		static	void input(student * s,int n)
			{
				for(int i=0;i<n;i++)
				{
				cout<<"enter a name; ";
				cin>>s[i].name;
				cout<<"Enter a rolno: ";
				cin>>s[i].rolno;
				cout<<"Enter a gpa; ";
				cin>>s[i].gpa;
				
			}
		static	void show(student* s,int n)
		{
			for(int i=0;i<n;i++)
			{
				cout<<"Name of student "<<i+1<<endl;
				cout<<"Name : "<<s[i].name<<endl;
				cout<<"Rol number: "<<s[i].rolno<<endl;
				cout<<"GPA : "<<s[i].gpa<<endl;
			}
		}
		static float gretest(student* s,int n)
		{
			float g=0;
			for(int i=0;i<n;i++)
			{
				if(s[i].gpa>g)
				{
					g=s[i].gpa;
				}
			}
			return g;
		}
		static void topper(float g,student* s,int n)
{
 	for(int i=0;i<n;i++)
 	{
 		if(g==s[i].gpa)
 		{
 				cout<<"Name of topper student "<<i+1<<endl;
				cout<<"Name : "<<s[i].name<<endl;
				cout<<"Rol number: "<<s[i].rolno<<endl;
				cout<<"GPA : "<<s[i].gpa<<endl;
		 }
	 }
}
};
void main()
{
	float g;
	int n;
	cout<<"Enter a number you want to enter data: \n";
	cin>>n;
	student * s=new student[n];
	student::input(s,n);
    student::show(s,n);
    g=student::greatest(s,n);
    student::topper(g,s,n);
	  }
