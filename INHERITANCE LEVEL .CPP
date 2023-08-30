#include<iostream>
using namespace std;
class  A
{
	protected:
		int x;
		public:
			void get()
			{
				cout<<"Enter a x: ";
				cin>>x;
			}
			void show()const
			{
				cout<<"X= "<<x<<endl;
			}
};
class B:public A
{
	protected:
		int y;
		public:
			void get()
			{
				A::get();
				cout<<"Enter a y : ";
				cin>>y;
			}
			void show()const
			{
				A::show();
				cout<<"Y= "<<y<<endl;
			}
};
class C:public B
{
	protected:
		int z;
		public:
			void get()
			{
				B::get();
				cout<<"Enter a value of z: ";
				cin>>z;
			}
			void show()const
			{
				B::show();
				cout<<"Z = "<<z<<endl;
			}
			void display()
			{
				cout<<"The value of x is: "<<x<<endl;
			}
};
int main()
{
	A a;
	a.get();
	a.show();
	B b;
	b.get();
	b.show();
	C obj;
	obj.get();
	obj.show();
	obj.display();
	return 0;
}
