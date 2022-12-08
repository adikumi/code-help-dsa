#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    // check if n is a prime number
    int ans;
    if (n == 1)
    {
        ans = 1;
    }
    if (n == 2)
    {
        ans = 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            ans = 1;
        }
    }
    if (ans == 0)
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is not a prime number.";
    }
    return 0;
}

// this program used for loop.
// it is easier to write this code if we use functions.