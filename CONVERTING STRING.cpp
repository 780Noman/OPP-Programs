#include<iostream>
#include<string>
using namespace std;
int main()
{
//	int s1=0,s2=0,i,res;
int i=0;
	char str[30];
//	char s[30];
	cout<<"ENter a string :\n";
	cin.getline(str,30);
//	for(int i=0;str[i]!='\0';i++)
while(str[i]!='\0')
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]+=32;
		}
		i++;
	}
	cout<<"The converted string is upper to lower case:\n"<<str;
}
