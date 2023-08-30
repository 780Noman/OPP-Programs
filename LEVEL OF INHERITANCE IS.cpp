#include<iostream>
#include<string>
using namespace std;
class emp
{
	private:
		string name;
		long num;
		public:
			emp()
			{
				
			}
			void getdata()
			{
				cout<<"Enter a name : ";
				cin>>name;
				cout<<"Enter a number: ";
				cin>>num;
			}
			void putdata()const
			{
				cout<<"Name is: "<<name<<endl;
				cout<<"Number is: "<<num<<endl;
			}
};
class manager:public emp
{
	private:
		string title;
		double dues;
		public:
			manager()
			{
				
			}
			void getdata()
			{
				emp::getdata();
				cout<<"Enter a title : ";
				cin>>title;
				cout<<"Enter a dues : ";
				cin>>dues;
			}
			void putdata()
			{
				emp::putdata();
				cout<<"title is: "<<title<<endl;
				cout<<"Dues is : "<<dues<<endl;
			}		
};
class scientist:public emp
{
	private:
		int publication;
		public:
			scientist()
			{
			}
			void getdata()
			{
				emp::getdata();
				cout<<"Enter a publication of scientist: ";
				cin>>publication;			
			}
			void putdata()
			{
				emp::putdata();
				cout<<"Publication is: "<<publication<<endl;
			}
};
class labour:public emp
{
};
class foreman:public labour
{
  private :
  float quotas;
  public:
		void getdata()
		{
			labour::getdata();
			cout<<"Enter Quotas :";
			cin>>quotas;
			}	
			void putdata()
			{
				labour::putdata();
				cout<<"QUOTAS IS: "<<quotas<<endl;
			}
};
int main()
{
	labour l;
	foreman f;
	cout<<"Enter  data of lalour :\n";
	l.getdata();
	cout<<"Data of labour is:\n";
	l.putdata();
	cout<<"Enter a data of foreman :\n";
	f.getdata();
	cout<<"Data of foreman is:\n";
	f.putdata();
	return 0;
}

