// Greater Number Program 
#include<iostream>
using namespace std;
class number
{
   int a,b;
   public:
    void getdata()
    {
        cout<<"Enter the value of a =";
        cin>>a;
        cout<<"Enter the value of b =";
        cin>>b;
    }
    void display_greater_no()
    {
        (a>b)?cout<<"a is greater than b":cout<<"b is greater than a";
    }
};

int main()
{
    number obj;
    obj.getdata();
    obj.display_greater_no();
    return 0;
}
