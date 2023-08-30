#include<iostream>
using namespace std;
class base
{
	protected:
		int pvt_base;
		int prot_base;
    public:	
	int pub_base;
			base()
			{
				pvt_base=4;
				prot_base=5;
			pub_base=6;
			}
			base(int n)
			{
				pvt_base=n;
				prot_base=n;
				pub_base=n;
			}
			void getPVT()
			{
				cout<<pvt_base<<endl;
			}
			
};
class child1:public base
{
	public:
//		base::getPVT();
		void getProt()
		{
			cout<<prot_base<<endl;
		}
};
class child2:public base
{
public:
static	void display()
	{
		cout<<"Mid Spring 2022\n";
		
	}
	
};
class grandchild:private child2
{
	public:
		void getGrandParentPublic()
		{
			cout<<"private"<<pub_base;
		}
};
int main()
{
	child1 object1;
	cout<<"Private =";
	//cout<<object1.getPVT()<<endl;
	//cout<<"protected= "<<object1.getProt()<<endl;
	cout<<"Public= "<<object1.pub_base<<endl;
	//child1 object2(7);
	child2 object3;
		//cout<<"prirate= "<<object3.getPVT()<<endl;
	cout<<"public="<<object3.pub_base<<endl;
	child2::display();
	grandchild object4;
	object4.getGrandParentPublic();
	return 0;
	
}

