#include<iostream>
using namespace std;
struct date
{
	int day;
	int month;
	int year;
};
struct phonebook
{
	char name[24];
	char city[10];
	date birthdate;
};
int  main()
{
	phonebook a;
	cout<<"ENter a name:\n";
	cin>>a.name;
	cout<<"Enter a city name:\n";
	cin>>a.city;
	cout<<"Enter a date of birth in(dd-mm-yy) format:\n";
	char ch;
	cin>>a.birthdate.day>>ch>>a.birthdate.month>>ch>>a.birthdate.year;
	cout<<"The size of object is :"<<sizeof(a)<<endl;
	cout<<" The given date is :\n";
	cout<<"Name is : "<<a.name<<endl;
	cout<<"City name : "<<a.city<<endl;
	cout<<"DOB IS : "<<a.birthdate.day<<"-"<<a.birthdate.month<<"-"<<a.birthdate.year<<endl;
	
}
