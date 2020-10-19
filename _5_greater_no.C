// Greater of two number
#include <iostream>
using namespace std;
class greater_number
{
    int a,b;
    public : 
    void getdata()
    {
        cout << "Enter the value of a :";
        cin >> a;
        cout << "Enter the value of b :";
        cin >> b;
    }
    void display_greater_number()
    {
        (a>b)?cout<<"a is greater than b": cout<<"b is greater than a";
    }
};

int
main()
{
    greater_number obj;
    obj.getdata();
    obj.display_greater_number();
    return 0;
}