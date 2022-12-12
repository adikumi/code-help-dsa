#include <iostream>
using namespace std;

int setbits(int a, int b);

int main()
{
    int a, b;
    cout << "enter a and b : ";
    cin >> a >> b;
    cout << "set bits in " << a << " and " << b << " = " << setbits(a, b);
}

int setbits(int a, int b)
{
    int count = 0;
    while (a > 0)
    {
        if (a & 1)
        {
            count++;
        }
        a = (a >> 1);
    }
    while (b > 0)
    {
        if (b & 1)
        {
            count++;
        }
        b = (b >> 1);
    }
    return count;
}