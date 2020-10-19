// Add and sum of even number b/w 1 to 100
#include <iostream>
using namespace std;
class count
{
    public :
    count()
    {
        int a=2; 
        do
        {
            cout<<a<<"  ";
            a+=2;
        } while (a<100);
        int b=0,sum=0;
        do
        {
            b+=2;
            sum+=b;
        } while (b<100);
        cout<<"\nSum of odd number from 1 to 99 :"<<sum; 
    }
};

int main()
{
    count obj;
    return 0;
}
