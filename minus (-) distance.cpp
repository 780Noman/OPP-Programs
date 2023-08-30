#include<iostream>
using namespace std;
class distances
{
	private:
		int feet;
		float inches;
		public:
			distances()
			{
				feet=0;
				inches=0;
			}
			distances(int x,float y)
			{
				feet=x;
				inches=y;
			}
			void getdata()
			{
				cout<<"ENter a feet: ";
				cin>>feet;
				cout<<"Enter a inches: ";
				cin>>inches;
			}
			void display()
			{
				cout<<feet<<"\'-"<<inches<<"\""<<endl;
			}
			distances operator -(distances d2)
			{
			unsigned int f=feet-d2.feet;
				float i=inches-d2.inches;
				while(i>=12)
				{
					i-=12;
					f--;
				}
				return distances(f,i);
			}
			bool operator <(distances d2)
			{
				float ft1=feet+inches/12;
				float ft2=d2.feet+d2.inches/12;
				if(ft1<ft2)
				return 0;
				else 
				return 1;
			}
			
};
int main()
{
	distances d1,d2,d3;
	d1.getdata();
	d1.display();
	d2.getdata();
	d2.display();
	cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\nThe d1 - d2: ";
	d3=d1-d2;
	d3.display();
	if(d1<d2)
	cout<<"The dist1 is greater .....";
	else 
	cout<<"The dist2 is greater .....";
	return 0;
}
