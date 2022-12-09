#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    // print the pattern
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// for n = 4

// ****
//  ***
//   **
//    *
