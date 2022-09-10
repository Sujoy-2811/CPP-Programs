// Prime Number or not
#include <iostream>
using namespace std;
class prime
{
    int a;

public:
    int b = 1;
    void getdata()
    {
        cout << "Enter the value of a :";
        cin >> a;
    }
    void prime_or_not()
    {
        for (int i = 2; i < a / 2; i++)
        {
            if (a % i == 0)
            {
                b = 0;
                break;
            }
        }
    }
    void display()
    {
        if (a == 1)
        {
            cout << a << " is neither prime number nor composite";
        }
        else if (b == 0)
        {
            cout << a << " is not a prime number ";
        }
        else if (b == 1)
        {
            cout << a << " is a prime number";
        }
    }
};

int main()
{
    prime obj;
    obj.getdata();
    obj.prime_or_not();
    obj.display();
    return 0;
}
