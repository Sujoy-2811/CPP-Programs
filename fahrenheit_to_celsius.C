// Temperature
#include<iostream>
using namespace std;
class temperature
{
    float f,c;
    public:
     void getdata()
    {
        cout<<"Enter the temperature in Fahrenheit =";
        cin>>f;
    }
    void converter()
    {
        c=(f-32)*5/9;
        
    }
    void display()
    {
        cout<<f<<"F is equal to "<<c<<"C";
    }
};

int main()
{
    temperature temp;
    temp.getdata();
    temp.converter();
    temp.display();
    return 0;
}
