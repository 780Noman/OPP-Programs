#include<iostream>
#include<string>
#include<fstream>
#include<string.H>
using namespace std;
class book
{
	private:
		int bid;
		char title[30];
		float price;
		public:
			 book()
			 {
			 	bid=0;
			 	strcpy(title,"no title");
			 	price=0;
			 }
			 void input()
			 {
			 	cout<<"Enter a book id: ";
			 	cin>>bid;
			 	cout<<"Enter a title of book: ";
			 		cin.ignore();
			 	cin.getline(title,30);
			 	cout<<"Enter a price: ";
			 	cin>>price;
			 }
			 void display()
			 {
			 	cout<<"BOOK Id: "<<bid<<endl;
			 	cout<<"TITLE of BOOK: "<<title<<endl;
			 	cout<<"PRICE: "<<price<<endl;
			 }
			 int bookstore()
			 {
			 	ofstream fout;
			 	if(bid==0 && price==0)
			 	{
			 		cout<<"NO record fount.....";
			 		return 0;
				 }
				 else
				 {
			 	fout.open("BOOKS RECORD.DAT",ios::app|ios::binary |ios::out |ios::app);
			 	fout.write((char*)this,sizeof(*this));
			 	fout.close();
			 	return 1;
			    }
			 }
			 void readbookrecord()
			 {
			 	ifstream iout;
			 	iout.open("BOOKS RECORD.DAT",ios::binary|ios::app| ios::in);
			 	iout.read((char*)this,sizeof(*this));
			 	display();
			 	iout.close();
			 }
};
int main()
{
	book b1,b2;
	b1.input();
	b1.display();
	b1.bookstore();
	b2.readbookrecord();
	b2.display();
	return 0;
}
