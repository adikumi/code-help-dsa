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
        c = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}

// this is also pattern 8.