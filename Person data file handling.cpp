#include<iostream>
#include<fstream>
using namespace std;
class person
{
	private:
		char name[20];
		int age;
		public:
			void getdata()
			{
				cout<<"ENter n name : ";
				cin.getline(name,20);
				cout<<"Enter a age : ";
				cin>>age;
			}
				void show()const
			{
				cout<<"Name : "<<name<<endl;
				cout<<"Age : "<<age<<endl;
			}			
};
int main()
{
	person p;
	p.getdata();
	fstream file;
	file.open("Person Data.txt",ios::binary | ios::in | ios ::out |ios::app);
	file.write(reinterpret_cast<char*>(&p),sizeof(p));
	file.close();
	file.open("Person Data.txt",ios::binary | ios::out | ios::in | ios::app);
	file.read(reinterpret_cast<char*>(&p),sizeof(p));
	file.close();
	p.show();
	return 0;
}
