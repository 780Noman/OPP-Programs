#include<iostream>
using namespace std;
class counter
{
	private:
		int n;
		public:
			counter()
			{
				n=0;
			}
			counter(int a)
			{
				n=a;
			}
//			void input()
//			{
//				cout<<"Enter a number: ";
//				cin>>n;
//			}
			void display()
			{
				cout<<"Number is: "<<n<<endl;
			}
			counter operator ++()
			{
				++n;
			}
			counter operator --(int)
			{
				--n;
			}
			counter operator -(counter c1)
			{
				counter temp;
				temp.n=n-c1.n;
				return temp;
			}
};
int main()
{
	counter c(6),c1(3),c2;
//	c1.input();
//	c.input();
//	++c;
	c.display();
//	c1--;
	c1.display();
	cout<<"After a subtracting the c and c1 is :\n";
	c2=++c-c1--;
	c2.display();
	return 0;
}

