// Constructor
#include<iostream>
#include<conio.h>
using namespace std;
class abc
{
    int a;
    public:
    abc(int x)
    {
        a=x;
        cout<<endl<<endl<<"Value of a: "<<a;
    }
    abc()
    {};
};
int main()
{
    abc obj1(3); 
    getch();
    return 0;
}
