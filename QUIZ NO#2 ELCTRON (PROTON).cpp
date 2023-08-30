#include<iostream>
using namespace std;
class atom
{
	private:
		int proton;
		int electron;
		int nuetron;
		public:
			atom()
			{
				proton=1;
				electron=1;
				nuetron=0;
			}
			atom(int p,int e,int n)
			{
				p=1;
				e=1;
				n=0;
			}
			void getdata()
			{
				cout<<"Enter a number of proton: ";
				cin>>proton;
				cout<<"Enter a number of electron: ";
				cin>>electron;
				cout<<"Enter a number of nuetron: ";
				cin>>nuetron;
			}
			void putdata()const
			{
				cout<<"PROTON IS: "<<proton<<endl;
				cout<<"ELECTRON IS: "<<electron<<endl;
				cout<<"NUETRON IS: "<<nuetron<<endl;
			}
			bool ision()
			{
				int p,e;
				if (p==e)
				{
					return true;
				}
				if(p!=e)
			//	else
				{
					return false;
				}
			}
			int getatomicmass()
			{
				int a;
				a=proton+nuetron;
				return a;
			}
};
int main()
{
	atom a;
	a.getdata();
	a.putdata();
	if(a.ision())
	{
		cout<<"Atom is an ion..."<<endl;
	}
	else 
	{
		cout<<"Atom is not an ion..."<<endl;
	}
	int amn=a.getatomicmass();
	cout<<"Atomic mass number is equal to: "<<amn<<endl;
	return 0;
}
