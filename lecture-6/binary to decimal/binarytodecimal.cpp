#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // taking input
    int n;
    cout << "enter n (binary) : ";
    cin >> n;

    int ans = 0, i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans = (ans + (digit * pow(2, i)));
        n = (n - digit) / 10;
        i++;
    }
    cout << "decimal = " << ans << endl;

    return 0;
}