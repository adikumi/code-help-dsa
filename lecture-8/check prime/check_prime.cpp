#include <iostream>
using namespace std;

int checkprime(int n);

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    cout << n << " is prime or not : " << checkprime(n);
}

int checkprime(int n)
{
    // edge case
    if (n == 2)
    {
        return 1;
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