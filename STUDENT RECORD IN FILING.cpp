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
		void Write()
		{
			fstream f;
			f.open("Student data1.DAT",ios::binary|ios::in|ios::out|ios::app);
			f.write((char*)(this),sizeof(student));
			f.close();
		}
		void Read()
		{
			fstream f;
			f.open("Student data1.DAT",ios::binary|ios::in|ios::out|ios::app);
			f.read((char*)(this),sizeof(student));
			f.close();
		}
};
int main()
{
	student s,t;
	s.input();
	s.Write();
	t.Read();
	t.display();
	return 0;
}
