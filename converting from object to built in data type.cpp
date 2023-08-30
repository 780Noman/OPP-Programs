#include<iostream>
using namespace std;
class udd
{
	private:
		int feet;
		float inches;
		public:
			udd()
			{
				feet=0;
				inches=0.0;
			}
			udd(int p,float q)
			{
				feet=p;
				inches=q;
			}
			udd(float r)
			{
				feet=r;
				inches=(r-feet)*12;
			}
            
			void input()
			{
				cout<<"ENter a feet: ";
				cin>>feet;
				cout<<"Enter a inches: ";
				cin>>inches;
			}
			void display()const
			{
				cout<<feet<<"\'-"<<inches<<"\""<<endl;
			}
			void square(udd d2)
			{
				float x=feet*12+inches;
				float y=d2.feet*12+d2.inches;
				float a=x*y;
				cout<<"Area in square inches = "<<a<<endl;
				int f=a/144;
				float i=a-(f*144);
				cout<<"Area in square feet ="<<f<<" and in inches= "<<i<<endl;
			}
			udd operator +(udd d)
			{
				int x=feet +d.feet;
				float y=inches+d.inches;
				return udd(x,y);//seemless object
			}
		
};
int main()
{
	udd d1,d2(3,7.5);
	d1.input();
	d1.display();
	d1.square(d2);
	udd d3=d1+d2;
	d3.display();
	d3=d1+10.5;
	d3.display();
		//d3=10.5+d1;
	return 0;
}
