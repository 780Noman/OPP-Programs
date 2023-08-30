#include<iostream>
#include<cmath>
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
	void add(distances x)
	{
		distances result;
		result.feet = feet + x.feet;
		result.inches = inches + x.inches;
		result.display();
	}
	void add(distances y, distances z)
	{
		feet = y.feet + z.feet;
		inches = y.inches + z.inches;
	}
	distances add2(distances dd)
	{
		distances temp;
		temp.feet=feet+dd.feet;
		temp.inches=inches+dd.inches;
		while(temp.inches>=12)
		{
			temp.inches-=12;
			temp.feet++;
		}
		return temp;
	}
	distances add3(distances d1,distances d2)
	{
		distances temp;
		temp.feet=feet +d1.feet+d2.feet;
		temp.inches=inches+d1.inches+d2.inches;
		while(temp.inches>=12)
		{
			temp.inches-=12;
			temp.feet++;
		}
		return temp;
		
	}
	bool isgreater (distances d2)
	{
		int a =feet*12+inches;
		int b=d2.feet*12+d2.inches;
		if(a>b)
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
	distances d1;
	d1.input();
	cout<<"The d1 distance:\n";
	d1.display();
	distances d2(2, 4.5);
	cout<<"The d2 distance :\n";
	d2.display();
	cout<<"After adding the d1 and d2 distnace:\n";
	d2.add(d1);
//	d2.display();
	distances d3;
	cout<<"The d3 distance is:\n";
	d3.add(d1, d2);
	d3.display();
	distances d4;
	d4=d2.add2(d1);
	cout<<"The d4 distance is:\n";
	d4.display();
	distances d5;
	d5=d3.add3(d1,d2);
	cout<<"The d5 distance after the adding of d1 or d2:\n";
	d5.display();
    cout<<"the greater distance is:\n";
    if(d1.isgreater(d2))
	cout<<"d1 is greater is .\n";
	else
	cout<<"d2 is greater is .\n";	
    return 0;
} 


