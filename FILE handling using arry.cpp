#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class student
{
	private:
		int rolno;
		string name;
		float cgpa;
		public:
			student()
			{
				rolno=0;
				name="\0";
				cgpa=0.0;
			}
			void input()
			{
				cout<<"Enter a roll no : ";
				cin>>rolno;
				cout<<"ENter a name: ";
				cin>>name;
				cout<<"Enter a cgpa: ";
				cin>>cgpa;
			}
			void display()const
			{
				cout<<"Name: "<<name<<endl;
				cout<<"Roll no: "<<rolno<<endl;
				cout<<"CGPA : "<<cgpa<<endl;
			}
		
};
int main()
{
	student s[3];
		fstream f;
		f.open("C:\\student.DAT",ios::binary|ios::in|ios::out|ios::app);
	for(int i=0;i<3;i++)
	{
		cout<<"Enter data of student "<<i+1<<" : "<<endl;
		s[i].input();
			f.write(reinterpret_cast<char*>(&s),sizeof(student)*3);
	}

//	f.write(reinterpret_cast<char*>(&s),sizeof(student)*3);
	f.close();
	student s1[3];
	f.open("C:\\student.DAT",ios::binary|ios::in|ios::out|ios::app);
//	f.read(reinterpret_cast<char*>(&s1),sizeof(student)*3);
	f.close();
	for(int i=0;i<3;i++)
	{
		cout<<"The data of student "<<i+1<<"  is : \n";
		s1[i].display();
			f.read(reinterpret_cast<char*>(&s1),sizeof(student)*3);
	}
	
	
	return 0; 
	
}
