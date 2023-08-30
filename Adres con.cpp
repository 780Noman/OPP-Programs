#include<iostream>
using namespace std;
class matrix
{
	int* *A;
	int r,c;
	public:
		matrix()
		{
			r=2;
			c=2;
			A=new int*[r];
			for(int i=0;i<r;i++)
			{
				 A[i]=new int[c];
			}
		}
		matrix(int row,int col)
		{
			r=row;
			c=col;
			A=new int*[r];
			for(int i=0;i<r;i++)
			{
				A[i]=new int[c];
			}
		}
		void input()
		{
			for(int i=0;i<r;i++)
			{
				for (int j=0;j<c;j++)
				{
					cout<<"Enter a value :";
					cin>>A[i][j];
				}
			}
		}
		void display()
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<A[i][j]<<"\t";
				}
				cout<<endl;
			}
		}
		void add(matrix m1)
		{
	     if(r==m1.r && c==m1.c)
	     {
	     	matrix R(r,c);
	     	for(int i=0;i<r;i++)
	     	{
	     		for(int j=0;j<c;j++)
	     		{
	     			R.A[i][j]=A[i][j]+m1.A[i][j];	
	    		 }
			 }
			 R.display();
		 }
		 	 else
			 cout<<"\nBoth matrix cann't be added ....\n";
		}
		void multiply(matrix m2)
		{
			if(c==m2.r)
			{
				matrix R(r,m2.c);
				for(int i=0;i<r;i++)
				{
					for(int j=0;j<m2.c;j++)
					{
						R.A[i][j]=0;
						for(int k=0;k<c;k++)
						{
							R.A[i][j]+=A[i][k]*m2.A[k][j];
						}
					}
				}
				R.display();
			}
			else 
			cout<<"Both matrix cann't be multiply ....\n";
		}
};
int main()
{
	matrix m,m1(2,3);
	cout<<"Enter a first matrix order 2*2 :\n";
	m.input();
	m.display();
	cout<<"Enter a second matrix :\n";
	m1.input();
	m1.display();
	cout<<"\nThe matrix after addition is :\n";
	m.add(m1);
	cout<<"\nThe matrix is after multiplication is : \n";
	m.multiply(m1);
	return 0;
}
