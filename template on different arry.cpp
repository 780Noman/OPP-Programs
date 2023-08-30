#include<iostream>
using namespace std;
template<class tt>
void display(tt A[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<A[i]<<" "<<endl;
	}
}
template<class t>
void sort(t *A,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(A[i]>A[j])
			{
				t temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
}
int main()
{
	int A[5]={4,3,7,8,2};
	cout<<"The interger array is : \n";
	display(A,5);
	cout<<"**********************\nAfter sorting the interger arry : \n";
	sort(A,5);
	display(A,5);
	float B[6]={4.5,6,3.6,9.5,2.1,7.4};
	cout<<"The floating array is : \n";
	display(B,6);
	cout<<"&&&&&&&&&&&&&&&&&&&&&\n After sorting the floating arry is : \n";
	sort(B,6);
	display(B,6);
	char C[5]={'*','#','&','a','b'};
	cout<<"The character array is : \n";
	display(C,5);
	cout<<"#########################\nAfter sorting the character array is : \n";
	sort(C,5);
	display(C,5);
	return 0;
}

