#include<iostream>
using namespace std;
class camera
{
	public:
		int pixels;
		int getmegapixels()
		{
			cout<<"ENter a pixels:";
			cin>>pixels;
		  return pixels;
    	}	
};
class mobile:public camera
{
	protected:
		long EMI;
		public:
			camera cam;
			void show()const
			{
				cout<<"EMI NUMBER: "<<EMI<<endl;
				cout<<"Camera is : "<<cam.pixels<<endl;
			}
};
class samsung:public  mobile
{
	public:
		void setEMI(long a)
		{
			EMI=a;
		}
		static void display()
		{
			cout<<"Do bigger things\n";
		}
};
int main()
{
	samsung s1;
	s1.setEMI(123456789);
	s1.cam.getmegapixels();
	samsung::display();
	s1.show();
	return 0;
}
