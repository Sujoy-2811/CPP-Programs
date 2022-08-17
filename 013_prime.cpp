// Prime Number or not
#include <iostream>
using namespace std;
class prime
{
    int a,b;
    public : 
    void getdata()
    {
        cout<<"Enter the value of a :";
        cin>>a;
    }
    void find_prime()
    {
        for (int i = 0; i <=a; i++)
        {
            b=1;
            for (int j = 0; j < i/2; j++)
            {
                if (i%j==0)
                {
                    b=0;
                }
            }
            if (b==1)
            {
                cout<<i<<"  ";
            }
            
        }
        
    }
    
};

int main()
{
    prime obj;
    obj.getdata();
    obj.find_prime();
    return 0;
}
