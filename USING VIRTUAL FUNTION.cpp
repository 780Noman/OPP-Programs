#include<iostream>
using namespace std;
class base
{
	public:
		virtual void show()
		{
			cout<<"Base class function...\n";
		}
	

};
class derived1:public base
{
	public:
		void show()
		{
			cout<<"Derived class 1......\n";
		}
};
class derived2:public base
{
	public:
		void show()
		{
			cout<<"Derived class 2.......\n";
		}
};
int main()
{
	base b1;
	derived1 d1;
	derived2 d2;
	base* b2;
	b2=&b1;
	b2->show();
	b2=&d1;
	b2->show();
	b2=&d2;
	b2->show();
	return 0;
}
