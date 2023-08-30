#include<iostream>
using namespace std;
template<class t>
t abs(t num)
{
	return (num<0)? -num : num;
}
int main()
{
	int int1=9,int2=-34;
	float fl1=4.5,fl2=-2.3;
	long lon1=3454734854,lon2=-234243;
	char ch='a';
	cout<<"abs(int1 )= "<<abs(int1)<<endl;
	cout<<"abs(int2)= "<<abs(int2)<<endl;
	cout<<"abs(fl1)= "<<abs(fl1)<<endl;
	cout<<"abs(fl2) ="<<abs(fl2)<<endl;
	cout<<"abs(lon1) ="<<abs(lon1)<<endl;
	cout<<"abs(lon2) ="<<abs(lon2)<<endl;
	return 0;
}
