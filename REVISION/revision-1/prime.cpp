#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n :";
    cin >> n;
    int i = 2;
    int prime = 0;
    if (n == 1 || n == 0)
    {
        cout << "NOT PRIME.";
    }

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "NOT PRIME.";
            prime++;
            break;
        }
        i++;
    }
    if (prime == 0)
    {
        cout << "PRIME.";
    }
    return 0;
}