#include<iostream>
using namespace std;
class counter
{
	private:
		int count;
		public:
			counter()
			{
				count=0;
			}
			void show()
			{
				cout<<"\n\n*********************************\nThe total number of student present in lab : "<<count<<endl;
			}
			void operator ++()
			{
				++count;
			}
			void operator --()
			{
				--count;
			}
};
int main()
{
	counter obj;
	char choice;
	do
	{
		cout<<"Please Enter a E when student enter in lab And X for when exit student : ";
		cin>>choice;
		if(choice=='e' || choice=='E')
		{
			++obj;
		}
		if(choice=='x' || choice=='X')
		{
			--obj;
		}
		cout<<"\nIf you want to repeat then press Y other then N :";
		cin>>choice;
	}while(choice == 'y' || choice == 'Y');
	obj.show();
	return 0;
}
