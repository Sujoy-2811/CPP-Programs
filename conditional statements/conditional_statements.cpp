#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age >= 15 && age <= 25)
    {
        cout << "Young" << endl;
    }
    else
    {
        cout << "Not Young" << endl;
    }
    if (age < 15 || age > 25)
    {
        cout << "Eligible for the offer" << endl;
    }
    else
    {
        cout << "Not eligible for the offer" << endl;
    }
    return 0;
}