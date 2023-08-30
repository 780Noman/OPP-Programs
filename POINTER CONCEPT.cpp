#include<iostream>
using namespace std;
int main()
{
	char str[]="helloworld";
	char ch,*ptr,s;
	s='n';
	ptr=str;
	cout<<"ENTER A LETTER YOU WANT TO SEARCH :\n";
	cin>>ch;
	while(*ptr++!='\0')
	{
		if(*ptr==ch)
		s='y';
		if (s=='y')
		cout<<"THe charracter is found in the array ";
		else 
		cout<<"The character is not found in the array...";
		return 0;
	}
}
