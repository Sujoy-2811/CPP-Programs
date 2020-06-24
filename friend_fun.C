// Friendly Fuction
#include<iostream>
#include<conio.h>
using namespace std;
class second;
class first
{
    int a;
    public:
    void getdata()
    {
        cout<<endl<<"Enter the value of a= ";
        cin>>a;
    }
    void display()
    {
        cout<<endl<<"Value of a= "<<a;
    }
    friend void swap(first&,second&);
};
class second
{
    int b;
    public:
    void getdata()
    {
        cout<<endl<<"Enter the value of b= ";
        cin>>b;
    }
    void display()
    {
        cout<<endl<<"Value of b= "<<b;
    }
    friend void swap(first&,second&);
};

void swap(first& f,second& s)
{
    int temp;
    temp=f.a;
    f.a=s.b;
    s.b=temp;
}

int main()
{
    first m;
    second n;
    m.getdata();
    n.getdata();
    cout<<endl<<"Before swapping";
    m.display();
    n.display();
    swap(m,n);
    cout<<endl<<endl<<"After swapping";
    m.display();
    n.display();
    getch();
    return 0;
}