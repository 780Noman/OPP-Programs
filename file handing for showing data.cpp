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
				cin.ignore();
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
	char choice;
	fstream file;
	file.open("group data.txt", ios::out |ios::in | ios::app);
	do
	{
		cout<<"Enter a record of Person :\n ";
		p.getdata();
		file.write(reinterpret_cast<char*>(&p),sizeof(p));
		cout<<"If you enter another record then press Y : ";
    	cin>>choice;		
	}while(choice=='y' || choice=='Y');
	file.seekg(0);
	file.read(reinterpret_cast<char*>(&p),sizeof(p));
	while(!file.eof())
	{
		cout<<"\nPerson :\n";
		p.show();
		file.read(reinterpret_cast<char*>(&p),sizeof(p));
	}
	cout<<endl;
	return 0;
}
