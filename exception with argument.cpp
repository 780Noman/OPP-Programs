#include<iostream>
using namespace std;
class uddistance
{
	int feet;
	float inches;
	public:
		uddistance()
		{
			feet=0;
			inches=0.0;
		}
		uddistance(int f,float i)
		{
			if(i>=12)
			throw expd("\n(two argument constractor )",i);
			feet=f;
			inches=i;
		}
		void input()
		{
			int f;
			float inch;
			cout<<"Enter a feet : ";
			cin>>f;
			cout<<"\nEnter a inches : ";
			cin>>inch;
			if(inch>=12)
			throw expd("\n(input function)",inch);
			feet=f;
			inches=inch;
		}
		void show()
		{
			cout<<"inches is :"<<inches;
			cout<<"\nfeet is : "<<feet<<endl;
		}
		class expd
		{
			public:
				string loc;
				float ff;
				public:
					expd(string str,float ft)
					{
						loc=str;
						ff=ft;
					}
		};
		
};
int main()
{
	try
	{
		uddistance d1(2,3.4);
		uddistance d2(3,1);
		uddistance d3;
		d3.input();
		d3.show();
	}
	catch(uddistance::expd Oe)
	{
            cout<<"\n Error occured at  "<<Oe.loc<<" with the value "<<Oe.ff<<endl;
	}
	return 0;
}
