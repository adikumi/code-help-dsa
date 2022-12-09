#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    // print the pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }

        for (int l = n - i + 1; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }
    return 0;
}

// for n = 5

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1