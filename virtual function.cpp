#include<iostream>
#include<string>
using namespace std;
class person
{
	private:
		char name[20];
		public:
			void getname()
			{
				cout<<"Enter a name: ";
				cin.ignore();
				cin.getline(name,20);
			}
			void putname()
			{
				cout<<"Name : "<<name<<endl;
			}
			virtual void getdata()=0;//pure virtual function
			virtual bool isoutstanding()=0;
};
class student:public person
{
	private:
    float cgpa;
    public:
    	void getdata()
    	{
    		person::getname();
    		cout<<"Enter a cgpa : ";
    		cin>>cgpa;
		}
		bool isoutstanding()
		{
			if(cgpa>3)
			return true;
			else 
			return false;
		}
};
class professor:public person
{
	private:
		 int numpub;
		 public:
		 	void getdata()
		 	{
		 		person::getname();
		 		cout<<"Enter number of publication: ";
		 		cin>>numpub;
		    }
		    bool isoutstanding()
		    {
		    	if(numpub>5)
		    	return true;
		    	else
		    	return false;
			}
};
int main()
{
	person* prsnptr[100];
//	person obj;
	int count=0;
	char choice;
	do
	{
		cout<<"Enter a data of student or professor (s/p):";
		cin>>choice;
		if(choice=='s')
		{
			prsnptr[count]=new student;
			prsnptr[count++]->getdata();
		}
			else
			{
			prsnptr[count]=new professor;
			prsnptr[count++]->getdata();
		}
			cout<<"Enter another choice (y/n) :";
			cin>>choice;
	}while(choice=='y' || choice=='Y');
	
	for(int i=0;i<count;i++)
	{
		prsnptr[i]->putname();
		if(prsnptr[i]->isoutstanding())
		cout<<"This person is outstandisg...\n";	
	}
	return 0;
	
}
		

