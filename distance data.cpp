#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class sdistance
{
	private:
		int feet;
		float inches;
		public:
			sdistnace()
			{
				feet=0;
				inches=0.0;
			}
			void input()
			{
				cout<<"Enter a feet: ";
				cin>>feet;
				cout<<"Enter a inches: ";
				cin>>inches;
			}
			void display()const
			{
				cout<<feet<<"\""<<inches<<"\'"<<endl;
			}	
};
int main()
{
	char choice;
	sdistance d1;
	fstream f;
	f.open("Distance data.DAT",ios::binary|ios::in|ios::out|ios::app);
	do
	{
		d1.input();
	    f.write((char*)(&d1),sizeof(sdistance));
		f.close();
		cout<<"Enter a choice Y/N : ";
		cin>>choice;
	}while(choice=='y' || choice=='Y');
	//f.seekg(0);
	f.read((char*)(&d1),sizeof(sdistance));
	while(!f.eof())
	{		
		f.read((char*)(&d1),sizeof(sdistance));
		d1.display();
		f.close();
	
	}
	return 0;	
}
