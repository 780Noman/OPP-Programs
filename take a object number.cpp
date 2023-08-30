#include<iostream>
using namespace std;
class serial
{
	static int n;
	int snum;
	int count ;
	public:
		serial()
		{
			n++;
			count=n;
		}
	
		~serial()
		{
			cout<<"I am a destructor of object :"<<count<<endl;
		}
		void serial_num()
		{
			cout<<"Enter a serial number: ";
			cin>>snum;
		}
		void menfun()
		{
			cout<<"I am objects number :"<<count<<endl;
		}
};
int serial ::n=0;
int main()
{
//	int count =0;
	serial s;
	s.serial_num();
	s.menfun();
	serial s1;
	s1.serial_num();
	s1.menfun();
	
}
