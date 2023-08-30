#include<iostream>
#include<string>
using namespace std;
class book
{
	public:
		string name;
		int pages;
		float price;
		public:
			book()
			{
			name='\0';
			pages=0;
			price=0.0;	
			}
			void getdata()
			{
				cout<<"ENter a name of book :";
				getline(cin,name);
				cout<<"Enter a pages of book :";
				cin>>pages;
				cout<<"Enter a price of book :";
				cin>>price;
			}
//			int highpriceb(book,book);
		//	float re_price();
			book(string n,int pg,float pr);
			void display();
	static	void highpriceb(book x,book y)
{
	if (x.price>y.price)
	x.display();
//	return x;
	else 
	y.display();
//	return y;
}

};
book::book(string n,int pg,float pr)
{
	name =n;
	pages= pg;
	price= pr;	
}
void book::display()
{
	cout<<"Name is :"<<name<<endl;
	cout<<"Pages is :"<<pages<<endl;
	cout<<"Price is :"<<price<<endl;
}

int main()
{
	book b1;
	b1.getdata();
	book b2("Urdu",600,450.6);
	b2.display();
	b1.display();
	book b3;
	cout<<"The highest price book is : \n";
book::highpriceb(b1,b2);
//	b3.display();
	//b3.re_price();
	return 0;
}

