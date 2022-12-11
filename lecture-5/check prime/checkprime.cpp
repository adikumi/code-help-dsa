#include <iostream>
using namespace std;

int main()
{
    // input
    int n;
    cout << "enter n : ";
    cin >> n;

    // check prime
    int check = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            check = 1;
        }
    }

    // print result
    if (check == 0)
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is not a prime number.";
    }

    return 0;
}