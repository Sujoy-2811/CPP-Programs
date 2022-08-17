// Greatest of three number
#include <iostream>
using namespace std;
class greater_number
{
    int a,b,c,d;
    public : 
    void getdata()
    {
        cout << "Enter the value of a :";
        cin >> a;
        cout << "Enter the value of b :";
        cin >> b;
        cout << "Enter the value of c :";
        cin >> c;
    }
    void display_greater_number()
    {
        d=(a>b)?((a>c)?a:c):((b>c)?b:c);
       cout<<"Greatest number is "<<d;
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
