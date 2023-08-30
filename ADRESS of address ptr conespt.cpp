#include<iostream>
using namespace std;
class matrix
{
	private:
		int* *A;
		int r,c;
		public:
			matrix()
			{
				r=3;
				c=3;
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
			void intput()
			{
				for(int i=0;i<r;i++)
				{
					for(int j=0;j<c;j++)
					{
						cout<<"Enter a value : \n";
						cin>>A[i][j];
					}
				}
			}
			void display()
			{
				cout<<"\nThe Given matrix is : \n\n";
				for(int i=0;i<r;i++)
				{
					for(int j=0;j<c;j++)
				    {
				    cout<<A[i][j]<<"\t";
					}
					cout<<endl;
				}
			}
			void add(matrix m2)
			{
				if(r==m2.r && c==m2.c)
				{
					matrix R(r,c);
					for(int i=0;i<r;i++)
					{
						for(int j=0;j<c;j++)
						{
							R.A[i][j]=A[i][j]+m2.A[i][j];
						}
					}
					R.display();
				}
				else
				cout<<"\n Both matrix can't be added....!!!!\n";
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
				cout<<"Both Matrix can't be added...!!!\n";
			}
};
int main()
{
	matrix m1,m2;
	m1.intput();
	m1.display();
	m2.intput();
	m2.display();
	cout<<"\nThe after addition matrix is : \n";
	m1.add(m2);
	cout<<"\nThe multiplicated matrix is :\n";
	m1.multiply(m2);
	matrix m3(2,3);
	m3.intput();
	m3.add(m2);
	m3.multiply(m2);
	return 0;
}
