// Findimg area through Constructor
#include<iostream>
using namespace std;
const float pi=3.14;
class area
{
    float a,b,ar;
    public:
    area(){}
    area(int i)
    {
        switch (i)
        {
        case 1:
           { cout<<"hi";
            cout<<"hello";}

            // break;
        
        case 2:
            cout<<"hi";
            cout<<"hello";

            // break;
        }
    }


};
int main(int argc, char const *argv[])
{
    int i,j;
    area obj;
    // cout<<"How many times you want to find area :";
    // cin>>j;
    // for ( int a=0; a<j; a++)
    // {
    //     cout<<" 1.Area of circle \n 2.Area of triangle \n 3.Area of rectangle \n 4.Area of square \nEnter a number to choose from the given options :";
    //     cin>>i;
    
    // }
        obj=1;
    return 0;
}
