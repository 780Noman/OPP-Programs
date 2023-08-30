#include<iostream>
using namespace std;
class complex;
class cal
{
	public:
		int add(int a,int b)
		{
			return a+b;
		}
		int sumRnum(complex,complex);
		int sumCnum(complex,complex);
		
};
class complex
{
	friend class cal;//optional
	private:
//		friend int cal::sumRnum(complex,complex);
//		friend int cal::sumCnum(complex,complex);
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
};
int cal::sumRnum(complex o1,complex o2)
{
	return (o1.a+o2.a);
}
int cal::sumCnum(complex o1,complex o2)
{
	return (o1.b+o2.b);
}
int main()
{
	complex c1,c2;
	c1.setnum(3,4);
	c2.setnum(5,7);
	c1.printnum();
	c2.printnum();
	cal c,z;
 cout<<"Addation is : "<<z.add(3,4)<<endl;
	int res=c.sumRnum(c1,c2);
	cout<<"The sum of real part of c1 and c2 object is : "<<res<<endl;
	int resc=c.sumCnum(c1,c2);
	cout<<"THe sum of complex part of c1 and c2 object is : "<<resc;
	return 0;
}
