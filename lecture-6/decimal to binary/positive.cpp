#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // taking input
    int n;
    cout << "enter n : ";
    cin >> n;

    // convert the decimal number to binary
    int ans = 0, i = 0;
    while (n != 0)
    {
        int bit = (n & 1);
        ans = ans + (bit * pow(10, i));
        n = (n >> 1);
        i++;
    }
    cout << "binary = " << ans << endl;
    return 0;
}