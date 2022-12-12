#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    cout << n << "-th term in fibonacci series  = " << fib(n);
    return 0;
}

int fib(int n)
{
    int n1 = 0, n2 = 1;
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    for (int i = 3; i <= n; i++)
    {
        int nextterm = (n1 + n2);
        n1 = n2;
        n2 = nextterm;
    }
    return n2;
}