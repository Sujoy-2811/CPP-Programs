#include<iostream>
using namespace std;
const size =3;
class vecctor
{
    int[size];
    public:
    vector(){}
    vector(int *x);
    friend vector operator(int a,vector b);
    friend vector operator(vector b, int a);
    
}

 