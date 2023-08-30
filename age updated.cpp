#include<iostream>
using namespace std;
class age
{
	private:
		int ali;
		int ahmed;
		public:
			age()
			{
				ali=0;
				ahmed=0;
			}
			void update_age()
			{
				ali+=30;
				ahmed+=29;
				cout<<"The updated age is :\n";
				cout<<"The age of ali: "<<ali<<endl;
				cout<<"The age of ahmed: "<<ahmed<<endl;
			}
			void simple_age()
			{
				cout<<"The simple age is: \n";
				cout<<"AGE OF ALI: 0"<<endl;
				cout<<"AGE OF AHMED: 0"<<endl;
			}
};
int main()
{
	age a;
	a.simple_age();
	a.update_age();
	return 0;
	
}
