// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<iostream>
using namespace std;
class book
{
	int bid;
	int pages;
	int price;
public:
	book()
	{
		bid = 0;
		pages = 0;
		price = 0;
	}
	book(int x, int y, int z)
	{
		bid = x;
		pages = y;
		price = z;
	}
	void get()
	{
		cout << "enter a book id:\n";
		cin >> bid;
		cout << "enter a book pages:\n";
		cin >> pages;
		cout << "enter a book price:\n";
		cin >> price;
	}
	void display()
	{
		cout << "Book id=" << bid << endl;
		cout << "Book pages=" << pages << endl;
		cout << "Book price=" << price << endl;
	}
static	void getprice(book b1,book b2)
	{
		//book b3;
		if (b1.price > b2.price)
		{
			cout << "THe highest price book is:\n" ;
			 b1.display();
		}
		else
		{
			cout << "THe highest price book is:\n" ;
			 b2.display() ;
		}
	}
};

int main()
{
	book b1, b2;
	b1.get();
	b1.display();
	b2.get();
	b2.display();
	book b3;
	book::getprice(b1, b2);
    return 0;
}


