#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    int roll,d,m,y;
    char name[20];
    public:
    void getdata();
    void getdob();
    void display();
};
int main()
{
    student s1,s2;
    s1.getdata();
    s1.getdob();
    s2.getdata();
    s2.getdob();
    s1.display();
    s2.display();
    getch();
    return 0;
}
void student:: getdata()
{
    cout<<"Enter the name of student :";
    cin>>name;
    cout<<"Enter roll no. of student :";
    cin>>roll;
}
void student:: getdob()
{
    cout<<"Enter the date of birth :";
    cin>>d;
    cout<<"Enter the month of birth :";
    cin>> m;
    cout<<"Enter the year of birth :";
    cin>> y;
}
void student:: display()
{
   cout<<endl<<"Name of student: "<<name<<endl<<"Roll no.:"<<roll<<endl<<"DOB :"<<d<<"-"<<m<<"-"<<y<<endl<<endl;
}