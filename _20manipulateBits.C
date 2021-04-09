#include <iostream>
using namespace std;

void setBit(int &n, int position)
{
    n = (n | (1 << (position - 1)));
    cout << "Manipulated/Given number is " << n << endl;
}

void clearBit(int &n, int position)
{
    n = (n & (~(1 << (position - 1))));
    cout << "Manipulated/Given number is " << n << endl;
}

void showBit(int n, int position)
{
    int value = n;
    value = value >> (position - 1);
    value = value & 1;
    cout << "Bit at position  of " << position << " of  manipulated/given (" << n << ") number is " << value << endl;
}

int main()
{
    int n, opt, position, repeat = 1;
    cout << "Enter a random number : ";
    cin >> n;

    while (repeat)
    {
        cout << "\nEnter a number to choose from the given options";
        cout << "\n 1 : Set bit\n 2: Clear bit\n 3 : Show bit\n 4 : Exit\n";
        cin >> opt;

        if (opt > 0 && opt < 4)
        {
            cout << "Enter the position of number :";
            cin >> position;
        }

        switch (opt)
        {
        case 1:
            setBit(n, position);
            break;
        case 2:
            clearBit(n, position);
            break;
        case 3:
            showBit(n, position);
            break;
        case 4:
            cout << "Manipulated/Given number is " << n << endl;
            repeat = 0;
            break;

        default:
            cout << "Given option is not available \n\n";
        }
    }
    return 0;
}