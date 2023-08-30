#include<iostream>
using namespace std;
class distances
{
	int feet;
	float inches;
public:
	distances()
	{
		feet = 0;
		inches = 0;
	}
	distances(int x,float y)
	{
		feet=x;
		inches=y;
	}
	void input()
	{
		cout << "Enter a feet:\n";
		cin >> feet;
		cout << "Enter a inches:\n";
		cin >> inches;
	}
	void display()
	{
		cout << "feet  " << feet << "' inches  " << inches<<"\"";
		cout<< endl;
	}
distances 	operator +(distances o1)
	{
		distances temp;
		temp.feet=feet+o1.feet;
		temp.inches=inches+o1.inches;
		if(temp.inches>=12)
		{
			temp.inches-=12;
			temp.feet++;
		}
		return temp;
	}
	bool operator >(distances d2)
	{
			float  dd=d2.feet+d2.inches/12;
	    	float  d1=feet+inches/12;
	
//	if(a>b)? true: false;
	if (d1>dd)
	{
		return true;
	}
	else 
	{
		return false;
	}	
	}
};
int main()
{
	distances d1,d2,d3,d4;
	cout<<"Enter a distance d1: \n";
	d1.input();
	cout<<"Enter a distance d2:\n";
	d2.input();
cout<<"#######################################\n  ";               
	cout<<"The dist1 is: ";
	d1.display();
	cout<<endl;
	cout<<"The dist2 is: ";
	d2.display();
	cout<<"************************************************\n The sum of two object is :\n";
	d3=d1+d2;
	d3.display();
	d4=d1+d2+d3;
	cout<<" THE ADDING OF d1+d2+d3 :\n";
	cout<<"The distance of dist4 is :\n";
	d4.display();
	cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n The comparison of distance d1 & d2 is:\n";
	if(d1>d2)
	{
		cout<<"THE DISTANCE  1 IS GREATER...\n";
	}
	else
	{
		cout<<"THE DISTANCE 2 IS GREATER....\n";
	}
	return 0;
}

