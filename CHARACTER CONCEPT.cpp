#include<iostream>
#include<string>
using namespace std;
class uds
{
	private:
		char c[200];
		public:
			void getstring()
			{
				cout<<"Enter a string :\n";
				cin.getline(c,200);
			}
			void show()
		{
			cout<<"String :\n";
			cout<<c<<endl;
		}
		int length()
		{
			int i=0;
			while(c[i]!='\0')
			{
				i++;
			}
			return i;
		}
		void showreverse()
		{
			int i=0;
			while(c[i]!='\0')
			{
				i++;
			}
		//	i--;
			for(int j=i-1;j>=0;j--)
			{
				cout<<c[j];
			}
		
		}
			
			};
			int main()
			{
				uds s;
				s.getstring();
				s.show();
				cout<<"Length of string is :";
				cout<<s.length();
				cout<<endl;
				cout<<"Reverse string is :\n";
				s.showreverse();
	
				return 0;
			}
