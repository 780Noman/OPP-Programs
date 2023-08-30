#include<iostream>
#include<cmath>
using namespace std;
class mymath
{
	private:
		int a;
		int b;
		static int count;
		public:
		mymath()
		{
			count++;
			cout<<"object "<<count<<" is created! \n";
		}
		~mymath()
		{
			
			cout<<"\nobject "<<count<<" is destroyed!\n";
			count--;
		}
		void getdata()
		{
			cout<<"ENter a first number: ";
			cin>>a;
			cout<<"Enter a second number: ";
			cin>>b;
		}
		void mysum()
		{
			cout<<"The sum is: "<<a+b<<endl;
		}
		void mysqrt()
		{
			int sq=sqrt(a);
			cout<<"The square of a is : "<<sq<<endl;		
		}
};
int mymath::count=0;
int main()
{
	mymath o;
	o.getdata();
	o.mysum();
	o.mysqrt();
	return 0;
}
