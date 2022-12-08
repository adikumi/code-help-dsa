#include <iostream>
using namespace std;

int prime_or_not(int n);

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    // check if n is prime or not
    int ans = prime_or_not(n);
    if (ans == 0)
    {
        cout << n << " is not a prime number.";
    }
    else if (ans == 1)
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << "invalid input."
    }

    return 0;
}

int prime_or_not(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (n <= 0)
    {
        return -1;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}