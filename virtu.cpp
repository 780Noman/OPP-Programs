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
				cin.getline(name,20);//getline(cin,name);
			}
			void putname()
			{
				cout<<"Name : "<<name<<endl;
			}
			virtual void getdata()=0;
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
	student* stuptr[50];
	professor* proptr[50];
	int count=0;
	int n=0;
	
	char choice;
	do
	{
		cout<<"Enter a data of student or professor (s/p):";
		cin>>choice;
		if(choice=='s')
		{
			stuptr[count]=new student;
			stuptr[count++]->getdata();
		}
		else 
		{
			proptr[n]=new professor;
			proptr[n++]->getdata();
			
		}
		cout<<"\n ENter another choice (y/n)";
		cin>>choice;
		
	}while(choice=='y' || choice=='Y');
	for(int i=0;i<count;i++)
	{
		stuptr[i]->putname();
		if(stuptr[i]->isoutstanding())
		{
			cout<<"This is outstanding ....\n";
		}
		else
		{
			cout<<"This is not outstanding....\n";
		}
	}
	for(int j=0;j<n;j++)
	{
		proptr[j]->putname();
		if(proptr[j]->isoutstanding())
		{
			cout<<"This is outstanding ....\n";
		}
		else
		{
			cout<<"This is not outstanding....\n";
		}	
	}
	return 0;
}
