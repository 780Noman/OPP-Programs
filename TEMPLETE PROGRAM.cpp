#include<iostream>
using namespace std;
template<class type>
int find(type *ary,type value,int size)
{
	for(int i=0;i<size;i++)
	{
		if(ary[i]==value)
		   return i;
	   
	}
	 
		    return -1;
}
int main()
{
	int a[6]={1,4,2,5,3,2};
	int n=5;
	char b[]={'c','d','e'};
	char b1='d';
	float c[]={3.4,6.2,1.2};
	float c1=1.2;
	double d[]={12345,5342422,456774};
	double d1=12345;
	int o=find(a,n,6);
	cout<<"\n 5 in a[] :index = "<<o<<endl;
	cout<<" 'd' in b[] : index = "<<find(b,b1,3)<<endl;
	cout<<"\n 12345 d[] : index = "<<find(d,d1,3);
	return 0;
}
