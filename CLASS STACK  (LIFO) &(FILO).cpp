#include<iostream>
using namespace std;
class stackofint
{
	private:
		int ary[5];
		int top;
		public:
			stackofint()
			{
				top=-1;
			}
			void push(int num)
			{
				if(top<4)
				{
				++top;
				ary[top]=num;
		     	}
		     	else
		     	cout<<"\n Stack is full ...\n";
			}
			int  pop()
			{
			if(top>-1)
			   {
				return (ary[top--]);
				}	
				else
				{
				cout<<"\nStack is Empty....\n";
                return 0;			  
                }
			}
};
int main()
{
	stackofint c;
//	cout<<"The Given array is :\n ";
	c.push(1);
	c.push(2);
	c.push(3);
	c.push(4);
	c.push(5);
	c.push(6);
	cout<<c.pop()<<endl;
	cout<<c.pop()<<endl;
	int n=c.pop();
	cout<<n<<endl;
	cout<<c.pop()<<endl;
	cout<<c.pop()<<endl;
	c.pop();
	return 0;
}
