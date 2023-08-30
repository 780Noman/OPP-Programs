#include<iostream>
using namespace std;
class complex
{
	private:
		int a;
		int b;
		public:
			void setnum(int x,int y)
			{
				a=x;
				b=y;
			}
			void printnum()
			{
				cout<<"your number is : "<<a<<" + "<<b<<"i"<<endl;
			}
			friend complex sumcomplexnum(complex ,complex );
};
complex sumcomplexnum(complex o1,complex o2)
			{
				complex o3;
				o3.setnum((o1.a+o2.a),(o1.b+o2.b));
				return o3;
			}
			int main()
			{
				complex c,c1;
				c.setnum(3,5);
				c.printnum();
				c1.setnum(3,2);
				c1.printnum();
				complex sum=sumcomplexnum(c,c1);
				cout<<"THE SUM IS : ";
				sum.printnum();
				return 0;
			}
			
