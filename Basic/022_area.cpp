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
            {
                cout<<"\nEnter the radius of circle :";
                cin>>a;
                ar=pi*a*a;
                cout<<"Area of circle :"<<ar<<endl<<endl<<endl;
                break;
            }
            case 2:
            {
                cout<<"\nEnter the base of triangle :";
                cin>>a;
                cout<<"Enter the height of triangle :";
                cin>>b;
                ar=0.5*a*b;
                cout<<"Area of triangle :"<<ar<<endl<<endl<<endl;
                break;
            }
            case 3:
            {
                cout<<"\nEnter the length of rectangle :";
                cin>>a;
                cout<<"Enter the width of rectangle :";
                cin>>b;
                ar=a*b;
                cout<<"Area of rectangle :"<<ar<<endl<<endl<<endl;
                break;
            }
            case 4:
            {
                cout<<"\nEnter the side of square :";
                cin>>a;
                ar=a*a;
                cout<<"Area of square :"<<ar<<endl<<endl<<endl;
                break;
            }
        }
    }


};
int main()
{
    int i,j;
    area obj;
    cout<<"How many times you want to find area :";
    cin>>j;
    for ( int a=0; a<j; a++)
    {
        cout<<" 1.Area of circle \n 2.Area of triangle \n 3.Area of rectangle \n 4.Area of square \nEnter a number to choose from the given options :";
        cin>>i;
        obj=i;
    
    }
    return 0;
}
