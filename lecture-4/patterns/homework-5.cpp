#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    // print the pattern
    char c;
    for (int i = 0; i < n; i++)
    {
        c = 'A' + i;
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
// C D E
// D E F G

// this is pattern-13 as well