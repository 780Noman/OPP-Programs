#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class uds
{
	char c[100];
	public:
		void getlines()
		{
			cout<<"Enter a string :\n";
			cin.getline(c,100);
		}
		uds concate(uds s1)
		{
			uds r;
			int i=0;
			while(c[i]!=0)
			{
				r.c[i]=c[i];
				i++;
			}
			int j=0;
			while(s1.c[j]!=0)
			{
				r.c[i]=s1.c[j];
				i++;
				j++;
			}
			r.c[i]=0;
			return r;
		}
	//	void replace(uds s2)
	//	{
			//	int i=0;
		//	while(s2[i]!=0)
		//	{
		//	uds r;
		//	r.c[i]=c[i];
		//	c[i]=s2.c[i];
		//	s2.c[i]=r.c[i];
	//	}
	//	}
		
};
int main()
{
	uds s1,s2,s3;
	s1.getlines();
	s2.getlines();
	s3=s1.concate(s2);
//	cout<<"After concatenation of string is :\n"<<s3;
     cout<<s3;
//	s1.replace(s2);
	return 0;
}
