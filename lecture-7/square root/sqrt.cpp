#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i * i == n)
        {
            cout << "square root of " << n << " = " << i;
        }
    }
    return 0;
}