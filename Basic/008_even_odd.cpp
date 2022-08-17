// Even or odd
#include <iostream>
using namespace std;
class natural_number
{
    int a,b;
    public : 
    void getdata()
    {
        cout << "Enter a number :";
        cin >> a;
    }
    void display()
    {
       b=a%2;
       if (b==0)
       {
           cout<<"Given number is even";
       }
       else
       {
           cout<<"Given number is odd";
       }
       
       
    }
};

int main()
{
    natural_number obj;
    obj.getdata();
    obj.display();
    return 0;
}
