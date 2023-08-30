#include<iostream>
using namespace std;
int main()
{
	int a=5;
	double d=2;
	cout<<"a= "<<a<<endl;
	cout<<"Address of A= "<<&a<<endl;
	//int b=&a; error because of b variable simple int not ptr
	int *p;
	p=&a;
	cout<<"The value of a= "<<a<<endl;
	int *t=&a;
	cout<<"a="<<a<<endl;
	double *x;
//	x=&a; error because of a type is int and x type is double ptr must same type of storing address varible type
void *y;//It storing all type of variable addressess.
y=&d;
cout<<"Using void * = "<<y<<endl;
double r;
y=&r;
cout<<"The address of r variable is : "<<y<<endl;
return 0;
		
}
