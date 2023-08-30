#include<iostream>
using namespace std;
class sum
{
	private:
		int a,b;
		public:
			sum()
			{
				a=1;
				b=2;
			}
			sum(int x,int y)
			{
				a=x;
				b=y;
				
			}
			void get()
			{
				cout<<"enter a number :";
				cin>>a;
				cout<<"enter a number: ";
				cin>>b;
			}
			void show()
			{
				cout<<"The sum of a+ b is : "<<a+b<<endl;
			}
};
int main()
{
	sum s;
	s.show();//
	s.get();
	s.show();
	sum	s1(20,3);
	s1.show();
}
