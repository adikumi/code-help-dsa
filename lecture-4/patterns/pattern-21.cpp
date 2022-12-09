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
        int k;
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        for (k; k - 1 > 1; k--)
        {
            cout << k - 2 << " ";
        }
        cout << endl;
    }
    return 0;
}

// for n = 4

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
