// Find Grade of Student
#include <iostream>
using namespace std;
class grade
{
    float a,b,c,d,e,avg; 
    public :
    grade()
    {
        cout<<"Enter marks in respective subjects in order to find your grade :";
    } 
    void getdata()
    {
        cout << "\nEnter the marks of Math :";
        cin >> a;
        cout << "\nEnter the marks of English :";
        cin >> b;
        cout << "\nEnter the marks of Science :";
        cin >> c;
        cout << "\nEnter the marks of Hindi :";
        cin >> d;
        cout << "\nEnter the marks of Social Science :";
        cin >> e;
    }
    void display_grade()
    {
        avg=(a+b+c+d+e)/5;
        if(avg>100 || avg<0)
        cout<<"Given marks are invalid";
        else
        {
            if(avg>=90)
            cout<<"\nYour grade is A+";
            
            else if (avg>=80)
            {
                cout<<"\nYour grade is A";
            }
            else if (avg>=70)
            {
                cout<<"\nYour grade is B+";
            }
            else if (avg>=60)
            {
                cout<<"\nYour grade is B";
            }
            else if (avg>=50)
            {
                cout<<"\nYour grade is C+";
            }
            else if (avg>=40)
            {
                cout<<"\nYour grade is C";
            }
            else
            {
                cout<<"\nYou are failed";
            }
        }
        
        
    }
};

int
main()
{
    grade obj;
    obj.getdata();
    obj.display_grade();
    return 0;
}
