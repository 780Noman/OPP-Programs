#include<iostream>
using namespace std;
class student
{
    int roll_no;
    string name;
    float cgpa;
    public:
    void input()
    {
        cout<<"Enter NAME: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter ROLL NO: ";
        cin>>roll_no;
        cout<<"Enter CGPA: ";
        cin>>cgpa;
    }
    void display()
    {
        cout<<"NAME: "<<name<<endl;
        cout<<"ROLL NO: "<<roll_no<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    student *s=new student[n];
    for(int i=0;i<n;i++)
    {
    	cout<<"Enter a record of student ( "<<i+1<<" )"<<endl;
        s[i].input();
    }
    cout<<"\n\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Record of student "<<i+1<<":\n";
        s[i].display();
    }
    return 0;
}

