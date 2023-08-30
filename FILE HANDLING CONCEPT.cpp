#include<iostream>
#include<fstream>
using namespace std;
class sdistance
{
	private:
		int feet;
		float inches;
		public:
			sdistance()
			{
				feet=0;
				inches=0.0;
			}
			sdistance(int x,float y)
			{
				feet=x;
				inches=y;
			}
			void input()
			{
				cout<<"ENter a feet: ";
				cin>>feet;
				cout<<"ENter a inches: ";
				cin>>inches;
			}
			void display()const
			{
				cout<<feet<<"\""<<inches<<"\'"<<endl;
			}
			
		
};
int main()
{
	sdistance d1;
	fstream ff;
	d1.input();
	ff.open("Distance.dat",ios::binary|ios::in|ios::out|ios::app);
	ff.read((char*)(&d1),sizeof(d1));
	ff.close();
	sdistance d2;
	ff.open("Distance.dat",ios::binary|ios::in|ios::out|ios::app);
	ff.read((char*)(&d2),sizeof(sdistance));
	ff.close();
	d1.display();
	return 0;
}
