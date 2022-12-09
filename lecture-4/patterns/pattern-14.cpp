#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    // print the pattern
    char c;
    for (int i = 1; i <= n; i++)
    {
        c = 'A' + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}

// for n = 4

// D
// C D
// B C D
// A B C D