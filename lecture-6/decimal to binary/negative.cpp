#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // taking input
    int n;
    cout << "enter n (negative number) : ";
    cin >> n;

    // converting it to binary
    int c2, c1 = 0, i = 0;
    while (abs(n) != 0)
    {
        int bit = ~(n & 1);
        c1 = c1 + (bit * pow(10, i));
        n = (n >> 1);
        i++;
    }
    int carry;
    while (c1 != 0)
    {
        if (c1 & 1 == 0)
        {
            c2 = c1 + 1;
            break;
        }
        c1 = c1 - 1;
        c1 = (c1 >> 1);
    }
}

// incomplete as of now