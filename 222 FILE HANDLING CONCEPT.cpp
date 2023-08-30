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
   student s;
   fstream file;
   char choice;
   file.open("New file.txt",ios::in|ios::out|ios::app);
   do
   {
   	cout<<"\nEnter a Record of student : \n";
   	s.input();
   	file.write(reinterpret_cast<char*>(&s),sizeof(s));
   	cout<<"\nPress y to repeat : ";
   	cin>>choice;
   	 	
   }while(choice=='y');
   file.seekg(0);
   file.read(reinterpret_cast<char*>(&s),sizeof(s));
   	cout<<"\nRecord of student : \n";
   while(!file.eof())
   {
   s.display();
   	file.read(reinterpret_cast<char*>(&s),sizeof(s));
   	
   	
   }
	return 0;	
}
