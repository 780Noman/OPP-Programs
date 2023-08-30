#include<iostream>
using namespace std;
class stackoffloat
{
	private:
		float ary[4];
		int top;
		public:
			stackoffloat()
			{
				top=-1;
			}
			void push(float ft)
			{
				if(top<3)
				{
				++top;
				ary[top]=ft;
			    }
				else
				cout<<"\n Stack is Full....\n";
			}
			float pop()
			{
				if(top>-1)
				return (ary[top--]);
				else
				cout<<"\n Stack is Empty .....\n";
				return 0;
			}
};
int main()
{
	stackoffloat f;
	f.push(3.4);
	f.push(2.1);
	f.push(1.54);
	f.push(0.45);
	f.push(7.3);
	cout<<f.pop()<<endl;
	cout<<f.pop()<<endl;
	cout<<f.pop()<<endl;
	float n=f.pop();
	cout<<n<<endl;
	f.pop();
	return 0;
}

