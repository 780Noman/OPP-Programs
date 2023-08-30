#include<iostream>
#include<string>
using namespace std;
class emp
{
	protected:
		string name;
		int id;
		public:
			emp()
			{
				
			}
			void getdata()
			{
				cout<<"Enter a name : ";
				cin>>name;
			cout<<"Enter a Id : ";
			cin>>id;
			}
			void putdata()
			{
				cout<<"NAME : "<<name<<endl;
				cout<<"ID : "<<id<<endl;
			}
};
class student
{
	public:
		string sch;
		string deg;
		public:
			student()
			{
				
			}
			void getedu()
			{
				cout<<"Enter a school :";
				cin>>sch;
				cout<<"Enter a degree : ";
				cin>>deg;
			}
			void putedu()
			{
				cout<<"SCHOOL :"<<sch<<endl;
				cout<<"DEGREE :"<<deg<<endl;
			}
};
class manager:public emp,public student
{
	public:
		string title;
		int dues;
		public:
			void getdata()
			{
				cout<<"===============================================\n";
				emp::getdata();
				cout<<"ENTER  a title: ";
				cin>>title;
				cout<<"Enter a dues : ";
				cin>>dues;
				student::getedu();
			}
			void putdata()
			{
					cout<<"------------------------------------------\n";
				emp::putdata();
				cout<<"TITLE IS: "<<title<<endl;
				cout<<"DUES IS: "<<dues<<endl;
				student::putedu();
			}
};
class scientist:public emp,public student
{
	public:
		int pub;
		public:
			scientist()
			{
				
			}
			void getdata()
			{
				cout<<"===============================================\n";
				emp::getdata();
				cout<<"Enter a publication: ";
				cin>>pub;
				student::getedu();
			}
			void putdata()
			{
				cout<<"------------------------------------------\n";
				emp::putdata();
				cout<<"PUBLICATION : "<<pub<<endl;
				student::putedu();	
					
			}			
};
class labor:public emp
{
	
};
int main()
{
	emp e;
	e.getdata();
	e.putdata();
	manager m;
	m.getdata();
	m.putdata();
	scientist s;
	s.getdata();
	s.putdata();
	labor l;
	l.getdata();
	l.putdata();
	return 0;
}
