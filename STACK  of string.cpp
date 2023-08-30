#include<iostream>
using namespace std;
class sos //stack of string
{
	private :
		string name[5];
		int top;
		public:
			sos()
			{
				top=-1;
			}
			void push(string s)
			{
				if(top<4)
				{
					++top;
				    name[top]=s;
			    }
				else
				cout<<"\n stack of string is full.....\n";
			}
			string pop()
			{
				if(top>-1)
				return name[top--];
				else
				{
				cout<<"\nStack of string is empty....\n";
				return 0;
			  }
			}
};
int main()
{
	sos str;
	str.push("Noman");
	str.push("Ali");
	str.push("Haider");
	str.push("Umar");
	str.push("Arslan");
	str.push("zain");
   cout<<str.pop()<<endl;
   cout<<str.pop()<<endl;
   string s=str.pop();
   cout<<s<<endl;
   cout<<str.pop()<<endl;
   cout<<str.pop()<<endl;
	return 0;
}
