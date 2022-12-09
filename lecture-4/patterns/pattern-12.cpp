#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    // print the pattern
    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}

// for n = 4

// A
// B C
// D E F
// G H I J