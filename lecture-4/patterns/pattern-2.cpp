#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    // print the pattern
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    // print the pattern 2
    int count2 = n * n;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count2 << " ";
            count2--;
        }
        cout << endl;
    }

    return 0;
}