#include<iostream>
#include<string>
using namespace std;
class person
{
	private:
		char name[30];
		public:
			void getname()
			{
				cout<<"Enter a name: ";
				cin.ignore();
				cin.getline(name,30);
			}
			void putname()
			{
				cout<<"Name : "<<name<<endl;
			}
			virtual void getdata()=0;
			virtual bool isoutstanding()=0;
};
class student:public person
{
	private:
		float cgpa;
		public:
			void getdata()
			{
				person::getname();
				cout<<"Enter a CGPA : ";
				cin>>cgpa;
			}
	    bool isoutstanding()
	    {
	    	if(cgpa>3)
	    	return true;
	    	else 
	    	return false;
		}
};
class professor: public person
{
	private:
	int pub;
		public:
			 void getdata()
			 {
			 	person::getname();
			 	cout<<"Enter a number of publication : ";
			 	cin>>pub;
			 }
			 bool isoutstanding()
			 {
			 	if(pub>5)
			 	return  true;
			 	else
			 	return false;
			 }
};
int main()
{
	student s[20];
	professor p[20];
	int  n=0,m=0;
	char choice;
	do
	{
		cout<<"ENter a data of student or professor (s/p) :";
		cin>>choice;
		if(choice=='s')
		{
			s[n].getdata();
			n++;			
		}
		else
		{
			p[m].getdata();
			m++;
		}
		cout<<"Enter y to repeat otherwise press n : ";
		cin>>choice;
			}while(choice=='y' || choice=='Y');
			for(int i=0;i<n;i++)
			{
				s[i].putname();
				if(s[i].isoutstanding())
				{
					cout<<"This is outstanding....\n";
				}
			}
				for(int i=0;i<m;i++)
			{
				p[i].putname();
				if(p[i].isoutstanding())
				{
					cout<<"This is outstanding....\n";
				}
			}
			return 0;
			
}
