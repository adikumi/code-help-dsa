#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    // print summ till n;
    int i = 1, sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "sum = " << sum;
    return 0;
}