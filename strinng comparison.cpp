#include<iostream>
#include<string>
using namespace std;
int main()
{
	int s1=0,s2=0,i,res;
	char str[30];
	char s[30];
	cout<<"ENter a string :\n";
	cin.getline(str,30);
	cout<<"Enter a second string: \n";
	cin.getline(s,30);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			res=str[i];
			s1+=(res+32);
		}
		else
		{
			res=str[i];
			s1+=res;
		}
	}
	for(int i=0;s[i]!=0;i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			res=s[i];
			s2+=(res+32);
		}
		else
		{
			res=s[i];
			s2+=res;
		}
	}
   if(str==s)
   {
   
   cout<<"string are equal..\n";
}
   else if(str<s)
   {
   	cout<<"string 2 is greater...\n ";
   }
   else
   {
   cout<<"string 1 is greater ...\n";
   }
   return 0;
}
