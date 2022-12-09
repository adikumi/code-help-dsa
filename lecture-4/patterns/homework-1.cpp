#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    // print the pattern
    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}