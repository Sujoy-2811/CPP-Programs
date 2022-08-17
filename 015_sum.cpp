// SUM Program 
#include<iostream>
#include<conio.h>
using namespace std;
class add
{
    int a,b,c;
    public:
    void getdata()
    {
        cout<<"Enter the value of a =";
        cin>>a;
        cout<<"Enter the value of b =";
        cin>>b;
    }
   void sum ();
    void display()
    {
        cout<<endl<<"Value of a ="<<a;
        cout<<endl<<"Value of b ="<<b;
        cout<<endl<<"Sum of a and b ="<<c;
    }
};
void add:: sum()
    {
        c=a+b;
    }

int main()
{
    add a;
    a.getdata();
    a.sum();
    a.display();
    getch();
    return 0;
}
