#include <iostream>
using namespace std;

int factorial(int n);

int combination(int n, int r);

int main()
{
    int n;
    int r;
    cout << "enter n : ";
    cin >> n;
    cout << "enter r : ";
    cin >> r;
    cout << n << "C" << r << " = " << combination(n, r);
    return 0;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return (n * factorial(n - 1));
}