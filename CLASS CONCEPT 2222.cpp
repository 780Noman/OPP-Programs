
#include<iostream>
#include<string.h>
using namespace std;
class mobile
{
	public:
	string model;
	string cname;
	int price;
	static void input(mobile*,int);
	static void display(mobile*,int);
    static void displaybycompany(mobile*,int);
	static void sort(mobile*,int);
	
};
 void mobile::input(mobile*r,int n)
{
	for(int i=0;i<n;i++)
	{
	cout<<"enter a model\n";
	cin>>r[i].model;
	cout<<"enter a company:\n";
	cin>>r[i].cname;
	cout<<"enter a price of mobile:\n";
	cin>>r[i].price;
    }
}
void mobile::sort(mobile*r,int n)
{
	mobile temp;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
	{
		if(r[i].price>r[j].price)
		{
			temp=r[i];
			r[i]=r[j];
			r[j]=temp;
		}
	}
	}
}
void mobile::display(mobile*r,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"model ="<<r[i].model<<endl;
		cout<<"company name ="<<r[i].cname<<endl;
		cout<<"Price ="<<r[i].price<<endl;
	}
}
void mobile::displaybycompany(mobile*r,int n)
{
	string s;
	cout<<"enter a name of compnay you want to search data:\n";
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(r[i].cname==s)
		{
		cout<<"model ="<<r[i].model<<endl;
		cout<<"company name ="<<r[i].cname<<endl;
		cout<<"Price ="<<r[i].price<<endl;
    	}
	}
}
int main()
{
	int n;
	cout<<"enter a number of array you want to store mobile data:\n";
	cin>>n;
	mobile *r=new mobile[n];
	mobile::input(r,n);
	mobile::display(r,n);
	mobile::displaybycompany(r,n);
	mobile::sort(r,n);
	return 0;
}
