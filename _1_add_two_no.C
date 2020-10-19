// Add Two Numbers
#include<iostream>
using namespace std;
class add
{
    int a,b,c;
    public:
    void getdata()
    {
        cout<<"Enter the value of a :";
        cin>>a;
        cout<<"Enter the value of b :";
        cin>>b;
    }
    void sum()
    {
        c=a+b;
    }
    void display()
    {
        cout<<"Sum of "<<a<<" and "<<b<<" is "<<c;
    }

};
int main()
{
    add obj;
    obj.getdata();
    obj.sum();
    obj.display();
    return 0;
}

