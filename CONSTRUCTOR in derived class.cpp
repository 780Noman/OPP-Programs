#include<iostream>
using namespace std;
class base1
{
	private:
		int data1;
		public:
			base1()
			{
				data1=0;
			}
			base1(int i)
			{
				data1=i;
				cout<<"The base1 constructor called: "<<endl;
			}
		~base1()
		{
			cout<<"The destructor is called in base1 class:"<<endl;
		}
			void displaybase1()const
			{
				cout<<"The value of data1 is : "<<data1<<endl;
			}
};
class base2
{
	int data2;
	public:
		base2():data2(0)
		{
		}
		base2(int x)
		{
			data2=x;
			cout<<"The base2 constructor called: "<<endl;
		}
			~base2()
		{
			cout<<"The destructor is called in base2 class:"<<endl;
		}
		void displaybase2()const
		{
			cout<<"The value of data2 is: "<<data2<<endl;
		}
};
class derived:public base1,public base2
{
	int data3,data4;
	public:
		derived():data3(0),data4(0)
		{
		}
		derived(int a,int b,int c,int d):base1(a),base2(b)
		{
			data3=c;
			data4=d;
			cout<<"The derived constructor called: "<<endl;
		}
		~derived()
		{
			cout<<"The destructor is called in derived class:"<<endl;
		}
		void displayderived()const
		{
			cout<<"The value of data3 is : "<<data3<<endl;
			cout<<"The value of data4 is : "<<data4<<endl;
		}
};
int main()
{
	derived obj(1,2,3,4);
	obj.displaybase1();
	obj.displaybase2();
	obj.displayderived();
	return 0;
}
