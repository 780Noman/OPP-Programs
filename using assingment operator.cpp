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
void  operator +=(distances);
};
void distances ::operator +=(distances d2)
{
	feet +=d2.feet;
	inches+=d2.inches;
	if(inches>=12)
	{
		inches-=12;
		feet++;
	}
}
int main()
{
	distances d1,d3;
	distances d2(4,5.4);
	d1.input();
	cout<<"The d1 is :\n";
	d1.display();
	cout<<"The d2 is :\n";
	d2.display();
	d1+=d2;
	cout<<"*******************\n after adding the d1+=d2 :\n";
	d1.display();
	return 0;
	}
