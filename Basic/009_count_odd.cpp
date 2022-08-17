// Add and sum of odd number b/w 1 to 100
#include <iostream>
using namespace std;
class count
{
    public :
    count()
    {
        int a=1; 
        while (a<100)
        {
            cout<<a<<"  ";
            a+=2;
        }
        int b=1,sum=0;
        while (b<100)
        {
            sum+=b;
            b+=2;
        }
        cout<<"\nSum of odd number from 1 to 99 :"<<sum; 
    }
};

int main()
{
    count obj;
    return 0;
}
