// Add and sum of even number b/w 1 to 100
#include <iostream>

class count
{
public:
    count()
    {
        int a = 2;
        do
        {
            std::cout << a << "  ";
            a += 2;
        } while (a < 100);
        int b = 0, sum = 0;
        do
        {
            b += 2;
            sum += b;
        } while (b < 100);
        std::cout << "\nSum of odd number from 1 to 99 :" << sum;
    }
};

int main()
{
    count obj;
    return 0;
}
